
/*  A Bison parser, made from /home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y
 by  GNU Bison version 1.25
  */

#define YYBISON 1  /* Identify Bison output.  */

#define yyparse zzparse
#define yylex zzlex
#define yyerror zzerror
#define yylval zzlval
#define yychar zzchar
#define yydebug zzdebug
#define yynerrs zznerrs
#define	INT	258
#define	FLOAT	259
#define	STRING	260
#define	VFTABLE	261
#define	PRINT_INT	262
#define	PRINT_CHAR	263
#define	STRING_VAR	264
#define	ALLOCATE	265
#define	EXIT	266
#define	ID	267
#define	LABEL	268
#define	COMMA	269
#define	COLON	270
#define	LOAD	271
#define	STORE	272
#define	LOAD_IMMEDIATE	273
#define	LOAD_ADDRESS	274
#define	LOAD_BYTE	275
#define	ADD_IMMEDIATE	276
#define	JUMP	277
#define	JUMP_AND_LINK	278
#define	JUMP_AND_LINK_REG	279
#define	LPAREN	280
#define	RPAREN	281
#define	PLUS	282
#define	MINUS	283
#define	ADD	284
#define	SUB	285
#define	MUL	286
#define	DIV	287
#define	TEMP	288
#define	BEQ	289
#define	BNE	290
#define	BLT	291
#define	BLE	292
#define	BGT	293
#define	BGE	294
#define	REGISTER	295
#define	AND	296
#define	OR	297
#define	MOVE	298

#line 1 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"

/*************************/
/* GENERAL INCLUDE FILES */
/*************************/
#include <stdio.h>
#include <stdlib.h>

/*************************/
/* PROJECT INCLUDE FILES */
/*************************/
#include "util.h"
#include "PSEUDO_MIPS_ASM_AST.h"
#include "PSEUDO_MIPS_ASM_AST_errormsg.h"

/**********/
/* MALLOC */
/**********/
#define alloca malloc

/****************/
/* PREFIX STUFF */
/****************/
#define yyparse zzparse
#define yylex zzlex
#define yyerror zzerror
#define yylval zzlval
#define yychar zzchar
#define yydebug zzdebug
#define yynerrs zznerrs

int zzlex(void); /* function prototype */

PSEUDO_MIPS_ASM_AST_expList PSEUDO_MIPS_ASM_AST_root;

void zzerror(char *s)
{
	PSEUDO_MIPS_ASM_AST_EM_error(PSEUDO_MIPS_ASM_AST_EM_tokPos, "%s", s);
}

#line 41 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
typedef union
{
	union
	{
		int								ival;
		int								temp_serial_number;
		float							fval;
		string							sval;
		string							register_name;
		PSEUDO_MIPS_ASM_AST_LabelList	labelList;
		PSEUDO_MIPS_ASM_AST_Var			var;
		PSEUDO_MIPS_ASM_AST_Label_Type_	label;
		PSEUDO_MIPS_ASM_AST_exp			exp;
		PSEUDO_MIPS_ASM_AST_expList		expList;
	}
	gval;
} YYSTYPE;
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		138
#define	YYFLAG		-32768
#define	YYNTBASE	44

#define YYTRANSLATE(x) ((unsigned)(x) <= 298 ? yytranslate[x] : 58)

static const char yytranslate[] = {     0,
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
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     5,     7,     9,    11,    13,    15,    17,    19,
    21,    23,    25,    27,    29,    31,    33,    37,    39,    43,
    47,    50,    53,    56,    59,    62,    69,    76,    83,    90,
    97,   104,   112,   119,   124,   129,   134,   142,   149,   156,
   163,   170,   177,   182,   184
};

