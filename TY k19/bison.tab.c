/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "bison.y" /* yacc.c:339  */

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>		
#include "cgen.h"


char* checkDiv;

extern int yylex(void);
extern int line_num;


#line 81 "bison.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "bison.tab.h".  */
#ifndef YY_YY_BISON_TAB_H_INCLUDED
# define YY_YY_BISON_TAB_H_INCLUDED
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
    GT = 258,
    L_BRAC = 259,
    R_BRAC = 260,
    AND = 261,
    STRING = 262,
    OP_OR = 263,
    NOT = 264,
    TRUE = 265,
    FALSE = 266,
    IF = 267,
    FI = 268,
    ELSE = 269,
    WHILE = 270,
    BOOL = 271,
    CHAR = 272,
    RL = 273,
    POSINT = 274,
    ID = 275,
    STR = 276,
    LOOP = 277,
    POOL = 278,
    CONST = 279,
    LET = 280,
    BR = 281,
    RET = 282,
    START = 283,
    LST = 284,
    ASSIGN = 285,
    EQ = 286,
    OP_PLUS = 287,
    OP_MIN = 288,
    L_PAR = 289,
    R_PAR = 290,
    DIV = 291,
    OP_MUL = 292,
    SEMICOLON = 293,
    COLON = 294,
    MOD = 295,
    DIFF = 296,
    EAR = 297,
    ARROW = 298,
    INT = 299,
    REAL = 300,
    THEN = 301,
    NEG = 302,
    EXPREC = 303
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "bison.y" /* yacc.c:355  */

	char* reg;

#line 174 "bison.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BISON_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 191 "bison.tab.c" /* yacc.c:358  */

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   296

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  154

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

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
       2,     2,     2,     2,    52,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      49,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    47,     2,    48,     2,     2,     2,     2,     2,     2,
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
      45,    46,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    83,    83,    98,    99,   100,   101,   102,   103,   106,
     107,   111,   114,   117,   118,   119,   121,   122,   123,   124,
     126,   127,   128,   131,   134,   138,   139,   141,   142,   143,
     144,   147,   148,   149,   154,   155,   156,   159,   160,   161,
     162,   167,   168,   172,   174,   178,   179,   180,   181,   182,
     183,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   198,   199,   200,   201,   202,   208,   209,   212,   213,
     216
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "GT", "L_BRAC", "R_BRAC", "AND",
  "STRING", "OP_OR", "NOT", "TRUE", "FALSE", "IF", "FI", "ELSE", "WHILE",
  "BOOL", "CHAR", "RL", "POSINT", "ID", "STR", "LOOP", "POOL", "CONST",
  "LET", "BR", "RET", "START", "LST", "ASSIGN", "EQ", "OP_PLUS", "OP_MIN",
  "L_PAR", "R_PAR", "DIV", "OP_MUL", "SEMICOLON", "COLON", "MOD", "DIFF",
  "EAR", "ARROW", "INT", "REAL", "THEN", "'['", "']'", "'<'", "NEG",
  "EXPREC", "','", "$accept", "program", "decl_list_statement",
  "decl_list", "func_decl", "func_call", "func_args", "func_param",
  "param_type", "func_body", "body", "statement_list", "statement",
  "oth_statement", "data_type", "type_spec", "case_comma", "decl_array",
  "array", "expressions", "exp_type", "ret", "if_case", "while_case", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,    91,    93,    60,
     302,   303,    44
};
# endif

