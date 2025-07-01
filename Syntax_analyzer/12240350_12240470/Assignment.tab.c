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
#line 1 "Assignment.y"

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



#line 237 "Assignment.tab.c"

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

#include "Assignment.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_FLOAT = 4,                      /* FLOAT  */
  YYSYMBOL_CHAR = 5,                       /* CHAR  */
  YYSYMBOL_STRING = 6,                     /* STRING  */
  YYSYMBOL_LET = 7,                        /* LET  */
  YYSYMBOL_IDENTIFIER = 8,                 /* IDENTIFIER  */
  YYSYMBOL_NUM = 9,                        /* NUM  */
  YYSYMBOL_FLOAT_LIT = 10,                 /* FLOAT_LIT  */
  YYSYMBOL_STRING_LIT = 11,                /* STRING_LIT  */
  YYSYMBOL_LE = 12,                        /* LE  */
  YYSYMBOL_GE = 13,                        /* GE  */
  YYSYMBOL_EQ = 14,                        /* EQ  */
  YYSYMBOL_NEQ = 15,                       /* NEQ  */
  YYSYMBOL_AND = 16,                       /* AND  */
  YYSYMBOL_OR = 17,                        /* OR  */
  YYSYMBOL_CHAR_LIT = 18,                  /* CHAR_LIT  */
  YYSYMBOL_WHILE = 19,                     /* WHILE  */
  YYSYMBOL_IF = 20,                        /* IF  */
  YYSYMBOL_RETURN = 21,                    /* RETURN  */
  YYSYMBOL_WRITE = 22,                     /* WRITE  */
  YYSYMBOL_FUNCTION = 23,                  /* FUNCTION  */
  YYSYMBOL_DO = 24,                        /* DO  */
  YYSYMBOL_ARRAY = 25,                     /* ARRAY  */
  YYSYMBOL_ELSE = 26,                      /* ELSE  */
  YYSYMBOL_FOR = 27,                       /* FOR  */
  YYSYMBOL_28_ = 28,                       /* '<'  */
  YYSYMBOL_29_ = 29,                       /* '>'  */
  YYSYMBOL_30_ = 30,                       /* '='  */
  YYSYMBOL_31_ = 31,                       /* '+'  */
  YYSYMBOL_32_ = 32,                       /* '-'  */
  YYSYMBOL_33_ = 33,                       /* '*'  */
  YYSYMBOL_34_ = 34,                       /* '/'  */
  YYSYMBOL_35_ = 35,                       /* '('  */
  YYSYMBOL_36_ = 36,                       /* ')'  */
  YYSYMBOL_37_ = 37,                       /* '{'  */
  YYSYMBOL_38_ = 38,                       /* '}'  */
  YYSYMBOL_39_ = 39,                       /* ';'  */
  YYSYMBOL_40_ = 40,                       /* ','  */
  YYSYMBOL_41_ = 41,                       /* '['  */
  YYSYMBOL_42_ = 42,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_S = 44,                         /* S  */
  YYSYMBOL_Func = 45,                      /* Func  */
  YYSYMBOL_Type = 46,                      /* Type  */
  YYSYMBOL_NestedSTMT = 47,                /* NestedSTMT  */
  YYSYMBOL_STMTS = 48,                     /* STMTS  */
  YYSYMBOL_STMT = 49,                      /* STMT  */
  YYSYMBOL_dowhile = 50,                   /* dowhile  */
  YYSYMBOL_51_1 = 51,                      /* $@1  */
  YYSYMBOL_52_2 = 52,                      /* $@2  */
  YYSYMBOL_for = 53,                       /* for  */
  YYSYMBOL_54_3 = 54,                      /* $@3  */
  YYSYMBOL_55_4 = 55,                      /* $@4  */
  YYSYMBOL_56_5 = 56,                      /* $@5  */
  YYSYMBOL_if = 57,                        /* if  */
  YYSYMBOL_58_6 = 58,                      /* $@6  */
  YYSYMBOL_59_7 = 59,                      /* $@7  */
  YYSYMBOL_else = 60,                      /* else  */
  YYSYMBOL_while = 61,                     /* while  */
  YYSYMBOL_62_8 = 62,                      /* $@8  */
  YYSYMBOL_63_9 = 63,                      /* $@9  */
  YYSYMBOL_assign = 64,                    /* assign  */
  YYSYMBOL_condition = 65,                 /* condition  */
  YYSYMBOL_66_10 = 66,                     /* $@10  */
  YYSYMBOL_67_11 = 67,                     /* $@11  */
  YYSYMBOL_68_12 = 68,                     /* $@12  */
  YYSYMBOL_69_13 = 69,                     /* $@13  */
  YYSYMBOL_70_14 = 70,                     /* $@14  */
  YYSYMBOL_71_15 = 71,                     /* $@15  */
  YYSYMBOL_72_16 = 72,                     /* $@16  */
  YYSYMBOL_73_17 = 73,                     /* $@17  */
  YYSYMBOL_74_18 = 74,                     /* $@18  */
  YYSYMBOL_75_19 = 75,                     /* $@19  */
  YYSYMBOL_76_20 = 76,                     /* $@20  */
  YYSYMBOL_77_21 = 77,                     /* $@21  */
  YYSYMBOL_78_22 = 78,                     /* $@22  */
  YYSYMBOL_79_23 = 79,                     /* $@23  */
  YYSYMBOL_80_24 = 80,                     /* $@24  */
  YYSYMBOL_81_25 = 81,                     /* $@25  */
  YYSYMBOL_82_26 = 82,                     /* $@26  */
  YYSYMBOL_83_27 = 83,                     /* $@27  */
  YYSYMBOL_84_28 = 84,                     /* $@28  */
  YYSYMBOL_85_29 = 85,                     /* $@29  */
  YYSYMBOL_assignment = 86,                /* assignment  */
  YYSYMBOL_87_30 = 87,                     /* $@30  */
  YYSYMBOL_88_31 = 88,                     /* $@31  */
  YYSYMBOL_89_32 = 89,                     /* $@32  */
  YYSYMBOL_CONSTANT_TYPE = 90,             /* CONSTANT_TYPE  */
  YYSYMBOL_Dec = 91,                       /* Dec  */
  YYSYMBOL_92_33 = 92,                     /* $@33  */
  YYSYMBOL_93_34 = 93,                     /* $@34  */
  YYSYMBOL_94_35 = 94,                     /* $@35  */
  YYSYMBOL_array = 95,                     /* array  */
  YYSYMBOL_96_36 = 96,                     /* $@36  */
  YYSYMBOL_var = 97,                       /* var  */
  YYSYMBOL_98_37 = 98,                     /* $@37  */
  YYSYMBOL_99_38 = 99,                     /* $@38  */
  YYSYMBOL_J = 100,                        /* J  */
  YYSYMBOL_101_39 = 101                    /* $@39  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   201

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  187

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   282


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      35,    36,    33,    31,    40,    32,     2,    34,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    39,
      28,    30,    29,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    41,     2,    42,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
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
      25,    26,    27
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   182,   182,   183,   184,   186,   206,   207,   208,   209,
     210,   212,   214,   215,   217,   218,   219,   220,   221,   222,
     223,   233,   234,   235,   237,   237,   237,   240,   240,   240,
     240,   243,   243,   243,   246,   247,   249,   249,   249,   251,
     252,   253,   254,   255,   256,   258,   258,   259,   259,   260,
     261,   261,   261,   262,   262,   262,   263,   263,   263,   264,
     264,   264,   265,   265,   265,   266,   266,   266,   267,   267,
     267,   268,   268,   268,   269,   269,   269,   270,   272,   272,
     272,   272,   289,   293,   294,   298,   300,   301,   302,   303,
     305,   305,   305,   305,   336,   348,   353,   354,   357,   357,
     360,   360,   361,   361,   362,   364,   365,   365,   366,   367
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
  "\"end of file\"", "error", "\"invalid token\"", "INT", "FLOAT", "CHAR",
  "STRING", "LET", "IDENTIFIER", "NUM", "FLOAT_LIT", "STRING_LIT", "LE",
  "GE", "EQ", "NEQ", "AND", "OR", "CHAR_LIT", "WHILE", "IF", "RETURN",
  "WRITE", "FUNCTION", "DO", "ARRAY", "ELSE", "FOR", "'<'", "'>'", "'='",
  "'+'", "'-'", "'*'", "'/'", "'('", "')'", "'{'", "'}'", "';'", "','",
  "'['", "']'", "$accept", "S", "Func", "Type", "NestedSTMT", "STMTS",
  "STMT", "dowhile", "$@1", "$@2", "for", "$@3", "$@4", "$@5", "if", "$@6",
  "$@7", "else", "while", "$@8", "$@9", "assign", "condition", "$@10",
  "$@11", "$@12", "$@13", "$@14", "$@15", "$@16", "$@17", "$@18", "$@19",
  "$@20", "$@21", "$@22", "$@23", "$@24", "$@25", "$@26", "$@27", "$@28",
  "$@29", "assignment", "$@30", "$@31", "$@32", "CONSTANT_TYPE", "Dec",
  "$@33", "$@34", "$@35", "array", "$@36", "var", "$@37", "$@38", "J",
  "$@39", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-76)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-99)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     151,   -76,   -76,   -76,   -76,   -76,   -76,    85,   -76,   -76,
     -76,   -76,     2,   151,     8,   -17,     9,   151,    -1,    -1,
      34,   -76,   -76,    13,   -76,    -1,   -76,   -10,   -76,    49,
     -76,    36,    77,    62,   -76,    64,    18,    69,   -19,    59,
      72,   -76,   -76,    27,   -76,    18,    14,   -76,   -76,    50,
     -76,   -76,   -76,    87,    77,    77,    88,    77,    18,    95,
     119,   124,   123,   128,   122,   117,   139,   116,   112,   132,
      68,   -76,   -76,   -76,   -76,   -76,   110,   -76,   -76,   -76,
     -76,   -76,    14,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,    18,   -76,   -76,   -76,   132,   132,   132,   132,
      30,   -76,   144,    87,   145,   -76,   146,   -76,   -76,   155,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   136,    18,    18,
      18,    18,    18,    18,    18,    18,    18,   -27,    50,    50,
     -76,   -76,   141,   147,    18,   148,   172,    69,    18,   143,
     -76,    14,    14,    14,    14,    14,    14,    14,    14,    14,
     -76,   149,    18,   134,   -76,   150,   166,    14,   -76,   140,
     -76,   152,   154,   153,   -76,    69,   -76,    18,    18,    69,
     -76,   142,    14,   -76,   164,   -76,   156,    69,   -76,   157,
      18,   -76,   -76,    14,   158,    69,   -76
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    97,     6,     7,     8,     9,    10,    78,    86,    87,
      89,    88,     0,     0,     0,     0,    85,     0,     0,     0,
       0,     1,     2,    90,    94,     0,     3,    84,    82,     0,
      79,     0,     0,     0,    83,     0,     0,     0,    43,     0,
      44,    91,    96,   108,   106,     0,    80,   109,    77,    49,
     104,    13,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    45,    47,    81,   100,   102,     0,    39,    40,    41,
      95,    42,    92,    51,    54,    57,    60,    63,    66,    69,
      72,    75,     0,   108,   107,   105,     0,     0,     0,     0,
      78,    36,     0,     0,     0,    24,     0,    11,    21,     0,
      23,    12,    17,    19,    15,    18,    14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,    48,
     101,   103,     0,     0,     0,     0,     0,     0,     0,    90,
      93,    52,    55,    58,    61,    64,    67,    70,    73,    76,
      99,     0,     0,     0,    20,     0,     0,    27,    16,     0,
      31,     0,     0,     0,    37,     0,    22,     0,     0,     0,
      32,     0,    28,    38,    35,    25,     0,     0,    33,     0,
       0,    34,    26,    29,     0,     0,    30
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -76,     1,   -76,   121,   -75,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -20,   -45,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,    33,   -76,   -76,   -76,     6,   125,   -76,
     -76,   -76,   -76,   -76,   -30,   -76,   -76,   -66,   -76
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    12,    13,    14,    52,    76,   111,   112,   137,   179,
     113,   163,   176,   184,   114,   165,   174,   178,   115,   133,
     169,    39,    46,    96,    97,    59,   118,    60,   119,    61,
     120,    62,   121,    63,   122,    64,   123,    65,   124,    66,
     125,    67,   126,    15,    20,    36,    73,    47,    17,    33,
      58,   117,    48,    68,    49,    98,    99,    50,    69
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      70,   110,    21,    94,    71,    72,    16,    27,     8,     9,
      10,    53,    54,    82,    22,   150,    23,    11,    26,    16,
     -78,    55,    24,    16,    16,    16,    43,     8,     9,    10,
      18,    16,   130,   131,    78,    79,    11,    81,    40,   -56,
     -50,   -53,   -59,   -62,   -65,    71,    72,   127,    31,    25,
      44,    28,    29,    45,    32,   -68,   -71,   -74,    34,    77,
      40,    40,   156,    40,    30,   132,   128,   129,   -98,   -84,
      18,    19,    37,   141,   142,   143,   144,   145,   146,   147,
     148,   149,    16,    74,    75,    38,     8,     9,    10,   153,
     170,    35,    41,   157,   173,    11,     8,     9,    10,    71,
      72,    56,   181,    42,    95,    11,    51,   159,    83,   135,
     186,     1,    57,     2,     3,     4,     5,     6,   100,     8,
       9,    10,   171,   172,   -84,    18,    19,    80,    11,   101,
     102,   103,   104,    84,   105,   183,    85,   106,    86,    88,
      93,     8,     9,    10,    87,    89,    91,    51,   107,   108,
      11,    -4,     1,    92,     2,     3,     4,     5,     6,     7,
       8,     9,    10,   139,    44,    71,    72,    45,    90,    11,
     160,    71,    72,    71,    72,   140,   164,   151,   175,   134,
     136,   138,   152,   155,    32,   162,   161,   154,   158,   167,
     177,   166,   168,     0,   185,   180,   182,   109,     0,     0,
       0,   116
};

static const yytype_int16 yycheck[] =
{
      45,    76,     0,    69,    31,    32,     0,     8,     9,    10,
      11,    30,    31,    58,    13,    42,     8,    18,    17,    13,
      30,    40,    39,    17,    18,    19,     8,     9,    10,    11,
      40,    25,    98,    99,    54,    55,    18,    57,    32,    12,
      13,    14,    15,    16,    17,    31,    32,    92,    35,    40,
      32,    18,    19,    35,    41,    28,    29,    30,    25,    53,
      54,    55,   137,    57,    30,    35,    96,    97,    41,    39,
      40,    41,    36,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    76,    33,    34,     8,     9,    10,    11,   134,
     165,    42,    30,   138,   169,    18,     9,    10,    11,    31,
      32,    42,   177,    39,    36,    18,    37,   152,    13,   103,
     185,     1,    40,     3,     4,     5,     6,     7,     8,     9,
      10,    11,   167,   168,    39,    40,    41,    39,    18,    19,
      20,    21,    22,    14,    24,   180,    12,    27,    15,    17,
       8,     9,    10,    11,    16,    28,    30,    37,    38,    39,
      18,     0,     1,    41,     3,     4,     5,     6,     7,     8,
       9,    10,    11,     8,    32,    31,    32,    35,    29,    18,
      36,    31,    32,    31,    32,    39,    36,    36,    36,    35,
      35,    35,    35,    11,    41,    19,    36,    39,    39,    35,
      26,    39,    39,    -1,    36,    39,    39,    76,    -1,    -1,
      -1,    76
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    18,    44,    45,    46,    86,    90,    91,    40,    41,
      87,     0,    44,     8,    39,    40,    44,     8,    86,    86,
      30,    35,    41,    92,    86,    42,    88,    36,     8,    64,
      90,    30,    39,     8,    32,    35,    65,    90,    95,    97,
     100,    37,    47,    30,    31,    40,    42,    40,    93,    68,
      70,    72,    74,    76,    78,    80,    82,    84,    96,   101,
      65,    31,    32,    89,    33,    34,    48,    90,    64,    64,
      39,    64,    65,    13,    14,    12,    15,    16,    17,    28,
      29,    30,    41,     8,   100,    36,    66,    67,    98,    99,
       8,    19,    20,    21,    22,    24,    27,    38,    39,    46,
      47,    49,    50,    53,    57,    61,    91,    94,    69,    71,
      73,    75,    77,    79,    81,    83,    85,    65,    97,    97,
     100,   100,    35,    62,    35,    90,    35,    51,    35,     8,
      39,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      42,    36,    35,    65,    39,    11,    47,    65,    39,    65,
      36,    36,    19,    54,    36,    58,    39,    35,    39,    63,
      47,    65,    65,    47,    59,    36,    55,    26,    60,    52,
      39,    47,    39,    65,    56,    36,    47
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    44,    45,    46,    46,    46,    46,
      46,    47,    48,    48,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    51,    52,    50,    54,    55,    56,
      53,    58,    59,    57,    60,    60,    62,    63,    61,    64,
      64,    64,    64,    64,    64,    66,    65,    67,    65,    65,
      68,    69,    65,    70,    71,    65,    72,    73,    65,    74,
      75,    65,    76,    77,    65,    78,    79,    65,    80,    81,
      65,    82,    83,    65,    84,    85,    65,    65,    87,    88,
      89,    86,    86,    86,    86,    86,    90,    90,    90,    90,
      92,    93,    94,    91,    91,    91,    91,    91,    96,    95,
      98,    97,    99,    97,    97,   100,   101,   100,   100,   100
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,     5,     1,     1,     1,     1,
       1,     3,     2,     0,     1,     1,     4,     1,     1,     1,
       3,     1,     5,     1,     0,     0,     9,     0,     0,     0,
      12,     0,     0,     8,     2,     0,     0,     0,     7,     3,
       3,     3,     3,     1,     1,     0,     4,     0,     4,     1,
       0,     0,     5,     0,     0,     5,     0,     0,     5,     0,
       0,     5,     0,     0,     5,     0,     0,     5,     0,     0,
       5,     0,     0,     5,     0,     0,     5,     1,     0,     0,
       0,     6,     3,     3,     1,     1,     1,     1,     1,     1,
       0,     0,     0,     8,     2,     6,     5,     1,     0,     5,
       0,     4,     0,     4,     1,     3,     0,     3,     1,     1
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
  case 5: /* Func: Type IDENTIFIER '(' ')' NestedSTMT  */
