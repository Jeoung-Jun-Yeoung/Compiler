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
#line 1 "kim.y" /* yacc.c:339  */

#define YYSTYPE_IS_DECLARED 1
typedef long YYSTYPE;
#include <stdio.h>
#include "type.h"

extern int line_no, syntax_err;
extern char *yytext;
extern A_NODE *root;
extern A_ID *current_id;
extern int current_level;
extern A_TYPE *int_type;

void yyerror(char *s);

extern FILE *yyin;
extern int yylex();
#include "syntax.h"


#line 87 "y.tab.c" /* yacc.c:339  */

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
    IDENTIFIER = 258,
    TYPE_IDENTIFIER = 259,
    FLOAT_CONSTANT = 260,
    INTEGER_CONSTANT = 261,
    CHARACTER_CONSTANT = 262,
    STRING_LITERAL = 263,
    PLUS = 264,
    MINUS = 265,
    PLUSPLUS = 266,
    MINUSMINUS = 267,
    AMP = 268,
    BARBAR = 269,
    AMPAMP = 270,
    ARROW = 271,
    SEMICOLON = 272,
    LSS = 273,
    GTR = 274,
    LEQ = 275,
    GEQ = 276,
    EQL = 277,
    NEQ = 278,
    DOTDOTDOT = 279,
    LP = 280,
    RP = 281,
    LB = 282,
    RB = 283,
    LR = 284,
    RR = 285,
    PERIOD = 286,
    COMMA = 287,
    EXCL = 288,
    STAR = 289,
    SLASH = 290,
    PERCENT = 291,
    ASSIGN = 292,
    COLON = 293,
    AUTO_SYM = 294,
    STATIC_SYM = 295,
    TYPEDEF_SYM = 296,
    STRUCT_SYM = 297,
    ENUM_SYM = 298,
    SIZEOF_SYM = 299,
    UNION_SYM = 300,
    IF_SYM = 301,
    ELSE_SYM = 302,
    WHILE_SYM = 303,
    DO_SYM = 304,
    FOR_SYM = 305,
    CONTINUE_SYM = 306,
    BREAK_SYM = 307,
    RETURN_SYM = 308,
    SWITCH_SYM = 309,
    CASE_SYM = 310,
    DEFAULT_SYM = 311
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define TYPE_IDENTIFIER 259
#define FLOAT_CONSTANT 260
#define INTEGER_CONSTANT 261
#define CHARACTER_CONSTANT 262
#define STRING_LITERAL 263
#define PLUS 264
#define MINUS 265
#define PLUSPLUS 266
#define MINUSMINUS 267
#define AMP 268
#define BARBAR 269
#define AMPAMP 270
#define ARROW 271
#define SEMICOLON 272
#define LSS 273
#define GTR 274
#define LEQ 275
#define GEQ 276
#define EQL 277
#define NEQ 278
#define DOTDOTDOT 279
#define LP 280
#define RP 281
#define LB 282
#define RB 283
#define LR 284
#define RR 285
#define PERIOD 286
#define COMMA 287
#define EXCL 288
#define STAR 289
#define SLASH 290
#define PERCENT 291
#define ASSIGN 292
#define COLON 293
#define AUTO_SYM 294
#define STATIC_SYM 295
#define TYPEDEF_SYM 296
#define STRUCT_SYM 297
#define ENUM_SYM 298
#define SIZEOF_SYM 299
#define UNION_SYM 300
#define IF_SYM 301
#define ELSE_SYM 302
#define WHILE_SYM 303
#define DO_SYM 304
#define FOR_SYM 305
#define CONTINUE_SYM 306
#define BREAK_SYM 307
#define RETURN_SYM 308
#define SWITCH_SYM 309
#define CASE_SYM 310
#define DEFAULT_SYM 311

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 250 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   438

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  293

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    42,    42,    45,    46,    49,    50,    53,    53,    55,
      55,    59,    60,    63,    64,    67,    70,    71,    72,    73,
      76,    77,    78,    81,    82,    85,    86,    89,    90,    93,
      94,    97,    98,   101,   102,   103,   106,   107,   106,   109,
     109,   109,   111,   114,   115,   118,   119,   122,   125,   126,
     129,   132,   132,   134,   134,   136,   139,   140,   143,   144,
     144,   148,   149,   152,   153,   156,   157,   158,   160,   160,
     165,   166,   169,   170,   173,   174,   177,   178,   181,   182,
     185,   186,   187,   190,   191,   192,   193,   194,   197,   198,
     201,   202,   205,   206,   207,   208,   209,   210,   213,   214,
     217,   217,   222,   223,   226,   227,   228,   231,   232,   233,
     236,   239,   240,   243,   244,   245,   248,   249,   252,   253,
     256,   257,   260,   263,   266,   269,   270,   273,   276,   277,
     280,   281,   284,   287,   290,   293,   294,   295,   298,   299,
     300,   301,   302,   305,   308,   309,   310,   313,   314,   315,
     316,   319,   320,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   335,   336,   337,   338,   339,   340,   341,
     344,   345,   346,   347,   348,   349,   352
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "TYPE_IDENTIFIER",
  "FLOAT_CONSTANT", "INTEGER_CONSTANT", "CHARACTER_CONSTANT",
  "STRING_LITERAL", "PLUS", "MINUS", "PLUSPLUS", "MINUSMINUS", "AMP",
  "BARBAR", "AMPAMP", "ARROW", "SEMICOLON", "LSS", "GTR", "LEQ", "GEQ",
  "EQL", "NEQ", "DOTDOTDOT", "LP", "RP", "LB", "RB", "LR", "RR", "PERIOD",
  "COMMA", "EXCL", "STAR", "SLASH", "PERCENT", "ASSIGN", "COLON",
  "AUTO_SYM", "STATIC_SYM", "TYPEDEF_SYM", "STRUCT_SYM", "ENUM_SYM",
  "SIZEOF_SYM", "UNION_SYM", "IF_SYM", "ELSE_SYM", "WHILE_SYM", "DO_SYM",
  "FOR_SYM", "CONTINUE_SYM", "BREAK_SYM", "RETURN_SYM", "SWITCH_SYM",
  "CASE_SYM", "DEFAULT_SYM", "$accept", "program", "translation_unit",
  "external_declaration", "function_definition", "@1", "@2",
  "declaration_list_opt", "declaration_list", "declaration",
  "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list_opt", "init_declarator_list", "init_declarator",
  "initializer", "initializer_list", "type_specifier",
  "struct_type_specifier", "@3", "@4", "@5", "@6", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_type_specifier",
  "@7", "@8", "enumerator_list", "enumerator", "@9", "declarator",
  "pointer", "direct_declarator", "@10", "parameter_type_list_opt",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "abstract_declarator_opt", "abstract_declarator",
  "direct_abstract_declarator", "statement_list_opt", "statement_list",
  "statement", "labeled_statement", "compound_statement", "@11",
  "expression_statement", "selection_statement", "iteration_statement",
  "for_expression", "expression_opt", "jump_statement",
  "arg_expression_list_opt", "arg_expression_list",
  "constant_expression_opt", "constant_expression", "expression",
  "comma_expression", "assignment_expression", "conditional_expression",
  "logical_or_expression", "logical_and_expression",
  "bitwise_or_expression", "bitwise_xor_expression",
  "bitwise_and_expression", "equality_expression", "relational_expression",
  "shift_expression", "additive_expression", "multiplicative_expression",
  "cast_expression", "unary_expression", "postfix_expression",
  "primary_expression", "type_name", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311
};
# endif

