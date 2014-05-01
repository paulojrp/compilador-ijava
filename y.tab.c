/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ijparser.y" /* yacc.c:339  */

#include<stdio.h>
#include<string.h>
#include "ijparser.h"

extern int colunaAux;
extern int linhaAux;
extern char* yytext;

Program* program;
int hasErrors = 0;

#line 79 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PRINT = 258,
    PARSEINT = 259,
    RETURN = 260,
    DOTLENGTH = 261,
    INT = 262,
    BOOL = 263,
    VOID = 264,
    STRING = 265,
    NEW = 266,
    IF = 267,
    ELSE = 268,
    WHILE = 269,
    CLASS = 270,
    PUBLIC = 271,
    STATIC = 272,
    OCURV = 273,
    CCURV = 274,
    OBRACE = 275,
    CBRACE = 276,
    OSQUARE = 277,
    CSQUARE = 278,
    NOT = 279,
    ASSIGN = 280,
    SEMIC = 281,
    COMMA = 282,
    RESERVED = 283,
    OP1 = 284,
    OP2 = 285,
    OP3 = 286,
    OP4 = 287,
    INTLIT = 288,
    BOOLLIT = 289,
    ID = 290,
    EXPR = 291,
    IFX = 292,
    OPERSX = 293
  };
#endif
/* Tokens.  */
#define PRINT 258
#define PARSEINT 259
#define RETURN 260
#define DOTLENGTH 261
#define INT 262
#define BOOL 263
#define VOID 264
#define STRING 265
#define NEW 266
#define IF 267
#define ELSE 268
#define WHILE 269
#define CLASS 270
#define PUBLIC 271
#define STATIC 272
#define OCURV 273
#define CCURV 274
#define OBRACE 275
#define CBRACE 276
#define OSQUARE 277
#define CSQUARE 278
#define NOT 279
#define ASSIGN 280
#define SEMIC 281
#define COMMA 282
#define RESERVED 283
#define OP1 284
#define OP2 285
#define OP3 286
#define OP4 287
#define INTLIT 288
#define BOOLLIT 289
#define ID 290
#define EXPR 291
#define IFX 292
#define OPERSX 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 93 "ijparser.y" /* yacc.c:355  */

	Program* program;
	Declaration* declaration;
	Statement* statement;
	VarDecl* var;
    Ids* ids;
    Exp* exp;
    Type type;
    ExpType expType;

	char* string;
	int number;

#line 209 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 224 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   182

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  131

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   108,   108,   110,   111,   113,   114,   116,   117,   119,
     121,   123,   124,   125,   126,   128,   129,   130,   132,   133,
     135,   136,   138,   140,   142,   143,   145,   146,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   158,   160,   161,
     163,   164,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   178,   179,   180,   181,   183,   184,   186,
     187,   189,   190,   192,   193,   195,   196
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRINT", "PARSEINT", "RETURN",
  "DOTLENGTH", "INT", "BOOL", "VOID", "STRING", "NEW", "IF", "ELSE",
  "WHILE", "CLASS", "PUBLIC", "STATIC", "OCURV", "CCURV", "OBRACE",
  "CBRACE", "OSQUARE", "CSQUARE", "NOT", "ASSIGN", "SEMIC", "COMMA",
  "RESERVED", "OP1", "OP2", "OP3", "OP4", "INTLIT", "BOOLLIT", "ID",
  "EXPR", "IFX", "OPERSX", "$accept", "program", "declarations",
  "declarationList", "declaration", "fieldDecl", "methodDecl",
  "statements", "params", "paramList", "varList", "param", "varDecl",
  "ids", "stateList", "statement", "ifState", "optionalExp", "expr",
  "safeExpr", "opers", "optionalArgs", "args", "type", "varType",
  "numType", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293
};
# endif