#line 186 "Assignment.y"
                                          {
	if(strcmp((yyvsp[-3].str),"func")!=0)
	{
		printf("GOTO J%d\n",lineno);
	}
	if ((yyvsp[-4].ival)!=returntype_func(store))
	{
		printf("\nError Line %d\n",printline());
	}

	if (!(strcmp((yyvsp[-3].str),"System.Console.WriteLine") && strcmp((yyvsp[-3].str),"Console.ReadLine"))) 
		printf("Error %s : Line %d\n",(yyvsp[-3].str),printline()); 
	else 
	{ 
		insert((yyvsp[-3].str),FUNCTION,size); 
		insert((yyvsp[-3].str),(yyvsp[-4].ival),size); 
		size+=4;
	}
	}
#line 1477 "Assignment.tab.c"
    break;

  case 20: /* STMT: RETURN CONSTANT_TYPE ';'  */
#line 223 "Assignment.y"
                                   {
					if(!(strspn((yyvsp[-1].str),"0123456789")==strlen((yyvsp[-1].str)))) 
						storereturn(store,FLOAT); 
					else if (!(strspn((yyvsp[-1].str),"0123456789")==strlen((yyvsp[-1].str))))
						 storereturn(store,CHAR);
						 
					else    
					        storereturn(store,INT);
					           store++;
					}
