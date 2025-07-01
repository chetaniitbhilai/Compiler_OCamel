%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
//#include"lex.c"
extern FILE* yyin;//file pointer for declaration for our file
extern char* yytext;
extern int yylineno;
extern int flag = 0;


void add(char);
void insert_type();
int search(char *);  // to search for variable declaration in symbol table

struct dataType {  // symbol table  
char * id_name;
char * data_type;
char * type;      // function , variable, constant ,keyword
int line_no;
} symbol_table[40];

int count=0;
int q;
char type[10];

%}

%start pgm
%token tok_Section
%token tok_Division
%token tok_Period 
%token tok_Is
%token tok_To
%token tok_Identification
%token tok_ProgramID
%token tok_Author
%token tok_Installation
%token tok_DateWritten
%token tok_DateCompiled
%token tok_Remarks
%token tok_Environment
%token tok_Configuration
%token tok_SourceComputer
%token tok_ObjectComputer
%token tok_InputOutput
%token tok_FileControl
%token tok_Select
%token tok_Assign
%token tok_Organization
%token tok_Sequential
%token tok_Indexed
%token tok_Relative
%token tok_Access
%token tok_Mode
%token tok_Random
%token tok_Dynamic
%token tok_File
%token tok_Status
%token tok_IOControl
%token tok_Data
%token tok_WorkingStorage
%token tok_PictureClause
%token tok_Linkage
%token tok_Procedure
%token tok_Initialize
%token tok_Input
%token tok_Read
%token tok_Into
%token tok_Processing
%token tok_Perform
%token tok_Function

%token tok_Move
%token tok_Output
%token tok_Write
%token tok_From
%token tok_Display
%token tok_Termination
%token tok_OpenInput
%token tok_Close
%token tok_StopRun
%token tok_ErrorHandling

%token tok_PlusOperator
%token tok_SubtractOperator
%token tok_MultiplyOperator
%token tok_DivisionOperator
%token tok_EqualEqual
%token tok_EqualOperator
%token tok_LessOperator
%token tok_GreaterOperator
%token tok_LessThanOrEqualOperator
%token tok_GreaterThanOrEqualOperator
%token tok_NotEqualOperator
%token tok_LogicalAndOperator
%token tok_LogicalOrOperator
%token tok_LogicalNotOperator
%token tok_OpenBrace
%token tok_CloseBrace

%token tok_FloatDeclaration
%token tok_IntegerDeclaration
%token tok_AlphanumericCharacter
%token tok_AlphanumericString
%token tok_AlphabetCharacter
%token tok_AlphabeticString
%token tok_Currency
%token tok_AlphanumericCurrency
%token tok_Value
%token tok_Occurs
%token tok_Times

%token tok_ArrayDeclaration
%token tok_Integer
%token tok_Float
%token tok_Character
%token tok_BString
%token tok_SString
%token tok_Varying
%token tok_By
%token tok_Until
%token tok_EndPerform
%token tok_Evaluate
%token tok_When
%token tok_EndEvaluate
%token tok_If
%token tok_Then
%token tok_Else
%token tok_Elseif
%token tok_EndIf
%token tok_Identifier
%token tok_date
%token tok_SingleLineComment
%token tok_CommentKeyword
%token tok_WhiteSpace
%token tok_Comma
%token tok_UnrecognizedCharacter
%token tok_RD
%token tok_WD
%token tok_FD

%token tok_Add
%token tok_Subtract
%token tok_Multiply
%token tok_Divide
%token tok_Giving
%token tok_With
%token tok_Rounded
%token tok_Remainder
%token tok_Compute

%token tok_Equal_To
%token tok_Not_Equal_To
%token tok_Less_Than
%token tok_Greater_Than
%token tok_Less_Than_Or_Equal_To
%token tok_Greater_Than_Or_Equal_To
%token tok_Thru
%token tok_Other
%token tok_String
%token tok_Delimited_By
%token tok_Using
%token tok_Exit
%token tok_Program
%token tok_Returning
%token tok_Accept
%left '+' '-'
%left '*' '/'


%%


pgm: program  {printf(" THE PROGRAM IS VALID \n");}
program
	: comments identification_division comments data_division comments procedure_division comments
	| comments
	
	  ;
	 
comments : comment comments
	|/*null*/
	;
	  
comment : tok_SingleLineComment
	| /*null*/
	  
 /*////////////////// IDENTIFICATION DIVISION //////////////////// */
	  
identification_division
	: tok_Identification  tok_Division  tok_Period comments  program_info_list
	| error {printf("syntax error in identification division declaration line: %d\n", yylineno); exit(1);}
	;
	
