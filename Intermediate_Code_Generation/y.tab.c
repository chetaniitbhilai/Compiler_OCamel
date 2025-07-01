/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "cobol_proc.y"

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


#line 100 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    tok_Section = 258,             /* tok_Section  */
    tok_Division = 259,            /* tok_Division  */
    tok_Period = 260,              /* tok_Period  */
    tok_Is = 261,                  /* tok_Is  */
    tok_To = 262,                  /* tok_To  */
    tok_Identification = 263,      /* tok_Identification  */
    tok_ProgramID = 264,           /* tok_ProgramID  */
    tok_Author = 265,              /* tok_Author  */
    tok_Installation = 266,        /* tok_Installation  */
    tok_DateWritten = 267,         /* tok_DateWritten  */
    tok_DateCompiled = 268,        /* tok_DateCompiled  */
    tok_Remarks = 269,             /* tok_Remarks  */
    tok_Environment = 270,         /* tok_Environment  */
    tok_Configuration = 271,       /* tok_Configuration  */
    tok_SourceComputer = 272,      /* tok_SourceComputer  */
    tok_ObjectComputer = 273,      /* tok_ObjectComputer  */
    tok_InputOutput = 274,         /* tok_InputOutput  */
    tok_FileControl = 275,         /* tok_FileControl  */
    tok_Select = 276,              /* tok_Select  */
    tok_Assign = 277,              /* tok_Assign  */
    tok_Organization = 278,        /* tok_Organization  */
    tok_Sequential = 279,          /* tok_Sequential  */
    tok_Indexed = 280,             /* tok_Indexed  */
    tok_Relative = 281,            /* tok_Relative  */
    tok_Access = 282,              /* tok_Access  */
    tok_Mode = 283,                /* tok_Mode  */
    tok_Random = 284,              /* tok_Random  */
    tok_Dynamic = 285,             /* tok_Dynamic  */
    tok_File = 286,                /* tok_File  */
    tok_Status = 287,              /* tok_Status  */
    tok_IOControl = 288,           /* tok_IOControl  */
    tok_Data = 289,                /* tok_Data  */
    tok_WorkingStorage = 290,      /* tok_WorkingStorage  */
    tok_PictureClause = 291,       /* tok_PictureClause  */
    tok_Linkage = 292,             /* tok_Linkage  */
    tok_Procedure = 293,           /* tok_Procedure  */
    tok_Initialize = 294,          /* tok_Initialize  */
    tok_Input = 295,               /* tok_Input  */
    tok_Read = 296,                /* tok_Read  */
    tok_Into = 297,                /* tok_Into  */
    tok_Processing = 298,          /* tok_Processing  */
    tok_Perform = 299,             /* tok_Perform  */
    tok_Function = 300,            /* tok_Function  */
    tok_Move = 301,                /* tok_Move  */
    tok_Output = 302,              /* tok_Output  */
    tok_Write = 303,               /* tok_Write  */
    tok_From = 304,                /* tok_From  */
    tok_Display = 305,             /* tok_Display  */
    tok_Termination = 306,         /* tok_Termination  */
    tok_OpenInput = 307,           /* tok_OpenInput  */
    tok_Close = 308,               /* tok_Close  */
    tok_StopRun = 309,             /* tok_StopRun  */
    tok_ErrorHandling = 310,       /* tok_ErrorHandling  */
    tok_PlusOperator = 311,        /* tok_PlusOperator  */
    tok_SubtractOperator = 312,    /* tok_SubtractOperator  */
    tok_MultiplyOperator = 313,    /* tok_MultiplyOperator  */
    tok_DivisionOperator = 314,    /* tok_DivisionOperator  */
    tok_EqualEqual = 315,          /* tok_EqualEqual  */
    tok_EqualOperator = 316,       /* tok_EqualOperator  */
    tok_LessOperator = 317,        /* tok_LessOperator  */
    tok_GreaterOperator = 318,     /* tok_GreaterOperator  */
    tok_LessThanOrEqualOperator = 319, /* tok_LessThanOrEqualOperator  */
    tok_GreaterThanOrEqualOperator = 320, /* tok_GreaterThanOrEqualOperator  */
    tok_NotEqualOperator = 321,    /* tok_NotEqualOperator  */
    tok_LogicalAndOperator = 322,  /* tok_LogicalAndOperator  */
    tok_LogicalOrOperator = 323,   /* tok_LogicalOrOperator  */
    tok_LogicalNotOperator = 324,  /* tok_LogicalNotOperator  */
    tok_OpenBrace = 325,           /* tok_OpenBrace  */
    tok_CloseBrace = 326,          /* tok_CloseBrace  */
    tok_FloatDeclaration = 327,    /* tok_FloatDeclaration  */
    tok_IntegerDeclaration = 328,  /* tok_IntegerDeclaration  */
    tok_AlphanumericCharacter = 329, /* tok_AlphanumericCharacter  */
    tok_AlphanumericString = 330,  /* tok_AlphanumericString  */
    tok_AlphabetCharacter = 331,   /* tok_AlphabetCharacter  */
    tok_AlphabeticString = 332,    /* tok_AlphabeticString  */
    tok_Currency = 333,            /* tok_Currency  */
    tok_AlphanumericCurrency = 334, /* tok_AlphanumericCurrency  */
    tok_Value = 335,               /* tok_Value  */
    tok_Occurs = 336,              /* tok_Occurs  */
    tok_Times = 337,               /* tok_Times  */
    tok_ArrayDeclaration = 338,    /* tok_ArrayDeclaration  */
    tok_Integer = 339,             /* tok_Integer  */
    tok_Float = 340,               /* tok_Float  */
    tok_Character = 341,           /* tok_Character  */
    tok_BString = 342,             /* tok_BString  */
    tok_SString = 343,             /* tok_SString  */
    tok_Varying = 344,             /* tok_Varying  */
    tok_By = 345,                  /* tok_By  */
    tok_Until = 346,               /* tok_Until  */
    tok_EndPerform = 347,          /* tok_EndPerform  */
    tok_Evaluate = 348,            /* tok_Evaluate  */
    tok_When = 349,                /* tok_When  */
    tok_EndEvaluate = 350,         /* tok_EndEvaluate  */
    tok_If = 351,                  /* tok_If  */
    tok_Then = 352,                /* tok_Then  */
    tok_Else = 353,                /* tok_Else  */
    tok_Elseif = 354,              /* tok_Elseif  */
    tok_EndIf = 355,               /* tok_EndIf  */
    tok_Identifier = 356,          /* tok_Identifier  */
    tok_date = 357,                /* tok_date  */
    tok_SingleLineComment = 358,   /* tok_SingleLineComment  */
    tok_CommentKeyword = 359,      /* tok_CommentKeyword  */
    tok_WhiteSpace = 360,          /* tok_WhiteSpace  */
    tok_Comma = 361,               /* tok_Comma  */
    tok_UnrecognizedCharacter = 362, /* tok_UnrecognizedCharacter  */
    tok_RD = 363,                  /* tok_RD  */
    tok_WD = 364,                  /* tok_WD  */
    tok_FD = 365,                  /* tok_FD  */
    tok_Add = 366,                 /* tok_Add  */
    tok_Subtract = 367,            /* tok_Subtract  */
    tok_Multiply = 368,            /* tok_Multiply  */
    tok_Divide = 369,              /* tok_Divide  */
    tok_Giving = 370,              /* tok_Giving  */
    tok_With = 371,                /* tok_With  */
    tok_Rounded = 372,             /* tok_Rounded  */
    tok_Remainder = 373,           /* tok_Remainder  */
    tok_Compute = 374,             /* tok_Compute  */
    tok_Equal_To = 375,            /* tok_Equal_To  */
    tok_Not_Equal_To = 376,        /* tok_Not_Equal_To  */
    tok_Less_Than = 377,           /* tok_Less_Than  */
    tok_Greater_Than = 378,        /* tok_Greater_Than  */
    tok_Less_Than_Or_Equal_To = 379, /* tok_Less_Than_Or_Equal_To  */
    tok_Greater_Than_Or_Equal_To = 380, /* tok_Greater_Than_Or_Equal_To  */
    tok_Thru = 381,                /* tok_Thru  */
    tok_Other = 382,               /* tok_Other  */
    tok_String = 383,              /* tok_String  */
    tok_Delimited_By = 384,        /* tok_Delimited_By  */
    tok_Using = 385,               /* tok_Using  */
    tok_Exit = 386,                /* tok_Exit  */
    tok_Program = 387,             /* tok_Program  */
    tok_Returning = 388,           /* tok_Returning  */
    tok_Accept = 389               /* tok_Accept  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define tok_Section 258
#define tok_Division 259
#define tok_Period 260
#define tok_Is 261
#define tok_To 262
#define tok_Identification 263
#define tok_ProgramID 264
#define tok_Author 265
#define tok_Installation 266
#define tok_DateWritten 267
#define tok_DateCompiled 268
#define tok_Remarks 269
#define tok_Environment 270
#define tok_Configuration 271
#define tok_SourceComputer 272
#define tok_ObjectComputer 273
#define tok_InputOutput 274
#define tok_FileControl 275
#define tok_Select 276
#define tok_Assign 277
#define tok_Organization 278
#define tok_Sequential 279
#define tok_Indexed 280
#define tok_Relative 281
#define tok_Access 282
#define tok_Mode 283
#define tok_Random 284
#define tok_Dynamic 285
#define tok_File 286
#define tok_Status 287
#define tok_IOControl 288
#define tok_Data 289
#define tok_WorkingStorage 290
#define tok_PictureClause 291
#define tok_Linkage 292
#define tok_Procedure 293
#define tok_Initialize 294
#define tok_Input 295
#define tok_Read 296
#define tok_Into 297
#define tok_Processing 298
#define tok_Perform 299
#define tok_Function 300
#define tok_Move 301
#define tok_Output 302
#define tok_Write 303
#define tok_From 304
#define tok_Display 305
#define tok_Termination 306
#define tok_OpenInput 307
#define tok_Close 308
#define tok_StopRun 309
#define tok_ErrorHandling 310
#define tok_PlusOperator 311
#define tok_SubtractOperator 312
#define tok_MultiplyOperator 313
#define tok_DivisionOperator 314
#define tok_EqualEqual 315
#define tok_EqualOperator 316
#define tok_LessOperator 317
#define tok_GreaterOperator 318
#define tok_LessThanOrEqualOperator 319
#define tok_GreaterThanOrEqualOperator 320
#define tok_NotEqualOperator 321
#define tok_LogicalAndOperator 322
#define tok_LogicalOrOperator 323
#define tok_LogicalNotOperator 324
#define tok_OpenBrace 325
#define tok_CloseBrace 326
#define tok_FloatDeclaration 327
#define tok_IntegerDeclaration 328
#define tok_AlphanumericCharacter 329
#define tok_AlphanumericString 330
#define tok_AlphabetCharacter 331
#define tok_AlphabeticString 332
#define tok_Currency 333
#define tok_AlphanumericCurrency 334
#define tok_Value 335
#define tok_Occurs 336
#define tok_Times 337
#define tok_ArrayDeclaration 338
#define tok_Integer 339
#define tok_Float 340
#define tok_Character 341
#define tok_BString 342
#define tok_SString 343
#define tok_Varying 344
#define tok_By 345
#define tok_Until 346
#define tok_EndPerform 347
#define tok_Evaluate 348
#define tok_When 349
#define tok_EndEvaluate 350
#define tok_If 351
#define tok_Then 352
#define tok_Else 353
#define tok_Elseif 354
#define tok_EndIf 355
#define tok_Identifier 356
#define tok_date 357
#define tok_SingleLineComment 358
#define tok_CommentKeyword 359
#define tok_WhiteSpace 360
#define tok_Comma 361
#define tok_UnrecognizedCharacter 362
#define tok_RD 363
#define tok_WD 364
#define tok_FD 365
#define tok_Add 366
#define tok_Subtract 367
#define tok_Multiply 368
#define tok_Divide 369
#define tok_Giving 370
#define tok_With 371
#define tok_Rounded 372
#define tok_Remainder 373
#define tok_Compute 374
#define tok_Equal_To 375
#define tok_Not_Equal_To 376
#define tok_Less_Than 377
#define tok_Greater_Than 378
#define tok_Less_Than_Or_Equal_To 379
#define tok_Greater_Than_Or_Equal_To 380
#define tok_Thru 381
#define tok_Other 382
#define tok_String 383
#define tok_Delimited_By 384
#define tok_Using 385
#define tok_Exit 386
#define tok_Program 387
#define tok_Returning 388
#define tok_Accept 389

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_tok_Section = 3,                /* tok_Section  */
  YYSYMBOL_tok_Division = 4,               /* tok_Division  */
  YYSYMBOL_tok_Period = 5,                 /* tok_Period  */
  YYSYMBOL_tok_Is = 6,                     /* tok_Is  */
  YYSYMBOL_tok_To = 7,                     /* tok_To  */
  YYSYMBOL_tok_Identification = 8,         /* tok_Identification  */
  YYSYMBOL_tok_ProgramID = 9,              /* tok_ProgramID  */
  YYSYMBOL_tok_Author = 10,                /* tok_Author  */
  YYSYMBOL_tok_Installation = 11,          /* tok_Installation  */
  YYSYMBOL_tok_DateWritten = 12,           /* tok_DateWritten  */
  YYSYMBOL_tok_DateCompiled = 13,          /* tok_DateCompiled  */
  YYSYMBOL_tok_Remarks = 14,               /* tok_Remarks  */
  YYSYMBOL_tok_Environment = 15,           /* tok_Environment  */
  YYSYMBOL_tok_Configuration = 16,         /* tok_Configuration  */
  YYSYMBOL_tok_SourceComputer = 17,        /* tok_SourceComputer  */
  YYSYMBOL_tok_ObjectComputer = 18,        /* tok_ObjectComputer  */
  YYSYMBOL_tok_InputOutput = 19,           /* tok_InputOutput  */
  YYSYMBOL_tok_FileControl = 20,           /* tok_FileControl  */
  YYSYMBOL_tok_Select = 21,                /* tok_Select  */
  YYSYMBOL_tok_Assign = 22,                /* tok_Assign  */
  YYSYMBOL_tok_Organization = 23,          /* tok_Organization  */
  YYSYMBOL_tok_Sequential = 24,            /* tok_Sequential  */
  YYSYMBOL_tok_Indexed = 25,               /* tok_Indexed  */
  YYSYMBOL_tok_Relative = 26,              /* tok_Relative  */
  YYSYMBOL_tok_Access = 27,                /* tok_Access  */
  YYSYMBOL_tok_Mode = 28,                  /* tok_Mode  */
  YYSYMBOL_tok_Random = 29,                /* tok_Random  */
  YYSYMBOL_tok_Dynamic = 30,               /* tok_Dynamic  */
  YYSYMBOL_tok_File = 31,                  /* tok_File  */
  YYSYMBOL_tok_Status = 32,                /* tok_Status  */
  YYSYMBOL_tok_IOControl = 33,             /* tok_IOControl  */
  YYSYMBOL_tok_Data = 34,                  /* tok_Data  */
  YYSYMBOL_tok_WorkingStorage = 35,        /* tok_WorkingStorage  */
  YYSYMBOL_tok_PictureClause = 36,         /* tok_PictureClause  */
  YYSYMBOL_tok_Linkage = 37,               /* tok_Linkage  */
  YYSYMBOL_tok_Procedure = 38,             /* tok_Procedure  */
  YYSYMBOL_tok_Initialize = 39,            /* tok_Initialize  */
  YYSYMBOL_tok_Input = 40,                 /* tok_Input  */
  YYSYMBOL_tok_Read = 41,                  /* tok_Read  */
  YYSYMBOL_tok_Into = 42,                  /* tok_Into  */
  YYSYMBOL_tok_Processing = 43,            /* tok_Processing  */
  YYSYMBOL_tok_Perform = 44,               /* tok_Perform  */
  YYSYMBOL_tok_Function = 45,              /* tok_Function  */
  YYSYMBOL_tok_Move = 46,                  /* tok_Move  */
  YYSYMBOL_tok_Output = 47,                /* tok_Output  */
  YYSYMBOL_tok_Write = 48,                 /* tok_Write  */
  YYSYMBOL_tok_From = 49,                  /* tok_From  */
  YYSYMBOL_tok_Display = 50,               /* tok_Display  */
  YYSYMBOL_tok_Termination = 51,           /* tok_Termination  */
  YYSYMBOL_tok_OpenInput = 52,             /* tok_OpenInput  */
  YYSYMBOL_tok_Close = 53,                 /* tok_Close  */
  YYSYMBOL_tok_StopRun = 54,               /* tok_StopRun  */
  YYSYMBOL_tok_ErrorHandling = 55,         /* tok_ErrorHandling  */
  YYSYMBOL_tok_PlusOperator = 56,          /* tok_PlusOperator  */
  YYSYMBOL_tok_SubtractOperator = 57,      /* tok_SubtractOperator  */
  YYSYMBOL_tok_MultiplyOperator = 58,      /* tok_MultiplyOperator  */
  YYSYMBOL_tok_DivisionOperator = 59,      /* tok_DivisionOperator  */
  YYSYMBOL_tok_EqualEqual = 60,            /* tok_EqualEqual  */
  YYSYMBOL_tok_EqualOperator = 61,         /* tok_EqualOperator  */
  YYSYMBOL_tok_LessOperator = 62,          /* tok_LessOperator  */
  YYSYMBOL_tok_GreaterOperator = 63,       /* tok_GreaterOperator  */
  YYSYMBOL_tok_LessThanOrEqualOperator = 64, /* tok_LessThanOrEqualOperator  */
  YYSYMBOL_tok_GreaterThanOrEqualOperator = 65, /* tok_GreaterThanOrEqualOperator  */
  YYSYMBOL_tok_NotEqualOperator = 66,      /* tok_NotEqualOperator  */
  YYSYMBOL_tok_LogicalAndOperator = 67,    /* tok_LogicalAndOperator  */
  YYSYMBOL_tok_LogicalOrOperator = 68,     /* tok_LogicalOrOperator  */
  YYSYMBOL_tok_LogicalNotOperator = 69,    /* tok_LogicalNotOperator  */
  YYSYMBOL_tok_OpenBrace = 70,             /* tok_OpenBrace  */
  YYSYMBOL_tok_CloseBrace = 71,            /* tok_CloseBrace  */
  YYSYMBOL_tok_FloatDeclaration = 72,      /* tok_FloatDeclaration  */
  YYSYMBOL_tok_IntegerDeclaration = 73,    /* tok_IntegerDeclaration  */
  YYSYMBOL_tok_AlphanumericCharacter = 74, /* tok_AlphanumericCharacter  */
  YYSYMBOL_tok_AlphanumericString = 75,    /* tok_AlphanumericString  */
  YYSYMBOL_tok_AlphabetCharacter = 76,     /* tok_AlphabetCharacter  */
  YYSYMBOL_tok_AlphabeticString = 77,      /* tok_AlphabeticString  */
  YYSYMBOL_tok_Currency = 78,              /* tok_Currency  */
  YYSYMBOL_tok_AlphanumericCurrency = 79,  /* tok_AlphanumericCurrency  */
  YYSYMBOL_tok_Value = 80,                 /* tok_Value  */
  YYSYMBOL_tok_Occurs = 81,                /* tok_Occurs  */
  YYSYMBOL_tok_Times = 82,                 /* tok_Times  */
  YYSYMBOL_tok_ArrayDeclaration = 83,      /* tok_ArrayDeclaration  */
  YYSYMBOL_tok_Integer = 84,               /* tok_Integer  */
  YYSYMBOL_tok_Float = 85,                 /* tok_Float  */
  YYSYMBOL_tok_Character = 86,             /* tok_Character  */
  YYSYMBOL_tok_BString = 87,               /* tok_BString  */
  YYSYMBOL_tok_SString = 88,               /* tok_SString  */
  YYSYMBOL_tok_Varying = 89,               /* tok_Varying  */
  YYSYMBOL_tok_By = 90,                    /* tok_By  */
  YYSYMBOL_tok_Until = 91,                 /* tok_Until  */
  YYSYMBOL_tok_EndPerform = 92,            /* tok_EndPerform  */
  YYSYMBOL_tok_Evaluate = 93,              /* tok_Evaluate  */
  YYSYMBOL_tok_When = 94,                  /* tok_When  */
  YYSYMBOL_tok_EndEvaluate = 95,           /* tok_EndEvaluate  */
  YYSYMBOL_tok_If = 96,                    /* tok_If  */
  YYSYMBOL_tok_Then = 97,                  /* tok_Then  */
  YYSYMBOL_tok_Else = 98,                  /* tok_Else  */
  YYSYMBOL_tok_Elseif = 99,                /* tok_Elseif  */
  YYSYMBOL_tok_EndIf = 100,                /* tok_EndIf  */
  YYSYMBOL_tok_Identifier = 101,           /* tok_Identifier  */
  YYSYMBOL_tok_date = 102,                 /* tok_date  */
  YYSYMBOL_tok_SingleLineComment = 103,    /* tok_SingleLineComment  */
  YYSYMBOL_tok_CommentKeyword = 104,       /* tok_CommentKeyword  */
  YYSYMBOL_tok_WhiteSpace = 105,           /* tok_WhiteSpace  */
  YYSYMBOL_tok_Comma = 106,                /* tok_Comma  */
  YYSYMBOL_tok_UnrecognizedCharacter = 107, /* tok_UnrecognizedCharacter  */
  YYSYMBOL_tok_RD = 108,                   /* tok_RD  */
  YYSYMBOL_tok_WD = 109,                   /* tok_WD  */
  YYSYMBOL_tok_FD = 110,                   /* tok_FD  */
  YYSYMBOL_tok_Add = 111,                  /* tok_Add  */
  YYSYMBOL_tok_Subtract = 112,             /* tok_Subtract  */
  YYSYMBOL_tok_Multiply = 113,             /* tok_Multiply  */
  YYSYMBOL_tok_Divide = 114,               /* tok_Divide  */
  YYSYMBOL_tok_Giving = 115,               /* tok_Giving  */
  YYSYMBOL_tok_With = 116,                 /* tok_With  */
  YYSYMBOL_tok_Rounded = 117,              /* tok_Rounded  */
  YYSYMBOL_tok_Remainder = 118,            /* tok_Remainder  */
  YYSYMBOL_tok_Compute = 119,              /* tok_Compute  */
  YYSYMBOL_tok_Equal_To = 120,             /* tok_Equal_To  */
  YYSYMBOL_tok_Not_Equal_To = 121,         /* tok_Not_Equal_To  */
  YYSYMBOL_tok_Less_Than = 122,            /* tok_Less_Than  */
  YYSYMBOL_tok_Greater_Than = 123,         /* tok_Greater_Than  */
  YYSYMBOL_tok_Less_Than_Or_Equal_To = 124, /* tok_Less_Than_Or_Equal_To  */
  YYSYMBOL_tok_Greater_Than_Or_Equal_To = 125, /* tok_Greater_Than_Or_Equal_To  */
  YYSYMBOL_tok_Thru = 126,                 /* tok_Thru  */
  YYSYMBOL_tok_Other = 127,                /* tok_Other  */
  YYSYMBOL_tok_String = 128,               /* tok_String  */
  YYSYMBOL_tok_Delimited_By = 129,         /* tok_Delimited_By  */
  YYSYMBOL_tok_Using = 130,                /* tok_Using  */
  YYSYMBOL_tok_Exit = 131,                 /* tok_Exit  */
  YYSYMBOL_tok_Program = 132,              /* tok_Program  */
  YYSYMBOL_tok_Returning = 133,            /* tok_Returning  */
  YYSYMBOL_tok_Accept = 134,               /* tok_Accept  */
  YYSYMBOL_135_ = 135,                     /* '+'  */
  YYSYMBOL_136_ = 136,                     /* '-'  */
  YYSYMBOL_137_ = 137,                     /* '*'  */
  YYSYMBOL_138_ = 138,                     /* '/'  */
  YYSYMBOL_YYACCEPT = 139,                 /* $accept  */
  YYSYMBOL_pgm = 140,                      /* pgm  */
  YYSYMBOL_program = 141,                  /* program  */
  YYSYMBOL_comments = 142,                 /* comments  */
  YYSYMBOL_comment = 143,                  /* comment  */
  YYSYMBOL_identification_division = 144,  /* identification_division  */
  YYSYMBOL_program_info_list = 145,        /* program_info_list  */
  YYSYMBOL_program_info_clause = 146,      /* program_info_clause  */
  YYSYMBOL_word_list = 147,                /* word_list  */
  YYSYMBOL_word_list_pl = 148,             /* word_list_pl  */
  YYSYMBOL_data_division = 149,            /* data_division  */
  YYSYMBOL_working_storage_section = 150,  /* working_storage_section  */
  YYSYMBOL_record_block = 151,             /* record_block  */
  YYSYMBOL_data_entries = 152,             /* data_entries  */
  YYSYMBOL_record_paras = 153,             /* record_paras  */
  YYSYMBOL_record_para = 154,              /* record_para  */
  YYSYMBOL_record_entries = 155,           /* record_entries  */
  YYSYMBOL_inc = 156,                      /* inc  */
  YYSYMBOL_record_entry = 157,             /* record_entry  */
  YYSYMBOL_array = 158,                    /* array  */
  YYSYMBOL_kriti = 159,                    /* kriti  */
  YYSYMBOL_data_type = 160,                /* data_type  */
  YYSYMBOL_procedure_division = 161,       /* procedure_division  */
  YYSYMBOL_blocks = 162,                   /* blocks  */
  YYSYMBOL_block = 163,                    /* block  */
  YYSYMBOL_statements = 164,               /* statements  */
  YYSYMBOL_statement = 165,                /* statement  */
  YYSYMBOL_if_else = 166,                  /* if_else  */
  YYSYMBOL_else_ifs = 167,                 /* else_ifs  */
  YYSYMBOL_else_if = 168,                  /* else_if  */
  YYSYMBOL_condition = 169,                /* condition  */
  YYSYMBOL_end_block = 170,                /* end_block  */
  YYSYMBOL_evaluate = 171,                 /* evaluate  */
  YYSYMBOL_switch_cases = 172,             /* switch_cases  */
  YYSYMBOL_when_clauses = 173,             /* when_clauses  */
  YYSYMBOL_when_clause = 174,              /* when_clause  */
  YYSYMBOL_when_condition = 175,           /* when_condition  */
  YYSYMBOL_value_list = 176,               /* value_list  */
  YYSYMBOL_constant = 177,                 /* constant  */
  YYSYMBOL_no_period_statements = 178,     /* no_period_statements  */
  YYSYMBOL_perform = 179,                  /* perform  */
  YYSYMBOL_string = 180,                   /* string  */
  YYSYMBOL_operator = 181,                 /* operator  */
  YYSYMBOL_no_period_blocks = 182,         /* no_period_blocks  */
  YYSYMBOL_no_period_block = 183,          /* no_period_block  */
  YYSYMBOL_params = 184,                   /* params  */
  YYSYMBOL_params_list = 185,              /* params_list  */
  YYSYMBOL_function = 186,                 /* function  */
  YYSYMBOL_exit = 187,                     /* exit  */
  YYSYMBOL_iden_or_int = 188,              /* iden_or_int  */
  YYSYMBOL_display_statement = 189,        /* display_statement  */
  YYSYMBOL_display_list = 190,             /* display_list  */
  YYSYMBOL_arithmetic_stmt = 191,          /* arithmetic_stmt  */
  YYSYMBOL_arithmetic_expr = 192,          /* arithmetic_expr  */
  YYSYMBOL_term = 193,                     /* term  */
  YYSYMBOL_factor = 194,                   /* factor  */
  YYSYMBOL_with = 195,                     /* with  */
  YYSYMBOL_identifier_list = 196,          /* identifier_list  */
  YYSYMBOL_operand = 197,                  /* operand  */
  YYSYMBOL_rounded = 198                   /* rounded  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   915

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  139
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  193
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  391

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   389


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,   137,   135,     2,   136,     2,   138,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   176,   176,   178,   179,   183,   184,   187,   188,   193,
     194,   198,   199,   200,   204,   205,   206,   207,   208,   209,
     214,   215,   219,   220,   234,   241,   242,   247,   248,   249,
     252,   255,   256,   260,   266,   267,   274,   275,   276,   277,
     278,   283,   284,   285,   286,   290,   294,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   312,   313,   317,   318,
     322,   323,   324,   325,   326,   330,   331,   332,   337,   338,
     339,   341,   342,   344,   345,   346,   348,   349,   350,   352,
     354,   355,   356,   357,   358,   364,   365,   367,   369,   370,
     371,   373,   374,   378,   379,   383,   388,   389,   390,   391,
     392,   397,   398,   399,   404,   405,   408,   410,   411,   415,
     418,   419,   420,   421,   424,   425,   426,   429,   430,   431,
     432,   433,   439,   440,   444,   445,   446,   448,   450,   455,
     456,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   479,   480,   484,
     485,   486,   487,   488,   492,   493,   496,   497,   500,   503,
     504,   508,   509,   514,   515,   516,   517,   521,   522,   523,
     524,   530,   531,   535,   536,   537,   538,   542,   543,   544,
     548,   549,   554,   555,   556,   557,   561,   562,   566,   567,
     568,   572,   573,   574
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "tok_Section",
  "tok_Division", "tok_Period", "tok_Is", "tok_To", "tok_Identification",
  "tok_ProgramID", "tok_Author", "tok_Installation", "tok_DateWritten",
  "tok_DateCompiled", "tok_Remarks", "tok_Environment",
  "tok_Configuration", "tok_SourceComputer", "tok_ObjectComputer",
  "tok_InputOutput", "tok_FileControl", "tok_Select", "tok_Assign",
  "tok_Organization", "tok_Sequential", "tok_Indexed", "tok_Relative",
  "tok_Access", "tok_Mode", "tok_Random", "tok_Dynamic", "tok_File",
  "tok_Status", "tok_IOControl", "tok_Data", "tok_WorkingStorage",
  "tok_PictureClause", "tok_Linkage", "tok_Procedure", "tok_Initialize",
  "tok_Input", "tok_Read", "tok_Into", "tok_Processing", "tok_Perform",
  "tok_Function", "tok_Move", "tok_Output", "tok_Write", "tok_From",
  "tok_Display", "tok_Termination", "tok_OpenInput", "tok_Close",
  "tok_StopRun", "tok_ErrorHandling", "tok_PlusOperator",
  "tok_SubtractOperator", "tok_MultiplyOperator", "tok_DivisionOperator",
  "tok_EqualEqual", "tok_EqualOperator", "tok_LessOperator",
  "tok_GreaterOperator", "tok_LessThanOrEqualOperator",
  "tok_GreaterThanOrEqualOperator", "tok_NotEqualOperator",
  "tok_LogicalAndOperator", "tok_LogicalOrOperator",
  "tok_LogicalNotOperator", "tok_OpenBrace", "tok_CloseBrace",
  "tok_FloatDeclaration", "tok_IntegerDeclaration",
  "tok_AlphanumericCharacter", "tok_AlphanumericString",
  "tok_AlphabetCharacter", "tok_AlphabeticString", "tok_Currency",
  "tok_AlphanumericCurrency", "tok_Value", "tok_Occurs", "tok_Times",
  "tok_ArrayDeclaration", "tok_Integer", "tok_Float", "tok_Character",
  "tok_BString", "tok_SString", "tok_Varying", "tok_By", "tok_Until",
  "tok_EndPerform", "tok_Evaluate", "tok_When", "tok_EndEvaluate",
  "tok_If", "tok_Then", "tok_Else", "tok_Elseif", "tok_EndIf",
  "tok_Identifier", "tok_date", "tok_SingleLineComment",
  "tok_CommentKeyword", "tok_WhiteSpace", "tok_Comma",
  "tok_UnrecognizedCharacter", "tok_RD", "tok_WD", "tok_FD", "tok_Add",
  "tok_Subtract", "tok_Multiply", "tok_Divide", "tok_Giving", "tok_With",
  "tok_Rounded", "tok_Remainder", "tok_Compute", "tok_Equal_To",
  "tok_Not_Equal_To", "tok_Less_Than", "tok_Greater_Than",
  "tok_Less_Than_Or_Equal_To", "tok_Greater_Than_Or_Equal_To", "tok_Thru",
  "tok_Other", "tok_String", "tok_Delimited_By", "tok_Using", "tok_Exit",
  "tok_Program", "tok_Returning", "tok_Accept", "'+'", "'-'", "'*'", "'/'",
  "$accept", "pgm", "program", "comments", "comment",
  "identification_division", "program_info_list", "program_info_clause",
  "word_list", "word_list_pl", "data_division", "working_storage_section",
  "record_block", "data_entries", "record_paras", "record_para",
  "record_entries", "inc", "record_entry", "array", "kriti", "data_type",
  "procedure_division", "blocks", "block", "statements", "statement",
  "if_else", "else_ifs", "else_if", "condition", "end_block", "evaluate",
  "switch_cases", "when_clauses", "when_clause", "when_condition",
  "value_list", "constant", "no_period_statements", "perform", "string",
  "operator", "no_period_blocks", "no_period_block", "params",
  "params_list", "function", "exit", "iden_or_int", "display_statement",
  "display_list", "arithmetic_stmt", "arithmetic_expr", "term", "factor",
  "with", "identifier_list", "operand", "rounded", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-282)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-193)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,  -282,    68,  -282,   232,    -1,  -282,  -282,    76,    -1,
    -282,   110,    96,    -1,   147,    -1,    78,   150,   120,     3,
     171,   175,   187,   197,   204,  -282,    78,   181,   224,    -1,
      -1,    -1,    -1,    -1,    -1,  -282,   231,  -282,   240,  -282,
      16,    16,    16,   134,   160,   251,    -1,  -282,   174,   266,
     271,   293,   298,   300,    11,    92,  -282,  -282,    -1,    -1,
      -1,    -1,    -1,  -282,   193,  -282,   223,  -282,   223,  -282,
      15,   256,   126,   214,   -45,   112,   216,    56,    26,    26,
      26,    26,    24,   217,   260,   705,  -282,   314,  -282,  -282,
    -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,   316,    28,
     227,  -282,  -282,   230,  -282,  -282,   233,    56,   -59,   259,
     212,   220,   343,   250,   253,  -282,   -52,   609,   100,  -282,
    -282,  -282,  -282,   213,   769,   790,   154,  -282,  -282,  -282,
       6,     7,   303,   267,    -4,  -282,   295,  -282,  -282,  -282,
    -282,    -1,    15,   289,   274,   323,   316,  -282,   311,    -1,
     268,  -282,   730,   365,   275,   276,   269,   277,   286,   287,
    -282,   -52,   163,    48,    20,   538,    -1,    -1,   152,    -1,
     281,    -1,    -1,  -282,  -282,  -282,  -282,  -282,  -282,  -282,
    -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,   159,
     107,   107,   159,   107,   107,  -282,    10,   270,    26,    26,
     283,    26,    26,    26,   100,   634,  -282,  -282,  -282,  -282,
    -282,  -282,  -282,  -282,  -282,  -282,    17,   304,   289,   -34,
     730,   268,  -282,    -1,   296,    -1,   380,  -282,   166,   166,
     252,   385,  -282,  -282,  -282,    -1,  -282,  -282,  -282,  -282,
      20,    56,    49,  -282,   302,   297,  -282,    49,   694,  -282,
    -282,   208,   154,   154,  -282,   208,  -282,  -282,   305,  -282,
     306,   328,   313,  -282,   299,   404,   288,   328,   208,  -282,
    -282,   102,  -282,   396,  -282,   318,   312,  -282,    49,   634,
     324,   250,   253,  -282,  -282,   291,  -282,  -282,  -282,  -282,
     769,  -282,    -1,   326,  -282,    -1,    64,   329,    20,    -1,
    -282,  -282,    20,  -282,  -282,  -282,  -282,   509,   315,   433,
     320,   335,   322,  -282,  -282,  -282,  -282,  -282,   440,  -282,
     -34,    49,    -1,   321,  -282,   362,   194,    20,   194,  -282,
      -1,    49,   353,    49,  -282,  -282,   355,  -282,  -282,  -282,
     352,   356,  -282,   357,   338,   358,  -282,   369,    -1,  -282,
     331,  -282,  -282,  -282,  -282,    -1,  -282,    20,  -282,    20,
    -282,    49,   509,   509,   509,   360,   509,    56,  -282,   332,
    -282,    -1,   364,  -282,  -282,  -282,  -282,  -282,  -282,   730,
     366,   368,    49,   374,  -282,    49,  -282,    49,  -282,    -1,
    -282
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     7,     0,     2,     0,     6,     1,    10,     0,     6,
       5,     0,     0,     6,     0,     6,     0,     0,     0,    19,
       0,     0,     0,     0,     0,     9,     0,     0,     0,     6,
       6,     6,     6,     6,     6,    11,     0,    24,     0,     3,
       0,     0,     0,     0,     0,     0,     6,    21,     0,     0,
       0,     0,     0,     0,     0,     0,    22,    20,     6,     6,
       6,     6,     6,    44,     0,    26,    28,    27,    31,    30,
       0,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    60,     0,    61,    63,
      62,    64,    83,    18,    14,    15,    16,    17,    46,     0,
       0,    29,    32,     0,    34,   162,     0,     0,   155,     0,
     155,   161,     0,   164,   163,   165,     6,   176,     0,   189,
     129,   130,   188,     0,     0,     0,   175,   179,   180,   190,
       0,   187,     0,     0,     0,   172,     0,    79,    82,    56,
      58,     6,     0,     0,     0,     0,     0,    46,     0,     6,
       0,   127,     0,     0,     0,     0,   170,   168,     0,     0,
     106,     6,   176,     0,     0,     0,     6,     6,     6,     6,
       0,     6,     6,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   131,   132,   133,   134,   135,   136,     0,
       0,     0,     0,     0,     0,   185,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,    55,    47,    48,
      49,    50,    51,    52,    53,    54,     0,     0,     0,     0,
       0,   156,   154,     6,     0,     6,     0,    80,     0,     0,
     116,     0,   107,   181,    84,     6,   122,   123,   150,   152,
       0,     0,     6,   149,     0,    94,   151,     6,     0,   153,
      96,    99,   173,   174,    97,    98,   177,   178,     0,   182,
       0,     0,   187,   186,     0,     0,     0,     0,   171,    65,
      42,     0,    45,     0,   161,     0,     0,   157,     6,     0,
       0,     0,     0,   169,   167,   117,   118,   119,   120,   121,
       0,   113,     6,   111,   114,     6,     0,     0,     0,     6,
     102,    88,     0,    93,    91,   147,   183,     0,    68,     0,
      73,     0,    76,    40,    36,    38,    39,    37,     0,    43,
       0,     6,     6,   160,    81,     0,     0,     0,     0,   104,
       6,     6,     0,     6,    95,   101,     0,   193,   191,    70,
       0,     0,    71,     0,     0,     0,    41,     0,     6,   124,
       0,   158,   110,   117,   112,     6,   115,     0,    86,     0,
      89,     6,     0,     0,     0,     0,     0,     0,   125,     0,
     109,     6,     0,    90,    69,    72,    74,    78,    77,     0,
       0,     0,     6,     0,   159,     6,    87,     6,    85,     6,
     126
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -282,  -282,  -282,     0,  -282,  -282,   443,  -282,   -22,  -282,
    -282,  -282,  -282,  -282,   -26,  -282,   -35,  -282,  -282,  -282,
    -282,   254,  -282,   386,  -282,  -181,   -49,    -8,  -227,  -282,
    -106,  -237,    -7,  -282,   309,  -282,  -282,  -282,  -263,  -120,
      74,  -137,  -117,  -148,  -282,   363,   255,    98,  -282,   -72,
    -282,    55,  -282,   131,   106,   108,   -23,   113,    -5,  -281
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,   300,     5,     9,    25,    26,    49,    57,
      15,    37,    65,    66,    67,    68,    69,   318,    70,   145,
      99,   216,    29,    84,    85,    86,   165,   166,   244,   245,
     123,   301,   167,   159,   160,   161,   292,   293,   294,   223,
     169,   124,   189,   170,   171,   151,   222,   172,   351,   109,
      92,   115,   137,   125,   126,   127,   197,   130,   128,   339
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       4,   149,   112,   168,   224,    10,    87,   195,   192,    12,
     304,    47,    63,    16,   198,    18,    63,    47,   303,    50,
      51,   234,   270,  -161,   269,   135,    56,   129,   342,    39,
      40,    41,    42,    43,    44,   104,    87,   -13,   202,   105,
     101,   322,   102,  -108,   235,   237,    55,    88,    89,   -25,
     105,     1,   250,   -35,   299,   254,   111,   117,    93,    94,
      95,    96,    97,   354,   143,   356,    74,   274,     6,   332,
      75,   150,   276,   131,   132,   133,   134,    88,    89,    19,
      11,   374,   375,   376,   348,   378,   203,    20,    21,    22,
      23,    24,   -57,    71,   358,    64,   360,   271,   323,   103,
     305,   162,     1,   313,   190,   191,   -13,   206,   129,   144,
     119,    48,   -12,   199,   -25,    13,   158,    48,   -35,   233,
     297,  -184,   196,   164,   373,   136,   118,   122,   258,    90,
      14,    78,    79,    80,    81,   298,    72,    73,    74,    82,
     119,   205,    75,   120,   121,   386,   -59,   275,   388,   220,
     389,    17,     1,    91,    83,    27,    87,   122,    28,    90,
     162,   158,   330,   241,   331,   236,   238,   239,   243,   246,
     118,   248,   249,   326,   259,    47,    30,   118,   334,   -23,
      31,   -12,   336,    91,   119,    76,   314,   315,    77,   316,
     317,   119,    32,   262,   262,   -57,   265,   266,   267,   113,
     114,   122,    33,    78,    79,    80,    81,   355,   122,    34,
     105,    82,   193,   194,    71,   106,    36,   107,   -23,   -23,
     -23,  -190,  -190,   243,   -23,   279,    83,   108,    38,   118,
      87,   383,    -4,     7,    45,   296,    52,   371,   308,   372,
       8,   309,   310,   119,   312,    46,   120,   121,   347,   163,
     240,   241,   242,   281,   282,     1,    54,    72,    73,    74,
     122,   379,    53,    75,   190,   191,   -23,   -23,   -23,   -23,
     -23,    58,   -23,   -23,   -23,    48,    59,   -23,   353,   286,
     287,   288,   289,   283,   284,   -23,   -23,   -23,   -23,   -23,
     207,   -23,   327,   -23,    98,   329,   252,   253,    60,   335,
     195,   256,   257,    61,  -184,    62,    76,   100,   -23,    77,
     -92,   261,   263,  -148,   139,   110,     1,   116,   138,   141,
     251,   142,   349,   255,    78,    79,    80,    81,   146,   195,
     357,   147,    82,  -184,   148,   268,   285,   286,   287,   288,
     289,   152,   150,  -184,  -184,  -184,   154,    83,   368,  -184,
     155,   156,   200,   290,   157,   370,   204,   201,   217,   218,
     219,   208,   209,   210,   211,   212,   213,   214,   215,   221,
     225,   381,  -184,  -184,  -184,   228,   226,   227,  -184,   291,
     230,   247,   231,   229,   264,   260,   272,   280,   278,   390,
     295,  -184,  -184,  -184,  -184,  -184,   241,  -184,  -184,  -184,
     302,   319,  -184,   311,   321,   195,   306,   307,   320,   -75,
    -184,  -184,  -184,  -184,  -184,   196,  -184,   325,  -184,   199,
    -184,  -184,  -184,  -184,  -184,   324,  -184,  -184,  -184,   333,
     340,  -184,   328,  -184,   337,   343,   344,   345,  -192,  -184,
    -184,  -184,  -184,  -184,   196,   346,   352,  -184,   -75,   -75,
     -75,   359,   350,   362,   -75,   361,   365,   363,   364,   366,
     367,   377,  -184,   369,   382,   380,   387,   384,   385,    35,
     232,   140,   273,   153,     0,     0,   277,  -192,  -192,  -192,
       0,     0,     0,  -192,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -75,   -75,   -75,   -75,
     -75,     0,   -75,   -75,   -75,     0,     0,   -75,     0,     0,
     337,     0,     0,     0,  -192,   -75,   -75,   -75,   -75,  -184,
     196,     0,     0,   -75,     0,  -192,  -192,  -192,  -192,  -192,
       0,  -192,  -192,  -192,     0,     0,  -192,     0,   -75,   234,
       0,     0,     0,     0,  -192,  -192,  -192,  -192,   341,     0,
     338,     0,  -192,  -192,  -192,  -192,     0,     0,     0,  -192,
       0,     0,     0,     0,     0,     0,     0,  -192,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    -6,    -6,    74,     0,     0,     0,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -192,  -192,  -192,  -192,  -192,     0,  -192,  -192,  -192,
    -100,     0,  -192,     0,     0,     0,     0,     0,     0,     0,
    -192,  -192,  -192,  -192,     0,     0,   338,     0,  -192,     0,
      -6,    -6,    -6,    -6,    -6,   234,    -6,    -6,    -6,     0,
       0,     1,     0,  -192,     0,     0,     0,     0,     0,    78,
      79,    80,    81,  -100,  -100,  -100,     0,    82,     0,  -100,
       0,     0,     0,     0,     0,     0,     0,  -190,  -190,     0,
       0,     0,    83,     0,     0,     0,     0,     0,   -66,   -66,
      74,     0,     0,     0,    75,     0,     0,     0,   -66,     0,
       0,     0,     0,     0,     0,    71,     0,     0,     0,     0,
       0,  -100,  -100,     0,     0,  -100,    71,     0,     0,  -100,
       0,     0,  -100,     0,     0,     0,     0,     0,     0,     0,
    -100,  -100,  -100,  -100,     0,     0,   -66,   -66,  -100,     0,
     -66,    71,     0,     0,   -66,     0,     0,   -66,    72,    73,
      74,     0,     0,  -100,    75,    78,    79,    80,    81,    72,
      73,    74,     0,    82,     0,    75,     0,     0,     0,   -59,
       0,     0,     0,     0,     0,   -66,     0,     0,    83,     0,
       0,     0,     0,     0,    72,    73,    74,     0,     0,     0,
      75,     0,     0,     0,     0,     0,  -148,    76,     0,     0,
      77,     0,     0,     0,  -148,     0,     0,     0,    76,     0,
       0,    77,     0,     0,     0,    78,    79,    80,    81,     0,
       0,     0,     0,    82,     0,     0,    78,    79,    80,    81,
       0,     0,  -148,    76,    82,     0,    77,     0,    83,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,    83,
       0,    78,    79,    80,    81,     0,   190,   191,     0,    82,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
       0,     0,     0,     0,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   183,
     184,   185,   186,   187,   188,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     183,   184,   185,   186,   187,   188
};

static const yytype_int16 yycheck[] =
{
       0,   107,    74,   123,   152,     5,    55,     1,   125,     9,
     247,     1,     1,    13,     7,    15,     1,     1,   245,    41,
      42,     1,     5,    82,   205,     1,    48,     1,   309,    29,
      30,    31,    32,    33,    34,    70,    85,    34,    42,    84,
      66,   278,    68,    95,   164,   165,    46,    55,    55,    38,
      84,   103,   189,    38,     5,   192,   101,     1,    58,    59,
      60,    61,    62,   326,    36,   328,    46,   101,     0,   296,
      50,   130,   220,    78,    79,    80,    81,    85,    85,     1,
       4,   362,   363,   364,   321,   366,    90,     9,    10,    11,
      12,    13,     0,     1,   331,    84,   333,    80,   279,    84,
     248,     1,   103,     1,    56,    57,   103,   142,     1,    81,
      84,   101,    34,   106,   103,     5,   116,   101,   103,    71,
     240,   115,   116,   123,   361,   101,    70,   101,   118,    55,
      34,   111,   112,   113,   114,   241,    44,    45,    46,   119,
      84,   141,    50,    87,    88,   382,    54,   219,   385,   149,
     387,     4,   103,    55,   134,     5,   205,   101,    38,    85,
       1,   161,    98,    99,   100,   165,   166,   167,   168,   169,
      70,   171,   172,   290,   196,     1,     5,    70,   298,     5,
       5,   103,   302,    85,    84,    93,    84,    85,    96,    87,
      88,    84,     5,   198,   199,   103,   201,   202,   203,    87,
      88,   101,     5,   111,   112,   113,   114,   327,   101,     5,
      84,   119,    58,    59,     1,    89,    35,    91,    44,    45,
      46,    58,    59,   223,    50,   225,   134,   101,     4,    70,
     279,   379,     0,     1,     3,   235,   102,   357,   261,   359,
       8,   264,   265,    84,   267,     5,    87,    88,   320,   118,
      98,    99,   100,    87,    88,   103,     5,    44,    45,    46,
     101,   367,   102,    50,    56,    57,    92,    93,    94,    95,
      96,     5,    98,    99,   100,   101,     5,   103,    84,    85,
      86,    87,    88,   228,   229,   111,   112,   113,   114,   115,
       1,   117,   292,   119,   101,   295,   190,   191,     5,   299,
       1,   193,   194,     5,     5,     5,    93,    84,   134,    96,
      54,   198,   199,   100,    54,   101,   103,   101,   101,     5,
     189,     5,   322,   192,   111,   112,   113,   114,   101,     1,
     330,   101,   119,     5,   101,   204,    84,    85,    86,    87,
      88,    82,   130,    44,    45,    46,   126,   134,   348,    50,
       7,   101,    49,   101,   101,   355,    61,    90,    84,    36,
      49,    72,    73,    74,    75,    76,    77,    78,    79,   101,
       5,   371,    44,    45,    46,   106,   101,   101,    50,   127,
      94,   100,    95,   106,   101,   115,    82,     7,    92,   389,
       5,    92,    93,    94,    95,    96,    99,    98,    99,   100,
      98,     5,   103,   115,    92,     1,   101,   101,    90,     5,
     111,   112,   113,   114,   115,   116,   117,   126,   119,   106,
      92,    93,    94,    95,    96,   101,    98,    99,   100,   100,
     115,   103,   106,   134,     1,   115,   101,   115,     5,   111,
     112,   113,   114,   115,   116,     5,    84,   119,    44,    45,
      46,    98,   131,   101,    50,   100,   118,   101,   101,   101,
      91,   101,   134,   132,   100,   133,    92,   101,   100,    26,
     161,    85,   218,   110,    -1,    -1,   221,    44,    45,    46,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,
      96,    -1,    98,    99,   100,    -1,    -1,   103,    -1,    -1,
       1,    -1,    -1,    -1,     5,   111,   112,   113,   114,   115,
     116,    -1,    -1,   119,    -1,    92,    93,    94,    95,    96,
      -1,    98,    99,   100,    -1,    -1,   103,    -1,   134,     1,
      -1,    -1,    -1,    -1,   111,   112,   113,   114,   115,    -1,
     117,    -1,   119,    44,    45,    46,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    96,    -1,    98,    99,   100,
       1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,   112,   113,   114,    -1,    -1,   117,    -1,   119,    -1,
      92,    93,    94,    95,    96,     1,    98,    99,   100,    -1,
      -1,   103,    -1,   134,    -1,    -1,    -1,    -1,    -1,   111,
     112,   113,   114,    44,    45,    46,    -1,   119,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    -1,
      -1,    -1,   134,    -1,    -1,    -1,    -1,    -1,    44,    45,
      46,    -1,    -1,    -1,    50,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      -1,    92,    93,    -1,    -1,    96,     1,    -1,    -1,   100,
      -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,   112,   113,   114,    -1,    -1,    92,    93,   119,    -1,
      96,     1,    -1,    -1,   100,    -1,    -1,   103,    44,    45,
      46,    -1,    -1,   134,    50,   111,   112,   113,   114,    44,
      45,    46,    -1,   119,    -1,    50,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,   131,    -1,    -1,   134,    -1,
      -1,    -1,    -1,    -1,    44,    45,    46,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,
      96,    -1,    -1,    -1,   100,    -1,    -1,    -1,    93,    -1,
      -1,    96,    -1,    -1,    -1,   111,   112,   113,   114,    -1,
      -1,    -1,    -1,   119,    -1,    -1,   111,   112,   113,   114,
      -1,    -1,    92,    93,   119,    -1,    96,    -1,   134,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,   134,
      -1,   111,   112,   113,   114,    -1,    56,    57,    -1,   119,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      -1,    -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,
     121,   122,   123,   124,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     120,   121,   122,   123,   124,   125
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   103,   140,   141,   142,   143,     0,     1,     8,   144,
     142,     4,   142,     5,    34,   149,   142,     4,   142,     1,
       9,    10,    11,    12,    13,   145,   146,     5,    38,   161,
       5,     5,     5,     5,     5,   145,    35,   150,     4,   142,
     142,   142,   142,   142,   142,     3,     5,     1,   101,   147,
     147,   147,   102,   102,     5,   142,   147,   148,     5,     5,
       5,     5,     5,     1,    84,   151,   152,   153,   154,   155,
     157,     1,    44,    45,    46,    50,    93,    96,   111,   112,
     113,   114,   119,   134,   162,   163,   164,   165,   166,   171,
     179,   186,   189,   142,   142,   142,   142,   142,   101,   159,
      84,   153,   153,    84,   155,    84,    89,    91,   101,   188,
     101,   101,   188,    87,    88,   190,   101,     1,    70,    84,
      87,    88,   101,   169,   180,   192,   193,   194,   197,     1,
     196,   197,   197,   197,   197,     1,   101,   191,   101,    54,
     162,     5,     5,    36,    81,   158,   101,   101,   101,   169,
     130,   184,    82,   184,   126,     7,   101,   101,   142,   172,
     173,   174,     1,   192,   142,   165,   166,   171,   178,   179,
     182,   183,   186,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,   120,   121,   122,   123,   124,   125,   181,
      56,    57,   181,    58,    59,     1,   116,   195,     7,   106,
      49,    90,    42,    90,    61,   142,   155,     1,    72,    73,
      74,    75,    76,    77,    78,    79,   160,    84,    36,    49,
     142,   101,   185,   178,   182,     5,   101,   101,   106,   106,
      94,    95,   173,    71,     1,   178,   142,   178,   142,   142,
      98,    99,   100,   142,   167,   168,   142,   100,   142,   142,
     180,   192,   193,   193,   180,   192,   194,   194,   118,   147,
     115,   196,   197,   196,   101,   197,   197,   197,   192,   164,
       5,    80,    82,   160,   101,   188,   182,   185,    92,   142,
       7,    87,    88,   190,   190,    84,    85,    86,    87,    88,
     101,   127,   175,   176,   177,     5,   142,   178,   169,     5,
     142,   170,    98,   167,   170,   182,   101,   101,   195,   195,
     195,   115,   195,     1,    84,    85,    87,    88,   156,     5,
      90,    92,   170,   164,   101,   126,   181,   142,   106,   142,
      98,   100,   167,   100,   178,   142,   178,     1,   117,   198,
     115,   115,   198,   115,   101,   115,     5,   188,   170,   142,
     131,   187,    84,    84,   177,   178,   177,   142,   170,    98,
     170,   100,   101,   101,   101,   118,   101,    91,   142,   132,
     142,   178,   178,   170,   198,   198,   198,   101,   198,   169,
     133,   142,   100,   182,   101,   100,   170,    92,   170,   170,
     142
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   139,   140,   141,   141,   142,   142,   143,   143,   144,
     144,   145,   145,   145,   146,   146,   146,   146,   146,   146,
     147,   147,   148,   148,   149,   150,   150,   151,   151,   151,
     152,   153,   153,   154,   155,   155,   156,   156,   156,   156,
     156,   157,   157,   157,   157,   158,   159,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   161,   161,   162,   162,
     163,   163,   163,   163,   163,   164,   164,   164,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   166,   166,   166,   166,   166,
     166,   166,   166,   167,   167,   168,   169,   169,   169,   169,
     169,   170,   170,   170,   171,   171,   172,   173,   173,   174,
     175,   175,   175,   175,   176,   176,   176,   177,   177,   177,
     177,   177,   178,   178,   179,   179,   179,   179,   179,   180,
     180,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   182,   182,   183,
     183,   183,   183,   183,   184,   184,   185,   185,   186,   187,
     187,   188,   188,   189,   189,   189,   189,   190,   190,   190,
     190,   191,   191,   192,   192,   192,   192,   193,   193,   193,
     194,   194,   195,   195,   195,   195,   196,   196,   197,   197,
     197,   198,   198,   198
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     7,     1,     2,     0,     1,     0,     5,
       1,     2,     0,     1,     6,     6,     6,     6,     6,     1,
       2,     1,     1,     0,     4,     3,     4,     1,     1,     2,
       1,     1,     2,     4,     2,     0,     1,     1,     1,     1,
       1,     7,     5,     6,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     6,     4,     2,     0,
       1,     1,     1,     1,     1,     4,     0,     0,     5,     8,
       6,     6,     8,     5,     8,     4,     5,     8,     8,     2,
       4,     6,     2,     1,     1,    11,     7,    10,     5,     7,
       8,     5,     1,     2,     0,     3,     3,     3,     3,     3,
       1,     2,     1,     0,     6,     1,     1,     2,     0,     6,
       3,     1,     3,     1,     1,     3,     0,     1,     1,     1,
       1,     1,     2,     2,     7,     8,    13,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     0,     2,
       2,     2,     2,     2,     2,     0,     1,     2,     7,     4,
       0,     1,     1,     2,     2,     2,     1,     4,     2,     4,
       2,     3,     1,     3,     3,     1,     1,     3,     3,     1,
       1,     3,     2,     3,     0,     1,     3,     1,     1,     1,
       1,     1,     0,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* pgm: program  */
