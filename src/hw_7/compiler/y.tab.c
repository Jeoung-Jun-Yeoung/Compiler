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
#line 1 "parse.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include "type.h"
#include "syntax.h"

extern int line_no, syntax_err;
extern A_NODE *root;
extern A_ID *current_id;
extern int current_level;
extern A_TYPE *int_type;


#line 80 "y.tab.c" /* yacc.c:339  */

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
    IF_PREC = 258,
    ELSE_SYM = 259,
    IDENTIFIER = 260,
    TYPE_IDENTIFIER = 261,
    FLOAT_CONSTANT = 262,
    INTEGER_CONSTANT = 263,
    CHARACTER_CONSTANT = 264,
    STRING_LITERAL = 265,
    PLUS = 266,
    MINUS = 267,
    PLUSPLUS = 268,
    MINUSMINUS = 269,
    BAR = 270,
    AMP = 271,
    BARBAR = 272,
    AMPAMP = 273,
    ARROW = 274,
    SEMICOLON = 275,
    LSS = 276,
    GTR = 277,
    LEQ = 278,
    GEQ = 279,
    EQL = 280,
    NEQ = 281,
    DOTDOTDOT = 282,
    LP = 283,
    RP = 284,
    LB = 285,
    RB = 286,
    LR = 287,
    RR = 288,
    PERIOD = 289,
    COMMA = 290,
    EXCL = 291,
    STAR = 292,
    SLASH = 293,
    PERCENT = 294,
    ASSIGN = 295,
    COLON = 296,
    QUESTION = 297,
    AUTO_SYM = 298,
    STATIC_SYM = 299,
    TYPEDEF_SYM = 300,
    STRUCT_SYM = 301,
    ENUM_SYM = 302,
    SIZEOF_SYM = 303,
    UNION_SYM = 304,
    IF_SYM = 305,
    WHILE_SYM = 306,
    DO_SYM = 307,
    FOR_SYM = 308,
    CONTINUE_SYM = 309,
    BREAK_SYM = 310,
    RETURN_SYM = 311,
    SWITCH_SYM = 312,
    CASE_SYM = 313,
    DEFAULT_SYM = 314
  };
#endif
/* Tokens.  */
#define IF_PREC 258
#define ELSE_SYM 259
#define IDENTIFIER 260
#define TYPE_IDENTIFIER 261
#define FLOAT_CONSTANT 262
#define INTEGER_CONSTANT 263
#define CHARACTER_CONSTANT 264
#define STRING_LITERAL 265
#define PLUS 266
#define MINUS 267
#define PLUSPLUS 268
#define MINUSMINUS 269
#define BAR 270
#define AMP 271
#define BARBAR 272
#define AMPAMP 273
#define ARROW 274
#define SEMICOLON 275
#define LSS 276
#define GTR 277
#define LEQ 278
#define GEQ 279
#define EQL 280
#define NEQ 281
#define DOTDOTDOT 282
#define LP 283
#define RP 284
#define LB 285
#define RB 286
#define LR 287
#define RR 288
#define PERIOD 289
#define COMMA 290
#define EXCL 291
#define STAR 292
#define SLASH 293
#define PERCENT 294
#define ASSIGN 295
#define COLON 296
#define QUESTION 297
#define AUTO_SYM 298
#define STATIC_SYM 299
#define TYPEDEF_SYM 300
#define STRUCT_SYM 301
#define ENUM_SYM 302
#define SIZEOF_SYM 303
#define UNION_SYM 304
#define IF_SYM 305
#define WHILE_SYM 306
#define DO_SYM 307
#define FOR_SYM 308
#define CONTINUE_SYM 309
#define BREAK_SYM 310
#define RETURN_SYM 311
#define SWITCH_SYM 312
#define CASE_SYM 313
#define DEFAULT_SYM 314

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