#line 1492 "Assignment.tab.c"
    break;

  case 24: /* $@1: %empty  */
#line 237 "Assignment.y"
             {dowhileloop1();}
#line 1498 "Assignment.tab.c"
    break;

  case 25: /* $@2: %empty  */
#line 237 "Assignment.y"
                                                                  {dowhileloop2();}
#line 1504 "Assignment.tab.c"
    break;

  case 27: /* $@3: %empty  */
#line 240 "Assignment.y"
                            {forloop1();}
#line 1510 "Assignment.tab.c"
    break;

  case 28: /* $@4: %empty  */
#line 240 "Assignment.y"
                                                        {forloop2();}
#line 1516 "Assignment.tab.c"
    break;

  case 29: /* $@5: %empty  */
#line 240 "Assignment.y"
                                                                                   {forloop3();}
#line 1522 "Assignment.tab.c"
    break;

  case 30: /* for: FOR '(' condition $@3 ';' condition $@4 ';' condition $@5 ')' NestedSTMT  */
#line 240 "Assignment.y"
                                                                                                                {forloop4();}
#line 1528 "Assignment.tab.c"
    break;

  case 31: /* $@6: %empty  */
#line 243 "Assignment.y"
                              {ifloop1();}
#line 1534 "Assignment.tab.c"
    break;

  case 32: /* $@7: %empty  */
