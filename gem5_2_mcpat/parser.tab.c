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
#line 32 "parser.y" /* yacc.c:339  */

#include "lib/utils.h"
#include "lib/handle_options.h"

int ERROR = 0;
int DETAILED = 0;

extern FILE *yyin;
extern int yylineno;
xml_document<> doc;

struct t_mcpat_params *mcpat_param;
struct t_mcpat_stats *mcpat_stats;
struct t_error *error_list;

int yylex(void);
void yyerror(const char *s, ...);
void yyrestart(FILE *yyin);

#line 86 "parser.tab.c" /* yacc.c:339  */

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
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    EQ = 258,
    WS = 259,
    NL = 260,
    BADTKN = 261,
    ISA_T = 262,
    SYSCLK = 263,
    M_MODE = 264,
    FETCHW = 265,
    DECODEW = 266,
    ISSUEW = 267,
    COMMITW = 268,
    BASE = 269,
    MAXBASE = 270,
    BUFFERS = 271,
    NIQENTRIES = 272,
    NROBENTRIES = 273,
    NINTREGS = 274,
    NFREGS = 275,
    SQENTRIES = 276,
    LQENTRIES = 277,
    RASSIZE = 278,
    LHISTB = 279,
    LCTRB = 280,
    LPREDSIZE = 281,
    GPREDSIZE = 282,
    GCTRB = 283,
    CPREDSIZE = 284,
    CCTRB = 285,
    BTBE = 286,
    TLBD = 287,
    TLBI = 288,
    IL1SIZE = 289,
    IL1ASSOC = 290,
    I1MSHRS = 291,
    HLIL1 = 292,
    RLIL1 = 293,
    IL1BSIZE = 294,
    DL1SIZE = 295,
    DL1ASSOC = 296,
    D1MSHRS = 297,
    HLDL1 = 298,
    RLDL1 = 299,
    WBDL1 = 300,
    DL1BSIZE = 301,
    L2SIZE = 302,
    L2ASSOC = 303,
    L2MSHRS = 304,
    HLL2 = 305,
    RLL2 = 306,
    WBL2 = 307,
    L2BSIZE = 308,
    L3SIZE = 309,
    L3ASSOC = 310,
    L3MSHRS = 311,
    HLL3 = 312,
    RLL3 = 313,
    WBL3 = 314,
    L3BSIZE = 315,
    MULTALU_LAT = 316,
    DIVALU_LAT = 317,
    DECODINSTS = 318,
    BRANCHPRED = 319,
    BRANCHERR = 320,
    IEWLOAD = 321,
    IEWSTORE = 322,
    CINT = 323,
    CFP = 324,
    IPC = 325,
    NCYCLES = 326,
    ICYCLES = 327,
    ROBREADS = 328,
    ROBWRITES = 329,
    RE_INT_LKUP = 330,
    RE_INT_OP = 331,
    RE_FP_LKUP = 332,
    RE_FP_OP = 333,
    IQ_INT_R = 334,
    IQ_INT_W = 335,
    IQ_INT_WA = 336,
    IQ_FP_QR = 337,
    IQ_FP_QW = 338,
    IQ_FP_QWA = 339,
    INT_RG_R = 340,
    INT_RG_W = 341,
    FP_RG_R = 342,
    FP_RG_W = 343,
    COMCALLS = 344,
    INTDIV = 345,
    INTMULT = 346,
    INT_ALU_ACC = 347,
    FP_ALU_ACC = 348,
    BTBLKUP = 349,
    BTBUP = 350,
    DTB_MISS = 351,
    DTB_ACC = 352,
    ITB_MISS = 353,
    ITB_ACC = 354,
    D1_ACC = 355,
    D1_MISS = 356,
    D1_WRACC = 357,
    D1_WRBACK = 358,
    D1_WRMISS = 359,
    D1_WRHITS = 360,
    I1_ACC = 361,
    I1_MISS = 362,
    I1_WRACC = 363,
    I1_WRBACK = 364,
    I1_WRMISS = 365,
    I1_WRHITS = 366,
    L2_ACC = 367,
    L2_MISS = 368,
    L2_WRACC = 369,
    L2_WRMISS = 370,
    L2_WRBACK = 371,
    L2_WRBMISS = 372,
    L3_ACC = 373,
    L3_MISS = 374,
    L3_WRACC = 375,
    L3_WRMISS = 376,
    L3_WRBACK = 377,
    L3_WRBMISS = 378,
    MM_CHNLS = 379,
    MM_RANKS = 380,
    MM_BSIZE = 381,
    MM_NREADS = 382,
    MM_NWRITES = 383,
    NUM = 384,
    FLOAT = 385,
    STR = 386
  };
#endif
/* Tokens.  */
#define EQ 258
#define WS 259
#define NL 260
#define BADTKN 261
#define ISA_T 262
#define SYSCLK 263
#define M_MODE 264
#define FETCHW 265
#define DECODEW 266
#define ISSUEW 267
#define COMMITW 268
#define BASE 269
#define MAXBASE 270
#define BUFFERS 271
#define NIQENTRIES 272
#define NROBENTRIES 273
#define NINTREGS 274
#define NFREGS 275
#define SQENTRIES 276
#define LQENTRIES 277
#define RASSIZE 278
#define LHISTB 279
#define LCTRB 280
#define LPREDSIZE 281
#define GPREDSIZE 282
#define GCTRB 283
#define CPREDSIZE 284
#define CCTRB 285
#define BTBE 286
#define TLBD 287
#define TLBI 288
#define IL1SIZE 289
#define IL1ASSOC 290
#define I1MSHRS 291
#define HLIL1 292
#define RLIL1 293
#define IL1BSIZE 294
#define DL1SIZE 295
#define DL1ASSOC 296
#define D1MSHRS 297
#define HLDL1 298
#define RLDL1 299
#define WBDL1 300
#define DL1BSIZE 301
#define L2SIZE 302
#define L2ASSOC 303
#define L2MSHRS 304
#define HLL2 305
#define RLL2 306
#define WBL2 307
#define L2BSIZE 308
#define L3SIZE 309
#define L3ASSOC 310
#define L3MSHRS 311
#define HLL3 312
#define RLL3 313
#define WBL3 314
#define L3BSIZE 315
#define MULTALU_LAT 316
#define DIVALU_LAT 317
#define DECODINSTS 318
#define BRANCHPRED 319
#define BRANCHERR 320
#define IEWLOAD 321
#define IEWSTORE 322
#define CINT 323
#define CFP 324
#define IPC 325
#define NCYCLES 326
#define ICYCLES 327
#define ROBREADS 328
#define ROBWRITES 329
#define RE_INT_LKUP 330
#define RE_INT_OP 331
#define RE_FP_LKUP 332
#define RE_FP_OP 333
#define IQ_INT_R 334
#define IQ_INT_W 335
#define IQ_INT_WA 336
#define IQ_FP_QR 337
#define IQ_FP_QW 338
#define IQ_FP_QWA 339
#define INT_RG_R 340
#define INT_RG_W 341
#define FP_RG_R 342
#define FP_RG_W 343
#define COMCALLS 344
#define INTDIV 345
#define INTMULT 346
#define INT_ALU_ACC 347
#define FP_ALU_ACC 348
#define BTBLKUP 349
#define BTBUP 350
#define DTB_MISS 351
#define DTB_ACC 352
#define ITB_MISS 353
#define ITB_ACC 354
#define D1_ACC 355
#define D1_MISS 356
#define D1_WRACC 357
#define D1_WRBACK 358
#define D1_WRMISS 359
#define D1_WRHITS 360
#define I1_ACC 361
#define I1_MISS 362
#define I1_WRACC 363
#define I1_WRBACK 364
#define I1_WRMISS 365
#define I1_WRHITS 366
#define L2_ACC 367
#define L2_MISS 368
#define L2_WRACC 369
#define L2_WRMISS 370
#define L2_WRBACK 371
#define L2_WRBMISS 372
#define L3_ACC 373
#define L3_MISS 374
#define L3_WRACC 375
#define L3_WRMISS 376
#define L3_WRBACK 377
#define L3_WRBMISS 378
#define MM_CHNLS 379
#define MM_RANKS 380
#define MM_BSIZE 381
#define MM_NREADS 382
#define MM_NWRITES 383
#define NUM 384
#define FLOAT 385
#define STR 386

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 51 "parser.y" /* yacc.c:355  */

    int t_int;
    double t_double;
    char * t_str;

