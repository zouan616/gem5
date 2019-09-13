/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 51 "parser.y" /* yacc.c:1909  */

    int t_int;
    double t_double;
    char * t_str;

#line 322 "parser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
