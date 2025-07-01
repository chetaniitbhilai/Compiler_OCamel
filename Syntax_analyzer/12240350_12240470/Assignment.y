%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "symbol.c"
	int size = 256;
int x=1;
int lineno=0,label[20],ltop1;
int list[100];
int i=0;
int last[100];
int arr[10];
int store,c,flag;
int top=0,label[20],linenum=0,ltop=0;
char st1[100][10];
char x1[2]="0";
char tp[2]="I";
char null[2]=" ";
void yyerror(char *s);
int printline();
void LeftCurly()
{
	list[i]=x;
	x++;
	i++;
	return;
}
void RightCurly()
{
	i--;
	last[list[i]]=1;
	list[i]=0;
	return;
}

void ifloop2()
{
	linenum++;
	printf("GOTO State%d\n",linenum);
	printf("State%d: \n",label[ltop--]);
	label[++ltop]=linenum;
}
void ifloop3()
{
	printf("State%d:\n",label[ltop--]);
}
void whileloop1()
{
	linenum++;
	label[++ltop]=linenum;
	printf("State%d:\n",linenum);
}
void whileloop2()
{
	linenum++;
	strcpy(tp,"I");
	strcat(tp,x1);
	printf("%s = not %s\n",tp,st1[top--]);
 	printf("if %s GOTO State%d\n",tp,linenum);
	x1[0]++;
	label[++ltop]=linenum;
}
void whileloop3()
{
	int y=label[ltop--];
	printf("GOTO State%d\n",label[ltop--]);
	printf("State%d:\n",y);
}
void dowhileloop1()
{
	linenum++;
	label[++ltop]=linenum;
	printf("State%d:\n",linenum);
}
void dowhileloop2()
{
 	printf("if %s GOTO State%d\n",st1[top--],label[ltop--]);
}
void forloop1()
{
	linenum++;
	label[++ltop]=linenum;
	printf("State%d:\n",linenum);
}
void ifloop1()
{
	linenum++;
	strcpy(tp,"I");
	strcat(tp,x1);
	printf("%s = not %s\n",tp,st1[top]);
 	printf("if %s GOTO State%d\n",tp,linenum);
	x1[0]++;
	label[++ltop]=linenum;	
	
}
void forloop2()
{
	linenum++;
	strcpy(tp,"I");
	strcat(tp,x1);
	printf("%s = not %s\n",tp,st1[top--]);
 	printf("if %s GOTO State%d\n",tp,linenum);
	x1[0]++;
	label[++ltop]=linenum;
	linenum++;
	printf("GOTO State%d\n",linenum);
	label[++ltop]=linenum;
	linenum++;
	printf("State%d:\n",linenum);	
	label[++ltop]=linenum;
}
void forloop3()
{
	printf("GOTO State%d\n",label[ltop-3]);
	printf("State%d:\n",label[ltop-1]);
}
void forloop4()
{
	printf("GOTO State%d\n",label[ltop]);
	printf("State%d:\n",label[ltop-2]);
	ltop-=4;
}
void push(char *a)
{
	strcpy(st1[++top],a);
}
void array1()
{
	strcpy(tp,"I");
	strcat(tp,x1);
	printf("%s = %s * 4\n",tp,st1[top]);
	strcpy(st1[top],tp);
	x1[0]++;
	strcpy(tp,"I");
	strcat(tp,x1);
	printf("%s = %s [ %s ] \n",tp,st1[top-1],st1[top]);
	top--;
	strcpy(st1[top],tp);
	x1[0]++;	
}
void codegen()
{
	strcpy(tp,"I");
	strcat(tp,x1);
	printf("%s = %s %s %s\n",tp,st1[top-2],st1[top-1],st1[top]);
	top-=2;
	strcpy(st1[top],tp);
	x1[0]++;
}
void codegen_umin()
{
	strcpy(tp,"I");
	strcat(tp,x1);
	printf("%s = -%s\n",tp,st1[top]);
	top--;
	strcpy(st1[top],tp);
	x1[0]++;
}
void codegen_assign()
{
	printf("%s = %s\n",st1[top-2],st1[top]);
	top-=2;
}