#line 243 "Assignment.y"
                                                      {ifloop2();}
#line 1540 "Assignment.tab.c"
    break;

  case 34: /* else: ELSE NestedSTMT  */
#line 246 "Assignment.y"
                       {ifloop3();}
#line 1546 "Assignment.tab.c"
    break;

  case 36: /* $@8: %empty  */
#line 249 "Assignment.y"
              {whileloop1();}
#line 1552 "Assignment.tab.c"
    break;

  case 37: /* $@9: %empty  */
#line 249 "Assignment.y"
                                               {whileloop2();}
#line 1558 "Assignment.tab.c"
    break;

  case 38: /* while: WHILE $@8 '(' condition ')' $@9 NestedSTMT  */
#line 249 "Assignment.y"
                                                                          {whileloop3();}
#line 1564 "Assignment.tab.c"
    break;

  case 45: /* $@10: %empty  */
#line 258 "Assignment.y"
                         {strcpy(st1[++top],"+");}
#line 1570 "Assignment.tab.c"
    break;

  case 46: /* condition: condition '+' $@10 var  */
#line 258 "Assignment.y"
                                                      {codegen();}
#line 1576 "Assignment.tab.c"
    break;

  case 47: /* $@11: %empty  */
#line 259 "Assignment.y"
                  {strcpy(st1[++top],"-");}