program_info_list
	: program_info_clause program_info_list
	| /* epsilon */
	| error {printf("syntax error in identification line: %d\n", yylineno); exit(1);}
	;
	
program_info_clause
	: tok_Author  tok_Period comments  word_list tok_Period comments 
    	| tok_Installation  tok_Period comments  word_list tok_Period comments 
    	| tok_DateWritten  tok_Period comments  tok_date tok_Period comments 
    	| tok_DateCompiled  tok_Period comments  tok_date tok_Period comments 
	| tok_ProgramID  tok_Period comments  word_list tok_Period comments 
	| error {printf("syntax error in identification clause line: %d\n", yylineno); exit(1);}
	;
	
	 
word_list
	: tok_Identifier word_list_pl
	| error {printf("syntax error in idnetifier line: %d\n", yylineno); exit(1);}
	;
	
word_list_pl
	: word_list
	| /* epsilon */
	;
	
	
	
	
	
 /* /////////////////// DATA DIVISION //////////////////// */
 
 
 

	
data_division
	: tok_Data tok_Division tok_Period working_storage_section
	;


/*WORKING STORAGE SECTION */

working_storage_section
	: tok_WorkingStorage   tok_Section  tok_Period
	| tok_WorkingStorage  tok_Section  tok_Period record_block
	
	;

record_block
	: record_paras
	| data_entries
	| data_entries record_paras
	;
	
data_entries : record_entries 
	
record_paras
	: record_para
	| record_para record_paras 
	;
	
record_para
	: tok_Integer tok_Identifier tok_Period record_entries
	;
	

	
record_entries
	: record_entry record_entries
	| 
	;


	
/* CONSTANTS */
inc:
	 tok_Integer    { add('C'); }
	| tok_SString   { add('C'); }
	| tok_Float     { add('C'); }
	| tok_BString   { add('C'); }
	| error {printf("invalid value for constant line: %d\n", yylineno); exit(1);}
	;
/* DECLARATION */
record_entry

        : tok_Integer kriti tok_PictureClause   data_type  tok_Value  inc tok_Period
	| tok_Integer  kriti tok_PictureClause  data_type tok_Period
	| tok_Integer kriti array tok_PictureClause  data_type tok_Period
	| error {printf("syntax error in record entry line: %d\n", yylineno); exit(1);}
	;
/*ARRAY*/
array
	:  tok_Occurs  tok_Integer tok_Times 
	;
	
	
kriti: tok_Identifier { add('V'); }
  
/* DATA TYPES */
data_type : tok_FloatDeclaration { insert_type(); }
	| tok_IntegerDeclaration { insert_type(); }
	| tok_AlphanumericCharacter { insert_type(); }
	| tok_AlphanumericString { insert_type(); }
	| tok_AlphabetCharacter { insert_type(); }
	| tok_AlphabeticString { insert_type(); }
	| tok_Currency { insert_type(); }
	| tok_AlphanumericCurrency { insert_type(); }
	| error {printf("Invalid data type in line: %d\n", yylineno); exit(1);}
	;
 
 
 /* /////////////////// PROCEDURE DIVISION //////////////////// */
 
procedure_division
 	: tok_Procedure  tok_Division  tok_Period comments  blocks tok_StopRun 
 	| tok_Procedure  tok_Division  tok_Period comments 
 	;
 	
blocks 
	: block blocks
	|
	; 	

block
	: statements
	| if_else
	| perform
	| evaluate
	| function
	;
/* SIMPLE STATEMENTS WHICH INCLUDE PERIOD */ 
statements
	: statement tok_Period comments  statements
	|
	|{printf("invalid statement line: %d\n", yylineno); exit(1);}
	;
	
 
statement
	: tok_Add  operand tok_To  identifier_list with
	| tok_Add  operand tok_To  identifier_list with tok_Giving  tok_Identifier rounded
	| tok_Add  identifier_list with tok_Giving  tok_Identifier rounded
	
	| tok_Subtract  operand tok_From  tok_Identifier with rounded
	| tok_Subtract  operand tok_From  tok_Identifier with tok_Giving tok_Identifier rounded
	
	| tok_Multiply  operand tok_By  operand with 
	| tok_Multiply  operand tok_By  operand with tok_Giving  tok_Identifier rounded
	| tok_Multiply  operand tok_By  operand
	
	| tok_Divide  operand tok_By  operand with 
	| tok_Divide  operand tok_By  operand with tok_Giving  tok_Identifier rounded
	| tok_Divide  operand tok_Into  operand tok_Giving   tok_Identifier tok_Remainder  tok_Identifier 
	
	| tok_Compute  arithmetic_stmt
	
	| tok_Move  iden_or_int tok_To  tok_Identifier
	| tok_Move  tok_Identifier tok_Thru  tok_Identifier tok_To  tok_Identifier
	| tok_Accept  tok_Identifier
	| display_statement
	| error {printf("invalid statement line: %d\n", yylineno); exit(1);}
	;
	