%}
%token<ival> INT FLOAT CHAR STRING LET
%token<str> IDENTIFIER NUM FLOAT_LIT STRING_LIT LE GE EQ NEQ AND OR CHAR_LIT
%token WHILE IF RETURN WRITE FUNCTION DO ARRAY ELSE  FOR
%left LE GE EQ NEQ AND OR '<' '>'
%right '=' 
%left '+' '-'
%left '*' '/' 
%type<str> assign assignment  
%type<str> CONSTANT_TYPE '=' '+' '-' '*' '/' condition var J 
%type<ival> Type
%union {
		int ival;
		char *str;
	}
%%

S : Func S 
	| Dec S
	| 
	;
Func : Type IDENTIFIER '('')'  NestedSTMT {
	if(strcmp($2,"func")!=0)
	{
		printf("GOTO J%d\n",lineno);
	}
	if ($1!=returntype_func(store))
	{
		printf("\nError Line %d\n",printline());
	}

	if (!(strcmp($2,"System.Console.WriteLine") && strcmp($2,"Console.ReadLine"))) 
		printf("Error %s : Line %d\n",$2,printline()); 
	else 
	{ 
		insert($2,FUNCTION,size); 
		insert($2,$1,size); 
		size+=4;
	}
	}
	;
Type : INT
	| FLOAT
	| CHAR
	| STRING
	| LET
	;
NestedSTMT : '{' STMTS '}'
	;
STMTS : STMTS STMT 
	| 
	;
STMT : Dec
	| if 
	| IDENTIFIER '(' ')' ';' 
	| dowhile  
	| while
	| for 
	| RETURN CONSTANT_TYPE ';' {
					if(!(strspn($2,"0123456789")==strlen($2))) 
						storereturn(store,FLOAT); 
					else if (!(strspn($2,"0123456789")==strlen($2)))
						 storereturn(store,CHAR);
						 
					else    
					        storereturn(store,INT);
					           store++;
					} 
	| ';'
	| WRITE '(' STRING_LIT ')' ';' 
	| NestedSTMT 
	;
dowhile : DO {dowhileloop1();} NestedSTMT WHILE '(' condition ')' {dowhileloop2();} ';'
	;

for	: FOR '(' condition {forloop1();} ';' condition {forloop2();}';' condition {forloop3();} ')' NestedSTMT {forloop4();}
	;

if : 	 IF '(' condition ')' {ifloop1();} NestedSTMT {ifloop2();} else
	;

else : ELSE NestedSTMT {ifloop3();}
	| 
	;
while : WHILE {whileloop1();}'(' condition ')' {whileloop2();} NestedSTMT {whileloop3();}
	;
assign : IDENTIFIER '=' CONSTANT_TYPE 
	| IDENTIFIER '+' assign 
	| IDENTIFIER ',' assign
	| CONSTANT_TYPE ',' assign
	| IDENTIFIER
	| CONSTANT_TYPE
	;
condition : condition '+'{strcpy(st1[++top],"+");} var{codegen();}
   | condition '-'{strcpy(st1[++top],"-");} var{codegen();}
   | var
   | IDENTIFIER {push($1);} GE {strcpy(st1[++top],">=");} condition {codegen();}
   | IDENTIFIER {push($1);} EQ {strcpy(st1[++top],"==");} condition {codegen();}
   | IDENTIFIER {push($1);} LE {strcpy(st1[++top],"<=");} condition {codegen();}
   | IDENTIFIER {push($1);} NEQ {strcpy(st1[++top],"!=");} condition {codegen();}
   | IDENTIFIER {push($1);} AND {strcpy(st1[++top],"&&");} condition {codegen();}
   | IDENTIFIER {push($1);} OR {strcpy(st1[++top],"||");} condition {codegen();}
   | IDENTIFIER {push($1);} '<' {strcpy(st1[++top],"<");} condition {codegen();}
   | IDENTIFIER {push($1);} '>' {strcpy(st1[++top],">");} condition {codegen();}
   | IDENTIFIER {push($1);} '=' {strcpy(st1[++top],"=");} condition {codegen_assign();}
   | array {array1();}
   ;	