#line 1582 "Assignment.tab.c"
    break;

  case 48: /* condition: condition '-' $@11 var  */
#line 259 "Assignment.y"
                                               {codegen();}
#line 1588 "Assignment.tab.c"
    break;

  case 50: /* $@12: %empty  */
#line 261 "Assignment.y"
                {push((yyvsp[0].str));}
#line 1594 "Assignment.tab.c"
    break;

  case 51: /* $@13: %empty  */
#line 261 "Assignment.y"
                               {strcpy(st1[++top],">=");}
#line 1600 "Assignment.tab.c"
    break;

  case 52: /* condition: IDENTIFIER $@12 GE $@13 condition  */
#line 261 "Assignment.y"
                                                                    {codegen();}
#line 1606 "Assignment.tab.c"
    break;

  case 53: /* $@14: %empty  */
#line 262 "Assignment.y"
                {push((yyvsp[0].str));}
#line 1612 "Assignment.tab.c"
    break;

  case 54: /* $@15: %empty  */
#line 262 "Assignment.y"
                               {strcpy(st1[++top],"==");}
#line 1618 "Assignment.tab.c"
    break;

  case 55: /* condition: IDENTIFIER $@14 EQ $@15 condition  */
#line 262 "Assignment.y"
                                                                    {codegen();}
