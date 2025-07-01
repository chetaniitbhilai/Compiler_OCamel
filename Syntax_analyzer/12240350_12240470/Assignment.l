%{
#include<stdio.h>
%}

alphabets [A-Za-z]
numbers [0-9]


%%
[ \t] ;
\n	{yylineno++;}
do	{LeftCurly(); return '{';}
done	{RightCurly(); return '}';}
int	{yylval.ival = INT; return INT;}
float	{yylval.ival = FLOAT; return FLOAT;}
char	{return CHAR;}
string  {return STRING;}
let {return LET;}
int\[[0-9]*\]|string\[[0-9]*\]|bool\[[0-9]*\]|double\[[0-9]*\]|char\[[0-9]*\]  { return ARRAY;}
else	{return ELSE;}

if	return IF;

while	return WHILE;
for	return FOR;
return 	return RETURN;
System.Console.WriteLine	return WRITE;
{alphabets}({alphabets}|{numbers})* {yylval.str=strdup(yytext); return IDENTIFIER;}
{numbers}+	{yylval.str=strdup(yytext);return NUM;}
{numbers}+\.{numbers}+f 	{yylval.str=strdup(yytext); return FLOAT_LIT;}
"<="		return LE;
">="		return GE;
"=="		return EQ;
"!="		return NEQ;
"&&"		return AND;
"||"		return OR;
\(\*[^*]*\*[^)]*\) ;
\/\/.* ;
\/\*(.*\n)*.*\*\/ ;

'[^']*'	return CHAR_LIT;
\".*\"	return STRING_LIT;
.	return yytext[0];
%%
int yywrap(void)
{
return 1;

}
