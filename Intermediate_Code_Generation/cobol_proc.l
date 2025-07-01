%{
#include<stdio.h>
#include"y.tab.h"
%}

%%
"SECTION" {printf("SECTION\n"); return tok_Section;}
"DIVISION" {printf("DIVISION\n"); return tok_Division; }
"." {printf("PERIOD\n"); return tok_Period; }
"IS" {printf("IS\n"); return tok_Is; }
"TO" {printf("TO\n"); return tok_To; }



 /*//////////////// IDENTIFICATION DIVISION /////////////////////*/

"IDENTIFICATION" {printf("IDENTIFICATION\n"); return tok_Identification; }
"PROGRAM-ID" {printf("PROGRAM-ID\n"); return tok_ProgramID; }
"AUTHOR" {printf("AUTHOR\n"); return tok_Author; }
"INSTALLATION" {printf("INSTALLATION\n"); return tok_Installation; }
"DATE-WRITTEN" {printf("DATE-WRITTEN\n"); return tok_DateWritten; }
"DATE-COMPILED" {printf("DATE-COMPILED\n"); return tok_DateCompiled; }
"REMARKS" {printf("REMARKS\n"); return tok_Remarks; }



 /*//////////////// ENVIRONMENT DIVISION //////////////////////*/
 
"ENVIRONMENT" {printf("ENVIRONMENT\n"); return tok_Environment; }    /* Environment section */
"CONFIGURATION" {printf("CONFIGURATION\n"); return tok_Configuration; } /* Configuration section */
"SOURCE-COMPUTER" {printf("SOURCE-COMPUTER\n"); return tok_SourceComputer; }
"OBJECT-COMPUTER" {printf("OBJECT-COMPUTER\n"); return tok_ObjectComputer; }
"INPUT-OUTPUT" {printf("INPUT-OUTPUT\n"); return tok_InputOutput; }   /* Input output section */
"FILE-CONTROL" {printf("FILE-CONTROL\n"); return tok_FileControl; }   /* File control paragraph */

"SELECT" {printf("SELECT\n"); return tok_Select; }             /* Select: give logical file names */
"ASSIGN" {printf("ASSIGN\n"); return tok_Assign; }             /* Assign: specifies physical files used */
"ORGANIZATION" {printf("ORGANIZATION\n"); return tok_Organization; } /* Organization: organization of the files (sequential, indexed, relative) */
"SEQUENTIAL" {printf("SEQUENTIAL\n"); return tok_Sequential; }
"INDEXED" {printf("INDEXED\n"); return tok_Indexed; }
"RELATIVE" {printf("RELATIVE\n"); return tok_Relative; }
"ACCESS" {printf("ACCESS\n"); return tok_Access; }             /* Access mode: for how the program can access records in a file (Sequential, random, dynamic) */
"MODE" {printf("MODE\n"); return tok_Mode; }                 /* Mode */
"RANDOM" {printf("RANDOM\n"); return tok_Random; }
"DYNAMIC" {printf("DYNAMIC\n"); return tok_Dynamic; }           /* Dynamic: both by key and sequential allowed */
"FILE" {printf("FILE\n"); return tok_File; }                 /* File: data item that will contain the status of file operations */
"STATUS" {printf("STATUS\n"); return tok_Status; }             /* Status: Identifier */



"I-O CONTROL" {printf("I-O CONTROL\n"); return tok_IOControl; }                     /* IO control section */
'RD' { printf("RD\n"); return tok_RD; }
'WD' { printf("WD\n"); return tok_WD; }




 /*//////////////////////// DATA DIVISION ////////////////////*/

"DATA" {printf("DATA\n"); return tok_Data; }                                 
 /* "FILE" {printf("FILE\n"); return tok_File; }                                  File section */
"WORKING-STORAGE" {printf("WORKING-STORAGE\n"); return tok_WorkingStorage; }            /* Working Storage Section */

"PIC" {printf("PIC\n"); return tok_PictureClause; }                         /* DATA TYPES */
"LINKAGE" {printf("LINKAGE\n"); return tok_Linkage; }                           /* Linkage section */

"PROCEDURE" {printf("PROCEDURE\n"); return tok_Procedure; }                       /* PROCEDURE DIVISION */

"INITIALIZE" {printf("INITIALIZE\n"); return tok_Initialize; }                     /* Initialilze: Set variables to their initial values */
"INPUT" {printf("INPUT\n"); return tok_Input; }

 /*Identifier for file names*/
