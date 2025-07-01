%{
#include <stdio.h>
%}

%%


"int"       {printf("T_DATA_TYPE: %s\n",yytext);} //token of data type int
"float"     {printf("T_DATA_TYPE: %s\n",yytext);} //token of data type float
"char"      {printf("T_DATA_TYPE: %s\n",yytext);} //token of data type char 
"bool"      {printf("T_DATA_TYPE: %s\n",yytext);} //token of data type bool
"()"        {printf("T_DATA_TYPE: %s\n",yytext);} //token of data type unit 
"module"    {printf("T_DATA_TYPE: %s\n",yytext);} //token of data type module 
"type"      {printf("T_DATA_TYPE: %s\n",yytext);} //token of data type -> type 


"mod"	    {printf("T_OPERATOR: modulus\n");} //modulus operator to find remainder
"abs"	    {printf("T_OPERATOR: absolute\n");} // absolute operator 
"sqrt"	    {printf("T_OPERATOR: square root\n");} // square root operator
"exp"	    {printf("T_OPERATOR: exponential\n");} // power operator
"log"	    {printf("T_OPERATOR: logrithmic\n");} // logrithmic operator
"log10"	    {printf("T_OPERATOR: log base 10 \n");} // logrithm with base 10 operator
"land"	    {printf("T_OPERATOR: bitwise and\n");} //bitwise and operator
"lor"	    {printf("T_OPERATOR: bitwise or\n");} // bitwise or operator 
"lxor"	    {printf("T_OPERATOR: bitwise xor\n");} // bitwise xor operator
"lnot"	    {printf("T_OPERATOR: bitwise not\n");} // bitwise not operator
"lsl"	    {printf("T_OPERATOR: bitwise left shift\n");} // left shift operator
"lsr"	    {printf("T_OPERATOR: bitwise right shift\n");} //right shift operator


"if"        {printf("T_IF\n");} //token for if 
"else"      {printf("T_ELSE\n");} //token for else 
"then"      {printf("T_THEN\n");} // token for then , start of execution if the condition of if is true
"while"     {printf("T_WHILE\n");} // token for while 
"for"       {printf("T_FOR\n");} // token for -> for 
"do"        {printf("T_DO\n");} // token for do , starts the loop if loop condition is true
"done"      {printf("T_DONE\n");}  // token for done , it helps in termination of loops 


"return"    {printf("T_RETURN_STATEMENT\n");} //for returning from the function 
"let"	    {printf("T_CORE_LANGUAGE_KEYWORD_LET\n");} // decleration of a variable 
"in"        {printf("T_CORE_LANGUAGE_KEYWORD_IN\n");} // pushing a value from one statement to next 
"match"	    {printf("T_KEYWORD_TO_MATCH_SYNTAX\n");} // macthing the pattern 


"ref"       {printf("T_REFERENCE_OPERATOR\n");} //this is a keyword that is used to declare mutable data-types in functional programming
":="	    {printf("T_ASSIGNMENT_OPERATOR\n");} // assigning the value or we can by this we can change the value of the referenced variable 
"begin"     {printf("T_BEGINNING_OF_REFERENCING\n");} //if we want to code some lines of code using referncing in ocamel we start that part of code by begin  
"end" 	    {printf("T_ENDING_OF_REFERENCING\n");} // if we are coding some lines of code by using referencing in ocamel then we finish that part of code by end
"incr"	    {printf("T_INCREMENT_OPERATOR\n");} // increasing the value of the variable/integer by 1
"decr"	    {printf("T_DECREMENT_OPERATOR\n");} // decreasing the value of the variable/integer by 1


"try" 	    {printf("T_TRY_FOR_EXECPTION_HANDLING\n");} // in exception handling in ocamel we start by the statement of try in which we do the required operations 
"with"      {printf("T_WITH_FOR_EXECPTION_HANDLING\n");} // in with there is a set of rules written about the exceptions that might occur 


"fun"	    {printf("T_DECLERATION_OF_ANONYMOUS_FUNCTION\n");} //decleration of user defined function 
"function"  {printf("T_DECLERATION_OF_PATTERN_MATCHING_FUNCTION\n");} //decleration of function that are used for pattern matching 
"->"	    {printf("T_FUNCTION_ASSIGNING\n");} // defnining the rules from variable to variable 


"print_char"		{printf("T_PRINT_CHAR\n");} // printing a character value
"print_string"		{printf("T_PIRNT_STRING\n");} //printing a string value
"print_endline"		{printf("T_PRINT_ENDLINE\n");} // simply equal to \n
"print_int"		{printf("T_PRINT_INTEGER\n");} //printing an integer value


"readline()" 		{printf("T_READ\n");} //reading or taking input from user