#line 1624 "Assignment.tab.c"
    break;

  case 56: /* $@16: %empty  */
#line 263 "Assignment.y"
                {push((yyvsp[0].str));}
#line 1630 "Assignment.tab.c"
    break;

  case 57: /* $@17: %empty  */
#line 263 "Assignment.y"
                               {strcpy(st1[++top],"<=");}
#line 1636 "Assignment.tab.c"
    break;

  case 58: /* condition: IDENTIFIER $@16 LE $@17 condition  */
#line 263 "Assignment.y"
                                                                    {codegen();}
#line 1642 "Assignment.tab.c"
    break;

  case 59: /* $@18: %empty  */
#line 264 "Assignment.y"
                {push((yyvsp[0].str));}
#line 1648 "Assignment.tab.c"
    break;

  case 60: /* $@19: %empty  */
#line 264 "Assignment.y"
                                {strcpy(st1[++top],"!=");}
#line 1654 "Assignment.tab.c"
    break;

  case 61: /* condition: IDENTIFIER $@18 NEQ $@19 condition  */
#line 264 "Assignment.y"
                                                                     {codegen();}
#line 1660 "Assignment.tab.c"
    break;

  case 62: /* $@20: %empty  */
#line 265 "Assignment.y"
                {push((yyvsp[0].str));}
#line 1666 "Assignment.tab.c"
    break;

  case 63: /* $@21: %empty  */
#line 265 "Assignment.y"
                                {strcpy(st1[++top],"&&");}
#line 1672 "Assignment.tab.c"
    break;

  case 64: /* condition: IDENTIFIER $@20 AND $@21 condition  */
#line 265 "Assignment.y"
                                                                     {codegen();}
#line 1678 "Assignment.tab.c"
    break;

  case 65: /* $@22: %empty  */
#line 266 "Assignment.y"
                {push((yyvsp[0].str));}
#line 1684 "Assignment.tab.c"
    break;

  case 66: /* $@23: %empty  */
#line 266 "Assignment.y"
                               {strcpy(st1[++top],"||");}
#line 1690 "Assignment.tab.c"
    break;

  case 67: /* condition: IDENTIFIER $@22 OR $@23 condition  */
#line 266 "Assignment.y"
                                                                    {codegen();}