#define YYPACT_NINF -77

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-77)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -13,   -22,    19,    -3,   -77,    38,     4,    55,     9,   -77,
      38,   -77,   -77,     0,   -77,   -77,   -77,   -10,    18,   -77,
     -77,   -77,    11,   -77,    23,    35,    44,    50,   -10,   -77,
     -77,    97,   -77,    48,    53,   -77,    67,    40,    72,    57,
      55,   -77,    61,    -2,   -77,   -77,    85,    47,    88,    91,
      17,    34,    94,    29,    55,   -77,    29,   108,    47,   105,
      55,    47,    47,    47,   -77,   -77,   120,   110,   124,   117,
      47,    47,   -77,   119,    47,    47,   -77,   -77,   -77,   -77,
      29,    54,   116,   135,    60,   -77,   131,    47,   -77,   -77,
     -77,   -77,   -77,   -77,    47,    47,    68,    82,   -77,    87,
      96,   -77,   138,   147,    47,   -77,   102,   151,   -77,   124,
     114,    29,    29,   146,   -77,   -77,    47,   118,    47,   -77,
     -77,   -77,   -77,    47,   129,   -77,   -77,   136,   153,   -77,
     -77
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     4,     0,     0,     0,     3,
       6,     7,     8,     0,    65,    66,     9,     0,    63,     2,
       5,    61,     0,    62,    25,     0,     0,     0,     0,    23,
      64,    17,    24,     0,     0,    16,    19,     0,     0,     0,
       0,    22,     0,    14,    18,    15,     0,    39,     0,     0,
       0,     0,     0,    12,    21,    13,    27,    29,     0,     0,
       0,     0,     0,     0,    45,    46,    44,     0,    38,    41,
       0,     0,    31,     0,     0,     0,    10,    11,    20,    26,
       0,     0,     0,     0,     0,    49,    48,    58,    36,    47,
      53,    54,    55,    56,     0,     0,     0,     0,    30,     0,
       0,    28,     0,     0,     0,    52,    60,     0,    57,    42,
       0,     0,     0,     0,    34,    33,     0,     0,     0,    51,
      43,    37,    32,     0,     0,    40,    59,     0,     0,    35,
      50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -77,   -77,   -77,   163,   -77,   -77,   -77,   -77,   -77,   134,
     121,   -77,   169,   149,   -11,   -76,   -77,   -77,   -47,   -77,
     -77,   -77,    62,   -77,    13,   122
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     8,     9,    10,    11,    12,    52,    34,    35,
      53,    36,    54,    25,    55,    56,    57,    67,   106,    69,
      94,   107,   108,    22,    17,    18
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      68,    46,     1,    47,   101,    14,    15,    14,    15,    21,
      48,    81,    49,     3,    84,    85,    86,     5,    50,     4,
      46,    13,    47,    96,    97,    24,    23,    99,   100,    48,
      19,    49,    46,    51,    47,   121,   122,    50,    72,    73,
      26,    48,    77,    49,    37,    79,    27,   109,   110,    50,
      28,    59,    51,    37,     6,     7,    74,   117,    60,    75,
      89,    29,    14,    15,    51,    61,    89,    30,    31,   124,
      38,    62,    39,   102,    89,    41,   127,    43,    63,   105,
      64,    65,    66,    90,    91,    92,    93,   111,    89,    90,
      91,    92,    93,    89,    40,    42,    45,    90,    91,    92,
      93,   112,    89,    58,    14,    15,    70,    33,    89,    71,
     113,    90,    91,    92,    93,    76,    90,    91,    92,    93,
      89,    80,   114,    82,    89,    90,    91,    92,    93,   118,
      89,    90,    91,    92,    93,    89,    88,   120,    87,    95,
      98,   125,    89,    90,    91,    92,    93,    90,    91,    92,
      93,   103,   128,    90,    91,    92,    93,   104,    90,    91,
      92,    93,   129,    93,   115,    90,    91,    92,    93,   116,
     119,   123,   130,    20,    44,    78,    16,    32,     0,     0,
     126,     0,    83
};