"true"|"false"              		     {printf("T_BOOLEAN_LITERAL: %s\n",yytext);} //literal of boolean type
[a-zA-Z]([a-zA-Z]|[0-9])*         	     {printf("T_IDENTIFIER_LITERAL: %s\n", yytext);} //regex to match identifier
"'"[a-zA-Z0-9]"'"		      	     {printf("T_CHARACTER_LITERAL: %s\n", yytext);} // regex to match character
"\""([a-zA-Z0-9])*"\""       		     {printf("T_STRING_LITERAL: %s\n", yytext);} // regex to match string
"-"[0-9]*|[0-9]* 			     {printf("T_NUMBER_LITERAL: %s\n",yytext);} // regex to match integer 
[0-9]*"."[0-9]*|"-"[0-9]*"."[0-9]*	     {printf("T_FLOAT_LITERAL: %s\n",yytext);} // regex to match float 

"(*".*"*)"				{printf("T_COMMENT\n");}  // regex to match single line comment
"(*"[a-zA-Z0-9   \n  \t]*"*)"		{printf("T_MULTI_LINE_COMMENT");} // regex to match multi-line-comment 

"**"        {printf("T_OPERATOR: **(exponential/power)\n");} // exponential operator
"+."	    {printf("T_OPERATOR: +.(addition of float types variables/constants )\n");} // addition of 2 float values
"-."	    {printf("T_OPERATOR: -.(subtraction of float type variables/constants)\n");} // subtraction of 2 float values
"*."        {printf("T_OPERATOR: *.(multiplication of float variables/constants)\n");} // multiplication of 2 float values
"/."	    {printf("T_OPERATOR: /.(division of float variables/constants)\n");} // division of 2 float values 
"^"	    {printf("T_OPERATOR: ^(string concatenation)");} // concatenating 2 strings
"+"         {printf("T_OPERATOR: +(addition)\n");} // addition operator 
"-"         {printf("T_OPERATOR: -(subtraction)\n");} // subtraction operator 
"*"         {printf("T_OPERATOR: *(multiplication)\n");} //multiplication operator
"/"         {printf("T_OPERATOR: /(division)\n");} //division operator
"="         {printf("T_OPERATOR: =(structural equality)\n");} //check if the value of both operands are same or not
"=="        {printf("T_OPERATOR: ==(physical equality)\n");} //also check if the data-types are same or not.
"<>"	    {printf("T_OPERATOR: <>(structural not equal");} //	check if the values are not same 	
"!="        {printf("T_OPERATOR: !=(physical not equal to)\n");} //also checks if data- types are also not the same
"<"         {printf("T_OPERATOR: <(more than)\n");} //more than operator
">"         {printf("T_OPERATOR: >(less than)\n");} //less tahn operator 
"<="        {printf("T_OPERATOR: <=(more than equal to)\n");} //more than or equal to opertor 
">="        {printf("T_OPERATOR: >=(less tahn equal to)\n");} //less than or equal to operator 
"&&"        {printf("T_OPERATOR: &&(logical and)\n");} // logical and 
"||"        {printf("T_OPERATOR: ||(logical or)\n");} // logical or
"!"         {printf("T_OPERATOR: !(logical not)  or   derefernce operator depends on the syntax\n");} //logical not
"|"	    {printf("T_SEPERATION_IN_PATTERN_MACTHING");} //or for pattern matching 
";;"	    {printf("T_END_OF_LINE");} //another way of representing /n
"#"	    {printf("T_HASH");} //token for hash occurs in start of line in OCamel

"[]"        {printf("T_EMPTY_LIST\n");} //creates an empty list
"::"        {printf("T_OPERATOR_TO_SEPERATE_LIST_ITEMS\n");} // seperates the elements in the list 
"hd"	    {printf("T_LIST_OPERATION_RETURNS_HEAD_OF_LIST\n");} //returns first element of the list 
"tl"	    {printf("T_LIST_OPERATION_RETURNS_TAIL_OF_LIST\n");} //returns last element of the list

"("         {printf("T_LEFT_PARENTHESIS\n");} //left parenthesis
")"         {printf("T_RIGHT_PARENTHESIS\n");} //right parenthesis
"{"         {printf("T_LEFT_BRACKETS\n");} //;eft curly brackets
"}"         {printf("T_RIGHT_BRACKETS\n");} //right curly brackets
";"         {printf("T_SEMICOLON\n");} //semi-colon
","         {printf("T_COMMA\n");} //comma
"\t"	    {printf("T_TAB_SPACE\n"); } //tab space
"\n"	    {printf("T_NEW_LINE_CHARACTER\n");} //new line character

" " 	    {printf(" ");} //space , no token for space 

.           {printf("UNKNOWN_TOKEN: %s\n", yytext);} //for all others 

%%


int yywrap(){
	return 1;
}


int main() {
    printf("enter string: ");
    yylex();
    return 0;
}