"ACCEPT" {printf("ACCEPT\n"); return tok_Accept; }                             /* Accepting user input */
"READ" {printf("READ\n"); return tok_Read; }                                 /* Read input data from files */
"INTO" {printf("INTO\n"); return tok_Into; }                                 /* Read into a file */
"PROCESSING" {printf("PROCESSING\n"); return tok_Processing; }                     /* Processing Section */
"PERFORM" {printf("PERFORM\n"); return tok_Perform; }                           /* Perform the task */
"MOVE" {printf("MOVE\n"); return tok_Move; }
"OUTPUT" {printf("OUTPUT\n"); return tok_Output; }                             /* Output Section */
"WRITE" {printf("WRITE\n"); return tok_Write; }                               /* Writing results to files */
"FROM" {printf("FROM\n"); return tok_From; }
"DISPLAY" {printf("DISPLAY\n"); return tok_Display; }                           /* Display input to user */
"TERMINATION" {printf("TERMINATION\n"); return tok_Termination; }                   /* Termination Section */
"OPEN INPUT" {printf("OPEN INPUT\n"); return tok_OpenInput; }                      /* Open files */
"CLOSE" {printf("CLOSE\n"); return tok_Close; }                               /* close files */
"STOP RUN." {printf("STOP RUN.\n"); return tok_StopRun; }                         /* Like a closing bracket */
"ERROR-HANDLING" {printf("ERROR-HANDLING\n"); return tok_ErrorHandling; }              /* Error Handling Section */


 /* ///////////////////// OPERATORS /////////////////////// */

 /* ARITHMETIC OPERATORS */
"+"     {printf("+\n"); return tok_PlusOperator; }                     /* PLUS_OPERATOR */
"-"     {printf("-\n"); return tok_SubtractOperator; }                 /* SUBTRACT_OPERATOR */
"*"     {printf("*\n"); return tok_MultiplyOperator; }                 /* MULTIPLY_OPERATOR */
"/"     {printf("/\n"); return tok_DivisionOperator; }                 /* DIVISION_OPERATOR */
"("     {printf("(\n"); return tok_OpenBrace; }                        /* Open brace */
")"     {printf(")\n"); return tok_CloseBrace; }                       /* close brace */

"<="    {printf("<=\n"); return tok_LessThanOrEqualOperator; }         /* LESS_THAN_OR_EQUAL_OPERATOR */
">="    {printf(">=\n"); return tok_GreaterThanOrEqualOperator; }      /* GREATER_THAN_OR_EQUAL_OPERATOR */
"<>"    {printf("<>\n"); return tok_NotEqualOperator; }                /* NOT_EQUAL_OPERATOR */
"=="     {printf("==\n"); return tok_EqualEqual; }                    /* EQUAL_EQUAL */
"="     {printf("=\n"); return tok_EqualOperator; }                    /* EQUAL_OPERATOR */
"<"     {printf("<\n"); return tok_LessOperator; }                     /* LESS_OPERATOR */
">"     {printf(">\n"); return tok_GreaterOperator; }                  /* GREATER_OPERATOR */


"AND"   {printf("AND\n"); return tok_LogicalAndOperator; }             /* LOGICAL_AND_OPERATOR */
"OR"    {printf("OR\n"); return tok_LogicalOrOperator; }               /* LOGICAL_OR_OPERATOR */
"NOT"   {printf("NOT\n"); return tok_LogicalNotOperator; }             /* LOGICAL_NOT_OPERATOR */




"ADD"                { printf("ADD keyword\n"); return tok_Add; }
"SUBTRACT"           { printf("SUBTRACT keyword\n"); return tok_Subtract; }
"MULTIPLY"           { printf("MULTIPLY keyword\n"); return tok_Multiply; }
"DIVIDE"             { printf("DIVIDE keyword\n"); return tok_Divide; }
"GIVING"             { printf("GIVING keyword\n"); return tok_Giving; }
"WITH"               { printf("WITH keyword\n"); return tok_With; }
"ROUNDED"            { printf("ROUNDED keyword\n"); return tok_Rounded; }
"REMAINDER"          { printf("Remainder keyword\n"); return tok_Remainder; }
"COMPUTE"            { printf("Compute keyword\n"); return tok_Compute; }
"FUNCTION"           { printf("Function\n"); return tok_Function; }


"EQUAL TO"                                               { printf("EQUAL TO keyword\n"); return tok_Equal_To; }
"NOT EQUAL TO"                                 { printf("NOT EQUAL TO keyword\n"); return tok_Not_Equal_To; }
"LESS THAN"                                              { printf("LESS THAN keyword\n"); return tok_Less_Than; }
"GREATER THAN"                                           { printf("GREATER THAN keyword\n"); return tok_Greater_Than; }
"LESS THAN OR EQUAL TO"    { printf("LESS THAN OR EQUAL TO keyword\n"); return tok_Less_Than_Or_Equal_To; }
"GREATER THAN OR EQUAL TO" { printf("GREATER THAN OR EQUAL TO keyword\n"); return tok_Greater_Than_Or_Equal_To; }

"STRING"                                                           { printf("STRING keyword\n"); return tok_String; }
"DELIMITED BY"                                           { printf("DELIMITED BY keyword\n"); return tok_Delimited_By; }



 /* ////////////////////// DATA TYPES //////////////////// */