#define YYPACT_NINF -124

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-124)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,   -14,    -2,    55,    40,    48,  -124,    52,   -18,    36,
     -22,  -124,  -124,  -124,    34,    47,    61,     3,    67,    70,
     166,     3,    60,  -124,  -124,  -124,  -124,   185,    62,  -124,
    -124,  -124,  -124,  -124,  -124,    43,   166,  -124,  -124,    65,
     166,   166,   166,  -124,  -124,  -124,    20,  -124,  -124,    69,
      24,   -32,  -124,    66,   131,     3,    75,   131,   166,   131,
     131,    80,   166,   166,   166,   166,   166,   166,   166,   166,
       3,   166,   166,   166,    71,     3,    89,    98,    93,    98,
       3,  -124,     3,   -30,   131,  -124,   131,   131,   131,   131,
     131,   206,   131,   131,  -124,   131,   131,   206,    97,  -124,
      85,    45,  -124,     3,  -124,  -124,    81,  -124,   108,     3,
    -124,    99,  -124,  -124,    92,   103,   137,   146,   154,   154,
     166,   166,    -7,   166,  -124,  -124,   149,   154,   113,  -124,
    -124,  -124,  -124,   150,   154,    94,   116,   166,   131,  -124,
     120,  -124,  -124,   154,   154,   131,  -124,   247,   253,  -124,
     154,  -124,   269,  -124
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     8,    41,     0,    41,
       0,     7,     1,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    35,    34,    36,    16,     0,    40,
      39,    37,    38,     3,    42,     0,     0,    63,    64,    36,
       0,     0,     0,    65,    61,    62,     0,    45,     5,     0,
      36,     0,    17,     0,    19,     0,     0,    46,    13,    47,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     0,     0,    15,    60,    59,    58,    54,    56,
      52,    53,    50,    51,     6,    49,    55,    57,     0,    20,
       0,     0,    22,     0,    18,    21,     0,    12,     0,     0,
      44,     0,    43,    41,    14,     0,     0,     0,     0,     0,
       0,     0,     0,    66,    29,    27,     0,    23,     0,    30,
      33,    31,    32,     0,    24,     0,     0,     0,    67,    11,
       0,    25,     2,     0,     0,    28,    26,     0,     0,    68,
       0,    70,     0,    69
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -124,  -124,     2,  -124,  -124,   106,  -124,  -124,   -13,  -124,
    -124,   -76,  -123,  -124,   143,    -5,    -1,  -124,  -124,   -27,
    -124,  -124,  -124,  -124
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,   124,     5,     6,    43,    83,    51,    52,   126,
     133,   127,   128,   129,    44,    45,     8,    11,    53,    46,
      47,   130,   131,   132
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      54,    10,     4,    78,   140,   107,     7,    15,    20,    57,
      29,   140,    33,    59,    60,    61,    48,    21,     9,    30,
      79,    17,   108,   137,   140,   140,    62,    58,    63,   140,
      18,    84,     1,     2,    18,    86,    87,    88,    89,    90,
      91,    92,    93,   134,    95,    96,    97,    31,    32,    64,
      81,    65,    66,    67,     7,    12,    68,    69,    58,    70,
      71,    72,    22,    75,   102,    94,   104,   147,   148,    73,
      99,    76,    14,     2,   152,   105,    77,   106,    13,    24,
      25,    26,    16,    19,    75,    23,    62,    34,    63,    35,
      49,    56,    76,   135,   136,    27,   138,    77,   111,    58,
      62,    55,    63,    74,   115,    80,    98,   114,   100,    64,
     145,    65,    66,    67,    82,    85,    68,    69,   101,   112,
      71,    72,    62,    64,    63,    65,    66,    67,   113,    73,
      68,    69,   103,   110,    71,    72,   109,    62,   144,    63,
     143,   118,   116,    73,    18,    64,   117,    65,    66,    67,
     119,   141,    68,    69,   139,   142,    71,    72,   146,    28,
      64,     0,    65,    66,    67,    73,   120,    68,    69,   121,
       0,    71,    72,    29,   122,    36,    37,    38,     1,     2,
      73,   123,    30,     0,    24,    25,    39,     0,     0,     0,
       0,     0,    29,     0,    36,    37,    38,     0,    40,    41,
      42,    30,     0,    24,    25,    50,     0,     0,     0,     0,
      31,    32,    62,     0,    63,     0,     0,    40,    41,    42,
       0,     0,     0,     0,   125,   125,     0,     0,     0,    31,
      32,     0,     0,   125,     0,    64,     0,    65,    66,    67,
     125,     0,    68,    69,     0,     0,    71,    72,     0,   125,
     125,     0,     0,   125,   125,     0,   125,     0,   125,   120,
     149,   150,   121,     0,     0,   120,     0,   122,   121,     0,
       0,     1,     2,   122,   123,     0,   151,     1,     2,     0,
     123,   120,   153,     0,   121,     0,     0,     0,     0,   122,
       0,     0,     0,     1,     2,     0,   123
};