#line 249 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   451

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  177
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  297

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

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
      55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    24,    24,    27,    28,    31,    32,    35,    35,    37,
      37,    41,    42,    45,    46,    49,    52,    53,    54,    55,
      58,    59,    60,    63,    64,    67,    68,    71,    72,    75,
      76,    79,    80,    83,    84,    85,    88,    89,    88,    91,
      91,    91,    93,    96,    97,   100,   101,   104,   107,   108,
     111,   114,   114,   116,   116,   118,   121,   122,   125,   126,
     126,   130,   131,   134,   135,   138,   139,   140,   142,   142,
     147,   148,   151,   152,   155,   156,   159,   160,   163,   164,
     167,   168,   169,   172,   173,   174,   175,   176,   179,   180,
     183,   184,   187,   188,   189,   190,   191,   192,   195,   196,
     199,   199,   204,   205,   208,   209,   210,   213,   214,   215,
     218,   221,   222,   225,   226,   227,   230,   231,   234,   235,
     238,   239,   242,   245,   248,   251,   252,   255,   256,   259,
     260,   263,   264,   267,   270,   273,   276,   277,   278,   281,
     282,   283,   284,   285,   288,   291,   292,   293,   296,   297,
     298,   299,   302,   303,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   318,   319,   320,   321,   322,   323,
     324,   327,   328,   329,   330,   331,   332,   335
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF_PREC", "ELSE_SYM", "IDENTIFIER",
  "TYPE_IDENTIFIER", "FLOAT_CONSTANT", "INTEGER_CONSTANT",
  "CHARACTER_CONSTANT", "STRING_LITERAL", "PLUS", "MINUS", "PLUSPLUS",
  "MINUSMINUS", "BAR", "AMP", "BARBAR", "AMPAMP", "ARROW", "SEMICOLON",
  "LSS", "GTR", "LEQ", "GEQ", "EQL", "NEQ", "DOTDOTDOT", "LP", "RP", "LB",
  "RB", "LR", "RR", "PERIOD", "COMMA", "EXCL", "STAR", "SLASH", "PERCENT",
  "ASSIGN", "COLON", "QUESTION", "AUTO_SYM", "STATIC_SYM", "TYPEDEF_SYM",
  "STRUCT_SYM", "ENUM_SYM", "SIZEOF_SYM", "UNION_SYM", "IF_SYM",
  "WHILE_SYM", "DO_SYM", "FOR_SYM", "CONTINUE_SYM", "BREAK_SYM",
  "RETURN_SYM", "SWITCH_SYM", "CASE_SYM", "DEFAULT_SYM", "$accept",
  "program", "translation_unit", "external_declaration",
  "function_definition", "@1", "@2", "declaration_list_opt",
  "declaration_list", "declaration", "declaration_specifiers",
  "storage_class_specifier", "init_declarator_list_opt",
  "init_declarator_list", "init_declarator", "initializer",
  "initializer_list", "type_specifier", "struct_type_specifier", "@3",
  "@4", "@5", "@6", "struct_or_union", "struct_declaration_list",
  "struct_declaration", "struct_declarator_list", "struct_declarator",
  "enum_type_specifier", "@7", "@8", "enumerator_list", "enumerator", "@9",
  "declarator", "pointer", "direct_declarator", "@10",
  "parameter_type_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "abstract_declarator_opt",
  "abstract_declarator", "direct_abstract_declarator",
  "statement_list_opt", "statement_list", "statement", "labeled_statement",
  "compound_statement", "@11", "expression_statement",
  "selection_statement", "iteration_statement", "for_expression",
  "expression_opt", "jump_statement", "arg_expression_list_opt",
  "arg_expression_list", "constant_expression_opt", "constant_expression",
  "expression", "comma_expression", "assignment_expression",
  "conditional_expression", "logical_or_expression",
  "logical_and_expression", "bitwise_or_expression",
  "bitwise_xor_expression", "bitwise_and_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "multiplicative_expression", "cast_expression",
  "unary_expression", "postfix_expression", "primary_expression",
  "type_name", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

#define YYPACT_NINF -216

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-216)))