static const yytype_int8 yycheck[] =
{
      47,     3,    15,     5,    80,     7,     8,     7,     8,     9,
      12,    58,    14,    35,    61,    62,    63,    20,    20,     0,
       3,    17,     5,    70,    71,    35,    13,    74,    75,    12,
      21,    14,     3,    35,     5,   111,   112,    20,    21,    50,
      22,    12,    53,    14,    31,    56,    35,    94,    95,    20,
      27,     4,    35,    40,    16,    17,    22,   104,    11,    25,
       6,    26,     7,     8,    35,    18,     6,    23,    18,   116,
      22,    24,    19,    19,     6,    35,   123,    20,    31,    19,
      33,    34,    35,    29,    30,    31,    32,    19,     6,    29,
      30,    31,    32,     6,    27,    23,    35,    29,    30,    31,
      32,    19,     6,    18,     7,     8,    18,    10,     6,    18,
      23,    29,    30,    31,    32,    21,    29,    30,    31,    32,
       6,    13,    26,    18,     6,    29,    30,    31,    32,    27,
       6,    29,    30,    31,    32,     6,    26,    23,    18,    22,
      21,    23,     6,    29,    30,    31,    32,    29,    30,    31,
      32,    35,    23,    29,    30,    31,    32,    22,    29,    30,
      31,    32,    26,    32,    26,    29,    30,    31,    32,    22,
      19,    25,    19,    10,    40,    54,     7,    28,    -1,    -1,
     118,    -1,    60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    40,    35,     0,    20,    16,    17,    41,    42,
      43,    44,    45,    17,     7,     8,    51,    63,    64,    21,
      42,     9,    62,    63,    35,    52,    22,    35,    27,    26,
      23,    18,    52,    10,    47,    48,    50,    63,    22,    19,
      27,    35,    23,    20,    48,    35,     3,     5,    12,    14,
      20,    35,    46,    49,    51,    53,    54,    55,    18,     4,
      11,    18,    24,    31,    33,    34,    35,    56,    57,    58,
      18,    18,    21,    53,    22,    25,    21,    53,    49,    53,
      13,    57,    18,    64,    57,    57,    57,    18,    26,     6,
      29,    30,    31,    32,    59,    22,    57,    57,    21,    57,
      57,    54,    19,    35,    22,    19,    57,    60,    61,    57,
      57,    19,    19,    23,    26,    26,    22,    57,    27,    19,
      23,    54,    54,    25,    57,    23,    61,    57,    23,    26,
      19
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    39,    40,    41,    41,    42,    42,    43,    43,    44,
      45,    46,    46,    46,    46,    47,    47,    47,    48,    48,
      49,    49,    50,    51,    52,    52,    53,    53,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    55,    56,    56,
      57,    57,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    59,    59,    59,    59,    60,    60,    61,
      61,    62,    62,    63,    63,    64,    64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     1,     0,     2,     1,     1,     1,     2,
      10,     2,     1,     1,     0,     4,     1,     0,     3,     1,
       2,     1,     2,     3,     3,     1,     2,     1,     3,     1,
       3,     2,     5,     5,     4,     7,     3,     5,     1,     0,
       5,     1,     3,     4,     1,     1,     1,     2,     2,     2,
       7,     4,     3,     1,     1,     1,     1,     1,     0,     3,
       1,     1,     1,     1,     3,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 108 "ijparser.y" /* yacc.c:1646  */
    {program = newProgram((yyvsp[-3].string), (yyvsp[-1].declaration));}
#line 1402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 110 "ijparser.y" /* yacc.c:1646  */
    {(yyval.declaration) = (yyvsp[0].declaration); }
#line 1408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 111 "ijparser.y" /* yacc.c:1646  */
    {(yyval.declaration) = NULL;}
#line 1414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 113 "ijparser.y" /* yacc.c:1646  */
    {(yyval.declaration) = connectDeclaration((yyvsp[-1].declaration), (yyvsp[0].declaration));}
#line 1420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 114 "ijparser.y" /* yacc.c:1646  */
    {(yyval.declaration) = (yyvsp[0].declaration);}
#line 1426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 116 "ijparser.y" /* yacc.c:1646  */
    {(yyval.declaration) = (yyvsp[0].declaration);}
#line 1432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 117 "ijparser.y" /* yacc.c:1646  */
    {(yyval.declaration) = (yyvsp[0].declaration);}
#line 1438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 119 "ijparser.y" /* yacc.c:1646  */
    {(yyval.declaration) = newFieldDecl((yyvsp[0].var));}
#line 1444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 121 "ijparser.y" /* yacc.c:1646  */
    {(yyval.declaration) = declareMethod((yyvsp[-7].type), (yyvsp[-6].string), (yyvsp[-4].var), (yyvsp[-1].declaration));}
#line 1450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 123 "ijparser.y" /* yacc.c:1646  */
    {(yyval.declaration) = newMethod((yyvsp[-1].var), (yyvsp[0].statement));}
#line 1456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 124 "ijparser.y" /* yacc.c:1646  */
    {(yyval.declaration) = newMethod((yyvsp[0].var), NULL);}
#line 1462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 125 "ijparser.y" /* yacc.c:1646  */
    {(yyval.declaration) = newMethod(NULL, (yyvsp[0].statement));}
#line 1468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 126 "ijparser.y" /* yacc.c:1646  */
    {(yyval.declaration) = newMethod(NULL, NULL);}
#line 1474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 128 "ijparser.y" /* yacc.c:1646  */
    {(yyval.var) = newVarDecl(StringArray, newIds((yyvsp[0].string)));}
#line 1480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 129 "ijparser.y" /* yacc.c:1646  */
    {(yyval.var) = (yyvsp[0].var);}
#line 1486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 130 "ijparser.y" /* yacc.c:1646  */
    {(yyval.var) = NULL;}
#line 1492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 132 "ijparser.y" /* yacc.c:1646  */
    {(yyval.var) = connectVarDecl((yyvsp[-2].var), (yyvsp[0].var));}
#line 1498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 133 "ijparser.y" /* yacc.c:1646  */
    {(yyval.var) = (yyvsp[0].var);}
#line 1504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 135 "ijparser.y" /* yacc.c:1646  */
    {(yyval.var) = connectVarDecl((yyvsp[-1].var), (yyvsp[0].var));}
#line 1510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 136 "ijparser.y" /* yacc.c:1646  */
    {(yyval.var) = (yyvsp[0].var);}
#line 1516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 138 "ijparser.y" /* yacc.c:1646  */
    {(yyval.var) = newVarDecl((yyvsp[-1].type), newIds((yyvsp[0].string)));}
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 140 "ijparser.y" /* yacc.c:1646  */
    {(yyval.var) = newVarDecl((yyvsp[-2].type), (yyvsp[-1].ids));}
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 142 "ijparser.y" /* yacc.c:1646  */
    {(yyval.ids) = connectIds(newIds((yyvsp[-2].string)), (yyvsp[0].ids));}
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 143 "ijparser.y" /* yacc.c:1646  */
    {(yyval.ids) = newIds((yyvsp[0].string));}
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 145 "ijparser.y" /* yacc.c:1646  */
    {(yyval.statement) = connectStatement((yyvsp[-1].statement), (yyvsp[0].statement));}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 146 "ijparser.y" /* yacc.c:1646  */
    {(yyval.statement) = (yyvsp[0].statement);}
#line 1552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 148 "ijparser.y" /* yacc.c:1646  */
    {(yyval.statement) = newElse((yyvsp[-2].statement), (yyvsp[0].statement));}
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 149 "ijparser.y" /* yacc.c:1646  */
    {(yyval.statement) = (yyvsp[0].statement);}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 150 "ijparser.y" /* yacc.c:1646  */
    {(yyval.statement) = (yyvsp[-1].statement);}
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 151 "ijparser.y" /* yacc.c:1646  */
    {(yyval.statement) = NULL;}
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 152 "ijparser.y" /* yacc.c:1646  */
    {(yyval.statement) = newWhile((yyvsp[-2].exp), (yyvsp[0].statement));}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 153 "ijparser.y" /* yacc.c:1646  */
    {(yyval.statement) = newPrint((yyvsp[-2].exp));}
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 154 "ijparser.y" /* yacc.c:1646  */
    {(yyval.statement) = newStore((yyvsp[-3].string), NULL, (yyvsp[-1].exp));}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 155 "ijparser.y" /* yacc.c:1646  */
    {(yyval.statement) = newStore((yyvsp[-6].string), (yyvsp[-4].exp), (yyvsp[-1].exp));}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 156 "ijparser.y" /* yacc.c:1646  */
    {(yyval.statement) = newReturn((yyvsp[-1].exp));}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 158 "ijparser.y" /* yacc.c:1646  */
    {(yyval.statement) = newIf((yyvsp[-2].exp), (yyvsp[0].statement));}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 160 "ijparser.y" /* yacc.c:1646  */
    {(yyval.exp) = (yyvsp[0].exp);}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 161 "ijparser.y" /* yacc.c:1646  */
    {(yyval.exp) = NULL;}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 163 "ijparser.y" /* yacc.c:1646  */
    {(yyval.exp) = newAnonymousOper((yyvsp[-1].exp), NULL, (yyvsp[-3].type) == Int ? NewInt:NewBool);}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 164 "ijparser.y" /* yacc.c:1646  */
    {(yyval.exp) = (yyvsp[0].exp);}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 166 "ijparser.y" /* yacc.c:1646  */
    {(yyval.exp) = newAnonymousOper((yyvsp[-2].exp), (yyvsp[0].exp), (yyvsp[-1].expType));}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 167 "ijparser.y" /* yacc.c:1646  */
    {(yyval.exp) = newAnonymousOper((yyvsp[-3].exp), (yyvsp[-1].exp), LoadArray);}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 168 "ijparser.y" /* yacc.c:1646  */
    {(yyval.exp) = newId((yyvsp[0].string));}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 169 "ijparser.y" /* yacc.c:1646  */
    {(yyval.exp) = newLiteral((yyvsp[0].number), Int);}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 170 "ijparser.y" /* yacc.c:1646  */
    {(yyval.exp) = newLiteral((yyvsp[0].number), Bool);}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 171 "ijparser.y" /* yacc.c:1646  */
    {(yyval.exp) = newAnonymousOper((yyvsp[-1].exp), NULL, Length);}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 172 "ijparser.y" /* yacc.c:1646  */
    {(yyval.exp) = newAnonymousOper((yyvsp[0].exp), NULL, getOperType((yyvsp[-1].string)));}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 173 "ijparser.y" /* yacc.c:1646  */
    {(yyval.exp) = newAnonymousOper((yyvsp[0].exp), NULL, Not);}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 174 "ijparser.y" /* yacc.c:1646  */
    {(yyval.exp) = newAnonymousOper(newAnonymousOper(newId((yyvsp[-4].string)), (yyvsp[-2].exp), LoadArray), NULL, Parse);}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 175 "ijparser.y" /* yacc.c:1646  */
    {(yyval.exp) = newOper((yyvsp[-3].string), (yyvsp[-1].exp), Call);}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 176 "ijparser.y" /* yacc.c:1646  */
    {(yyval.exp) = (yyvsp[-1].exp);}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 178 "ijparser.y" /* yacc.c:1646  */
    {(yyval.expType) = getOperType((yyvsp[0].string));}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 179 "ijparser.y" /* yacc.c:1646  */
    {(yyval.expType) = getOperType((yyvsp[0].string));}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 180 "ijparser.y" /* yacc.c:1646  */
    {(yyval.expType) = getOperType((yyvsp[0].string));}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 181 "ijparser.y" /* yacc.c:1646  */
    {(yyval.expType) = getOperType((yyvsp[0].string));}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 183 "ijparser.y" /* yacc.c:1646  */
    {(yyval.exp) = (yyvsp[0].exp);}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 184 "ijparser.y" /* yacc.c:1646  */
    {(yyval.exp) = NULL;}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 186 "ijparser.y" /* yacc.c:1646  */
    {(yyval.exp) = connectExp((yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 187 "ijparser.y" /* yacc.c:1646  */
    {(yyval.exp) = (yyvsp[0].exp);}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 189 "ijparser.y" /* yacc.c:1646  */
    {(yyval.type) = Void;}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 190 "ijparser.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 192 "ijparser.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[0].type);}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 193 "ijparser.y" /* yacc.c:1646  */
    {(yyval.type) = (yyvsp[-2].type) == Int ? IntArray:BoolArray;}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 195 "ijparser.y" /* yacc.c:1646  */
    {(yyval.type) = Int;}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 196 "ijparser.y" /* yacc.c:1646  */
    {(yyval.type) = Bool;}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1790 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 198 "ijparser.y" /* yacc.c:1906  */

int main(int argc, char **argv) {
	int tree = 0, table = 0; 
	//para nao aparecer o nome
	argc--;
	argv++;
	while(argc--){
		if(!strcmp(*argv, "-t"))
			tree = 1;
		else if(!strcmp(*argv, "-s"))
			table = 1;

		*argv++;
	}
	printf("%d %d\n", tree, table);

	yyparse();
	
	if (!hasErrors){
		if(tree){
			printProgram(program);
		}
		if(table){
			//do something
		}
	}
		
	return 0;
}

int yyerror (char *s) { 
	hasErrors = 1;
	printf ("Line %d, col %d: %s: %s\n", linhaAux, colunaAux, s, yytext); 
}