#line 394 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 411 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   489

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  132
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  5
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  373

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   386

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    88,    88,    92,    93,    94,    95,    99,   100,   101,
     102,   103,   106,   107,   108,   109,   112,   113,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   145,   149,   150,
     151,   152,   153,   154,   159,   164,   165,   166,   167,   168,
     173,   177,   178,   179,   180,   181,   182,   187,   191,   192,
     193,   194,   195,   196,   197,   198,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "EQ", "WS", "NL", "BADTKN", "ISA_T",
  "SYSCLK", "M_MODE", "FETCHW", "DECODEW", "ISSUEW", "COMMITW", "BASE",
  "MAXBASE", "BUFFERS", "NIQENTRIES", "NROBENTRIES", "NINTREGS", "NFREGS",
  "SQENTRIES", "LQENTRIES", "RASSIZE", "LHISTB", "LCTRB", "LPREDSIZE",
  "GPREDSIZE", "GCTRB", "CPREDSIZE", "CCTRB", "BTBE", "TLBD", "TLBI",
  "IL1SIZE", "IL1ASSOC", "I1MSHRS", "HLIL1", "RLIL1", "IL1BSIZE",
  "DL1SIZE", "DL1ASSOC", "D1MSHRS", "HLDL1", "RLDL1", "WBDL1", "DL1BSIZE",
  "L2SIZE", "L2ASSOC", "L2MSHRS", "HLL2", "RLL2", "WBL2", "L2BSIZE",
  "L3SIZE", "L3ASSOC", "L3MSHRS", "HLL3", "RLL3", "WBL3", "L3BSIZE",
  "MULTALU_LAT", "DIVALU_LAT", "DECODINSTS", "BRANCHPRED", "BRANCHERR",
  "IEWLOAD", "IEWSTORE", "CINT", "CFP", "IPC", "NCYCLES", "ICYCLES",
  "ROBREADS", "ROBWRITES", "RE_INT_LKUP", "RE_INT_OP", "RE_FP_LKUP",
  "RE_FP_OP", "IQ_INT_R", "IQ_INT_W", "IQ_INT_WA", "IQ_FP_QR", "IQ_FP_QW",
  "IQ_FP_QWA", "INT_RG_R", "INT_RG_W", "FP_RG_R", "FP_RG_W", "COMCALLS",
  "INTDIV", "INTMULT", "INT_ALU_ACC", "FP_ALU_ACC", "BTBLKUP", "BTBUP",
  "DTB_MISS", "DTB_ACC", "ITB_MISS", "ITB_ACC", "D1_ACC", "D1_MISS",
  "D1_WRACC", "D1_WRBACK", "D1_WRMISS", "D1_WRHITS", "I1_ACC", "I1_MISS",
  "I1_WRACC", "I1_WRBACK", "I1_WRMISS", "I1_WRHITS", "L2_ACC", "L2_MISS",
  "L2_WRACC", "L2_WRMISS", "L2_WRBACK", "L2_WRBMISS", "L3_ACC", "L3_MISS",
  "L3_WRACC", "L3_WRMISS", "L3_WRBACK", "L3_WRBMISS", "MM_CHNLS",
  "MM_RANKS", "MM_BSIZE", "MM_NREADS", "MM_NWRITES", "NUM", "FLOAT", "STR",
  "$accept", "S", "line", "config", "stats", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386
};
# endif

#define YYPACT_NINF -128

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-128)))

#define YYTABLE_NINF -3

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -128,     4,     0,  -128,  -128,  -126,     3,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   242,   243,   244,   245,   246,  -128,  -128,  -128,
      54,   117,   122,   123,   124,   125,   241,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   304,  -127,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,  -128
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     1,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     5,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,     8,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    41,    43,    44,
      45,    46,    42,    34,    36,    37,    39,    40,    38,    35,
      47,    49,    50,    52,    53,    51,    48,    54,    56,    57,
      59,    60,    58,    55,    61,    62,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   109,   107,   108,
     110,   111,   112,   115,   113,   114,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,    63,    64,
      65,   128,   129
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -128,  -128,  -128,  -128,  -128
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,   127,   128
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      -2,     4,   315,   316,     3,   129,   130,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   251,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   252,   249,
     250,   253,   254,   255,   256,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     257,     0,     0,     0,     0,     0,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,     0,   313,   314,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372
};