#line 176 "cobol_proc.y"
              {printf(" THE PROGRAM IS VALID \n");}
#line 2006 "y.tab.c"
    break;

  case 10: /* identification_division: error  */
#line 194 "cobol_proc.y"
                {printf("syntax error in identification division declaration line: %d\n", yylineno); exit(1);}
#line 2012 "y.tab.c"
    break;

  case 13: /* program_info_list: error  */
#line 200 "cobol_proc.y"
                {printf("syntax error in identification line: %d\n", yylineno); exit(1);}
#line 2018 "y.tab.c"
    break;

  case 19: /* program_info_clause: error  */
#line 209 "cobol_proc.y"
                {printf("syntax error in identification clause line: %d\n", yylineno); exit(1);}
#line 2024 "y.tab.c"
    break;

  case 21: /* word_list: error  */
#line 215 "cobol_proc.y"
                {printf("syntax error in idnetifier line: %d\n", yylineno); exit(1);}
#line 2030 "y.tab.c"
    break;

  case 36: /* inc: tok_Integer  */
#line 274 "cobol_proc.y"
                        { add('C'); }
#line 2036 "y.tab.c"
    break;

  case 37: /* inc: tok_SString  */
#line 275 "cobol_proc.y"
                        { add('C'); }
#line 2042 "y.tab.c"
    break;

  case 38: /* inc: tok_Float  */