#define YYTABLE_NINF -60

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     302,  -216,  -216,   153,    33,  -216,  -216,  -216,  -216,   144,
    -216,    76,   302,  -216,  -216,  -216,   153,    99,    99,  -216,
     161,  -216,  -216,    69,    45,    75,  -216,   142,   147,  -216,
    -216,   167,   172,  -216,    40,  -216,  -216,   156,   170,   176,
      45,  -216,   357,  -216,   181,   210,  -216,   153,   324,   176,
     184,  -216,  -216,  -216,    99,  -216,  -216,  -216,  -216,  -216,
     357,   357,   370,   370,   357,   278,   357,   357,   403,   186,
    -216,  -216,  -216,  -216,  -216,     2,   201,  -216,  -216,  -216,
     114,   113,  -216,    24,   125,  -216,   183,   407,  -216,   210,
     185,    49,  -216,  -216,   188,   324,  -216,  -216,  -216,  -216,
     126,    99,    13,   192,  -216,   189,  -216,  -216,  -216,  -216,
     357,  -216,  -216,  -216,     9,   197,   200,  -216,  -216,   278,
    -216,  -216,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,  -216,  -216,   225,
     357,   357,   227,    57,   202,  -216,   210,  -216,    68,   126,
     153,     5,  -216,   245,    99,  -216,   153,   148,   357,  -216,
      12,  -216,  -216,    80,  -216,    42,   190,   152,  -216,  -216,
     357,   212,   201,   204,  -216,   113,   113,  -216,  -216,  -216,
    -216,   125,   125,  -216,  -216,  -216,  -216,  -216,   214,   211,
    -216,   216,  -216,  -216,   357,  -216,  -216,   324,    65,    10,
    -216,  -216,  -216,  -216,  -216,   220,   221,   245,   232,   242,
     243,   357,   236,   357,   226,   233,   245,  -216,  -216,  -216,
    -216,  -216,  -216,  -216,   248,  -216,   240,   241,   244,    80,
      99,   357,  -216,  -216,  -216,  -216,   357,  -216,   357,  -216,
    -216,  -216,  -216,  -216,   153,   357,   357,   223,   357,  -216,
    -216,   251,  -216,   357,   231,   245,  -216,  -216,  -216,  -216,
    -216,  -216,   247,   249,  -216,  -216,  -216,   250,   276,   281,
     282,   258,  -216,   283,   245,  -216,  -216,  -216,   245,   245,
     357,   245,   357,   245,  -216,   306,  -216,   284,  -216,   296,
    -216,   245,   297,   357,  -216,  -216,  -216
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
       0,    40,   100,    10,    70,   171,   173,   172,   174,   175,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   127,   129,   131,   133,   134,
     135,   136,   139,   144,   145,   148,   152,   154,   164,     0,
      58,     0,    56,    26,    27,     0,    28,    29,     8,    37,
       0,    11,    78,     0,    71,    72,    74,   161,   152,   160,
       0,   155,   156,   157,    78,     0,     0,   159,   158,     0,
     162,    67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   169,   170,     0,
     116,     0,     0,     0,     0,    54,     0,    31,     0,     0,
       0,     0,    45,    88,    12,    13,    23,    70,   120,    76,
      81,    77,    79,    80,    69,     0,    70,    81,   177,   176,
       0,     0,   130,     0,   132,   137,   138,   140,   141,   142,
     143,   146,   147,   149,   150,   151,   126,   168,     0,   117,
     118,     0,   167,    52,     0,    57,    30,     0,     0,     0,
      48,    50,    41,    46,   102,     0,     0,     0,     0,     0,
       0,   111,     0,     0,     0,     0,    89,    90,    92,    93,
      94,    95,    96,    97,     0,    14,     0,     0,     0,    82,
      70,   120,    73,    75,   153,   163,     0,   166,     0,   165,
      60,    32,    38,    47,     0,     0,     0,     0,   111,   114,
     115,     0,   112,     0,     0,     0,   101,    91,   103,    86,
      83,    84,     0,     0,   128,   119,    49,     0,     0,     0,
       0,     0,   113,     0,     0,    99,    87,    85,     0,     0,
       0,     0,   111,     0,    98,   104,   107,     0,   109,     0,
     106,     0,     0,   111,   105,   108,   110
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -216,  -216,  -216,   307,  -216,  -216,  -216,  -216,  -216,   -89,
      14,  -216,  -216,  -216,   271,   -88,  -216,   -85,  -216,  -216,
    -216,  -216,  -216,  -216,   171,  -138,  -216,    84,  -216,  -216,
    -216,   252,   196,  -216,     0,     4,   -19,  -216,   -53,  -216,
    -216,   178,   230,  -137,   -67,  -216,  -216,   -69,  -216,   -15,
    -216,  -216,  -216,  -216,  -216,  -215,  -216,  -216,  -216,  -148,
     -46,   -42,  -216,  -131,   117,  -216,   228,   234,  -216,  -216,
    -216,    34,    71,  -216,    52,   -39,    -5,  -216,  -216,   235
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    49,    39,   153,   154,    15,
     102,    17,    31,    32,    33,    96,   148,    18,    19,    50,
     149,    38,   100,    20,   151,   152,   199,   200,    21,    44,
      28,    91,    92,   144,    22,    23,    24,    54,   226,   104,
     105,   106,   161,   162,   163,   215,   216,   217,   218,   219,
     101,   220,   221,   222,   270,   251,   223,   188,   189,    69,
      70,   224,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   116
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,   103,    97,    25,    40,   186,    71,   147,    26,   190,
     228,     2,   155,   203,    16,   150,    34,     1,     1,   122,
     227,   107,   109,   115,    53,   113,    16,   117,   118,   227,
     243,    35,    36,   271,    98,   131,   132,   166,   202,   158,
     157,   157,   158,   158,   123,   244,     4,    94,     2,    97,
       4,     8,     9,    71,    10,   108,   108,   111,   112,   108,
     203,   108,   108,   120,   150,   225,   150,   289,   115,   232,
       4,     2,    -7,    41,     1,    42,    29,   115,   296,   114,
      48,   173,   145,   263,   146,     5,     6,     7,     8,     9,
     193,    10,   146,   229,   183,   184,   185,     3,   242,   191,
     229,   196,   159,   197,    43,     2,   160,   265,   230,   241,
     231,     8,     9,   150,    10,   156,    71,   108,   167,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   234,     2,   114,   127,   128,   129,   130,   247,   125,
     126,    40,     5,     6,     7,     8,     9,   257,    10,    27,
     201,    97,   240,     1,     2,    71,    94,    25,     1,   175,
     176,   160,   133,   134,   135,   108,    37,   254,   156,   252,
     167,    71,     8,     9,   -51,    10,   157,   262,   158,    45,
     166,     3,   158,   181,   182,     4,   275,    46,   -36,    71,
       4,     5,     6,     7,     8,     9,     2,    10,   177,   178,
     179,   180,    51,   267,   268,   284,   252,    47,    52,   285,
     286,   273,   288,    89,   290,    90,    99,   121,   166,   124,
     158,   164,   294,   136,   165,   -59,   169,     4,    48,   170,
     187,   108,   192,     5,     6,     7,     8,     9,   287,    10,
     252,   235,   194,   237,   201,   236,   238,   239,   245,   246,
      55,   252,    56,    57,    58,    59,    60,    61,    62,    63,
     248,    64,   249,   250,   253,   204,   256,   255,   258,   259,
     260,   272,   274,    65,   269,   261,   276,    52,   282,   278,
     277,    66,    67,    55,     2,    56,    57,    58,    59,    60,
      61,    62,    63,    68,    64,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   279,    65,     1,     2,   280,
     291,   281,   283,   292,    66,    67,   293,   295,    93,    30,
     198,     5,     6,     7,     8,     9,    68,    10,   266,    55,
       3,    56,    57,    58,    59,    60,    61,    62,    63,     4,
      64,   143,   195,   233,   168,     5,     6,     7,     8,     9,
     172,    10,    65,   264,   171,     0,    95,     0,   174,     0,
      66,    67,    55,     0,    56,    57,    58,    59,    60,    61,
      62,    63,    68,    64,     0,    55,     0,    56,    57,    58,
      59,    60,    61,    62,    63,    65,    64,     0,     0,     0,
       0,     0,     0,    66,    67,     0,     0,     0,   110,     0,
       0,     0,     0,     0,     0,    68,    66,    67,    55,     0,
      56,    57,    58,    59,    60,    61,    62,    63,    68,    64,
     137,   138,     0,     0,     0,     0,   139,     0,     0,     0,
       0,   119,     0,     0,     0,   140,     0,   141,     0,    66,
      67,   142,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68
};