static const short yyrhs[] = {    45,
     0,    46,    45,     0,    46,     0,    50,     0,    51,     0,
    52,     0,    53,     0,    54,     0,    55,     0,    56,     0,
    48,     0,    49,     0,     7,     0,     8,     0,    10,     0,
    11,     0,    13,    14,    47,     0,    13,     0,     6,    15,
    47,     0,     9,    15,     5,     0,    13,    15,     0,    22,
    13,     0,    22,    40,     0,    23,    13,     0,    24,    40,
     0,    34,    57,    14,    57,    14,    13,     0,    35,    57,
    14,    57,    14,    13,     0,    38,    57,    14,    57,    14,
    13,     0,    36,    57,    14,    57,    14,    13,     0,    39,
    57,    14,    57,    14,    13,     0,    37,    57,    14,    57,
    14,    13,     0,    16,    57,    14,     3,    25,    57,    26,
     0,    20,    57,    14,    25,    57,    26,     0,    19,    57,
    14,     9,     0,    19,    57,    14,     6,     0,    18,    57,
    14,     3,     0,    17,    57,    14,     3,    25,    57,    26,
     0,    29,    57,    14,    57,    14,    57,     0,    30,    57,
    14,    57,    14,    57,     0,    31,    57,    14,    57,    14,
    57,     0,    32,    57,    14,    57,    14,    57,     0,    21,
    57,    14,    57,    14,     3,     0,    43,    57,    14,    57,
     0,    33,     0,    40,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   120,   122,   123,   125,   126,   127,   128,   129,   130,   131,
   132,   133,   134,   135,   136,   137,   139,   140,   142,   144,
   145,   147,   148,   149,   150,   152,   153,   154,   155,   156,
   157,   159,   160,   161,   162,   163,   165,   167,   168,   169,
   170,   171,   173,   175,   176
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","INT","FLOAT",
"STRING","VFTABLE","PRINT_INT","PRINT_CHAR","STRING_VAR","ALLOCATE","EXIT","ID",
"LABEL","COMMA","COLON","LOAD","STORE","LOAD_IMMEDIATE","LOAD_ADDRESS","LOAD_BYTE",
"ADD_IMMEDIATE","JUMP","JUMP_AND_LINK","JUMP_AND_LINK_REG","LPAREN","RPAREN",
"PLUS","MINUS","ADD","SUB","MUL","DIV","TEMP","BEQ","BNE","BLT","BLE","BGT",
"BGE","REGISTER","AND","OR","MOVE","program","expList","exp","labelList","vfTableExp",
"strExp","labelExp","jumpExp","cjumpExp","loadExp","storeExp","binopExp","movExp",
"var", NULL
};
#endif

static const short yyr1[] = {     0,
    44,    45,    45,    46,    46,    46,    46,    46,    46,    46,
    46,    46,    46,    46,    46,    46,    47,    47,    48,    49,
    50,    51,    51,    51,    51,    52,    52,    52,    52,    52,
    52,    53,    53,    53,    53,    53,    54,    55,    55,    55,
    55,    55,    56,    57,    57
};

static const short yyr2[] = {     0,
     1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     3,     1,     3,     3,
     2,     2,     2,     2,     2,     6,     6,     6,     6,     6,
     6,     7,     6,     4,     4,     4,     7,     6,     6,     6,
     6,     6,     4,     1,     1
};

static const short yydefact[] = {     0,
     0,    13,    14,     0,    15,    16,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     1,     3,    11,
    12,     4,     5,     6,     7,     8,     9,    10,     0,     0,
    21,    44,    45,     0,     0,     0,     0,     0,     0,    22,
    23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     2,    18,    19,    20,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    36,    35,
    34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    43,    17,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    33,    42,    38,    39,    40,    41,    26,    27,    29,
    31,    28,    30,    32,    37,     0,     0,     0
};

static const short yydefgoto[] = {   136,
    28,    29,    67,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    44
};

static const short yypact[] = {    13,
   -10,-32768,-32768,    -8,-32768,-32768,    23,     6,     6,     6,
     6,     6,     6,    14,    -7,     0,     6,     6,     6,     6,
     6,     6,     6,     6,     6,     6,     6,-32768,    13,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,    28,    48,
-32768,-32768,-32768,    41,    43,    44,    45,    46,    47,-32768,
-32768,-32768,-32768,    49,    50,    63,    64,    65,    66,    67,
    68,    70,    71,    72,-32768,    73,-32768,-32768,    59,    85,
    86,    19,    69,     6,     6,     6,     6,     6,     6,     6,
     6,     6,     6,     6,     6,    28,    74,    75,-32768,-32768,
-32768,     6,    76,    77,    78,    79,    81,    82,    91,    92,
    93,    94,    95,-32768,-32768,     6,     6,    84,   108,     6,
     6,     6,     6,    99,   100,   101,   102,   103,   104,    96,
    97,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   118,   119,-32768
};