#line 1696 "Assignment.tab.c"
    break;

  case 68: /* $@24: %empty  */
#line 267 "Assignment.y"
                {push((yyvsp[0].str));}
#line 1702 "Assignment.tab.c"
    break;

  case 69: /* $@25: %empty  */
#line 267 "Assignment.y"
                                {strcpy(st1[++top],"<");}
#line 1708 "Assignment.tab.c"
    break;

  case 70: /* condition: IDENTIFIER $@24 '<' $@25 condition  */
#line 267 "Assignment.y"
                                                                    {codegen();}
#line 1714 "Assignment.tab.c"
    break;

  case 71: /* $@26: %empty  */
#line 268 "Assignment.y"
                {push((yyvsp[0].str));}
#line 1720 "Assignment.tab.c"
    break;

  case 72: /* $@27: %empty  */
#line 268 "Assignment.y"
                                {strcpy(st1[++top],">");}
#line 1726 "Assignment.tab.c"
    break;

  case 73: /* condition: IDENTIFIER $@26 '>' $@27 condition  */
#line 268 "Assignment.y"
                                                                    {codegen();}
#line 1732 "Assignment.tab.c"
    break;

  case 74: /* $@28: %empty  */
#line 269 "Assignment.y"
                {push((yyvsp[0].str));}
#line 1738 "Assignment.tab.c"
    break;

  case 75: /* $@29: %empty  */
#line 269 "Assignment.y"
                                {strcpy(st1[++top],"=");}
#line 1744 "Assignment.tab.c"
    break;

  case 76: /* condition: IDENTIFIER $@28 '=' $@29 condition  */
#line 269 "Assignment.y"
                                                                    {codegen_assign();}
#line 1750 "Assignment.tab.c"
    break;

  case 77: /* condition: array  */
#line 270 "Assignment.y"
           {array1();}
#line 1756 "Assignment.tab.c"
    break;

  case 78: /* $@30: %empty  */
#line 272 "Assignment.y"
                        {push((yyvsp[0].str));}
#line 1762 "Assignment.tab.c"
    break;

  case 79: /* $@31: %empty  */
#line 272 "Assignment.y"
                                        {strcpy(st1[++top],"=");}
#line 1768 "Assignment.tab.c"
    break;

  case 80: /* $@32: %empty  */
#line 272 "Assignment.y"
                                                                            {codegen_assign();}
#line 1774 "Assignment.tab.c"
    break;

  case 81: /* assignment: IDENTIFIER $@30 '=' $@31 condition $@32  */
#line 273 "Assignment.y"
        {
		int scopevalue=returnscope((yyvsp[-5].str),list[i-1]); 
		int type=returntype((yyvsp[-5].str),scopevalue); 
		if((!(strspn((yyvsp[-1].str),"0123456789")==strlen((yyvsp[-1].str)))) && type==257 && flag==0) 
			printf("\nError : Type Mismatch : Line %d\n",printline()); 
		if(!lookup((yyvsp[-5].str))) 
		{ 
			int currscope=list[i-1]; 
			int scope=returnscope((yyvsp[-5].str),currscope); 
			if((scope<=currscope && last[scope]==0) && !(scope==0)) 
			{
				check_scope_update((yyvsp[-5].str),(yyvsp[-1].str),currscope);
			}
		} 
		}
#line 1794 "Assignment.tab.c"
    break;

  case 82: /* assignment: IDENTIFIER ',' assignment  */
#line 289 "Assignment.y"
                                       {
					if(lookup((yyvsp[-2].str))) 
						printf("\nUndeclared Variable %s : Line %d\n",(yyvsp[-2].str),printline());
				}
#line 1803 "Assignment.tab.c"
    break;

  case 84: /* assignment: IDENTIFIER  */
#line 294 "Assignment.y"
                      {
		if(lookup((yyvsp[0].str))) 
			printf("\nUndeclared Variable %s : Line %d\n",(yyvsp[0].str),printline());
		}
#line 1812 "Assignment.tab.c"
    break;

  case 90: /* $@33: %empty  */
#line 305 "Assignment.y"
                      {push((yyvsp[0].str));}
#line 1818 "Assignment.tab.c"
    break;

  case 91: /* $@34: %empty  */
#line 305 "Assignment.y"
                                      {strcpy(st1[++top],"=");}
#line 1824 "Assignment.tab.c"
    break;

  case 92: /* $@35: %empty  */
#line 305 "Assignment.y"
                                                                          {codegen_assign();}