static const yytype_int16 yycheck[] =
{
      42,    54,    48,     3,    23,   136,    48,    95,     4,   140,
     158,     6,   101,   151,     0,   100,    16,     5,     5,    17,
     157,    60,    61,    65,    39,    64,    12,    66,    67,   166,
      20,    17,    18,   248,    49,    11,    12,    28,    33,    30,
      28,    28,    30,    30,    42,    35,    37,    47,     6,    95,
      37,    46,    47,    95,    49,    60,    61,    62,    63,    64,
     198,    66,    67,    68,   149,   154,   151,   282,   110,    27,
      37,     6,    32,    28,     5,    30,     0,   119,   293,    65,
      40,   123,    33,   231,    35,    43,    44,    45,    46,    47,
      33,    49,    35,   160,   133,   134,   135,    28,    33,   141,
     167,    33,   102,    35,    29,     6,   102,   238,    28,   197,
      30,    46,    47,   198,    49,   101,   158,   122,   114,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   170,     6,   119,    21,    22,    23,    24,   207,    25,
      26,   160,    43,    44,    45,    46,    47,   216,    49,     5,
     150,   197,   194,     5,     6,   197,   156,   157,     5,   125,
     126,   157,    37,    38,    39,   170,     5,   213,   154,   211,
     166,   213,    46,    47,    32,    49,    28,   230,    30,    32,
      28,    28,    30,   131,   132,    37,   255,    20,    32,   231,
      37,    43,    44,    45,    46,    47,     6,    49,   127,   128,
     129,   130,    32,   245,   246,   274,   248,    35,    32,   278,
     279,   253,   281,    32,   283,     5,    32,    31,    28,    18,
      30,    29,   291,    40,    35,    40,    29,    37,    40,    29,
       5,   236,     5,    43,    44,    45,    46,    47,   280,    49,
     282,    29,    40,    29,   244,    41,    35,    31,    28,    28,
       5,   293,     7,     8,     9,    10,    11,    12,    13,    14,
      28,    16,    20,    20,    28,    20,    33,    41,    20,    29,
      29,    20,    41,    28,    51,    31,    29,    32,    20,    29,
      31,    36,    37,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    48,    16,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    29,    28,     5,     6,    28,
       4,    29,    29,    29,    36,    37,    20,    20,    47,    12,
     149,    43,    44,    45,    46,    47,    48,    49,   244,     5,
      28,     7,     8,     9,    10,    11,    12,    13,    14,    37,
      16,    89,   146,   165,   114,    43,    44,    45,    46,    47,
     122,    49,    28,   236,   119,    -1,    32,    -1,   124,    -1,
      36,    37,     5,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    48,    16,    -1,     5,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    28,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    37,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    36,    37,     5,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    48,    16,
      13,    14,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    28,    -1,    30,    -1,    36,
      37,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,    28,    37,    43,    44,    45,    46,    47,
      49,    61,    62,    63,    64,    69,    70,    71,    77,    78,
      83,    88,    94,    95,    96,    94,    95,     5,    90,     0,
      63,    72,    73,    74,    94,    70,    70,     5,    81,    66,
      96,    28,    30,    29,    89,    32,    20,    35,    40,    65,
      79,    32,    32,   109,    97,     5,     7,     8,     9,    10,
      11,    12,    13,    14,    16,    28,    36,    37,    48,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,    32,
       5,    91,    92,    74,    94,    32,    75,   120,   109,    32,
      82,   110,    70,    98,    99,   100,   101,   135,   136,   135,
      28,   136,   136,   135,    70,   121,   139,   135,   135,    28,
     136,    31,    17,    42,    18,    25,    26,    21,    22,    23,
      24,    11,    12,    37,    38,    39,    40,    13,    14,    19,
      28,    30,    34,    91,    93,    33,    35,    75,    76,    80,
      77,    84,    85,    67,    68,    69,    70,    28,    30,    94,
      95,   102,   103,   104,    29,    35,    28,    95,   102,    29,
      29,   139,   126,   121,   127,   131,   131,   132,   132,   132,
     132,   134,   134,   135,   135,   135,   123,     5,   117,   118,
     123,   121,     5,    33,    40,    92,    33,    35,    84,    86,
      87,    94,    33,    85,    20,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,   105,   106,   107,   108,   109,
     111,   112,   113,   116,   121,    69,    98,   103,   119,   104,
      28,    30,    27,   101,   135,    29,    41,    29,    35,    31,
     121,    75,    33,    20,    35,    28,    28,   107,    28,    20,
      20,   115,   121,    28,   120,    41,    33,   107,    20,    29,
      29,    31,    98,   119,   124,   123,    87,   121,   121,    51,
     114,   115,    20,   121,    41,   107,    29,    31,    29,    29,
      28,    29,    20,    29,   107,   107,   107,   121,   107,   115,
     107,     4,    29,    20,   107,    20,   115
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    62,    63,    63,    65,    64,    66,
      64,    67,    67,    68,    68,    69,    70,    70,    70,    70,
      71,    71,    71,    72,    72,    73,    73,    74,    74,    75,
      75,    76,    76,    77,    77,    77,    79,    80,    78,    81,
      82,    78,    78,    83,    83,    84,    84,    85,    86,    86,
      87,    89,    88,    90,    88,    88,    91,    91,    92,    93,
      92,    94,    94,    95,    95,    96,    96,    96,    97,    96,
      98,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   103,   104,   104,   104,   104,   104,   105,   105,
     106,   106,   107,   107,   107,   107,   107,   107,   108,   108,
     110,   109,   111,   111,   112,   112,   112,   113,   113,   113,
     114,   115,   115,   116,   116,   116,   117,   117,   118,   118,
     119,   119,   120,   121,   122,   123,   123,   124,   124,   125,
     125,   126,   126,   127,   128,   129,   130,   130,   130,   131,
     131,   131,   131,   131,   132,   133,   133,   133,   134,   134,
     134,   134,   135,   135,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   137,   137,   137,   137,   137,   137,
     137,   138,   138,   138,   138,   138,   138,   139
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
       0,     1,     1,     1,     1,     1,     3,     1,     5,     1,
       3,     1,     3,     1,     1,     1,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     1,     3,     3,     1,     3,
       3,     3,     1,     4,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     4,     1,     4,     4,     3,     3,     2,
       2,     1,     1,     1,     1,     1,     3,     2
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
#line 24 "parse.y" /* yacc.c:1646  */
    {root=makeNode(N_PROGRAM,NIL,(yyvsp[0]),NIL); checkForwardReference();}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 27 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 28 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]),(yyvsp[0]));}
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 31 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 32 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 35 "parse.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 36 "parse.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorBody((yyvsp[-1]),(yyvsp[0]));}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 37 "parse.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorSpecifier((yyvsp[0]),makeSpecifier(int_type,0));}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 38 "parse.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorBody((yyvsp[-1]),(yyvsp[0]));}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 41 "parse.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 42 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 45 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 46 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]),(yyvsp[0]));}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 49 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorListSpecifier((yyvsp[-1]),(yyvsp[-2]));}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 52 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeSpecifier((yyvsp[0]),0);}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 53 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeSpecifier(0,(yyvsp[0]));}
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 54 "parse.y" /* yacc.c:1646  */
    {(yyval)=updateSpecifier((yyvsp[0]),(yyvsp[-1]),0);}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 55 "parse.y" /* yacc.c:1646  */
    {(yyval)=updateSpecifier((yyvsp[0]),0,(yyvsp[-1]));}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 58 "parse.y" /* yacc.c:1646  */
    {(yyval)=S_AUTO;}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 59 "parse.y" /* yacc.c:1646  */
    {(yyval)=S_STATIC;}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 60 "parse.y" /* yacc.c:1646  */
    {(yyval)=S_TYPEDEF;}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 63 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeDummyIdentifier();}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 64 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 67 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 68 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 71 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 72 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorInit((yyvsp[-2]),(yyvsp[0]));}
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 75 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_INIT_LIST_ONE,NIL,(yyvsp[0]),NIL);}
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 76 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 79 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_INIT_LIST,(yyvsp[0]),NIL,makeNode(N_INIT_LIST_NIL,NIL,NIL,NIL));}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 80 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_INIT_LIST,(yyvsp[-2]),(yyvsp[0]));}
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 83 "parse.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 84 "parse.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 85 "parse.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 88 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeStructOrEnumIdentifier((yyvsp[-1]),(yyvsp[0]),ID_STRUCT);}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 89 "parse.y" /* yacc.c:1646  */
    { (yyval)=current_id;current_level++;}
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 90 "parse.y" /* yacc.c:1646  */
    {checkForwardReference();(yyval)=setTypeField((yyvsp[-4]),(yyvsp[-1]));current_level--; current_id=(yyvsp[-2]);}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 91 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeType((yyvsp[0]));}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 91 "parse.y" /* yacc.c:1646  */
    {(yyval)=current_id;current_level++;}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 92 "parse.y" /* yacc.c:1646  */
    {checkForwardReference();(yyval)=setTypeField((yyvsp[-4]),(yyvsp[-1])); current_level--;current_id=(yyvsp[-2]);}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 93 "parse.y" /* yacc.c:1646  */
    {(yyval)=getTypeOfStructOrEnumRefIdentifier((yyvsp[-1]),(yyvsp[0]),ID_STRUCT);}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 96 "parse.y" /* yacc.c:1646  */
    {(yyval)=T_STRUCT;}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 97 "parse.y" /* yacc.c:1646  */
    {(yyval)=T_UNION;}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 100 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 101 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]),(yyvsp[0]));}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 104 "parse.y" /* yacc.c:1646  */
    {(yyval)=setStructDeclaratorListSpecifier((yyvsp[-1]),(yyvsp[-2]));}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 107 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 108 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 111 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 114 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeStructOrEnumIdentifier(T_ENUM,(yyvsp[0]),ID_ENUM);}
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 115 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeField((yyvsp[-3]),(yyvsp[-1]));}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 116 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_ENUM);}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 117 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeField((yyvsp[-3]),(yyvsp[-1]));}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 118 "parse.y" /* yacc.c:1646  */
    {(yyval)=getTypeOfStructOrEnumRefIdentifier(T_ENUM,(yyvsp[0]),ID_ENUM);}
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 121 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 122 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 125 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorKind(makeIdentifier((yyvsp[0])),ID_ENUM_LITERAL);}
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 126 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorKind(makeIdentifier((yyvsp[0])),ID_ENUM_LITERAL);}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 127 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorInit((yyvsp[-2]),(yyvsp[0]));}
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 130 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorElementType((yyvsp[0]),(yyvsp[-1]));}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 131 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 134 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_POINTER);}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 135 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[0]),makeType(T_POINTER));}
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 138 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeIdentifier((yyvsp[0]));}
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 139 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 141 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorElementType((yyvsp[-3]),setTypeExpr(makeType(T_ARRAY),(yyvsp[-1])));}
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 142 "parse.y" /* yacc.c:1646  */
    {(yyval)=current_id;current_level++;}
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 144 "parse.y" /* yacc.c:1646  */
    {checkForwardReference();current_id=(yyvsp[-2]);current_level--; (yyval)=setDeclaratorElementType((yyvsp[-4]),setTypeField(makeType(T_FUNC),(yyvsp[-1])));}
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 147 "parse.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 148 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 151 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 152 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),setDeclaratorKind(makeDummyIdentifier(),ID_PARM));}
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 155 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 156 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 159 "parse.y" /* yacc.c:1646  */
    {(yyval)=setParameterDeclaratorSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 2045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 160 "parse.y" /* yacc.c:1646  */
    {(yyval)=setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(),(yyvsp[0])),(yyvsp[-1]));}