#define YYPACT_NINF -220

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-220)))

#define YYTABLE_NINF -60

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      46,  -220,  -220,    26,    -3,  -220,  -220,  -220,  -220,    58,
    -220,    65,    46,  -220,  -220,  -220,    26,   239,   239,  -220,
      75,  -220,  -220,    19,     3,    74,  -220,    78,   117,  -220,
    -220,   104,    96,  -220,    25,  -220,  -220,   122,   129,   134,
       3,  -220,    30,  -220,   145,   219,  -220,    26,   314,   134,
     200,  -220,  -220,  -220,   239,  -220,  -220,  -220,  -220,  -220,
      30,    30,   354,   354,    30,   173,    30,    30,   394,   204,
    -220,  -220,  -220,  -220,  -220,   223,   226,  -220,  -220,  -220,
      88,   152,  -220,   115,   175,  -220,   201,   208,  -220,   219,
     205,    49,  -220,  -220,   207,   314,  -220,  -220,  -220,  -220,
     287,   239,    42,   220,  -220,   213,  -220,  -220,  -220,  -220,
      30,  -220,  -220,  -220,   132,   222,   238,  -220,  -220,   173,
    -220,  -220,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,  -220,  -220,   271,    30,
      30,   273,    62,   246,  -220,   219,  -220,   108,   287,    26,
     119,  -220,   260,   239,  -220,    26,   102,    30,  -220,    72,
    -220,  -220,   172,  -220,    92,   350,   196,  -220,  -220,    30,
     266,   226,  -220,   152,   152,  -220,  -220,  -220,  -220,   175,
     175,  -220,  -220,  -220,  -220,  -220,   269,   254,  -220,   268,
    -220,  -220,    30,  -220,  -220,   314,   245,    15,  -220,  -220,
    -220,  -220,  -220,   274,   275,   260,   276,   281,   285,    30,
     278,    30,   267,   277,   260,  -220,  -220,  -220,  -220,  -220,
    -220,  -220,   301,  -220,   302,   305,   306,   172,   239,    30,
    -220,  -220,  -220,  -220,  -220,    30,  -220,  -220,  -220,  -220,
    -220,    26,    30,    30,   288,    30,  -220,  -220,   316,  -220,
      30,   297,   260,  -220,  -220,  -220,  -220,  -220,  -220,   311,
     310,  -220,  -220,   315,   318,   317,   319,   323,  -220,   320,
     260,  -220,  -220,  -220,   260,   260,    30,   260,    30,   260,
    -220,   303,  -220,   325,  -220,   332,  -220,   260,   335,    30,
    -220,  -220,  -220
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    65,    35,     0,    63,    20,    21,    22,    43,    53,
      44,     0,     2,     3,     5,     6,    23,    17,    16,    33,
      39,    34,     9,     0,    62,     0,    64,    55,     0,     1,
       4,     0,    24,    25,    27,    19,    18,    42,     0,     0,
      61,    68,   120,    66,     0,     0,    15,     0,     0,     0,
       0,    40,   100,    10,    70,   170,   172,   171,   173,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   127,   128,   130,   132,   133,
     134,   135,   138,   143,   144,   147,   151,   153,   163,     0,
      58,     0,    56,    26,    27,     0,    28,    29,     8,    37,
       0,    11,    78,     0,    71,    72,    74,   160,   151,   159,
       0,   154,   155,   156,    78,     0,     0,   158,   157,     0,
     161,    67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,   169,     0,   116,
       0,     0,     0,     0,    54,     0,    31,     0,     0,     0,
       0,    45,    88,    12,    13,    23,    70,   120,    76,    81,
      77,    79,    80,    69,     0,    70,    81,   176,   175,     0,
       0,   129,   131,   136,   137,   139,   140,   141,   142,   145,
     146,   148,   149,   150,   126,   167,     0,   117,   118,     0,
     166,    52,     0,    57,    30,     0,     0,     0,    48,    50,
      41,    46,   102,     0,     0,     0,     0,     0,     0,   111,
       0,     0,     0,     0,    89,    90,    92,    93,    94,    95,
      96,    97,     0,    14,     0,     0,     0,    82,    70,   120,
      73,    75,   152,   162,   165,     0,   164,    60,    32,    38,
      47,     0,     0,     0,     0,   111,   114,   115,     0,   112,
       0,     0,     0,   101,    91,   103,    86,    83,    84,     0,
       0,   119,    49,     0,     0,     0,     0,     0,   113,     0,
       0,    99,    87,    85,     0,     0,     0,     0,   111,     0,
      98,   104,   107,     0,   109,     0,   106,     0,     0,   111,
     105,   108,   110
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -220,  -220,  -220,   341,  -220,  -220,  -220,  -220,  -220,   -80,
       7,  -220,  -220,  -220,   308,   -83,  -220,   -92,  -220,  -220,
    -220,  -220,  -220,  -220,   221,  -130,  -220,   127,  -220,  -220,
    -220,   282,   211,  -220,    -1,     0,   -20,  -220,   -53,  -220,
    -220,   206,   258,    37,  -132,  -220,  -220,  -157,  -220,    54,
    -220,  -220,  -220,  -220,  -220,  -219,  -220,  -220,  -220,  -139,
     -43,   -42,  -220,  -126,  -220,  -220,   251,   253,  -220,  -220,
    -220,    80,    99,  -220,   100,   -50,   128,  -220,  -220,   255
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    49,    39,   152,   153,    15,
     102,    17,    31,    32,    33,    96,   147,    18,    19,    50,
     148,    38,   100,    20,   150,   151,   197,   198,    21,    44,
      28,    91,    92,   143,    22,    23,    24,    54,   224,   104,
     105,   106,   160,   161,   162,   213,   214,   215,   216,   217,
     101,   218,   219,   220,   266,   248,   221,   186,   187,    69,
      70,   222,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   116
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,   103,    25,    40,    26,    97,    71,    16,   149,   184,
     107,   109,   146,   188,   113,    34,   117,   118,   226,    16,
     201,   154,     1,   115,    35,    36,   267,   227,    41,     1,
      42,     4,   240,    55,   227,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     3,     1,    94,   241,   244,     1,
       2,     3,    97,    71,    -7,    65,   149,   254,   149,   285,
       4,    27,    48,    66,    67,    29,   201,   156,   115,   157,
     292,     3,   114,   223,    68,     1,     4,   115,    37,   144,
       4,   145,   181,   182,   183,     5,     6,     7,     8,     9,
     260,    10,   191,    53,   145,   271,     2,   156,   189,   157,
      43,   158,   159,    98,   149,     1,     2,   -51,   155,   261,
     124,   125,   238,   280,   166,    71,   230,   281,   282,   232,
     284,    46,   286,     2,   130,   131,   114,   156,    47,   157,
     290,     5,     6,     7,     8,     9,     4,    10,   194,    40,
     195,     5,     6,     7,     8,     9,    45,    10,   199,   200,
     237,   -36,    97,    71,    94,    25,   159,   165,    51,   157,
     155,     8,     9,    52,    10,   166,     4,   249,   251,    71,
     126,   127,   128,   129,    89,   259,    55,     2,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    71,   108,   108,
     111,   112,   108,   225,   108,   108,   120,   228,    65,   229,
     263,   264,   225,   249,   173,   174,    66,    67,   269,   132,
     133,   134,     5,     6,     7,     8,     9,    68,    10,   136,
     137,   165,    90,   157,   138,   175,   176,   177,   178,    99,
     179,   180,   121,   139,   283,   140,   249,   122,   135,   141,
     199,   123,   -59,     2,    48,   164,   163,   249,   168,     2,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,    55,   169,    56,    57,    58,    59,    60,
      61,    62,    63,    64,   185,   239,   190,   202,     5,     6,
       7,     8,     9,   192,    10,    65,   235,     8,     9,    52,
      10,     2,   233,    66,    67,   234,   236,   108,   246,   242,
     243,   245,   247,   250,    68,   252,   203,   253,   204,   205,
     206,   207,   208,   209,   210,   211,   212,    55,   255,    56,
      57,    58,    59,    60,    61,    62,    63,    64,   256,     8,
       9,   257,    10,   268,   258,   270,   265,   272,   273,    65,
     278,   274,   276,    95,   275,   277,   279,    66,    67,   289,
     287,   288,   291,    30,     2,    93,   193,    55,    68,    56,
      57,    58,    59,    60,    61,    62,    63,    64,   262,   196,
     231,   142,   167,   171,   170,   165,   172,   157,     0,   110,
       0,     0,     0,     0,     4,     0,     0,    66,    67,     5,
       6,     7,     8,     9,     0,    10,     0,    55,    68,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
       0,     0,     0,     0,     0,     0,     0,    66,    67,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    68
};