static const short yypgoto[] = {-32768,
    98,-32768,    34,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,    -9
};


#define	YYLAST		127


static const short yytable[] = {    45,
    46,    47,    48,    49,    39,    52,    40,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,     1,     2,
     3,     4,     5,     6,    90,     7,    50,    91,     8,     9,
    10,    11,    12,    13,    14,    15,    16,    41,    42,    53,
    66,    17,    18,    19,    20,    43,    21,    22,    23,    24,
    25,    26,    68,    51,    69,    27,    70,    71,    72,    73,
    74,    87,    75,    76,    93,    94,    95,    96,    97,    98,
    99,   100,   101,   102,   103,   104,    77,    78,    79,    80,
    81,    82,   108,    83,    84,    85,    86,    88,    89,   109,
   110,   111,   112,    92,   113,   114,   120,   121,   106,   107,
   124,   125,   126,   127,   115,   116,   117,   118,   119,   122,
   123,   128,   129,   130,   131,   132,   133,   137,   138,   105,
     0,   134,   135,     0,     0,     0,    65
};

static const short yycheck[] = {     9,
    10,    11,    12,    13,    15,    13,    15,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,     6,     7,
     8,     9,    10,    11,     6,    13,    13,     9,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    15,    33,    40,
    13,    29,    30,    31,    32,    40,    34,    35,    36,    37,
    38,    39,     5,    40,    14,    43,    14,    14,    14,    14,
    14,     3,    14,    14,    74,    75,    76,    77,    78,    79,
    80,    81,    82,    83,    84,    85,    14,    14,    14,    14,
    14,    14,    92,    14,    14,    14,    14,     3,     3,    14,
    14,    14,    14,    25,    14,    14,   106,   107,    25,    25,
   110,   111,   112,   113,    14,    14,    14,    14,    14,    26,
     3,    13,    13,    13,    13,    13,    13,     0,     0,    86,
    -1,    26,    26,    -1,    -1,    -1,    29
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 196 "bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

int
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 120 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{PSEUDO_MIPS_ASM_AST_root = yyvsp[0].gval.expList;;
    break;}
case 2:
#line 122 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.expList = PSEUDO_MIPS_ASM_AST_ExpList(yyvsp[-1].gval.exp,yyvsp[0].gval.expList);;
    break;}
case 3:
#line 123 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.expList = PSEUDO_MIPS_ASM_AST_ExpList(yyvsp[0].gval.exp,NULL);;
    break;}
case 4:
#line 125 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = yyvsp[0].gval.exp;;
    break;}
case 5:
#line 126 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = yyvsp[0].gval.exp;;
    break;}
case 6:
#line 127 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = yyvsp[0].gval.exp;;
    break;}
case 7:
#line 128 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = yyvsp[0].gval.exp;;
    break;}
case 8:
#line 129 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = yyvsp[0].gval.exp;;
    break;}
case 9:
#line 130 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = yyvsp[0].gval.exp;;
    break;}
case 10:
#line 131 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = yyvsp[0].gval.exp;;
    break;}
case 11:
#line 132 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = yyvsp[0].gval.exp;;
    break;}
case 12:
#line 133 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = yyvsp[0].gval.exp;;
    break;}
case 13:
#line 134 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_PRINT_INT();;
    break;}
case 14:
#line 135 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_PRINT_CHAR();;
    break;}
case 15:
#line 136 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_ALLOCATE();;
    break;}
case 16:
#line 137 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_EXIT();;
    break;}
case 17:
#line 139 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.labelList = PSEUDO_MIPS_ASM_AST_LABEL_LIST(yyvsp[-2].gval.label,yyvsp[0].gval.labelList);;
    break;}
case 18:
#line 140 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.labelList = PSEUDO_MIPS_ASM_AST_LABEL_LIST(yyvsp[0].gval.label,NULL);;
    break;}
case 19:
#line 142 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_VFTABLE(yyvsp[-2].gval.sval,yyvsp[0].gval.labelList);;
    break;}