#line 2051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 163 "parse.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 164 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 167 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 168 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_POINTER);}
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 169 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[0]),makeType(T_POINTER));}
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 172 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 173 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeExpr(makeType(T_ARRAY),(yyvsp[-1]));}
#line 2093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 174 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[-3]),setTypeExpr(makeType(T_ARRAY),(yyvsp[-1])));}
#line 2099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 175 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeExpr(makeType(T_FUNC),(yyvsp[-1]));}
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 176 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[-3]),setTypeExpr(makeType(T_FUNC),(yyvsp[-1])));}
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 179 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL);}
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 180 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 183 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LIST,(yyvsp[0]),NIL,makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL));}
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 184 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_STMT_LIST,(yyvsp[-1]),(yyvsp[0]));}
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 187 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 188 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 189 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 190 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 191 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 192 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 195 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LABEL_CASE, (yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 196 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LABEL_DEFAULT,NIL,(yyvsp[0]),NIL);}
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 199 "parse.y" /* yacc.c:1646  */
    {(yyval)=current_id;current_level++;}
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 201 "parse.y" /* yacc.c:1646  */
    {checkForwardReference(); (yyval)=makeNode(N_STMT_COMPOUND,(yyvsp[-2]),NIL,(yyvsp[-1])); current_id=(yyvsp[-3]); current_level--;}
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 204 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_EMPTY,NIL,NIL,NIL);}
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 205 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_EXPRESSION,NIL,(yyvsp[-1]),NIL);}
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 208 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_IF,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 209 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_IF_ELSE,(yyvsp[-4]),(yyvsp[-2]),(yyvsp[0]));}
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 210 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_SWITCH,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 213 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_WHILE,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 214 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_DO,(yyvsp[-5]),NIL,(yyvsp[-2]));}
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 215 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_FOR,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 218 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_FOR_EXP,(yyvsp[-4]),(yyvsp[-2]),(yyvsp[0]));}
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 221 "parse.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 222 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 225 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_RETURN,NIL,(yyvsp[-1]),NIL);}
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 226 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_CONTINUE,NIL,NIL,NIL);}
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 227 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_BREAK,NIL,NIL,NIL);}
#line 2279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 230 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL);}
#line 2285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 231 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 234 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_ARG_LIST,(yyvsp[0]),NIL,makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL));}
#line 2297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 235 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_ARG_LIST,(yyvsp[-2]),(yyvsp[0]));}
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 238 "parse.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 239 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 242 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 245 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 248 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 251 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 252 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ASSIGN,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 255 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 256 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_CONDITIONAL, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));}
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 259 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 260 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_OR,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 263 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 264 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_AND,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 267 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 270 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 273 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 276 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 277 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_EQL,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 278 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_NEQ,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 281 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 282 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_LSS,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 283 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_GTR,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 284 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_LEQ,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 285 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_GEQ,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 288 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 291 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 292 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ADD,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 293 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SUB,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 296 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 297 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_MUL,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 298 "parse.y" /* yacc.c:1646  */
    {(yyval)= makeNode(N_EXP_DIV,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 299 "parse.y" /* yacc.c:1646  */
    {(yyval)= makeNode(N_EXP_MOD,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 302 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 303 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_CAST,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 306 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 307 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PRE_INC,NIL,(yyvsp[0]),NIL);}
#line 2519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 308 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PRE_DEC,NIL,(yyvsp[0]),NIL);}
#line 2525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 309 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_AMP,NIL,(yyvsp[0]),NIL);}
#line 2531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 310 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STAR,NIL,(yyvsp[0]),NIL);}
#line 2537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 311 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_NOT,NIL,(yyvsp[0]),NIL);}
#line 2543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 312 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_MINUS,NIL,(yyvsp[0]),NIL);}
#line 2549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 313 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PLUS,NIL,(yyvsp[0]),NIL);}
#line 2555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 314 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SIZE_EXP,NIL,(yyvsp[0]),NIL);}
#line 2561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 315 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SIZE_TYPE,NIL,(yyvsp[-1]),NIL);}
#line 2567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 318 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 319 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ARRAY,(yyvsp[-3]),NIL,(yyvsp[-1]));}
#line 2579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 320 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_FUNCTION_CALL,(yyvsp[-3]),NIL,(yyvsp[-1]));}
#line 2585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 321 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STRUCT,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 322 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ARROW,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 323 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_POST_INC,NIL,(yyvsp[-1]),NIL);}
#line 2603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 324 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_POST_DEC,NIL,(yyvsp[-1]),NIL);}
#line 2609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 327 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_IDENT,NIL,getIdentifierDeclared((yyvsp[0])),NIL);}
#line 2615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 328 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_INT_CONST,NIL,(yyvsp[0]),NIL);}
#line 2621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 329 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_FLOAT_CONST,NIL,(yyvsp[0]),NIL);}
#line 2627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 330 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_CHAR_CONST,NIL,(yyvsp[0]),NIL);}
#line 2633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 331 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STRING_LITERAL,NIL,(yyvsp[0]),NIL);}
#line 2639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 332 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 335 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeNameSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 2651 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2655 "y.tab.c" /* yacc.c:1646  */
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
#line 338 "parse.y" /* yacc.c:1906  */


extern char *yytext;
yyerror(char *s) {
	syntax_err++;
	printf("  line %d: %s near %s \n", line_no, s, yytext);
	exit(1);
}