static const yytype_int16 yycheck[] =
{
      42,    54,     3,    23,     4,    48,    48,     0,   100,   135,
      60,    61,    95,   139,    64,    16,    66,    67,   157,    12,
     150,   101,     3,    65,    17,    18,   245,   159,    25,     3,
      27,    34,    17,     3,   166,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    25,     3,    47,    32,   205,     3,
       4,    25,    95,    95,    29,    25,   148,   214,   150,   278,
      34,     3,    37,    33,    34,     0,   196,    25,   110,    27,
     289,    25,    65,   153,    44,     3,    34,   119,     3,    30,
      34,    32,   132,   133,   134,    39,    40,    41,    42,    43,
     229,    45,    30,    39,    32,   252,     4,    25,   140,    27,
      26,   102,   102,    49,   196,     3,     4,    29,   101,   235,
      22,    23,   195,   270,   114,   157,    24,   274,   275,   169,
     277,    17,   279,     4,     9,    10,   119,    25,    32,    27,
     287,    39,    40,    41,    42,    43,    34,    45,    30,   159,
      32,    39,    40,    41,    42,    43,    29,    45,   149,    30,
     192,    29,   195,   195,   155,   156,   156,    25,    29,    27,
     153,    42,    43,    29,    45,   165,    34,   209,   211,   211,
      18,    19,    20,    21,    29,   228,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,   229,    60,    61,
      62,    63,    64,   156,    66,    67,    68,    25,    25,    27,
     242,   243,   165,   245,   124,   125,    33,    34,   250,    34,
      35,    36,    39,    40,    41,    42,    43,    44,    45,    11,
      12,    25,     3,    27,    16,   126,   127,   128,   129,    29,
     130,   131,    28,    25,   276,    27,   278,    14,    37,    31,
     241,    15,    37,     4,    37,    32,    26,   289,    26,     4,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,     3,    26,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     3,    30,     3,    17,    39,    40,
      41,    42,    43,    37,    45,    25,    32,    42,    43,    29,
      45,     4,    26,    33,    34,    26,    28,   169,    17,    25,
      25,    25,    17,    25,    44,    38,    46,    30,    48,    49,
      50,    51,    52,    53,    54,    55,    56,     3,    17,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    26,    42,
      43,    26,    45,    17,    28,    38,    48,    26,    28,    25,
      17,    26,    25,    29,    26,    26,    26,    33,    34,    17,
      47,    26,    17,    12,     4,    47,   145,     3,    44,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   241,   148,
     164,    89,   114,   122,   119,    25,   123,    27,    -1,    25,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    33,    34,    39,
      40,    41,    42,    43,    -1,    45,    -1,     3,    44,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    25,    34,    39,    40,    41,    42,    43,
      45,    58,    59,    60,    61,    66,    67,    68,    74,    75,
      80,    85,    91,    92,    93,    91,    92,     3,    87,     0,
      60,    69,    70,    71,    91,    67,    67,     3,    78,    63,
      93,    25,    27,    26,    86,    29,    17,    32,    37,    62,
      76,    29,    29,   106,    94,     3,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    25,    33,    34,    44,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,    29,
       3,    88,    89,    71,    91,    29,    72,   117,   106,    29,
      79,   107,    67,    95,    96,    97,    98,   132,   133,   132,
      25,   133,   133,   132,    67,   118,   136,   132,   132,    25,
     133,    28,    14,    15,    22,    23,    18,    19,    20,    21,
       9,    10,    34,    35,    36,    37,    11,    12,    16,    25,
      27,    31,    88,    90,    30,    32,    72,    73,    77,    74,
      81,    82,    64,    65,    66,    67,    25,    27,    91,    92,
      99,   100,   101,    26,    32,    25,    92,    99,    26,    26,
     136,   123,   124,   128,   128,   129,   129,   129,   129,   131,
     131,   132,   132,   132,   120,     3,   114,   115,   120,   118,
       3,    30,    37,    89,    30,    32,    81,    83,    84,    91,
      30,    82,    17,    46,    48,    49,    50,    51,    52,    53,
      54,    55,    56,   102,   103,   104,   105,   106,   108,   109,
     110,   113,   118,    66,    95,   100,   116,   101,    25,    27,
      24,    98,   132,    26,    26,    32,    28,   118,    72,    30,
      17,    32,    25,    25,   104,    25,    17,    17,   112,   118,
      25,   117,    38,    30,   104,    17,    26,    26,    28,    95,
     116,   120,    84,   118,   118,    48,   111,   112,    17,   118,
      38,   104,    26,    28,    26,    26,    25,    26,    17,    26,
     104,   104,   104,   118,   104,   112,   104,    47,    26,    17,
     104,    17,   112
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    60,    62,    61,    63,
      61,    64,    64,    65,    65,    66,    67,    67,    67,    67,
      68,    68,    68,    69,    69,    70,    70,    71,    71,    72,
      72,    73,    73,    74,    74,    74,    76,    77,    75,    78,
      79,    75,    75,    80,    80,    81,    81,    82,    83,    83,
      84,    86,    85,    87,    85,    85,    88,    88,    89,    90,
      89,    91,    91,    92,    92,    93,    93,    93,    94,    93,
      95,    95,    96,    96,    97,    97,    98,    98,    99,    99,
     100,   100,   100,   101,   101,   101,   101,   101,   102,   102,
     103,   103,   104,   104,   104,   104,   104,   104,   105,   105,
     107,   106,   108,   108,   109,   109,   109,   110,   110,   110,
     111,   112,   112,   113,   113,   113,   114,   114,   115,   115,
     116,   116,   117,   118,   119,   120,   120,   121,   122,   122,
     123,   123,   124,   125,   126,   127,   127,   127,   128,   128,
     128,   128,   128,   129,   130,   130,   130,   131,   131,   131,
     131,   132,   132,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   134,   134,   134,   134,   134,   134,   134,
     135,   135,   135,   135,   135,   135,   136
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     0,     1,     1,     2,     3,     1,     1,     2,     2,
       1,     1,     1,     0,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     0,     0,     7,     0,
       0,     6,     2,     1,     1,     1,     2,     3,     1,     3,
       1,     0,     6,     0,     5,     2,     1,     3,     1,     0,
       4,     2,     1,     1,     2,     1,     3,     4,     0,     5,
       0,     1,     1,     3,     1,     3,     2,     2,     0,     1,
       1,     1,     2,     3,     3,     4,     3,     4,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     4,     3,
       0,     5,     1,     2,     5,     7,     5,     5,     7,     5,
       5,     0,     1,     3,     2,     2,     0,     1,     1,     3,
       0,     1,     1,     1,     1,     1,     3,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     1,     3,     3,     1,     3,     3,
       3,     1,     4,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     1,     4,     4,     3,     3,     2,     2,
       1,     1,     1,     1,     1,     3,     2
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
#line 42 "kim.y" /* yacc.c:1646  */
    {root=makeNode(N_PROGRAM,NIL,(yyvsp[0]),NIL); checkForwardReference();}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 45 "kim.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 46 "kim.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]),(yyvsp[0]));}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 49 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 50 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 53 "kim.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 54 "kim.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorBody((yyvsp[-1]),(yyvsp[0]));}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 55 "kim.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorSpecifier((yyvsp[0]),makeSpecifier(int_type,0));}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 56 "kim.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorBody((yyvsp[-1]),(yyvsp[0]));}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 59 "kim.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 60 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 63 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 64 "kim.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]),(yyvsp[0]));}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 67 "kim.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorListSpecifier((yyvsp[-1]),(yyvsp[-2]));}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 70 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeSpecifier((yyvsp[0]),0);}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 71 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeSpecifier(0,(yyvsp[0]));}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 72 "kim.y" /* yacc.c:1646  */
    {(yyval)=updateSpecifier((yyvsp[0]),(yyvsp[-1]),0);}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 73 "kim.y" /* yacc.c:1646  */
    {(yyval)=updateSpecifier((yyvsp[0]),0,(yyvsp[-1]));}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 76 "kim.y" /* yacc.c:1646  */
    {(yyval)=S_AUTO;}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 77 "kim.y" /* yacc.c:1646  */
    {(yyval)=S_STATIC;}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 78 "kim.y" /* yacc.c:1646  */
    {(yyval)=S_TYPEDEF;}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 81 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeDummyIdentifier();}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 82 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 85 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 86 "kim.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 89 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 90 "kim.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorInit((yyvsp[-2]),(yyvsp[0]));}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 93 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_INIT_LIST_ONE,NIL,(yyvsp[0]),NIL);}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 94 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 97 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_INIT_LIST,(yyvsp[0]),NIL,makeNode(N_INIT_LIST_NIL,NIL,NIL,NIL));}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 98 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_INIT_LIST,(yyvsp[-2]),(yyvsp[0]));}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 101 "kim.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 102 "kim.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 103 "kim.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 106 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeStructOrEnumIdentifier((yyvsp[-1]),(yyvsp[0]),ID_STRUCT);}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 107 "kim.y" /* yacc.c:1646  */
    { (yyval)=current_id;current_level++;}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 108 "kim.y" /* yacc.c:1646  */
    {checkForwardReference();(yyval)=setTypeField((yyvsp[-4]),(yyvsp[-1]));current_level--; current_id=(yyvsp[-2]);}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 109 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeType((yyvsp[0]));}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 109 "kim.y" /* yacc.c:1646  */
    {(yyval)=current_id;current_level++;}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 110 "kim.y" /* yacc.c:1646  */
    {checkForwardReference();(yyval)=setTypeField((yyvsp[-4]),(yyvsp[-1])); current_level--;current_id=(yyvsp[-2]);}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 111 "kim.y" /* yacc.c:1646  */
    {(yyval)=getTypeOfStructOrEnumRefIdentifier((yyvsp[-1]),(yyvsp[0]),ID_STRUCT);}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 114 "kim.y" /* yacc.c:1646  */
    {(yyval)=T_STRUCT;}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 115 "kim.y" /* yacc.c:1646  */
    {(yyval)=T_UNION;}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 118 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 119 "kim.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]),(yyvsp[0]));}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 122 "kim.y" /* yacc.c:1646  */
    {(yyval)=setStructDeclaratorListSpecifier((yyvsp[-1]),(yyvsp[-2]));}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 125 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 126 "kim.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 129 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 132 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeStructOrEnumIdentifier(T_ENUM,(yyvsp[0]),ID_ENUM);}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 133 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeField((yyvsp[-3]),(yyvsp[-1]));}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 134 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_ENUM);}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 135 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeField((yyvsp[-3]),(yyvsp[-1]));}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 136 "kim.y" /* yacc.c:1646  */
    {(yyval)=getTypeOfStructOrEnumRefIdentifier(T_ENUM,(yyvsp[0]),ID_ENUM);}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 139 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 140 "kim.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 143 "kim.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorKind(makeIdentifier((yyvsp[0])),ID_ENUM_LITERAL);}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 144 "kim.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorKind(makeIdentifier((yyvsp[0])),ID_ENUM_LITERAL);}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 145 "kim.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorInit((yyvsp[-2]),(yyvsp[0]));}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 148 "kim.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorElementType((yyvsp[0]),(yyvsp[-1]));}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 149 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 152 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_POINTER);}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 153 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[0]),makeType(T_POINTER));}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 156 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeIdentifier((yyvsp[0]));}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 157 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 159 "kim.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorElementType((yyvsp[-3]),setTypeExpr(makeType(T_ARRAY),(yyvsp[-1])));}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 160 "kim.y" /* yacc.c:1646  */
    {(yyval)=current_id;current_level++;}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 162 "kim.y" /* yacc.c:1646  */
    {checkForwardReference();current_id=(yyvsp[-2]);current_level--; (yyval)=setDeclaratorElementType((yyvsp[-4]),setTypeField(makeType(T_FUNC),(yyvsp[-1])));}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 165 "kim.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 166 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 169 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 170 "kim.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),setDeclaratorKind(makeDummyIdentifier(),ID_PARM));}
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 173 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 174 "kim.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 177 "kim.y" /* yacc.c:1646  */
    {(yyval)=setParameterDeclaratorSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 178 "kim.y" /* yacc.c:1646  */
    {(yyval)=setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(),(yyvsp[0])),(yyvsp[-1]));}
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 181 "kim.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 182 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 185 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 186 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_POINTER);}
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 187 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[0]),makeType(T_POINTER));}
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 190 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 191 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeExpr(makeType(T_ARRAY),(yyvsp[-1]));}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 192 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[-3]),setTypeExpr(makeType(T_ARRAY),(yyvsp[-1])));}
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 193 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeExpr(makeType(T_FUNC),(yyvsp[-1]));}
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 194 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[-3]),setTypeExpr(makeType(T_FUNC),(yyvsp[-1])));}
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 197 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL);}
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 198 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 201 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LIST,(yyvsp[0]),NIL,makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL));}
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 202 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_STMT_LIST,(yyvsp[-1]),(yyvsp[0]));}
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 205 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 206 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 207 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 208 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 209 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 210 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 213 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LABEL_CASE, (yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 214 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LABEL_DEFAULT,NIL,(yyvsp[0]),NIL);}
#line 2179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 217 "kim.y" /* yacc.c:1646  */
    {(yyval)=current_id;current_level++;}
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 219 "kim.y" /* yacc.c:1646  */
    {checkForwardReference(); (yyval)=makeNode(N_STMT_COMPOUND,(yyvsp[-2]),NIL,(yyvsp[-1])); current_id=(yyvsp[-3]); current_level--;}
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 222 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_EMPTY,NIL,NIL,NIL);}
#line 2197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 223 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_EXPRESSION,NIL,(yyvsp[-1]),NIL);}
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 226 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_IF,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 227 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_IF_ELSE,(yyvsp[-4]),(yyvsp[-2]),(yyvsp[0]));}
#line 2215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 228 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_SWITCH,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 231 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_WHILE,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 232 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_DO,(yyvsp[-5]),NIL,(yyvsp[-2]));}
#line 2233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 233 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_FOR,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 236 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_FOR_EXP,(yyvsp[-4]),(yyvsp[-2]),(yyvsp[0]));}
#line 2245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 239 "kim.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 240 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 243 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_RETURN,NIL,(yyvsp[-1]),NIL);}
#line 2263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 244 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_CONTINUE,NIL,NIL,NIL);}
#line 2269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 245 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_BREAK,NIL,NIL,NIL);}
#line 2275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 248 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL);}
#line 2281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 249 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 252 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_ARG_LIST,(yyvsp[0]),NIL,makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL));}
#line 2293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 253 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_ARG_LIST,(yyvsp[-2]),(yyvsp[0]));}
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 256 "kim.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 257 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 260 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 263 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 266 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 269 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 270 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ASSIGN,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 273 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 276 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 277 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_OR,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 280 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 281 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_AND,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 284 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 287 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 290 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 293 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 294 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_EQL,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 295 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_NEQ,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 298 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 299 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_LSS,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 300 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_GTR,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 301 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_LEQ,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 302 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_GEQ,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 305 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 308 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 309 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ADD,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 310 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SUB,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 313 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 314 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_MUL,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 315 "kim.y" /* yacc.c:1646  */
    {(yyval)= makeNode(N_EXP_DIV,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 316 "kim.y" /* yacc.c:1646  */
    {(yyval)= makeNode(N_EXP_MOD,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 319 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 320 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_CAST,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 323 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 324 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PRE_INC,NIL,(yyvsp[0]),NIL);}
#line 2509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 325 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PRE_DEC,NIL,(yyvsp[0]),NIL);}
#line 2515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 326 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_AMP,NIL,(yyvsp[0]),NIL);}
#line 2521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 327 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STAR,NIL,(yyvsp[0]),NIL);}
#line 2527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 328 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_NOT,NIL,(yyvsp[0]),NIL);}
#line 2533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 329 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_MINUS,NIL,(yyvsp[0]),NIL);}
#line 2539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 330 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PLUS,NIL,(yyvsp[0]),NIL);}
#line 2545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 331 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SIZE_EXP,NIL,(yyvsp[0]),NIL);}
#line 2551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 332 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SIZE_TYPE,NIL,(yyvsp[-1]),NIL);}
#line 2557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 335 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 336 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ARRAY,(yyvsp[-3]),NIL,(yyvsp[-1]));}
#line 2569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 337 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_FUNCTION_CALL,(yyvsp[-3]),NIL,(yyvsp[-1]));}
#line 2575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 338 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STRUCT,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 339 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ARROW,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 340 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_POST_INC,NIL,(yyvsp[-1]),NIL);}
#line 2593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 341 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_POST_DEC,NIL,(yyvsp[-1]),NIL);}
#line 2599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 344 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_IDENT,NIL,getIdentifierDeclared((yyvsp[0])),NIL);}
#line 2605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 345 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_INT_CONST,NIL,(yyvsp[0]),NIL);}
#line 2611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 346 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_FLOAT_CONST,NIL,(yyvsp[0]),NIL);}
#line 2617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 347 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_CHAR_CONST,NIL,(yyvsp[0]),NIL);}
#line 2623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 348 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STRING_LITERAL,NIL,(yyvsp[0]),NIL);}
#line 2629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 349 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 352 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeNameSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 2641 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2645 "y.tab.c" /* yacc.c:1646  */
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
#line 355 "kim.y" /* yacc.c:1906  */


void yyerror(char *s) {
    syntax_err++;
    printf("line %d: %s near %s \n", line_no, s, yytext);
}