#line 276 "cobol_proc.y"
                        { add('C'); }
#line 2048 "y.tab.c"
    break;

  case 39: /* inc: tok_BString  */
#line 277 "cobol_proc.y"
                        { add('C'); }
#line 2054 "y.tab.c"
    break;

  case 40: /* inc: error  */
#line 278 "cobol_proc.y"
                {printf("invalid value for constant line: %d\n", yylineno); exit(1);}
#line 2060 "y.tab.c"
    break;

  case 44: /* record_entry: error  */
#line 286 "cobol_proc.y"
                {printf("syntax error in record entry line: %d\n", yylineno); exit(1);}
#line 2066 "y.tab.c"
    break;

  case 46: /* kriti: tok_Identifier  */
#line 294 "cobol_proc.y"
                      { add('V'); }
#line 2072 "y.tab.c"
    break;

  case 47: /* data_type: tok_FloatDeclaration  */
#line 297 "cobol_proc.y"
                                 { insert_type(); }
#line 2078 "y.tab.c"
    break;

  case 48: /* data_type: tok_IntegerDeclaration  */
#line 298 "cobol_proc.y"
                                 { insert_type(); }
#line 2084 "y.tab.c"
    break;

  case 49: /* data_type: tok_AlphanumericCharacter  */
#line 299 "cobol_proc.y"
                                    { insert_type(); }