/* IF ELSE STATEMENTS */
	
if_else 
	: tok_If  condition comments no_period_statements comments tok_Else  comments no_period_statements comments tok_EndIf  end_block
	| tok_If  condition comments no_period_statements comments tok_EndIf  end_block
	 
	| tok_If  condition comments no_period_statements comments else_ifs tok_Else  no_period_statements tok_EndIf  end_block
	
	| tok_If  condition  no_period_statements tok_EndIf  end_block
	| tok_If  condition  no_period_statements tok_Else   no_period_statements tok_EndIf end_block
	| tok_If  condition  no_period_statements else_ifs tok_Else   no_period_statements tok_EndIf  end_block
	
	| tok_If  condition no_period_blocks tok_EndIf  end_block
	| error {printf("syntax error in if statement line: %d\n", yylineno); exit(1);}
	;
	
else_ifs
	: else_if else_ifs
	|
	;
	
else_if
	: tok_Elseif  condition  no_period_statements
	;

/* CONDITIONS FOR IF OR TERMINATING LOOP*/
condition
	: string operator string
	| arithmetic_expr operator string
	| arithmetic_expr operator arithmetic_expr
	| string operator arithmetic_expr 
	| error {printf("syntax error in condition line: %d\n", yylineno); exit(1);}
	 
	;
	
	
end_block : tok_Period comments 
	| comments
	| /*null*/
	
/*SWITCH CASE */
	
evaluate
	: tok_Evaluate  tok_Identifier switch_cases tok_EndEvaluate  tok_Period comments 
	| error {printf("syntax error in evaluate statement line: %d\n", yylineno); exit(1);}
	
switch_cases
	: when_clauses ;
when_clauses
	: when_clause when_clauses 
	| /*null*/
	;
	
when_clause
	: comments tok_When  when_condition comments no_period_statements comments;

when_condition
	: tok_Integer tok_Thru  tok_Integer 
	| value_list
	| tok_Identifier operator constant
	| tok_Other  
	
value_list 
	: constant
	| value_list tok_Comma constant 
	|/*null*/
	; 
constant 
	: tok_Integer
	| tok_Float
	| tok_Character
	| tok_BString
	| tok_SString
	;

/* STATEMENTS FOR USE INSIDE IF ELSE AND EVALUATE WITHOUT A PERIOD */

no_period_statements
	: statement comments
	| statement no_period_statements ;

/* LOOP USING PERFORM*/
perform
	: tok_Perform  iden_or_int tok_Times  no_period_blocks tok_EndPerform  end_block comments
	| tok_Perform  tok_Until  condition comments no_period_blocks tok_EndPerform  end_block comments
	| tok_Perform  tok_Varying  tok_Identifier tok_From  iden_or_int tok_By  iden_or_int tok_Until  condition  no_period_blocks tok_EndPerform  end_block comments
	
	| tok_Perform  tok_Identifier params 
	
	| error {printf("syntax error in perform statement line: %d\n", yylineno); exit(1);}
	;
	

string
	: tok_BString
	| tok_SString
	;
	
operator
	: tok_Equal_To 
	| tok_Not_Equal_To 
	| tok_Less_Than	 
	| tok_Greater_Than 
	| tok_Less_Than_Or_Equal_To 
	| tok_Greater_Than_Or_Equal_To 
	| tok_EqualEqual 
	| tok_EqualOperator
	| tok_LessOperator
	| tok_GreaterOperator
	| tok_LessThanOrEqualOperator
	| tok_GreaterThanOrEqualOperator
	| tok_NotEqualOperator
	| tok_LogicalAndOperator
	| tok_LogicalOrOperator
	| tok_LogicalNotOperator
	;
	

no_period_blocks : no_period_block comments no_period_blocks
	|/*null*/
	;
	
no_period_block
	: no_period_statements comments
	| if_else comments
	| perform comments
	| evaluate comments
	| function comments
	
	;
/* function*/	
params : tok_Using  params_list 
	| /*null*/
	;
	
params_list : tok_Identifier
	| tok_Identifier params_list
	;
	
function : tok_Function  tok_Identifier params tok_Period comments  statements exit
	;
	
exit : tok_Exit  tok_Program  tok_Returning  tok_Identifier 
	| /*null*/
	;
	
iden_or_int
	: tok_Identifier
	| tok_Integer
	;