assignment : IDENTIFIER {push($1);} '=' {strcpy(st1[++top],"=");} condition {codegen_assign();}  
	{
		int scopevalue=returnscope($1,list[i-1]); 
		int type=returntype($1,scopevalue); 
		if((!(strspn($5,"0123456789")==strlen($5))) && type==257 && flag==0) 
			printf("\nError : Type Mismatch : Line %d\n",printline()); 
		if(!lookup($1)) 
		{ 
			int currscope=list[i-1]; 
			int scope=returnscope($1,currscope); 
			if((scope<=currscope && last[scope]==0) && !(scope==0)) 
			{
				check_scope_update($1,$5,currscope);
			}
		} 
		}

	| IDENTIFIER ',' assignment    {
					if(lookup($1)) 
						printf("\nUndeclared Variable %s : Line %d\n",$1,printline());
				}
	| CONSTANT_TYPE ',' assignment   
	| IDENTIFIER  {
		if(lookup($1)) 
			printf("\nUndeclared Variable %s : Line %d\n",$1,printline());
		}
	| CONSTANT_TYPE
	;
CONSTANT_TYPE : NUM
	| FLOAT_LIT
	| CHAR_LIT
	| STRING_LIT
	;
Dec : Type IDENTIFIER {push($2);} '=' {strcpy(st1[++top],"=");} condition {codegen_assign();} ';'  
	{
		if( (!(strspn($6,"0123456789")==strlen($6))) && $1==257 && (flag==0)) 
		{
			printf("\nError : Type Mismatch : Line %d\n",printline());
			flag=1;
		} 
		if(!lookup($2)) 
		{
			int currscope=list[i-1]; 
			int previous_scope=returnscope($2,currscope); 
			if(currscope==previous_scope) 
				printf("\nError %s : Line %d\n",$2,printline()); 
			else 
			{
				insert_dup($2,$1,size,currscope);
				check_scope_update($2,$6,list[i-1]);
				int sg=returnscope($2,list[i-1]); 
				size+=4;
			}
		} 
		else 
		{ 
			int scope=list[i-1];  
			insert($2,$1,size); 
			insertscope($2,scope); 
			check_scope_update($2,$6,list[i-1]);
			size+=4;
		}
	}

	| assignment ';'  {
				if(!lookup($1)) 
				{ 
					int currscope=list[i-1]; 
					int scope=returnscope($1,currscope); 
					if(!(scope<=currscope && last[scope]==0) || scope==0) 
						printf("\nError : Variable %s out of scope : Line %d\n",$1,printline());
				} 
				else 
					printf("\nError %s : Line %d\n",$1,printline()); 
				}

	| Type IDENTIFIER '[' assign ']' ';' {
						insert($2,ARRAY,size); 
						insert($2,$1,size); 
						size=size+4; 
					}
	| IDENTIFIER '[' assignment ']' ';'
	| error
	;

array : IDENTIFIER {push($1);}'[' condition ']'
	;

var : var '*'{strcpy(st1[++top],"*");} J{codegen();}
   | var '/'{strcpy(st1[++top],"/");} J{codegen();}
   | J
   ;
J : '(' condition ')' {$$=$2;}
   | '-'{strcpy(st1[++top],"-");} J{codegen_umin();} 
   | IDENTIFIER {push($1);flag=1;}
   | CONSTANT_TYPE {push($1);}
   ;

%%
#include "lex.yy.c"
#include<ctype.h>
int main(int argc, char *argv[])
{
	yyin =fopen(argv[1],"r");
	yyparse();
	if(!yyparse())
	{
		printf("PARSING COMPLETED\n");
		print();
	}
	else
	{
		printf("Error\n");
	}
	fclose(yyin);
	return 0;
}

void yyerror(char *s)
{
	printf("\nLine %d : %s %s\n",yylineno,s,yytext);
}
int printline()
{
	return yylineno;
}