#line 2090 "y.tab.c"
    break;

  case 50: /* data_type: tok_AlphanumericString  */
#line 300 "cobol_proc.y"
                                 { insert_type(); }
#line 2096 "y.tab.c"
    break;

  case 51: /* data_type: tok_AlphabetCharacter  */
#line 301 "cobol_proc.y"
                                { insert_type(); }
#line 2102 "y.tab.c"
    break;

  case 52: /* data_type: tok_AlphabeticString  */
#line 302 "cobol_proc.y"
                               { insert_type(); }
#line 2108 "y.tab.c"
    break;

  case 53: /* data_type: tok_Currency  */
#line 303 "cobol_proc.y"
                       { insert_type(); }
#line 2114 "y.tab.c"
    break;

  case 54: /* data_type: tok_AlphanumericCurrency  */
#line 304 "cobol_proc.y"
                                   { insert_type(); }
#line 2120 "y.tab.c"
    break;

  case 55: /* data_type: error  */
#line 305 "cobol_proc.y"
                {printf("Invalid data type in line: %d\n", yylineno); exit(1);}
#line 2126 "y.tab.c"
    break;

  case 67: /* statements: %empty  */
#line 332 "cobol_proc.y"
         {printf("invalid statement line: %d\n", yylineno); exit(1);}
