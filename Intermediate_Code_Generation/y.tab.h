/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