"9""("[0-9]+")""V"[0-9]+            { printf("Float Declaration\n"); return tok_FloatDeclaration; }              /* Declaration of Float data type */
"9""("[0-9]+")"                     { printf("Integer Declaration\n"); return tok_IntegerDeclaration; }          /* Declaration of integer data type */
"X."                                { printf("Alphanumeric Character\n"); return tok_AlphanumericCharacter; }    /* Declaration of alphanumeric character */
"X""("[0-9]+")"                     { printf("Alphanumeric String\n"); return tok_AlphanumericString; }          /* Declaration of alphanumeric string */
"A."                                { printf("Alphabet Character\n"); return tok_AlphabetCharacter; }            /* Declaration of Alphabet character */
"A""("[0-9]+")"                     { printf("Alphabetic String\n"); return tok_AlphabeticString; }              /* Declaration of alphabetic string */
"\$""("[0-9]+")""V"[0-9]+           { printf("Currency\n"); return tok_Currency; }                               /* Declaration of Alphanumeric Edited(currency Format) */
"\$"([0-9])+","([0-9])+"."([0-9])+  { printf("Alphanumeric Currency\n"); return tok_AlphanumericCurrency; }      /* Declaration of Alphanumeric(currency Format(value)) */
"VALUE"                             { printf("Value\n"); return tok_Value; }                                     /* Token_VALUE */
"("([0-9])+" TIMES "([0-9])+")"     { printf("Array Declaration\n"); return tok_ArrayDeclaration; }              /* Declaration of Array */




 /* /////////////////////// CONSTANTS //////////////////// */

[0-9]+                  { printf("Integer\n"); return tok_Integer; }                    /* Any Integer */
[0-9]+\.[0-9]+          { printf("Float\n"); return tok_Float; }                        /* Any decimal number */

\"[^\"\n]*\"            { printf("CapQ_String\n"); return tok_BString; }                /* "negate " or\n in between " */
'[^']*'                 { printf("Smallq_Strings\n"); return tok_SString;}

\'[a-zA-Z]\'            { printf("Character\n"); return tok_Character; }                /* Single character */

 /* \'[^\"\n]*\'           { printf("String\n"); return tok_String2; }                         Any String */



 /* /////////////////////// LOOP //////////////////////// */
 /* "PERFORM"       { printf("PERFORM\n"); return tok_Perform; }                */
"VARYING"       { printf("Varying\n"); return tok_Varying; }                 /* Update */
 /*"FROM"          { printf("FROM\n"); return tok_From; }                     Initialization */
"BY"            { printf("By\n"); return tok_By; }                      /* Update by */
"UNTIL"         { printf("Until\n"); return tok_Until; }                   /* Condition */
"END-PERFORM"   { printf("End Perform\n"); return tok_EndPerform; }              /* Halt */
"TIMES"          { printf("TIMES\n"); return tok_Times;}




 /* ////////////////////// SWITCH /////////////////////// */
"EVALUATE"      { printf("Evaluate\n"); return tok_Evaluate; }              /* Token: EVALUATE */
"WHEN"          { printf("When\n"); return tok_When; }                  /* Token: WHEN (Switch Case) */
"END-EVALUATE"  { printf("End Evaluate\n"); return tok_EndEvaluate; }           /* Token: END-EVALUATE */

"THRU"          { printf("Thru\n"); return tok_Thru; }
"OTHER"         { printf("Other\n"); return tok_Other; }
"USING"         { printf("Using\n"); return tok_Using; }
"EXIT"          { printf("Exit\n"); return tok_Exit; }
"PROGRAM"       { printf("Program\n"); return tok_Program; }
"RETURNING"     { printf("Returning\n"); return tok_Returning; }

 /* ////////////////////// IF-ELSE ////////////////////// */
 
"IF"        { printf("If\n"); return tok_If; }           /* Token If */
"THEN"      { printf("Then\n"); return tok_Then; }         /* Token Then */
"ELSE"      { printf("Else\n"); return tok_Else; }         /* Token Else */
"ELSE IF"   { printf("ElseIF\n"); return tok_Elseif; }
"END-IF"    { printf("End If\n"); return tok_EndIf; }        /* Token End-If */






 /* ////////////////////// IDENTIFIER ///////////////////// */

[A-Za-z]([A-Za-z0-9-]*[A-Za-z0-9])? {printf("Identifier\n"); return tok_Identifier;} // starts with a letter and followed by optional sequence of letters, digits and hyphens. End with a letter or digit
[0-9][0-9]"/"[0-9][0-9]"/"[0-9][0-9][0-9][0-9] {printf("date\n"); return tok_date;}



"," 		 { printf("Comma \n"); return tok_Comma; }






 /* ///////////////////// COMMENTS /////////////////////// */

"*>".*           { printf("Single Line Comment\n"); return tok_SingleLineComment; }                  /* single line comment type *> */
                 
COMMENT.*        { printf("Comment Keyword\n"); return tok_CommentKeyword; }                     /* Keyword COMMENT (single line comment) */
[ \t]            /*{ printf("White Space\n");  }                         White space token */
[\n]             { printf("New Line\n"); yylineno++;}                            /* New line token */
.                { printf("Unrecognized Character %s\n", yytext); return tok_UnrecognizedCharacter; }              /* Unrecognized character */
%%

int yywrap() {return 1;}