#line 2132 "y.tab.c"
    break;

  case 84: /* statement: error  */
#line 358 "cobol_proc.y"
                {printf("invalid statement line: %d\n", yylineno); exit(1);}
#line 2138 "y.tab.c"
    break;

  case 92: /* if_else: error  */
#line 374 "cobol_proc.y"
                {printf("syntax error in if statement line: %d\n", yylineno); exit(1);}
#line 2144 "y.tab.c"
    break;

  case 100: /* condition: error  */
#line 392 "cobol_proc.y"
                {printf("syntax error in condition line: %d\n", yylineno); exit(1);}
#line 2150 "y.tab.c"
    break;

  case 105: /* evaluate: error  */
#line 405 "cobol_proc.y"
                {printf("syntax error in evaluate statement line: %d\n", yylineno); exit(1);}
#line 2156 "y.tab.c"
    break;

  case 128: /* perform: error  */
#line 450 "cobol_proc.y"
                {printf("syntax error in perform statement line: %d\n", yylineno); exit(1);}
#line 2162 "y.tab.c"
    break;

  case 166: /* display_statement: error  */
#line 517 "cobol_proc.y"
                {printf("syntax error in display statement line: %d\n", yylineno); exit(1);}
#line 2168 "y.tab.c"
    break;

  case 172: /* arithmetic_stmt: error  */
#line 531 "cobol_proc.y"
                {printf("syntax error in arithmetic statement line: %d\n", yylineno); exit(1);}
#line 2174 "y.tab.c"
    break;

  case 176: /* arithmetic_expr: error  */
#line 538 "cobol_proc.y"
                {printf("syntax error in arithmetic expression line: %d\n", yylineno); exit(1);}
#line 2180 "y.tab.c"
    break;

  case 185: /* with: error  */
#line 557 "cobol_proc.y"
                {printf("syntax error in with line: %d\n", yylineno); exit(1);}
#line 2186 "y.tab.c"
    break;

  case 190: /* operand: error  */
#line 568 "cobol_proc.y"
               {printf("invalid operand line: %d\n", yylineno); exit(1);}
#line 2192 "y.tab.c"
    break;

  case 193: /* rounded: error  */
#line 574 "cobol_proc.y"
                {printf("syntax error in rounded line: %d\n", yylineno); exit(1);}
#line 2198 "y.tab.c"
    break;


#line 2202 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 581 "cobol_proc.y"


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