static const yytype_int16 yycheck[] =
{
       0,     1,   129,   130,     0,   131,     3,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,   129,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     3,     3,     3,   131,     4,
       4,   129,   129,   129,   129,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,    -1,    -1,    -1,    -1,    -1,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,    -1,   130,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   133,   134,     0,     1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   135,   136,   131,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     3,     3,     3,     4,
       4,   129,   131,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   130,   129,   129,   130,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   132,   133,   134,   134,   134,   134,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3
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
#line 88 "parser.y" /* yacc.c:1646  */
    { /* finish */ }
#line 1765 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 95 "parser.y" /* yacc.c:1646  */
    { /* do nothing */ }
#line 1771 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 99 "parser.y" /* yacc.c:1646  */
    { mcpat_param->isa_x86 = !strcmp("X86ISA", (yyvsp[0].t_str)); }
#line 1777 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 100 "parser.y" /* yacc.c:1646  */
    { DETAILED = (!strcmp("timing", (yyvsp[0].t_str)));}
#line 1783 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 101 "parser.y" /* yacc.c:1646  */
    { mcpat_param->clock_rate = (yyvsp[0].t_int); }
#line 1789 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 102 "parser.y" /* yacc.c:1646  */
    { mcpat_param->fetch_width = (yyvsp[0].t_int); }
#line 1795 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 103 "parser.y" /* yacc.c:1646  */
    {
	               mcpat_param->decode_width = (yyvsp[0].t_int);
		       mcpat_param->issue_width = (yyvsp[0].t_int); }
#line 1803 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 106 "parser.y" /* yacc.c:1646  */
    { mcpat_param->peak_issue_width = (yyvsp[0].t_int); }
#line 1809 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 107 "parser.y" /* yacc.c:1646  */
    { mcpat_param->commit_width = (yyvsp[0].t_int); }
#line 1815 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 108 "parser.y" /* yacc.c:1646  */
    { mcpat_param->base_stages += (yyvsp[0].t_int); mcpat_param->nbase++; }
#line 1821 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 109 "parser.y" /* yacc.c:1646  */
    {
	               mcpat_param->max_base = MAX(mcpat_param->max_base, (yyvsp[0].t_int));
		       mcpat_param->nmax_base++; }
#line 1829 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 112 "parser.y" /* yacc.c:1646  */
    { mcpat_param->instruction_buffer_size = (yyvsp[0].t_int); }
#line 1835 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 113 "parser.y" /* yacc.c:1646  */
    {
	               if ((yyvsp[0].t_int) % 2==0){
			   mcpat_param->instruction_window_size = (yyvsp[0].t_int)/2;
			   mcpat_param->fp_instruction_window_size = (yyvsp[0].t_int)/2;
		       } else { yyerror("numIQEntries must be odd\n"); } }
#line 1845 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 118 "parser.y" /* yacc.c:1646  */
    { mcpat_param->ROB_size = (yyvsp[0].t_int);  }
#line 1851 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 119 "parser.y" /* yacc.c:1646  */
    { mcpat_param->phy_Regs_IRF_size = (yyvsp[0].t_int);  }
#line 1857 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 120 "parser.y" /* yacc.c:1646  */
    { mcpat_param->phy_Regs_FRF_size = (yyvsp[0].t_int); }
#line 1863 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 121 "parser.y" /* yacc.c:1646  */
    { mcpat_param->store_buffer_size = (yyvsp[0].t_int);  }
#line 1869 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 122 "parser.y" /* yacc.c:1646  */
    { mcpat_param->load_buffer_size = (yyvsp[0].t_int); }
#line 1875 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 123 "parser.y" /* yacc.c:1646  */
    { mcpat_param->RAS_size = (yyvsp[0].t_int); }
#line 1881 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 124 "parser.y" /* yacc.c:1646  */
    { mcpat_param->load_predictor[0] = (yyvsp[0].t_int); }
#line 1887 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 125 "parser.y" /* yacc.c:1646  */
    { mcpat_param->load_predictor[1] = (yyvsp[0].t_int); }
#line 1893 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 126 "parser.y" /* yacc.c:1646  */
    {
	               mcpat_param->load_predictor[2] = (yyvsp[0].t_int);
		       if (mcpat_param->load_predictor[0]==0) {
			   mcpat_param->load_predictor[0] = (int) floor(log2((double) (yyvsp[0].t_int)));
		       } }
#line 1903 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 131 "parser.y" /* yacc.c:1646  */
    { mcpat_param->global_predictor[0] = (yyvsp[0].t_int); }
#line 1909 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 132 "parser.y" /* yacc.c:1646  */
    { mcpat_param->global_predictor[1] = (yyvsp[0].t_int); }
#line 1915 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 133 "parser.y" /* yacc.c:1646  */
    { mcpat_param->predictor_chooser[0] = (yyvsp[0].t_int); }
#line 1921 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 134 "parser.y" /* yacc.c:1646  */
    { mcpat_param->predictor_chooser[1] = (yyvsp[0].t_int); }
#line 1927 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 135 "parser.y" /* yacc.c:1646  */
    { mcpat_param->BTB_config = (yyvsp[0].t_int); }
#line 1933 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 136 "parser.y" /* yacc.c:1646  */
    { mcpat_param->number_entries_dtlb = (yyvsp[0].t_int); }
#line 1939 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 137 "parser.y" /* yacc.c:1646  */
    { mcpat_param->number_entries_itlb = (yyvsp[0].t_int); }
#line 1945 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 138 "parser.y" /* yacc.c:1646  */
    { mcpat_param->dcache_config[0] = (yyvsp[0].t_int); }
#line 1951 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 139 "parser.y" /* yacc.c:1646  */
    { mcpat_param->dcache_config[1] = (yyvsp[0].t_int); }
#line 1957 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 140 "parser.y" /* yacc.c:1646  */
    {
	                mcpat_param->dcache_config[2] = (yyvsp[0].t_int);
			mcpat_param->dcache_config[3] = 1;
			mcpat_param->dcache_config[5] = 32;
			mcpat_param->dcache_config[6] = 1;}
#line 1967 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 145 "parser.y" /* yacc.c:1646  */
    {
	                mcpat_param->dcache_buffer_sizes[0] = (yyvsp[0].t_int);
			mcpat_param->dcache_buffer_sizes[1] = (yyvsp[0].t_int);
			mcpat_param->dcache_buffer_sizes[2] = (yyvsp[0].t_int); }
#line 1976 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 149 "parser.y" /* yacc.c:1646  */
    { mcpat_param->icache_buffer_sizes[3] = (yyvsp[0].t_int); }
#line 1982 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 150 "parser.y" /* yacc.c:1646  */
    { mcpat_param->dhit_lat = (yyvsp[0].t_int); }
#line 1988 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 151 "parser.y" /* yacc.c:1646  */
    { mcpat_param->dresp_lat = (yyvsp[0].t_int); }
#line 1994 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 152 "parser.y" /* yacc.c:1646  */
    { mcpat_param->icache_config[0] = (yyvsp[0].t_int); }
#line 2000 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 153 "parser.y" /* yacc.c:1646  */
    { mcpat_param->icache_config[1] = (yyvsp[0].t_int); }
#line 2006 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 154 "parser.y" /* yacc.c:1646  */
    {
	                mcpat_param->icache_config[2] = (yyvsp[0].t_int);
			mcpat_param->icache_config[3] = 1;
			mcpat_param->icache_config[5] = 32;
			mcpat_param->icache_config[6] = 1;}
#line 2016 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 159 "parser.y" /* yacc.c:1646  */
    {
	                mcpat_param->icache_buffer_sizes[0] = (yyvsp[0].t_int);
			mcpat_param->icache_buffer_sizes[1] = (yyvsp[0].t_int);
			mcpat_param->icache_buffer_sizes[2] = (yyvsp[0].t_int);
			mcpat_param->icache_buffer_sizes[3] = 0;}
#line 2026 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 164 "parser.y" /* yacc.c:1646  */
    { mcpat_param->ihit_lat = (yyvsp[0].t_int); }
#line 2032 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 165 "parser.y" /* yacc.c:1646  */
    { mcpat_param->iresp_lat = (yyvsp[0].t_int); }
#line 2038 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 166 "parser.y" /* yacc.c:1646  */
    { mcpat_param->L2_config[0] = (yyvsp[0].t_int); }
#line 2044 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 167 "parser.y" /* yacc.c:1646  */
    { mcpat_param->L2_config[1] = (yyvsp[0].t_int); mcpat_param->l2_avail = 1; }
#line 2050 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 168 "parser.y" /* yacc.c:1646  */
    {
	                mcpat_param->L2_config[2] = (yyvsp[0].t_int);
			mcpat_param->L2_config[3] = 1;
			mcpat_param->L2_config[5] = 32;
			mcpat_param->L2_config[6] = 1;}
#line 2060 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 173 "parser.y" /* yacc.c:1646  */
    {
	                mcpat_param->L2_buffer_sizes[0] = (yyvsp[0].t_int);
			mcpat_param->L2_buffer_sizes[1] = (yyvsp[0].t_int);
			mcpat_param->L2_buffer_sizes[2] = (yyvsp[0].t_int); }
#line 2069 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 177 "parser.y" /* yacc.c:1646  */
    { mcpat_param->L2_buffer_sizes[3] = (yyvsp[0].t_int); }
#line 2075 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 178 "parser.y" /* yacc.c:1646  */
    { mcpat_param->l2hit_lat = (yyvsp[0].t_int); }
#line 2081 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 179 "parser.y" /* yacc.c:1646  */
    { mcpat_param->l2resp_lat = (yyvsp[0].t_int); }
#line 2087 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 180 "parser.y" /* yacc.c:1646  */
    { mcpat_param->L3_config[0] = (yyvsp[0].t_int); mcpat_param->l3_avail = 1; }
#line 2093 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 181 "parser.y" /* yacc.c:1646  */
    { mcpat_param->L3_config[1] = (yyvsp[0].t_int); }
#line 2099 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 182 "parser.y" /* yacc.c:1646  */
    {
	                mcpat_param->L3_config[2] = (yyvsp[0].t_int);
			mcpat_param->L3_config[3] = 1;
			mcpat_param->L3_config[5] = 32;
			mcpat_param->L3_config[6] = 1;}
#line 2109 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 187 "parser.y" /* yacc.c:1646  */
    {
	                mcpat_param->L3_buffer_sizes[0] = (yyvsp[0].t_int);
			mcpat_param->L3_buffer_sizes[1] = (yyvsp[0].t_int);
			mcpat_param->L3_buffer_sizes[2] = (yyvsp[0].t_int); }
#line 2118 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 191 "parser.y" /* yacc.c:1646  */
    { mcpat_param->L3_buffer_sizes[3] = (yyvsp[0].t_int); }
#line 2124 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 192 "parser.y" /* yacc.c:1646  */
    { mcpat_param->l3hit_lat = (yyvsp[0].t_int); }
#line 2130 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 193 "parser.y" /* yacc.c:1646  */
    { mcpat_param->l3resp_lat = (yyvsp[0].t_int); }
#line 2136 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 194 "parser.y" /* yacc.c:1646  */
    { mcpat_param->lat_IntMult = (yyvsp[0].t_int); }
#line 2142 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 195 "parser.y" /* yacc.c:1646  */
    { mcpat_param->lat_IntDiv = (yyvsp[0].t_int); }
#line 2148 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 196 "parser.y" /* yacc.c:1646  */
    { mcpat_param->memory_channels_per_mc = (yyvsp[0].t_int); }
#line 2154 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 197 "parser.y" /* yacc.c:1646  */
    { mcpat_param->number_ranks = (yyvsp[0].t_int); }
#line 2160 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 198 "parser.y" /* yacc.c:1646  */
    { mcpat_param->block_size = (yyvsp[0].t_int); }
#line 2166 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 201 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->total_instructions = (yyvsp[0].t_int); }
#line 2172 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 202 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->branch_instructions = (yyvsp[0].t_int); }
#line 2178 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 203 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->branch_mispredictions = (yyvsp[0].t_int); }
#line 2184 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 204 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->load_instructions = (yyvsp[0].t_int); }
#line 2190 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 205 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->store_instructions = (yyvsp[0].t_int); }
#line 2196 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 206 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->committed_int_instructions = (yyvsp[0].t_int); }
#line 2202 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 207 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->committed_fp_instructions = (yyvsp[0].t_int); }
#line 2208 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 208 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->pipeline_duty_cycle = (yyvsp[0].t_double); }
#line 2214 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 209 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->total_cycles = (yyvsp[0].t_int); }
#line 2220 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 210 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->idle_cycles = (yyvsp[0].t_int); }
#line 2226 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 211 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->idle_cycles = (yyvsp[0].t_double); }
#line 2232 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 212 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->ROB_reads = (yyvsp[0].t_int); }
#line 2238 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 213 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->ROB_writes = (yyvsp[0].t_int); }
#line 2244 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 214 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->rename_reads = (yyvsp[0].t_int); }
#line 2250 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 215 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->rename_writes = (yyvsp[0].t_int); }
#line 2256 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 216 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->fp_rename_reads = (yyvsp[0].t_int); }
#line 2262 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 217 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->fp_rename_writes = (yyvsp[0].t_int); }
#line 2268 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 218 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->inst_window_reads = (yyvsp[0].t_int); }
#line 2274 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 219 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->inst_window_writes = (yyvsp[0].t_int); }
#line 2280 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 220 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->inst_window_wakeup_accesses = (yyvsp[0].t_int); }
#line 2286 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 221 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->fp_inst_window_reads = (yyvsp[0].t_int); }
#line 2292 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 222 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->fp_inst_window_writes = (yyvsp[0].t_int); }
#line 2298 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 223 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->fp_inst_window_wakeup_accesses = (yyvsp[0].t_int); }
#line 2304 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 224 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->int_regfile_reads = (yyvsp[0].t_int); }
#line 2310 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 225 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->int_regfile_writes = (yyvsp[0].t_int); }
#line 2316 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 226 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->float_regfile_reads = (yyvsp[0].t_int); }
#line 2322 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 227 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->float_regfile_writes = (yyvsp[0].t_int); }
#line 2328 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 228 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->function_calls = (yyvsp[0].t_int); }
#line 2334 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 229 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->IntDiv = (yyvsp[0].t_int); }
#line 2340 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 230 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->IntMult = (yyvsp[0].t_int); }
#line 2346 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 231 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->ialu_accesses = (yyvsp[0].t_int); }
#line 2352 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 232 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->fpu_accesses = (yyvsp[0].t_int);}
#line 2358 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 233 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->btb_read_accesses = (yyvsp[0].t_int); }
#line 2364 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 234 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->btb_write_accesses = (yyvsp[0].t_int); }
#line 2370 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 235 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->dtlb_total_misses = (yyvsp[0].t_int); }
#line 2376 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 236 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->dtlb_total_accesses = (yyvsp[0].t_int); }
#line 2382 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 237 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->itlb_total_misses = (yyvsp[0].t_int); }
#line 2388 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 238 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->itlb_total_accesses = (yyvsp[0].t_int); }
#line 2394 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 239 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->overall_access[0] = (yyvsp[0].t_int); }
#line 2400 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 240 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->overall_misses[0] = (yyvsp[0].t_int); }
#line 2406 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 241 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->WriteReq_access[0] = (yyvsp[0].t_int); }
#line 2412 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 242 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->WriteReq_misses[0] = (yyvsp[0].t_int); }
#line 2418 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 243 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->WriteReq_hits[0] = (yyvsp[0].t_int); }
#line 2424 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 244 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->Writeback_accesses[0] = (yyvsp[0].t_int); }
#line 2430 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 245 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->overall_access[1] = (yyvsp[0].t_int); }
#line 2436 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 246 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->overall_misses[1] = (yyvsp[0].t_int); }
#line 2442 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 247 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->WriteReq_access[1] = (yyvsp[0].t_int); }
#line 2448 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 248 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->WriteReq_misses[1] = (yyvsp[0].t_int); }
#line 2454 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 249 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->WriteReq_hits[1] = (yyvsp[0].t_int); }
#line 2460 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 250 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->Writeback_accesses[1] = (yyvsp[0].t_int); }
#line 2466 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 251 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->overall_access[2] = (yyvsp[0].t_int); }
#line 2472 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 252 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->overall_misses[2] = (yyvsp[0].t_int); }
#line 2478 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 253 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->WriteReq_access[2] = (yyvsp[0].t_int); }
#line 2484 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 254 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->WriteReq_misses[2] = (yyvsp[0].t_int); }
#line 2490 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 255 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->Writeback_accesses[2] = (yyvsp[0].t_int); }
#line 2496 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 256 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->Writeback_misses = (yyvsp[0].t_int); }
#line 2502 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 257 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->overall_access[3] = (yyvsp[0].t_int); }
#line 2508 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 258 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->overall_misses[3] = (yyvsp[0].t_int); }
#line 2514 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 259 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->WriteReq_access[3] = (yyvsp[0].t_int); }
#line 2520 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 260 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->WriteReq_misses[3] = (yyvsp[0].t_int); }
#line 2526 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 261 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->Writeback_accesses[3] = (yyvsp[0].t_int); }
#line 2532 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 262 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->Writeback_misses_l3 = (yyvsp[0].t_int); }
#line 2538 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 263 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->memory_reads = (yyvsp[0].t_int); }
#line 2544 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 264 "parser.y" /* yacc.c:1646  */
    { mcpat_stats->memory_writes = (yyvsp[0].t_int); }
#line 2550 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2554 "parser.tab.c" /* yacc.c:1646  */
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
#line 267 "parser.y" /* yacc.c:1906  */


/* trying to be kind with memory */
void free_structs()
{
    int i;
    free(mcpat_param);
    free(mcpat_stats);
        for (i=0; i < MAX_NUM; i++) {
	free(error_list->stat[i]);
    }
    for (i=0; i < MAX_NUM; i++) {
	free(error_list->config[i]);
    }
    // removing everything from memory pool!
    doc.clear();
}


/* finds a concrete tag given the name of the tag (type) the value of
   the attribute name and then sets its value to value */
void findAndSetValue(xml_node<> *parent, char const *type, char const *name_value, char *value)
{
    int found = 0;
    for (xml_node<> *node = parent->first_node(type); node; node = node->next_sibling()) {
    	if (!strcmp(node->first_attribute("name")->value(), name_value)) {
	    if (!node->first_attribute("value")) {
		// is this good?
		cout << "Error: bad structure XML in " << name_value << endl;
		cout << "Quitting..." << endl;
		free_structs();
		exit(-1);
	    }
	    // checked before if this attribute exists
	    node->remove_attribute(node->first_attribute("value"));
	    // creating again this attribute and allocating string value
	    char *value_name = doc.allocate_string(value);
	    xml_attribute<> *attr = doc.allocate_attribute("value", value_name);
    	    node->append_attribute(attr);
	    // found!
    	    found = 1;
    	}
    }
    
    if (!found) {
	// we could make a set of warnings in order to tell the user
	// that a requested param/stat has not been set
	cout << type << ": " << name_value << " not found!" << endl;
    }
}

void findAndSetIntValue(xml_node<> *parent, char const *type, char const *name_value, int value)
{
    char str[80];
    snprintf(str, 80, "%d", value);
    if (value == 0) {
	cout << BLD YEL "Warning: " << type <<" " << parent->first_attribute("id")->value()
	     <<" '" << name_value << "' has a value of 0!" RES << endl;
    }
    if (value < 0) {
	cout << BLD RED "Warning: " << type <<" " << parent->first_attribute("id")->value()
	     <<" '" << name_value << "' has a negative value!" RES << endl;
    }
    findAndSetValue(parent, type, name_value, str);
    
}

void findAndSetFloatValue(xml_node<> *parent, char const *type, char const *name_value, double value)
{
    char str[80];
    snprintf(str, 80, "%f", value);
    if (value <= 0.0) {
	cout << BLD YEL "Warning: " << type <<" " << parent->first_attribute("id")->value()
	     <<" '" << name_value << "' may have not been set!" RES << endl;
    }
    findAndSetValue(parent, type, name_value, str);
}

void checkNode(xml_node<> *node, char const *id, char const *value)
{
    char const *error_msg = "Error in template structure! Quitting\n";

    // no lazy comparison possible 
    if (node==0) {
	cout << "Node does not exist!" << endl;
	cout << error_msg << endl;
	free_structs();
	unlink(out_file);
	exit(0);
    }

    // if node is not null, i.e. exists
    if ((strcmp(node->first_attribute("id")->value(), id))&&
	(strcmp(node->first_attribute("name")->value(), value))) {
	cout << "Component " << id << " missing" << endl;
	cout << "Found: " << node->first_attribute("id")->value() << " "
	     << node->first_attribute("name")->value() << endl;
	cout << error_msg << endl;
	unlink(out_file);
	free_structs();
	exit(0);
    }	
}

/* xmlParser fills with the correct values the templates and prints in
   out.xml */
void xmlParser() throw()
{
    cout << "Parsing template..." << endl;
    // Read the xml file into a vector
    ifstream theTemplate (out_file);
    vector<char> buffer((istreambuf_iterator<char>(theTemplate)), istreambuf_iterator<char>());
    buffer.push_back('\0');
    // Parse the buffer using the xml file parsing library into doc
    doc.parse<0>(&buffer[0]);
    
    // Find our root node
    xml_node<> *root_node = doc.first_node("component");
    checkNode(root_node, "root", "root");
    
    // system node
    xml_node<> *sys_node = root_node->first_node("component");
    checkNode(sys_node, "system", "system");
    
    /* SYSTEM PARAMS AND STATS */
    findAndSetIntValue(sys_node, "param", "number_of_L2Directories", mcpat_param->l2_avail);
    findAndSetIntValue(sys_node, "param", "Private_L2", mcpat_param->l2_avail);
    findAndSetIntValue(sys_node, "param", "number_of_L2s", mcpat_param->l2_avail);
    findAndSetIntValue(sys_node, "param", "number_of_L3s", mcpat_param->l3_avail);
    findAndSetIntValue(sys_node, "param", "homogeneous_L3s", mcpat_param->l3_avail);
    if (mcpat_param->l3_avail) {
	    findAndSetIntValue(sys_node, "param", "number_cache_levels", 3);
    }
    findAndSetIntValue(sys_node, "param", "target_core_clockrate", mcpat_param->clock_rate);
    findAndSetIntValue(sys_node, "stat", "total_cycles", mcpat_stats->total_cycles);
    findAndSetIntValue(sys_node, "stat", "idle_cycles", mcpat_stats->idle_cycles);
    findAndSetIntValue(sys_node, "stat", "busy_cycles", mcpat_stats->total_cycles - mcpat_stats->idle_cycles);

    /* CORE PARAMS AND STATS */
    xml_node<> *core_node = sys_node->first_node("component");
    checkNode(core_node, "system.core0", "core0");
    findAndSetIntValue(core_node, "param", "clock_rate", mcpat_param->clock_rate);
    findAndSetIntValue(core_node, "param", "x86", mcpat_param->isa_x86);
    findAndSetIntValue(core_node, "param", "fetch_width", mcpat_param->fetch_width);
    findAndSetIntValue(core_node, "param", "decode_width", mcpat_param->decode_width);
    findAndSetIntValue(core_node, "param", "issue_width", mcpat_param->issue_width);
    findAndSetIntValue(core_node, "param", "peak_issue_width", mcpat_param->peak_issue_width);
    findAndSetIntValue(core_node, "param", "commit_width", mcpat_param->commit_width);
    if ((mcpat_param->nbase!=4)||(mcpat_param->nmax_base!=4))
	cout << BLD YEL "Warning: some parameters missing to set properly 'pipeline_depth'!" RES << endl;
    findAndSetValue(core_node, "param", "pipeline_depth", make_tuple(2, (INT_EXE +
									mcpat_param->base_stages +
								        mcpat_param->max_base),
								        (FP_EXE +
									mcpat_param->base_stages +
								        mcpat_param->max_base)));
    findAndSetIntValue(core_node, "param", "instruction_buffer_size", mcpat_param->instruction_buffer_size);
    findAndSetIntValue(core_node, "param", "instruction_window_size", mcpat_param->instruction_window_size);
    findAndSetIntValue(core_node, "param", "fp_instruction_window_size", mcpat_param->fp_instruction_window_size);
    findAndSetIntValue(core_node, "param", "ROB_size", mcpat_param->ROB_size);
    findAndSetIntValue(core_node, "param", "phy_Regs_IRF_size", mcpat_param->phy_Regs_IRF_size);
    findAndSetIntValue(core_node, "param", "phy_Regs_FRF_size", mcpat_param->phy_Regs_FRF_size);
    findAndSetIntValue(core_node, "param", "store_buffer_size", mcpat_param->store_buffer_size);
    findAndSetIntValue(core_node, "param", "load_buffer_size", mcpat_param->load_buffer_size);
    findAndSetIntValue(core_node, "param", "RAS_size", mcpat_param->RAS_size);

    findAndSetIntValue(core_node, "stat", "total_instructions", mcpat_stats->total_instructions);
    findAndSetIntValue(core_node, "stat", "branch_instructions", mcpat_stats->branch_instructions);
    findAndSetIntValue(core_node, "stat", "branch_mispredictions", mcpat_stats->branch_mispredictions);
    findAndSetIntValue(core_node, "stat", "load_instructions", mcpat_stats->load_instructions);
    findAndSetIntValue(core_node, "stat", "store_instructions", mcpat_stats->store_instructions - mcpat_stats->load_instructions);
    findAndSetIntValue(core_node, "stat", "committed_int_instructions", mcpat_stats->committed_int_instructions);
    findAndSetIntValue(core_node, "stat", "committed_fp_instructions", mcpat_stats->committed_fp_instructions);
    findAndSetFloatValue(core_node, "stat", "pipeline_duty_cycle", mcpat_stats->pipeline_duty_cycle);
    findAndSetIntValue(core_node, "stat", "total_cycles", mcpat_stats->total_cycles);
    findAndSetIntValue(core_node, "stat", "idle_cycles", mcpat_stats->idle_cycles);
    findAndSetIntValue(core_node, "stat", "busy_cycles", mcpat_stats->total_cycles - mcpat_stats->idle_cycles);
    findAndSetIntValue(core_node, "stat", "ROB_reads", mcpat_stats->ROB_reads);
    findAndSetIntValue(core_node, "stat", "ROB_writes", mcpat_stats->ROB_writes);
    findAndSetIntValue(core_node, "stat", "rename_reads", mcpat_stats->rename_reads);
    findAndSetIntValue(core_node, "stat", "rename_writes", mcpat_stats->rename_writes);
    findAndSetIntValue(core_node, "stat", "fp_rename_reads", mcpat_stats->fp_rename_reads);
    findAndSetIntValue(core_node, "stat", "fp_rename_writes", mcpat_stats->fp_rename_writes);
    findAndSetIntValue(core_node, "stat", "inst_window_reads", mcpat_stats->inst_window_reads);
    findAndSetIntValue(core_node, "stat", "inst_window_writes", mcpat_stats->inst_window_writes);
    findAndSetIntValue(core_node, "stat", "inst_window_wakeup_accesses", mcpat_stats->inst_window_wakeup_accesses);
    findAndSetIntValue(core_node, "stat", "fp_inst_window_reads", mcpat_stats->fp_inst_window_reads);
    findAndSetIntValue(core_node, "stat", "fp_inst_window_writes", mcpat_stats->fp_inst_window_writes);
    findAndSetIntValue(core_node, "stat", "fp_inst_window_wakeup_accesses", mcpat_stats->fp_inst_window_wakeup_accesses);
    findAndSetIntValue(core_node, "stat", "int_regfile_reads", mcpat_stats->int_regfile_reads);
    findAndSetIntValue(core_node, "stat", "int_regfile_writes", mcpat_stats->int_regfile_writes);
    findAndSetIntValue(core_node, "stat", "float_regfile_reads", mcpat_stats->float_regfile_reads);
    findAndSetIntValue(core_node, "stat", "function_calls", mcpat_stats->function_calls);
    mcpat_stats->mul_accesses = mcpat_stats->IntDiv*mcpat_param->lat_IntDiv +
	                        mcpat_stats->IntMult*mcpat_param->lat_IntMult;
    mcpat_stats->ialu_accesses -= mcpat_stats->mul_accesses;
    findAndSetIntValue(core_node, "stat", "ialu_accesses", mcpat_stats->ialu_accesses);
    findAndSetIntValue(core_node, "stat", "fpu_accesses", mcpat_stats->fpu_accesses);
    findAndSetIntValue(core_node, "stat", "mul_accesses", mcpat_stats->mul_accesses);
    // this is not the same as the Appendix says, but in some
    // templates the same values are used
    findAndSetIntValue(core_node, "stat", "cdb_alu_accesses", mcpat_stats->ialu_accesses);
    findAndSetIntValue(core_node, "stat", "cdb_mul_accesses", mcpat_stats->mul_accesses);    
    findAndSetIntValue(core_node, "stat", "cdb_fpu_accesses", mcpat_stats->fpu_accesses);    
    
    /* BRANCH PREDICTOR */
    xml_node<> *bp_node = core_node->first_node("component");
    checkNode(bp_node, "system.core0.predictor", "PBT");
    findAndSetValue(bp_node, "param", "load_predictor",
		    make_tuple(3, mcpat_param->load_predictor[0], mcpat_param->load_predictor[1],
			       mcpat_param->load_predictor[2]));
    findAndSetValue(bp_node, "param", "global_predictor",
		    make_tuple(2, mcpat_param->global_predictor[0], mcpat_param->global_predictor[1]));
    findAndSetValue(bp_node, "param", "predictor_chooser",
		    make_tuple(2, mcpat_param->predictor_chooser[0], mcpat_param->predictor_chooser[1]));

    /* ITLB */
    xml_node<> *itlb_node = bp_node->next_sibling();
    checkNode(itlb_node, "system.core0.itlb", "itlb");
    findAndSetIntValue(itlb_node, "param", "number_entries", mcpat_param->number_entries_itlb);
    findAndSetIntValue(itlb_node, "stat", "total_accesses", mcpat_stats->itlb_total_accesses);
    findAndSetIntValue(itlb_node, "stat", "total_misses", mcpat_stats->itlb_total_misses);
    
    /* ICACHE */
    xml_node<> *icache_node = itlb_node->next_sibling();
    checkNode(icache_node, "system.core0.icache", "icache");
    findAndSetValue(icache_node, "param", "icache_config", make_tuple(8,mcpat_param->icache_config[0],
								       32, /* temporal */
								       mcpat_param->icache_config[2],
								       1,mcpat_param->ihit_lat+mcpat_param->iresp_lat,
								      mcpat_param->ihit_lat+mcpat_param->iresp_lat, 32, 0));
    findAndSetValue(icache_node, "param", "buffer_sizes", make_tuple(4,mcpat_param->icache_buffer_sizes[0],
								     mcpat_param->icache_buffer_sizes[1],
								     mcpat_param->icache_buffer_sizes[2],0));
    findAndSetIntValue(icache_node, "stat", "read_accesses", mcpat_stats->overall_access[0]-mcpat_stats->WriteReq_access[0]);
    findAndSetIntValue(icache_node, "stat", "read_misses", mcpat_stats->overall_misses[0]-mcpat_stats->WriteReq_misses[0]);
    
    /* DTLB */
    xml_node<> *dtlb_node = icache_node->next_sibling();
    checkNode(dtlb_node, "system.core0.dtlb", "dtlb");
    findAndSetIntValue(dtlb_node, "param", "number_entries", mcpat_param->number_entries_dtlb);
    findAndSetIntValue(dtlb_node, "stat", "total_accesses", mcpat_stats->dtlb_total_accesses);
    findAndSetIntValue(dtlb_node, "stat", "total_misses", mcpat_stats->dtlb_total_misses);
    
    /* DCACHE */
    xml_node<> *dcache_node = dtlb_node->next_sibling();
    checkNode(dcache_node, "system.core0.dcache", "dcache");
    findAndSetValue(dcache_node, "param", "dcache_config", make_tuple(8,mcpat_param->dcache_config[0],
								       32, /* temporal */
								       mcpat_param->dcache_config[2],
								       1,mcpat_param->dhit_lat+mcpat_param->dresp_lat,
								      mcpat_param->dhit_lat+mcpat_param->dresp_lat, 32, 1));
    findAndSetValue(dcache_node, "param", "buffer_sizes", make_tuple(4,mcpat_param->dcache_buffer_sizes[0],
								     mcpat_param->dcache_buffer_sizes[1],
								     mcpat_param->dcache_buffer_sizes[2],
								     mcpat_param->dcache_buffer_sizes[3]));
    findAndSetIntValue(dcache_node, "stat", "read_accesses", mcpat_stats->overall_access[1]-mcpat_stats->WriteReq_access[1]);
    findAndSetIntValue(dcache_node, "stat", "write_accesses", mcpat_stats->WriteReq_access[1]-mcpat_stats->Writeback_accesses[1]);
    findAndSetIntValue(dcache_node, "stat", "read_misses", mcpat_stats->overall_misses[1]-mcpat_stats->WriteReq_misses[1]);
    findAndSetIntValue(dcache_node, "stat", "write_misses", mcpat_stats->WriteReq_access[1]-mcpat_stats->WriteReq_hits[1]);
    
    /* BTB: param tag in the middle that is why double next_sibling() */
    xml_node<> *btb_node = dcache_node->next_sibling()->next_sibling();
    checkNode(btb_node, "system.core0.BTB", "BTB");
    findAndSetValue(btb_node, "param", "BTB_config", make_tuple(6,mcpat_param->BTB_config,4,2,2,1,1));
    findAndSetIntValue(btb_node, "stat", "read_accesses", mcpat_stats->btb_read_accesses);
    findAndSetIntValue(btb_node, "stat", "write_accesses", mcpat_stats->btb_write_accesses);
		    
    /* L10 DIR */
    xml_node<> *l1dir_node = core_node->next_sibling();
    checkNode(l1dir_node, "system.L1Directory0", "L1Directory0");
    findAndSetIntValue(l1dir_node, "param", "clockrate", mcpat_param->clock_rate);

    /* L20 DIR */
    xml_node<> *l2dir_node = l1dir_node->next_sibling();
    checkNode(l2dir_node, "system.L2Directory0", "L2Directory0");
    findAndSetIntValue(l2dir_node, "param", "clockrate", mcpat_param->clock_rate);

    /* L20 CACHE */    
    xml_node<> *l2_node = l2dir_node->next_sibling();
    checkNode(l2_node, "system.L20", "L20");
    findAndSetValue(l2_node, "param", "L2_config", make_tuple(8,mcpat_param->L2_config[0],
							      mcpat_param->L2_config[1],
							      mcpat_param->L2_config[2],
							      1,mcpat_param->l2hit_lat + mcpat_param->l2resp_lat,
							      mcpat_param->l2hit_lat + mcpat_param->l2resp_lat, 32, 1));
    findAndSetValue(l2_node, "param", "buffer_sizes", make_tuple(4,mcpat_param->L2_buffer_sizes[0],
								     mcpat_param->L2_buffer_sizes[1],
								     mcpat_param->L2_buffer_sizes[2],
								     mcpat_param->L2_buffer_sizes[3]));
    findAndSetIntValue(l2_node, "param", "clockrate", mcpat_param->clock_rate);
    findAndSetIntValue(l2_node, "stat", "read_accesses", mcpat_stats->overall_access[2]-mcpat_stats->WriteReq_access[2]);
    findAndSetIntValue(l2_node, "stat", "write_accesses", mcpat_stats->overall_access[2] +
		       mcpat_stats->Writeback_accesses[2] + mcpat_stats->WriteReq_access[2]);
    findAndSetIntValue(l2_node, "stat", "read_misses", mcpat_stats->overall_misses[2]-mcpat_stats->WriteReq_misses[2]);
    findAndSetIntValue(l2_node, "stat", "write_misses", mcpat_stats->overall_misses[2]-mcpat_stats->Writeback_misses +
		                                        mcpat_stats->WriteReq_misses[2]);

    /* L30 CACHE */    
    /*xml_node<> *l3_node = l2_node->next_sibling();
    checkNode(l3_node, "system.L30", "L30");
    findAndSetValue(l3_node, "param", "L3_config", make_tuple(8,mcpat_param->L3_config[0],
							      mcpat_param->L3_config[1],
							      mcpat_param->L3_config[2],
							      1,mcpat_param->l3hit_lat + mcpat_param->l3resp_lat,
							      mcpat_param->l3hit_lat + mcpat_param->l3resp_lat, 32, 1));
    findAndSetValue(l3_node, "param", "buffer_sizes", make_tuple(4,mcpat_param->L3_buffer_sizes[0],
								     mcpat_param->L3_buffer_sizes[1],
								     mcpat_param->L3_buffer_sizes[2],
								     mcpat_param->L3_buffer_sizes[3]));
    findAndSetIntValue(l3_node, "param", "clockrate", mcpat_param->clock_rate);
    findAndSetIntValue(l3_node, "stat", "read_accesses", mcpat_stats->overall_access[3]-mcpat_stats->WriteReq_access[3]);
    findAndSetIntValue(l3_node, "stat", "write_accesses", mcpat_stats->overall_access[3] +
		       mcpat_stats->Writeback_accesses[3] + mcpat_stats->WriteReq_access[3]);
    findAndSetIntValue(l3_node, "stat", "read_misses", mcpat_stats->overall_misses[3]-mcpat_stats->WriteReq_misses[3]);
    findAndSetIntValue(l3_node, "stat", "write_misses", mcpat_stats->overall_misses[3]-mcpat_stats->Writeback_misses_l3 +
		                                        mcpat_stats->WriteReq_misses[3]);*/

    /* TODO: NoC */
    xml_node<> *noc_node = l2_node->next_sibling();
    checkNode(noc_node, "system.NoC0", "noc0");
    
    /* Main memory */
    xml_node<> *mc_node = noc_node->next_sibling();
    checkNode(mc_node, "system.mc", "mc");
    findAndSetIntValue(mc_node, "param", "mc_clock", mcpat_param->clock_rate); 
    findAndSetIntValue(mc_node, "param", "block_size", mcpat_param->block_size);
    findAndSetIntValue(mc_node, "param", "memory_channels_per_mc", mcpat_param->memory_channels_per_mc);
    findAndSetIntValue(mc_node, "param", "number_ranks", mcpat_param->number_ranks);

    findAndSetIntValue(mc_node, "stat", "memory_accesses", mcpat_stats->memory_reads + mcpat_stats->memory_writes);
    findAndSetIntValue(mc_node, "stat", "memory_reads", mcpat_stats->memory_reads);
    findAndSetIntValue(mc_node, "stat", "memory_writes", mcpat_stats->memory_writes);

    // finishing message
    cout << BLD "finish filling!" RES << endl;
    std::ofstream output;
    output.open(out_file);
    output << doc;
}

/* initializing */
void init_structs()
{
    int i;
    mcpat_param = (struct t_mcpat_params *) malloc(sizeof(struct t_mcpat_params));
    mcpat_stats = (struct t_mcpat_stats *) malloc(sizeof(struct t_mcpat_stats));

    error_list = (struct t_error *) malloc(sizeof(struct t_error));
    for (i=0; i < MAX_NUM; i++) {
	error_list->stat[i] = (char *) malloc(MAX_LINE*sizeof(char));
	error_list->config[i] = (char *) malloc(MAX_LINE*sizeof(char));
    }
    
    init_param(mcpat_param);
}

/* when 'error' is found in the parser */
void yyerror(const char *s, ...)
{
    // activating error flag
    ERROR = 1;
    // showing user that there has been an error and then recording it
    printf("%d: error: %s\n", yylineno, s);
    if (yyin == config_fptr) {
	error_list->config[error_list->n_config] = strdup(s);
	error_list->config_l[error_list->n_config++] = yylineno;        
    } else if (yyin == stats_fptr) {
	error_list->stat[error_list->n_stat] = strdup(s);
	error_list->stat_l[error_list->n_stat++] = yylineno;
    }
}

/* display recorded errors */
void display_errors()
{
    int i;

    if ((error_list->n_config == 0)&&
	(error_list->n_stat == 0)) {
	printf(GRN "Parsing was successful!\n" RES);
	return;
    } 

    printf(RED "Errors in config.ini: %d\n" RES, error_list->n_config);
    for(i=0; i < error_list->n_config; i++) {
	printf("%d: %s\n", error_list->config_l[i], error_list->config[i]);
    }

    printf(RED "Errors in stats: %d\n" RES, error_list->n_stat);
    for(i=0; i < error_list->n_stat; i++) {
	printf("%d: %s\n", error_list->stat_l[i], error_list->stat[i]);
    }
}

/////////////////////////////////
// main function		      
int main(int argc, char *argv[])
{
    printf(BLD "gem5-mcpat-parser 2017\n");

    // check options
    int result = handle_options(argc, argv);
    
    if (result != 0)
	exit(result);
    
    if (argc - optind != 0) {
	printf ("Extra arguments\n\n");
	while (optind < argc)
	    printf ("'%s' ", argv[optind++]);
	printf ("\n");
	usage(-2);
    }

    // copying file
    copy(xml_file, out_file);
    sleep(1);
    
    // initializing all the structures needed
    init_structs();
    
    // parse config.ini
    yyin = config_fptr;
    yyparse();
    printf("[config.ini]: finished parsing!\n");
    fclose(yyin);
    
    // to clean yyin
    yyrestart(yyin);
    yyin = stats_fptr;
    yylineno = 0;
    yyparse();
    printf("[stats.txt]: finished parsing!\n");
    fclose(yyin);

    // in case the simulation is not detailed
    if (!DETAILED)
	printf(BLD YEL "Warning: simulation has not been done in detailed memory mode\n"
	       "Thus there is a lack of stats and some values will be set to zero\n" RES);
    
    // fill template.xml if zero errors parsing
    // otherwise it makes no sense
    if (!ERROR) xmlParser();
    else unlink(out_file);

    display_errors();

    // free everything
    free_structs();

    // quiting!
    exit(0);
}