#line 1830 "Assignment.tab.c"
    break;

  case 93: /* Dec: Type IDENTIFIER $@33 '=' $@34 condition $@35 ';'  */
#line 306 "Assignment.y"
        {
		if( (!(strspn((yyvsp[-2].str),"0123456789")==strlen((yyvsp[-2].str)))) && (yyvsp[-7].ival)==257 && (flag==0)) 
		{
			printf("\nError : Type Mismatch : Line %d\n",printline());
			flag=1;
		} 
		if(!lookup((yyvsp[-6].str))) 
		{
			int currscope=list[i-1]; 
			int previous_scope=returnscope((yyvsp[-6].str),currscope); 
			if(currscope==previous_scope) 
				printf("\nError %s : Line %d\n",(yyvsp[-6].str),printline()); 
			else 
			{
				insert_dup((yyvsp[-6].str),(yyvsp[-7].ival),size,currscope);
				check_scope_update((yyvsp[-6].str),(yyvsp[-2].str),list[i-1]);
				int sg=returnscope((yyvsp[-6].str),list[i-1]); 
				size+=4;
			}
		} 
		else 
		{ 
			int scope=list[i-1];  
			insert((yyvsp[-6].str),(yyvsp[-7].ival),size); 
			insertscope((yyvsp[-6].str),scope); 
			check_scope_update((yyvsp[-6].str),(yyvsp[-2].str),list[i-1]);
			size+=4;
		}
	}
#line 1864 "Assignment.tab.c"
    break;

  case 94: /* Dec: assignment ';'  */
#line 336 "Assignment.y"
                          {
				if(!lookup((yyvsp[-1].str))) 
				{ 
					int currscope=list[i-1]; 
					int scope=returnscope((yyvsp[-1].str),currscope); 
					if(!(scope<=currscope && last[scope]==0) || scope==0) 
						printf("\nError : Variable %s out of scope : Line %d\n",(yyvsp[-1].str),printline());
				} 
				else 
					printf("\nError %s : Line %d\n",(yyvsp[-1].str),printline()); 
				}
#line 1880 "Assignment.tab.c"
    break;

  case 95: /* Dec: Type IDENTIFIER '[' assign ']' ';'  */
#line 348 "Assignment.y"
                                             {
						insert((yyvsp[-4].str),ARRAY,size); 
						insert((yyvsp[-4].str),(yyvsp[-5].ival),size); 
						size=size+4; 
					}
#line 1890 "Assignment.tab.c"
    break;

  case 98: /* $@36: %empty  */
#line 357 "Assignment.y"
                   {push((yyvsp[0].str));}
#line 1896 "Assignment.tab.c"
    break;

  case 100: /* $@37: %empty  */
#line 360 "Assignment.y"
             {strcpy(st1[++top],"*");}
#line 1902 "Assignment.tab.c"
    break;

  case 101: /* var: var '*' $@37 J  */
#line 360 "Assignment.y"
                                        {codegen();}
#line 1908 "Assignment.tab.c"
    break;

  case 102: /* $@38: %empty  */
#line 361 "Assignment.y"
            {strcpy(st1[++top],"/");}
#line 1914 "Assignment.tab.c"
    break;

  case 103: /* var: var '/' $@38 J  */
#line 361 "Assignment.y"
                                       {codegen();}
#line 1920 "Assignment.tab.c"
    break;

  case 105: /* J: '(' condition ')'  */
#line 364 "Assignment.y"
                      {(yyval.str)=(yyvsp[-1].str);}
#line 1926 "Assignment.tab.c"
    break;

  case 106: /* $@39: %empty  */
#line 365 "Assignment.y"
        {strcpy(st1[++top],"-");}
#line 1932 "Assignment.tab.c"
    break;

  case 107: /* J: '-' $@39 J  */
#line 365 "Assignment.y"
                                   {codegen_umin();}
#line 1938 "Assignment.tab.c"
    break;

  case 108: /* J: IDENTIFIER  */
#line 366 "Assignment.y"
                {push((yyvsp[0].str));flag=1;}
#line 1944 "Assignment.tab.c"
    break;

  case 109: /* J: CONSTANT_TYPE  */
#line 367 "Assignment.y"
                   {push((yyvsp[0].str));}
#line 1950 "Assignment.tab.c"
    break;


#line 1954 "Assignment.tab.c"

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

#line 370 "Assignment.y"

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