/*DISPLAY STATEMENTS*/
display_statement
	: tok_Display  tok_SString 
	| tok_Display tok_BString
	| tok_Display  display_list 
	| error {printf("syntax error in display statement line: %d\n", yylineno); exit(1);}
	;
	
display_list
	: tok_SString tok_Identifier tok_Comma display_list
	| tok_SString tok_Identifier 
	| tok_BString tok_Identifier tok_Comma display_list
	| tok_BString tok_Identifier 
	;

/*ARITHMETIC STATEMENTS*/
	
arithmetic_stmt 
	: tok_Identifier tok_EqualOperator arithmetic_expr
	| error {printf("syntax error in arithmetic statement line: %d\n", yylineno); exit(1);}
	;
	
arithmetic_expr
	: arithmetic_expr tok_PlusOperator term
	| arithmetic_expr tok_SubtractOperator term
	| term
	| error {printf("syntax error in arithmetic expression line: %d\n", yylineno); exit(1);}
	;
	
term 
	: term tok_MultiplyOperator factor
	| term tok_DivisionOperator factor
	| factor
	;
	
factor
	: operand
	| tok_OpenBrace arithmetic_expr tok_CloseBrace
	
	;
	
with 
	: tok_With  word_list
	| tok_With  tok_Remainder  tok_Identifier
	|
	| error {printf("syntax error in with line: %d\n", yylineno); exit(1);}
	;	
	
identifier_list
	: operand tok_Comma identifier_list
	| operand
	;
	
operand
	: tok_Identifier
	|tok_Integer
	|error {printf("invalid operand line: %d\n", yylineno); exit(1);}
	;
	
rounded
	: tok_Rounded 
	|
	| error {printf("syntax error in rounded line: %d\n", yylineno); exit(1);}
	;
	
	

	
	
%%

int main(int argc, char *argv[]) {
    
    if (argc != 2) {
        printf("Usage: %s input_file\n", argv[0]);
        return 1;
    }
    
    yyin = fopen(argv[1], "r");
    yyparse();
     printf("\n\n");
	printf("\t\t\t\t\t\t\t\t PHASE 1: LEXICAL ANALYSIS \n\n");
	printf("\nSYMBOL \t  DATATYPE \t  TYPE \t  LINE NUMBER \n");
	printf("_______________________________________\n\n");
	int i=0;
	for(i=0; i<count; i++) {
		printf("%s\t\t%s\t\t%s\t\t%d\t\t\n", symbol_table[i].id_name, symbol_table[i].data_type, symbol_table[i].type, symbol_table[i].line_no);
	}
	for(i=0;i<count;i++) {
		free(symbol_table[i].id_name);
		free(symbol_table[i].type);
	}
	printf("\n\n");

    fclose(yyin);
    return 0;
}

int search(char *type) {
	int i;
	for(i=count-1; i>=0; i--) {
		if(strcmp(symbol_table[i].id_name, type)==0) {
			return -1;
			break;
		}
	}
	return 0;
}

void add(char c) {
	printf("////////////////////////////BHOOT\n");
  q=search(yytext);
  if(!q) {
    		if(c == 'H') {
			symbol_table[count].id_name=strdup(yytext);
			symbol_table[count].data_type=strdup(type);
			symbol_table[count].line_no=yylineno;
			symbol_table[count].type=strdup("Header");
			count++;
		}
		else if(c == 'K') {
			symbol_table[count].id_name=strdup(yytext);
			symbol_table[count].data_type=strdup("N/A");
			symbol_table[count].line_no=yylineno;
			symbol_table[count].type=strdup("Keyword\t");
			count++;
		}
		else if(c == 'V') {
			symbol_table[count].id_name=strdup(yytext);
			symbol_table[count].data_type=strdup(type);
			symbol_table[count].line_no=yylineno;
			symbol_table[count].type=strdup("Variable");
			count++;
		}
		else if(c == 'C') {
			symbol_table[count].id_name=strdup(yytext);
			symbol_table[count].data_type=strdup("CONST");
			symbol_table[count].line_no=yylineno;
			symbol_table[count].type=strdup("Constant");
			count++;
		}
		else if(c == 'F') {
			symbol_table[count].id_name=strdup(yytext);
			symbol_table[count].data_type=strdup(type);
			symbol_table[count].line_no=yylineno;
			symbol_table[count].type=strdup("Function");
			count++;
		}
	}
}

void insert_type() {
	printf("/////////////////////////////////DUSRA BHOOT\n");
    strcpy(type, yytext);
}

void yyerror(char* s)
{
    int m = yylineno;
    printf("\n%s in line %d\n\n",s,m);
    flag=1;
}