static const yytype_int16 yycheck[] =
{
      27,     2,     0,    35,   127,    35,    20,     5,    30,    36,
       7,   134,    17,    40,    41,    42,    21,    39,    20,    16,
      52,    39,    52,    30,   147,   148,     6,    34,     8,   152,
      52,    58,    24,    25,    52,    62,    63,    64,    65,    66,
      67,    68,    69,   119,    71,    72,    73,    44,    45,    29,
      55,    31,    32,    33,    20,     0,    36,    37,    34,    39,
      40,    41,    28,    39,    77,    70,    79,   143,   144,    49,
      75,    47,    24,    25,   150,    80,    52,    82,    38,    18,
      19,    20,    30,    47,    39,    38,     6,    20,     8,    19,
      30,    48,    47,   120,   121,    34,   123,    52,   103,    34,
       6,    39,     8,    34,   109,    39,    35,   108,    19,    29,
     137,    31,    32,    33,    39,    35,    36,    37,    20,    38,
      40,    41,     6,    29,     8,    31,    32,    33,    20,    49,
      36,    37,    39,    48,    40,    41,    39,     6,    22,     8,
      46,     4,    43,    49,    52,    29,    43,    31,    32,    33,
       4,    38,    36,    37,     5,     5,    40,    41,    38,    16,
      29,    -1,    31,    32,    33,    49,    12,    36,    37,    15,
      -1,    40,    41,     7,    20,     9,    10,    11,    24,    25,
      49,    27,    16,    -1,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,     7,    -1,     9,    10,    11,    -1,    32,    33,
      34,    16,    -1,    18,    19,    20,    -1,    -1,    -1,    -1,
      44,    45,     6,    -1,     8,    -1,    -1,    32,    33,    34,
      -1,    -1,    -1,    -1,   118,   119,    -1,    -1,    -1,    44,
      45,    -1,    -1,   127,    -1,    29,    -1,    31,    32,    33,
     134,    -1,    36,    37,    -1,    -1,    40,    41,    -1,   143,
     144,    -1,    -1,   147,   148,    -1,   150,    -1,   152,    12,
      13,    14,    15,    -1,    -1,    12,    -1,    20,    15,    -1,
      -1,    24,    25,    20,    27,    -1,    23,    24,    25,    -1,
      27,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    24,    25,    -1,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    24,    25,    54,    55,    56,    57,    20,    69,    20,
      69,    70,     0,    38,    24,    55,    30,    39,    52,    47,
      30,    39,    28,    38,    18,    19,    20,    34,    67,     7,
      16,    44,    45,    68,    20,    19,     9,    10,    11,    20,
      32,    33,    34,    58,    67,    68,    72,    73,    68,    30,
      20,    60,    61,    71,    72,    39,    48,    72,    34,    72,
      72,    72,     6,     8,    29,    31,    32,    33,    36,    37,
      39,    40,    41,    49,    34,    39,    47,    52,    35,    52,
      39,    68,    39,    59,    72,    35,    72,    72,    72,    72,
      72,    72,    72,    72,    68,    72,    72,    72,    35,    68,
      19,    20,    61,    39,    61,    68,    68,    35,    52,    39,
      48,    68,    38,    20,    69,    68,    43,    43,     4,     4,
      12,    15,    20,    27,    55,    58,    62,    64,    65,    66,
      74,    75,    76,    63,    64,    72,    72,    30,    72,     5,
      65,    38,     5,    46,    22,    72,    38,    64,    64,    13,
      14,    23,    64,    13
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    55,    55,    55,    55,    56,
      56,    57,    58,    59,    59,    59,    60,    60,    60,    60,
      61,    61,    61,    62,    63,    64,    64,    65,    65,    65,
      65,    66,    66,    66,    67,    67,    67,    68,    68,    68,
      68,    69,    69,    70,    71,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    73,    73,    73,    73,    73,    74,    74,    75,    75,
      76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    12,     4,     6,     4,     6,     2,     1,     2,
       3,    12,     4,     0,     3,     1,     0,     1,     3,     1,
       3,     3,     3,     1,     1,     2,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     7,     4,     1,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     2,     5,     7,
       5
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
#line 85 "bison.y" /* yacc.c:1646  */
    { 
/* We have a successful parse! 
  Check for any errors and generate output. 
*/
	if(yyerror_count==0) {
	  puts(c_prologue); 
	  printf("/* program */ \n\n");
	  printf("%s", (yyvsp[-11].reg));		//print decl_list
	  printf("\n\nint main() {\n%s\n} \n", (yyvsp[-1].reg));
	}
}
#line 1413 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 98 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("const %s = %s", (yyvsp[-2].reg), (yyvsp[0].reg));}
#line 1419 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 99 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("const %s %s = %s", (yyvsp[0].reg),(yyvsp[-4].reg),(yyvsp[-2].reg)); }
#line 1425 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 100 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s %s ",(yyvsp[0].reg), (yyvsp[-2].reg)); }
#line 1431 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 101 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s %s = %s",(yyvsp[0].reg), (yyvsp[-4].reg), (yyvsp[-2].reg)); }
#line 1437 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 102 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s",(yyvsp[0].reg)); }
#line 1443 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 103 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s",(yyvsp[0].reg)); }
#line 1449 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 106 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s;", (yyvsp[-1].reg)); }
#line 1455 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 107 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s\n%s;", (yyvsp[-2].reg), (yyvsp[-1].reg) ); }
#line 1461 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 111 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s %s(%s) {\n%s\n}",(yyvsp[-4].reg),(yyvsp[-10].reg),(yyvsp[-7].reg),(yyvsp[-1].reg)); }
#line 1467 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 114 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s(%s)", (yyvsp[-3].reg), (yyvsp[-1].reg)); }
#line 1473 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 117 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = "";}
#line 1479 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 118 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s, %s", (yyvsp[-2].reg),(yyvsp[0].reg)); }
#line 1485 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 119 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s", (yyvsp[0].reg)); }
#line 1491 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 121 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = "";}
#line 1497 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 122 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s", (yyvsp[0].reg)); }
#line 1503 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 123 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s, %s", (yyvsp[-2].reg),(yyvsp[0].reg)); }
#line 1509 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 124 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s", (yyvsp[0].reg)); }
#line 1515 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 126 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s %s", (yyvsp[0].reg),(yyvsp[-2].reg)); }
#line 1521 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 127 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s %s", (yyvsp[0].reg),(yyvsp[-2].reg)); }
#line 1527 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 128 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s, %s", (yyvsp[-2].reg),(yyvsp[0].reg)); }
#line 1533 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 131 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s", (yyvsp[0].reg)); }
#line 1539 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 134 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s", (yyvsp[0].reg)); }
#line 1545 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 138 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("   %s; \n", (yyvsp[-1].reg)); }
#line 1551 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 139 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s \n   %s; \n",(yyvsp[-2].reg) ,(yyvsp[-1].reg)); }
#line 1557 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 141 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s", (yyvsp[0].reg)); }
#line 1563 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 142 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s = %s", (yyvsp[-2].reg),(yyvsp[0].reg)); }
#line 1569 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 143 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s", (yyvsp[0].reg)); }
#line 1575 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 144 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s", (yyvsp[0].reg)); }
#line 1581 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 147 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s", (yyvsp[0].reg)); }
#line 1587 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 148 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s", (yyvsp[0].reg)); }
#line 1593 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 149 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s", (yyvsp[0].reg)); }
#line 1599 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 154 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s",(yyvsp[0].reg)); }
#line 1605 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 155 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s",(yyvsp[0].reg)); }
#line 1611 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 156 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s",(yyvsp[0].reg)); }
#line 1617 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 159 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("int");}
#line 1623 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 160 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("double");}
#line 1629 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 161 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("int");}
#line 1635 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 162 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s",(yyvsp[0].reg));}
#line 1641 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 167 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s",(yyvsp[0].reg)); }
#line 1647 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 168 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s,%s", (yyvsp[-2].reg), (yyvsp[0].reg)); }
#line 1653 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 172 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("$s $s[$s];", (yyvsp[-1].reg), (yyvsp[-6].reg), (yyvsp[-4].reg)); }
#line 1659 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 174 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s[%s]", (yyvsp[-3].reg),(yyvsp[-1].reg)); }
#line 1665 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 179 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("not%s", (yyvsp[0].reg)); }
#line 1671 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 180 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("+%s", (yyvsp[0].reg)); }
#line 1677 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 181 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("-%s", (yyvsp[0].reg)); }
#line 1683 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 182 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s %% %s", (yyvsp[-2].reg), (yyvsp[0].reg)); }
#line 1689 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 183 "bison.y" /* yacc.c:1646  */
    { {checkDiv = (yyvsp[0].reg);};if(strcmp(checkDiv,"0")) (yyval.reg) = template("%s / %s", (yyvsp[-2].reg), (yyvsp[0].reg));else{yyerror("Division by zero"); YYABORT;}; }
#line 1695 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 185 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s * %s", (yyvsp[-2].reg), (yyvsp[0].reg)); }
#line 1701 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 186 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s + %s", (yyvsp[-2].reg), (yyvsp[0].reg)); }
#line 1707 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 187 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s - %s", (yyvsp[-2].reg), (yyvsp[0].reg)); }
#line 1713 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 188 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s <= %s", (yyvsp[-2].reg), (yyvsp[0].reg)); }
#line 1719 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 189 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s != %s", (yyvsp[-2].reg), (yyvsp[0].reg)); }
#line 1725 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 190 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s == %s", (yyvsp[-2].reg), (yyvsp[0].reg)); }
#line 1731 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 191 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s < %s", (yyvsp[-2].reg), (yyvsp[0].reg)); }
#line 1737 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 192 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s || %s", (yyvsp[-2].reg), (yyvsp[0].reg)); }
#line 1743 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 193 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s && %s", (yyvsp[-2].reg), (yyvsp[0].reg)); }
#line 1749 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 194 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("(%s)",(yyvsp[-1].reg)); }
#line 1755 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 198 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s",(yyvsp[0].reg)); }
#line 1761 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 199 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s",(yyvsp[0].reg)); }
#line 1767 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 200 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("1");}
#line 1773 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 201 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("0");}
#line 1779 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 202 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("%s",(yyvsp[0].reg)); }
#line 1785 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 208 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("return "); }
#line 1791 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 209 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("return %s ", (yyvsp[0].reg)); }
#line 1797 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 212 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("if (%s){\n\t%s\n}\n", (yyvsp[-3].reg), (yyvsp[-1].reg));}
#line 1803 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 213 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("if (%s){\n\t%s\n}\n else {\n\t%s\n}\n", (yyvsp[-5].reg), (yyvsp[-3].reg),(yyvsp[-1].reg));}
#line 1809 "bison.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 216 "bison.y" /* yacc.c:1646  */
    { (yyval.reg) = template("while (%s){\n\t%s\n}", (yyvsp[-3].reg) , (yyvsp[-1].reg)); }
#line 1815 "bison.tab.c" /* yacc.c:1646  */
    break;


#line 1819 "bison.tab.c" /* yacc.c:1646  */
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
#line 220 "bison.y" /* yacc.c:1906  */



int main()
{
  if ( yyparse() != 0 )
    printf("Rejected!\n");
}