case 20:
#line 144 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_STRING_VAR(yyvsp[-2].gval.sval,yyvsp[0].gval.sval);;
    break;}
case 21:
#line 145 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_LABEL(yyvsp[-1].gval.label);;
    break;}
case 22:
#line 147 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_JUMP_LABEL(yyvsp[0].gval.label);;
    break;}
case 23:
#line 148 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_JUMP_REGISTER(yyvsp[0].gval.sval);;
    break;}
case 24:
#line 149 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_JUMP_AND_LINK(yyvsp[0].gval.label.name);;
    break;}
case 25:
#line 150 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_JUMP_AND_LINK_REG(yyvsp[0].gval.sval);;
    break;}
case 26:
#line 152 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_BEQ( yyvsp[-4].gval.var,yyvsp[-2].gval.var,yyvsp[0].gval.label );;
    break;}
case 27:
#line 153 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_BNE( yyvsp[-4].gval.var,yyvsp[-2].gval.var,yyvsp[0].gval.label );;
    break;}
case 28:
#line 154 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_BGT( yyvsp[-4].gval.var,yyvsp[-2].gval.var,yyvsp[0].gval.label );;
    break;}
case 29:
#line 155 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_BLT( yyvsp[-4].gval.var,yyvsp[-2].gval.var,yyvsp[0].gval.label );;
    break;}
case 30:
#line 156 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_BGE( yyvsp[-4].gval.var,yyvsp[-2].gval.var,yyvsp[0].gval.label );;
    break;}
case 31:
#line 157 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_BLE( yyvsp[-4].gval.var,yyvsp[-2].gval.var,yyvsp[0].gval.label );;
    break;}
case 32:
#line 159 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_LOAD(yyvsp[-5].gval.var,yyvsp[-1].gval.var,yyvsp[-3].gval.ival);;
    break;}
case 33:
#line 160 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_LOAD_BYTE(yyvsp[-4].gval.var,yyvsp[-1].gval.var);;
    break;}
case 34:
#line 161 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_LOAD_ADDRESS(yyvsp[-2].gval.var,yyvsp[0].gval.sval);;
    break;}
case 35:
#line 162 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_LOAD_ADDRESS(yyvsp[-2].gval.var,yyvsp[0].gval.sval);;
    break;}
case 36:
#line 163 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_LOAD_IMMEDIATE(yyvsp[-2].gval.var,yyvsp[0].gval.ival);;
    break;}
case 37:
#line 165 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_STORE(yyvsp[-5].gval.var,yyvsp[-1].gval.var,yyvsp[-3].gval.ival);;
    break;}
case 38:
#line 167 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_ADD(yyvsp[-4].gval.var,yyvsp[-2].gval.var,yyvsp[0].gval.var);;
    break;}
case 39:
#line 168 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_SUB(yyvsp[-4].gval.var,yyvsp[-2].gval.var,yyvsp[0].gval.var);;
    break;}
case 40:
#line 169 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_MUL(yyvsp[-4].gval.var,yyvsp[-2].gval.var,yyvsp[0].gval.var);;
    break;}
case 41:
#line 170 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_DIV(yyvsp[-4].gval.var,yyvsp[-2].gval.var,yyvsp[0].gval.var);;
    break;}
case 42:
#line 171 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_ADD_IMMEDIATE(yyvsp[-4].gval.var,yyvsp[-2].gval.var,yyvsp[0].gval.ival);;
    break;}
case 43:
#line 173 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.exp = PSEUDO_MIPS_ASM_AST_MOVE(yyvsp[-2].gval.var,yyvsp[0].gval.var);;
    break;}
case 44:
#line 175 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.var = PSEUDO_MIPS_ASM_AST_TEMP_VAR(yyvsp[0].gval.temp_serial_number);;
    break;}
case 45:
#line 176 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"
{yyval.gval.var = PSEUDO_MIPS_ASM_AST_REGISTER_VAR(yyvsp[0].gval.register_name);;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 498 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 178 "/home/oren/GIT/COMPILATION_TAU_FOR_STUDENTS/EX5/SIMULATION_VERSION_4/LINUX_GCC_MAKE/FOLDER_2_LEXER_PARSER_CodeGen/CodeGen.y"


	
