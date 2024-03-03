
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "main.y"


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
extern FILE *yyin,*yyout; 
int i=0,sw=-1,fi=0,s[100];
int k,j,stop=0;
int els=0;
int inc=0,dec=0,g=-1,l=-1,r=-1;
int skipassgn=0;
int exitswtc=0;

void yyerror(char*);
int yylex(void); 

char func[100][100];
int fun=0;

 int vptr = 0;
    int val[1000];
    char variables[1000][1000];

	void swap(int *x,int *y)
	{
		int temp = *x;
		*x = *y;
		*y = temp;
	}
    int ifExists(char str[]){//check if a variable already exists
        int i;
        for(i = 0; i < vptr; i++){
            if(strcmp(variables[i],str) == 0) return 1;
        }
        return 0;
    }
    
    int addval(char str[],int newval){// if a variable is not already exist add new value
        if(ifExists(str) == 1) return 0;
        strcpy(variables[vptr],str);
        val[vptr] = newval;
        vptr++;
        return 1;
    }

    int getval(char str[]){//for getting value
        int idx = -1;
        int i;
        for(i = 0; i < vptr; i++){
            if(strcmp(variables[i],str) == 0) {
                idx = i;
                break;
            }
        }
        return val[idx];
    }
    int setval(char str[], int newval){
    	int idx = -1;
        int i;
        for(i = 0; i < vptr; i++){
            if(strcmp(variables[i],str) == 0) {
                idx = i;
                break;
            }
        }
        val[idx] = newval;

    }
	int swdone = 0;
	double swvar;

	int ifvar[1000];
	int ifptr = -1;
	int ifdone[1000];




/* Line 189 of yacc.c  */
#line 153 "main.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MAIN = 258,
     START = 259,
     END = 260,
     RETURN = 261,
     INCREMENT = 262,
     DECREMENT = 263,
     INT = 264,
     FLOAT = 265,
     CHAR = 266,
     DOUBLE = 267,
     GT = 268,
     LT = 269,
     EQ = 270,
     NEQ = 271,
     SHOW = 272,
     IF = 273,
     ELIF = 274,
     ELSE = 275,
     SWITCH = 276,
     CASE = 277,
     DEF = 278,
     BREAK = 279,
     FOR = 280,
     WHILE = 281,
     DO = 282,
     COND = 283,
     SQRT = 284,
     GET = 285,
     CIN = 286,
     Function = 287,
     DIRECTIVE = 288,
     VARIABLE = 289,
     Str = 290,
     DIR = 291,
     NUMBERF = 292,
     NUMBERI = 293
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 82 "main.y"

	float fvalue;
	int ivalue;
	char *string;



/* Line 214 of yacc.c  */
#line 235 "main.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 247 "main.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   641

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNRULES -- Number of states.  */
#define YYNSTATES  234

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      47,    48,    41,    39,    55,    40,     2,    42,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    60,    45,
      43,    57,    44,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    51,
       2,    46,    49,    56,     2,     2,     2,     2,    53,     2,
       2,     2,    54,     2,     2,    50,    52,     2,     2,     2,
       2,     2,     2,    58,     2,    59,     2,     2,     2,     2,
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    10,    16,    21,    24,    26,    28,
      30,    33,    36,    39,    42,    44,    47,    49,    51,    53,
      59,    65,    71,    77,    83,    89,    95,   103,   111,   117,
     121,   123,   125,   127,   129,   133,   135,   137,   141,   145,
     149,   153,   158,   163,   168,   173,   182,   185,   189,   191,
     196,   200,   204,   206,   208,   218,   228,   238,   240,   242,
     243,   253,   256,   259,   261,   262,   263,   273,   274,   280,
     288,   297,   299,   307,   319,   324,   326,   328,   332,   336,
     340,   344,   348,   352,   356,   360
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      62,     0,    -1,     3,    63,     4,    64,     5,    -1,    -1,
      63,    33,    43,    36,    44,    -1,    33,    43,    36,    44,
      -1,    64,    65,    -1,    65,    -1,    45,    -1,    66,    -1,
      70,    45,    -1,     6,    45,    -1,    71,    45,    -1,    72,
      45,    -1,    73,    -1,    76,    45,    -1,    79,    -1,    78,
      -1,    91,    -1,    46,    47,    91,    48,    45,    -1,    49,
      47,    91,    48,    45,    -1,    50,    47,    91,    48,    45,
      -1,    51,    47,    91,    48,    45,    -1,    52,    47,    91,
      48,    45,    -1,    53,    47,    91,    48,    45,    -1,    29,
      47,    91,    48,    45,    -1,    54,    47,    91,    55,    91,
      48,    45,    -1,    56,    47,    91,    55,    91,    48,    45,
      -1,    54,    47,    91,    48,    45,    -1,    67,    68,    45,
      -1,     9,    -1,    10,    -1,    11,    -1,    12,    -1,    68,
      55,    69,    -1,    69,    -1,    34,    -1,    34,    57,    37,
      -1,    34,    57,    38,    -1,    34,    57,    91,    -1,    34,
      57,    37,    -1,    17,    47,    34,    48,    -1,    17,    47,
      91,    48,    -1,    17,    47,    35,    48,    -1,    31,    47,
      34,    48,    -1,    32,    34,    47,    74,    48,    58,    65,
      59,    -1,    67,    75,    -1,    75,    55,    34,    -1,    34,
      -1,    34,    47,    77,    48,    -1,    77,    55,    38,    -1,
      77,    55,    37,    -1,    38,    -1,    37,    -1,    25,    34,
      60,    38,    52,    38,     4,    65,     5,    -1,    26,    43,
      38,    14,    38,    44,     4,    65,     5,    -1,    26,    43,
      38,    13,    38,    44,     4,    65,     5,    -1,    88,    -1,
      80,    -1,    -1,    21,    43,    91,    44,    60,    81,     4,
      82,     5,    -1,    82,    83,    -1,    82,    86,    -1,    83,
      -1,    -1,    -1,    22,    47,    91,    48,    60,    84,    70,
      85,    24,    -1,    -1,    23,    60,    87,    70,    24,    -1,
      18,    43,    89,    44,    58,    64,    59,    -1,    18,    43,
      89,    44,    58,    64,    59,    90,    -1,    91,    -1,    19,
      43,    91,    44,    58,    64,    59,    -1,    19,    43,    91,
      44,    58,    64,    59,    20,    58,    64,    59,    -1,    20,
      58,    64,    59,    -1,    38,    -1,    34,    -1,    91,    39,
      91,    -1,    91,    40,    91,    -1,    91,    41,    91,    -1,
      91,    42,    91,    -1,    91,    13,    91,    -1,    91,    14,
      91,    -1,    91,    15,    91,    -1,    91,    16,    91,    -1,
      47,    91,    48,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   108,   108,   109,   113,   114,   118,   119,   120,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     145,   153,   158,   163,   168,   173,   179,   185,   198,   219,
     222,   223,   224,   225,   229,   230,   232,   240,   248,   259,
     270,   284,   295,   299,   310,   321,   338,   341,   342,   345,
     357,   358,   359,   360,   365,   377,   401,   425,   429,   438,
     437,   452,   453,   454,   459,   471,   458,   488,   487,   507,
     511,   517,   533,   549,   565,   581,   584,   594,   597,   600,
     603,   607,   613,   618,   623,   628
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MAIN", "START", "END", "RETURN",
  "INCREMENT", "DECREMENT", "INT", "FLOAT", "CHAR", "DOUBLE", "GT", "LT",
  "EQ", "NEQ", "SHOW", "IF", "ELIF", "ELSE", "SWITCH", "CASE", "DEF",
  "BREAK", "FOR", "WHILE", "DO", "COND", "SQRT", "GET", "CIN", "Function",
  "DIRECTIVE", "VARIABLE", "Str", "DIR", "NUMBERF", "NUMBERI", "'+'",
  "'-'", "'*'", "'/'", "'<'", "'>'", "';'", "'e'", "'('", "')'", "'f'",
  "'s'", "'c'", "'t'", "'l'", "'p'", "','", "'g'", "'='", "'{'", "'}'",
  "':'", "$accept", "program", "DIRECTIVEs", "statements", "stmnt",
  "declaration", "type", "id1", "id", "assignment", "output", "input",
  "Functions", "param", "id2", "FunctionCall", "num", "loops",
  "conditions", "switch_condition", "$@1", "cases", "case", "$@2", "$@3",
  "default", "$@4", "if_condition", "ifexp", "else_if", "exp1", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,    43,
      45,    42,    47,    60,    62,    59,   101,    40,    41,   102,
     115,    99,   116,   108,   112,    44,   103,    61,   123,   125,
      58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    62,    63,    63,    64,    64,    64,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    66,
      67,    67,    67,    67,    68,    68,    69,    69,    69,    70,
      70,    71,    71,    71,    72,    73,    74,    75,    75,    76,
      77,    77,    77,    77,    78,    78,    78,    79,    79,    81,
      80,    82,    82,    82,    84,    85,    83,    87,    86,    88,
      88,    89,    90,    90,    90,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     0,     5,     4,     2,     1,     1,     1,
       2,     2,     2,     2,     1,     2,     1,     1,     1,     5,
       5,     5,     5,     5,     5,     5,     7,     7,     5,     3,
       1,     1,     1,     1,     3,     1,     1,     3,     3,     3,
       3,     4,     4,     4,     4,     8,     2,     3,     1,     4,
       3,     3,     1,     1,     9,     9,     9,     1,     1,     0,
       9,     2,     2,     1,     0,     0,     9,     0,     5,     7,
       8,     1,     7,    11,     4,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     0,     1,     0,     0,     0,     0,
       0,    30,    31,    32,    33,     0,     0,     0,     0,     0,
       0,     0,     0,    76,    75,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     9,     0,     0,
       0,     0,    14,     0,    17,    16,    58,    57,    18,     0,
       5,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     6,    36,     0,    35,    10,    12,    13,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,     0,     0,    71,     0,     0,     0,     0,     0,
       0,    53,    52,     0,    40,    39,     0,    85,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,    81,    82,
      83,    84,    77,    78,    79,    80,     4,    41,    43,    42,
       0,     0,     0,     0,     0,     0,    44,     0,     0,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,    38,    34,     0,    59,     0,     0,     0,    25,    48,
      46,     0,    51,    50,    19,    20,    21,    22,    23,    24,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    69,     0,     0,     0,     0,    47,     0,    26,
      27,     0,     0,    70,     0,     0,    63,     0,     0,     0,
      45,     0,     0,     0,    60,     0,    61,    62,    54,    56,
      55,     0,     0,     0,    67,     0,    74,     0,     0,     0,
      64,     0,     0,     0,     0,    68,    72,    65,     0,     0,
       0,    66,     0,    73
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     4,    35,    36,    37,    38,    75,    76,    39,
      40,    41,    42,   138,   160,    43,   103,    44,    45,    46,
     174,   195,   196,   224,   229,   207,   218,    47,    93,   193,
      48
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -201
static const yytype_int16 yypact[] =
{
       1,   -14,    22,     4,     5,  -201,    -1,   376,    10,    35,
      21,  -201,  -201,  -201,  -201,    36,    46,    53,    58,    55,
      56,    57,    73,     7,  -201,  -201,    67,   -21,    69,    70,
      88,    89,    90,    92,    93,   327,  -201,  -201,    99,    97,
      98,   107,  -201,   108,  -201,  -201,  -201,  -201,   599,   118,
    -201,  -201,   -24,   -21,   -21,   100,   121,   -21,   128,   122,
      -7,   -22,   -21,  -201,   116,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,  -201,  -201,   113,    -6,  -201,  -201,  -201,  -201,
    -201,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   119,
     123,   124,   301,   129,   599,   567,   136,    38,   451,   127,
      63,  -201,  -201,     0,  -201,   599,   469,  -201,   473,   487,
     491,   509,   527,    86,   106,    44,  -201,    99,  -201,  -201,
    -201,  -201,    -8,    -8,   152,   152,  -201,  -201,  -201,  -201,
     131,   120,   134,   143,   149,   147,  -201,   159,   148,  -201,
      49,   150,   155,   156,   158,   161,   163,   164,   -21,   -21,
    -201,  -201,  -201,   376,  -201,   172,   168,   169,  -201,  -201,
     160,   170,  -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,
    -201,   531,   545,    59,   210,   212,   213,   214,   187,   425,
     186,   192,    75,   216,   425,   425,   425,  -201,   180,  -201,
    -201,   197,   185,  -201,   199,    -2,  -201,   239,   242,   243,
    -201,   -21,   376,   -21,  -201,   191,  -201,  -201,  -201,  -201,
    -201,   585,   173,   549,  -201,   194,  -201,   200,   220,   376,
    -201,   202,   233,   224,   220,  -201,   241,  -201,   205,   240,
     376,  -201,   275,  -201
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -201,  -201,  -201,  -152,   -35,  -201,   165,  -201,   151,  -200,
    -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,
    -201,  -201,    71,  -201,  -201,  -201,  -201,  -201,  -201,  -201,
     -25
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      73,   173,    64,   204,     1,    81,    82,    83,    84,     7,
      90,    91,    63,    63,    24,   104,    24,    24,   222,     3,
     194,   205,     5,    27,   227,    27,    27,    92,    94,    95,
     101,   102,    98,    87,    88,     9,   105,   106,     8,   116,
     108,   109,   110,   111,   112,   113,   114,     6,   139,   117,
     212,   133,   134,    49,    60,   140,   118,   119,   120,   121,
     122,   123,   124,   125,    61,    10,    51,   223,    11,    12,
      13,    14,    11,    12,    13,    14,    15,    16,   232,    50,
      17,   150,   151,    52,    18,    19,   162,   163,    20,    53,
      21,    22,    55,    23,   191,   192,    54,    24,    56,    81,
      82,    83,    84,    57,    58,    26,    27,    59,    28,    29,
      30,    31,    32,    33,    62,    34,    65,    66,   182,    81,
      82,    83,    84,   171,   172,    85,    86,    87,    88,    81,
      82,    83,    84,    74,   147,    67,    68,    69,    73,    70,
      71,   148,    77,    78,   188,    85,    86,    87,    88,   197,
     198,   199,    79,    80,    89,    85,    86,    87,    88,    97,
      96,   149,    99,   126,   107,    81,    82,    83,    84,   100,
     115,   127,   128,   130,   132,   136,   211,    73,   213,    10,
     154,   156,    11,    12,    13,    14,   155,   157,    73,   153,
      15,    16,   158,   159,    17,   164,   161,    73,    18,    19,
     165,   166,    20,   167,    21,    22,   168,    23,   169,   170,
     175,    24,   176,   177,   183,   178,   184,   185,   186,    26,
      27,   187,    28,    29,    30,    31,    32,    33,   179,    34,
      10,   189,   216,    11,    12,    13,    14,   190,   194,   200,
     201,    15,    16,   202,   208,    17,   203,   209,   210,    18,
      19,   214,   219,    20,   221,    21,    22,   225,    23,    61,
     220,   228,    24,   230,   231,   137,   206,     0,   152,     0,
      26,    27,     0,    28,    29,    30,    31,    32,    33,     0,
      34,    10,     0,   226,    11,    12,    13,    14,     0,     0,
       0,     0,    15,    16,     0,     0,    17,     0,     0,     0,
      18,    19,     0,     0,    20,     0,    21,    22,     0,    23,
       0,     0,     0,    24,    81,    82,    83,    84,     0,     0,
       0,    26,    27,     0,    28,    29,    30,    31,    32,    33,
       0,    34,    72,    10,   233,     0,    11,    12,    13,    14,
      85,    86,    87,    88,    15,    16,     0,     0,    17,   129,
       0,     0,    18,    19,     0,     0,    20,     0,    21,    22,
       0,    23,     0,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,    26,    27,     0,    28,    29,    30,    31,
      32,    33,    10,    34,     0,    11,    12,    13,    14,     0,
       0,     0,     0,    15,    16,     0,     0,    17,     0,     0,
       0,    18,    19,     0,     0,    20,     0,    21,    22,     0,
      23,     0,     0,     0,    24,     0,     0,     0,     0,     0,
       0,    25,    26,    27,     0,    28,    29,    30,    31,    32,
      33,    10,    34,     0,    11,    12,    13,    14,     0,     0,
       0,     0,    15,    16,     0,     0,    17,     0,     0,     0,
      18,    19,     0,     0,    20,     0,    21,    22,     0,    23,
       0,     0,     0,    24,    81,    82,    83,    84,     0,     0,
       0,    26,    27,     0,    28,    29,    30,    31,    32,    33,
       0,    34,    81,    82,    83,    84,    81,    82,    83,    84,
      85,    86,    87,    88,     0,     0,     0,     0,     0,   135,
      81,    82,    83,    84,    81,    82,    83,    84,    85,    86,
      87,    88,    85,    86,    87,    88,     0,   141,     0,     0,
       0,   142,    81,    82,    83,    84,    85,    86,    87,    88,
      85,    86,    87,    88,     0,   143,     0,     0,     0,   144,
      81,    82,    83,    84,    81,    82,    83,    84,    85,    86,
      87,    88,     0,     0,     0,     0,     0,   145,    81,    82,
      83,    84,    81,    82,    83,    84,    85,    86,    87,    88,
      85,    86,    87,    88,     0,   146,     0,     0,     0,   180,
      81,    82,    83,    84,    85,    86,    87,    88,    85,    86,
      87,    88,     0,   181,     0,     0,     0,   217,    81,    82,
      83,    84,     0,     0,     0,     0,    85,    86,    87,    88,
       0,   131,    81,    82,    83,    84,     0,     0,     0,     0,
       0,     0,     0,     0,    85,    86,    87,    88,     0,   215,
       0,     0,     0,     0,     0,     0,     0,     0,    85,    86,
      87,    88
};

static const yytype_int16 yycheck[] =
{
      35,   153,    27,     5,     3,    13,    14,    15,    16,     4,
      34,    35,    34,    34,    38,    37,    38,    38,   218,    33,
      22,    23,     0,    47,   224,    47,    47,    52,    53,    54,
      37,    38,    57,    41,    42,    36,    61,    62,    33,    45,
      65,    66,    67,    68,    69,    70,    71,    43,    48,    55,
     202,    13,    14,    43,    47,    55,    81,    82,    83,    84,
      85,    86,    87,    88,    57,     6,    45,   219,     9,    10,
      11,    12,     9,    10,    11,    12,    17,    18,   230,    44,
      21,    37,    38,    47,    25,    26,    37,    38,    29,    43,
      31,    32,    34,    34,    19,    20,    43,    38,    43,    13,
      14,    15,    16,    47,    47,    46,    47,    34,    49,    50,
      51,    52,    53,    54,    47,    56,    47,    47,    59,    13,
      14,    15,    16,   148,   149,    39,    40,    41,    42,    13,
      14,    15,    16,    34,    48,    47,    47,    47,   173,    47,
      47,    55,    45,    45,   179,    39,    40,    41,    42,   184,
     185,   186,    45,    45,    36,    39,    40,    41,    42,    38,
      60,    55,    34,    44,    48,    13,    14,    15,    16,    47,
      57,    48,    48,    44,    38,    48,   201,   212,   203,     6,
      60,    38,     9,    10,    11,    12,    52,    38,   223,    58,
      17,    18,    45,    34,    21,    45,    48,   232,    25,    26,
      45,    45,    29,    45,    31,    32,    45,    34,    45,    45,
      38,    38,    44,    44,     4,    55,     4,     4,     4,    46,
      47,    34,    49,    50,    51,    52,    53,    54,    58,    56,
       6,    45,    59,     9,    10,    11,    12,    45,    22,    59,
      43,    17,    18,    58,     5,    21,    47,     5,     5,    25,
      26,    60,    58,    29,    34,    31,    32,    24,    34,    57,
      60,    20,    38,    58,    24,   100,   195,    -1,   117,    -1,
      46,    47,    -1,    49,    50,    51,    52,    53,    54,    -1,
      56,     6,    -1,    59,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    21,    -1,    -1,    -1,
      25,    26,    -1,    -1,    29,    -1,    31,    32,    -1,    34,
      -1,    -1,    -1,    38,    13,    14,    15,    16,    -1,    -1,
      -1,    46,    47,    -1,    49,    50,    51,    52,    53,    54,
      -1,    56,     5,     6,    59,    -1,     9,    10,    11,    12,
      39,    40,    41,    42,    17,    18,    -1,    -1,    21,    48,
      -1,    -1,    25,    26,    -1,    -1,    29,    -1,    31,    32,
      -1,    34,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    49,    50,    51,    52,
      53,    54,     6,    56,    -1,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,    21,    -1,    -1,
      -1,    25,    26,    -1,    -1,    29,    -1,    31,    32,    -1,
      34,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    -1,    49,    50,    51,    52,    53,
      54,     6,    56,    -1,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    21,    -1,    -1,    -1,
      25,    26,    -1,    -1,    29,    -1,    31,    32,    -1,    34,
      -1,    -1,    -1,    38,    13,    14,    15,    16,    -1,    -1,
      -1,    46,    47,    -1,    49,    50,    51,    52,    53,    54,
      -1,    56,    13,    14,    15,    16,    13,    14,    15,    16,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    48,
      13,    14,    15,    16,    13,    14,    15,    16,    39,    40,
      41,    42,    39,    40,    41,    42,    -1,    48,    -1,    -1,
      -1,    48,    13,    14,    15,    16,    39,    40,    41,    42,
      39,    40,    41,    42,    -1,    48,    -1,    -1,    -1,    48,
      13,    14,    15,    16,    13,    14,    15,    16,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    48,    13,    14,
      15,    16,    13,    14,    15,    16,    39,    40,    41,    42,
      39,    40,    41,    42,    -1,    48,    -1,    -1,    -1,    48,
      13,    14,    15,    16,    39,    40,    41,    42,    39,    40,
      41,    42,    -1,    48,    -1,    -1,    -1,    48,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    39,    40,    41,    42,
      -1,    44,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    42,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,    42
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    62,    33,    63,     0,    43,     4,    33,    36,
       6,     9,    10,    11,    12,    17,    18,    21,    25,    26,
      29,    31,    32,    34,    38,    45,    46,    47,    49,    50,
      51,    52,    53,    54,    56,    64,    65,    66,    67,    70,
      71,    72,    73,    76,    78,    79,    80,    88,    91,    43,
      44,    45,    47,    43,    43,    34,    43,    47,    47,    34,
      47,    57,    47,    34,    91,    47,    47,    47,    47,    47,
      47,    47,     5,    65,    34,    68,    69,    45,    45,    45,
      45,    13,    14,    15,    16,    39,    40,    41,    42,    36,
      34,    35,    91,    89,    91,    91,    60,    38,    91,    34,
      47,    37,    38,    77,    37,    91,    91,    48,    91,    91,
      91,    91,    91,    91,    91,    57,    45,    55,    91,    91,
      91,    91,    91,    91,    91,    91,    44,    48,    48,    48,
      44,    44,    38,    13,    14,    48,    48,    67,    74,    48,
      55,    48,    48,    48,    48,    48,    48,    48,    55,    55,
      37,    38,    69,    58,    60,    52,    38,    38,    45,    34,
      75,    48,    37,    38,    45,    45,    45,    45,    45,    45,
      45,    91,    91,    64,    81,    38,    44,    44,    55,    58,
      48,    48,    59,     4,     4,     4,     4,    34,    65,    45,
      45,    19,    20,    90,    22,    82,    83,    65,    65,    65,
      59,    43,    58,    47,     5,    23,    83,    86,     5,     5,
       5,    91,    64,    91,    60,    44,    59,    48,    87,    58,
      60,    34,    70,    64,    84,    24,    59,    70,    20,    85,
      58,    24,    64,    59
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 108 "main.y"
    {printf("succesfully compiled\n");;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 113 "main.y"
    {printf("Directive Included\n");;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 114 "main.y"
    {printf("Directive Included\n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 118 "main.y"
    {/*printf("valid statement 1\n");*/;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 119 "main.y"
    {/*printf("valid statement 2\n");*/;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 125 "main.y"
    {/*printf(" declaration \n");*/;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 126 "main.y"
    {/*printf(" assign \n");*/;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 127 "main.y"
    {printf("\nend of program\n");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 128 "main.y"
    {/*printf("output\n");*/;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 136 "main.y"
    {
				int d=(yyvsp[(3) - (5)].ivalue);
				  if(d%2)
				  printf("%d is odd\n",(yyvsp[(3) - (5)].ivalue));
				  else
				  printf("%d is even\n",(yyvsp[(3) - (5)].ivalue));

				;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 146 "main.y"
    {
                 int k=(yyvsp[(3) - (5)].ivalue),d=1,i;
                 for(i=1;i<=k;i++)
                 d=d*i;
                 printf("Factorial of %d is %d\n",(yyvsp[(3) - (5)].ivalue),d);

                 ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 154 "main.y"
    {
    			  float d=sin((yyvsp[(3) - (5)].ivalue) * 3.14/180);
    			  printf("sin(%d) is %.5f\n",(yyvsp[(3) - (5)].ivalue),d);
    			;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 159 "main.y"
    {
    			float d=cos((yyvsp[(3) - (5)].ivalue)* 3.14/180);
    			  printf("cos(%d) is %.5f\n",(yyvsp[(3) - (5)].ivalue),d);
    			;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 164 "main.y"
    {
    			 float d=tan((yyvsp[(3) - (5)].ivalue)* 3.14/180);
    			  printf("tan(%d) is %.5f\n",(yyvsp[(3) - (5)].ivalue),d);
    			;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 169 "main.y"
    {
    			  float d=log((yyvsp[(3) - (5)].ivalue));
    			  printf("log(%d) is %.5f\n",(yyvsp[(3) - (5)].ivalue),d);
    			;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 174 "main.y"
    {
    			   float d=sqrt((yyvsp[(3) - (5)].ivalue));
    			   printf("square root of %d is %f\n",(yyvsp[(3) - (5)].ivalue),d);

    			;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 180 "main.y"
    {
    			   int d=pow((yyvsp[(3) - (7)].ivalue),(yyvsp[(5) - (7)].ivalue));
    			   printf("power of %d^%d is %d\n",(yyvsp[(3) - (7)].ivalue),(yyvsp[(5) - (7)].ivalue),d);

    			;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 186 "main.y"
    {
    			   int i,n1,n2,gcd;
					n1=(yyvsp[(3) - (7)].ivalue);
					n2=(yyvsp[(5) - (7)].ivalue);
				for(i=1; i <= n1 && i <= n2; ++i)
    			  {
        
        			if(n1%i==0 && n2%i==0)
            		gcd = i;
    			   }
    			 printf("G.C.D of %d and %d is %d\n", n1, n2, gcd);
    			;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 199 "main.y"
    {int i, n=(yyvsp[(3) - (5)].ivalue),flag=0;
    			for (i = 2; i <= n / 2; ++i) {
    					if (n % i == 0) {
      							flag = 1;
     							 break;
    								}
  						}

  					if (n == 1) {
    					printf("1 is neither prime nor composite.\n");} 
  					else {
    					if (flag == 0)
      					printf("%d is a prime number.\n", n);
   						 else
      					printf("%d is not a prime number.\n", n);}
    				;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 229 "main.y"
    {;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 232 "main.y"
    {
						int a = addval((yyvsp[(1) - (1)].string),0);
						if(!a) {
							printf("%s is already exist\n",(yyvsp[(1) - (1)].string));
							exit(-1);
						}
						else{printf("%s declared\n",(yyvsp[(1) - (1)].string));}
	                          ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 240 "main.y"
    {  int a = addval((yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].fvalue));
						if(!a) {
							printf("%s is already exist\n",(yyvsp[(1) - (3)].string));
							exit(-1);
							}
							else{printf("%s declared with value %f\n",(yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].fvalue));}
	
       						;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 248 "main.y"
    {  int a = addval((yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].ivalue));
						if(!a) {
							printf("%s is already exist\n",(yyvsp[(1) - (3)].string));
							exit(-1);
							}
							else{printf("%s declared with value %d  \n",(yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].ivalue));}
	
       						;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 260 "main.y"
    {
						if(!ifExists((yyvsp[(1) - (3)].string))) {
							printf("%s is not declared\n",(yyvsp[(1) - (3)].string));
							exit(-1);
						}
						else{
							printf("%d is assigned to %s\n",(yyvsp[(3) - (3)].ivalue),(yyvsp[(1) - (3)].string));
							setval((yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].ivalue));
						}
				    ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 271 "main.y"
    {
						if(!ifExists((yyvsp[(1) - (3)].string))) {
							printf("%s is not declared\n",(yyvsp[(1) - (3)].string));
							exit(-1);
						}
						else{
							printf("%f is assigned to %s\n",(yyvsp[(3) - (3)].fvalue),(yyvsp[(1) - (3)].string));
							setval((yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].fvalue));
						}
				    ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 284 "main.y"
    { if(!ifExists((yyvsp[(3) - (4)].string))){
							printf("%s is not declared\n",(yyvsp[(3) - (4)].string));
							exit(-1);
						}
						else{
							int a = getval((yyvsp[(3) - (4)].string));
							printf("Value of %s is : %d\n",(yyvsp[(3) - (4)].string),a);
						}


                             ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 296 "main.y"
    {
					printf("%lf",(yyvsp[(3) - (4)].ivalue));
				;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 299 "main.y"
    {
						int len = strlen((yyvsp[(3) - (4)].string));
						int i;
						printf("printed: ");
						for(i = 1; i < len-1; i++) 
						printf("%c",(yyvsp[(3) - (4)].string)[i]);
						printf("\n");
	   ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 311 "main.y"
    {
					int a;
					scanf("%d",&a);
					setval((yyvsp[(3) - (4)].string),a);
					printf("Input taken for %s\n",(yyvsp[(3) - (4)].string));
					
				;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 322 "main.y"
    {
				int a = addval((yyvsp[(2) - (8)].string),0);
						if(!a) {
							printf("function %s already exists\n",(yyvsp[(2) - (8)].string));
							exit(-1);
						}
						else{printf("Function %s declared\n",(yyvsp[(2) - (8)].string));}
				
				strcpy(func[fun],(yyvsp[(2) - (8)].string));
				//fun[i]=$2;
				fun++;
				//printf("Function Name: %s\n",$2);
				printf("Inside %s function\n",(yyvsp[(2) - (8)].string));
			;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 346 "main.y"
    {
				if(!ifExists((yyvsp[(1) - (4)].string))) {
							printf("Function %s is not declared\n",(yyvsp[(1) - (4)].string));
							exit(-1);
						}
						else{
							printf("%s Function Called\n",(yyvsp[(1) - (4)].string));
							//setval($1,$3);
						}
			;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 367 "main.y"
    {int j,k=(yyvsp[(6) - (9)].ivalue)-(yyvsp[(4) - (9)].ivalue);
          printf("\n");
		  printf("for loop started\n");
          for (j=1;j<=k;j++)
          {
           printf("At %d no execution \n",j);
          }
		   printf("for loop ended\n");

         ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 378 "main.y"
    {   printf("\n");
		  l=(yyvsp[(3) - (9)].ivalue),r=(yyvsp[(5) - (9)].ivalue);
		  printf("%d",l);
              if(l<r)
              {
				int k=1;
				
              while(l<r)
              {
              printf("At %d no. execution\n",k);
			  //printf("At %d %d\n",l,r);
			  k++;
              l++;
              }
              
              l=-1,r=-1;
              }
              else 
			  {
				printf("condition not satisfied for while loop\n");
			  }
             
          ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 402 "main.y"
    {   printf("\n");
		  l=(yyvsp[(3) - (9)].ivalue),r=(yyvsp[(5) - (9)].ivalue);
              if(l>r)
              {
				int k=1;
              while(l>r)
              {
              printf("At %d no. execution\n",k);
			  k++;
              l--;
              }
              
              l=-1,r=-1;
              }
              else 
			  {
				printf("condition not satisfied for while loop\n");
			  }
             
          ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 425 "main.y"
    {
     					printf("If block executed\n");

     					;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 429 "main.y"
    {
    						printf("switch block ended\n");

    						;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 438 "main.y"
    {
		
		sw=(yyvsp[(3) - (5)].ivalue);
		
		skipassgn=1;
		exitswtc=0;
		;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 459 "main.y"
    {
    if((yyvsp[(3) - (5)].ivalue)==sw)
    {
    printf("case %d is true \n",(yyvsp[(3) - (5)].ivalue));
      skipassgn=0;
      exitswtc=1;
    }
	else{
		 printf("case %d is false \n",(yyvsp[(3) - (5)].ivalue));
	}
    ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 471 "main.y"
    {
		printf("statement\n");
    // printf("sw2.5 %d  %d \n",skipassgn,exitswtc);      
     ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 476 "main.y"
    {
		printf("b\n");
    if(exitswtc)
    {
    printf("sw3 \n");
     //printf("%d\n",$3);
     skipassgn=1;     
    }
    ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 488 "main.y"
    {
   if(exitswtc==0)
   {
	skipassgn=0;
	printf("Default case \n");
   }  
   ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 497 "main.y"
    {
   //printf("sw5 \n");
     // printf("%d\n",$2);
     skipassgn=0;
     exitswtc=0;
	// break;
   ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 508 "main.y"
    { ifdone[ifptr] = 0;
							ifptr--;
              ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 512 "main.y"
    { ifdone[ifptr] = 0;
							ifptr--;
              ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 518 "main.y"
    {
							ifptr++;
							ifdone[ifptr] = 0;
							if((yyvsp[(1) - (1)].ivalue)){
								printf("If block: True\n");
								ifdone[ifptr] = 1;
							}
							else
							{
								printf("If block: False\n");
							}
						;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 534 "main.y"
    {
     		if((yyvsp[(3) - (7)].ivalue) && ifdone[ifptr] == 0)
     		{
				printf("Else if block: True\n");
								ifdone[ifptr] = 1;
			printf("elif executed\n");
     		
     		}
     		else
     		{  
     		 printf("Else if block: False\n");
     		
     		}

     		;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 550 "main.y"
    {
     		if((yyvsp[(3) - (11)].ivalue) && ifdone[ifptr] == 0)
     		{
				printf("Else if block: True\n");
								ifdone[ifptr] = 1;
			printf("elif executed\n");
     		
     		}
     		else
     		{  
     		 printf("Else if block: False\n");
     		
     		}

     		;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 566 "main.y"
    {
				if(ifdone[ifptr] == 0){
								printf("Else block: True\n");
								ifdone[ifptr] = 1;
							}
							else
							{
								printf("Else block: False\n");
							}
          
            ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 581 "main.y"
    { (yyval.ivalue) = (yyvsp[(1) - (1)].ivalue);
								//printf(" exp1 %d \n",$1);
								;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 585 "main.y"
    {
						if(!ifExists((yyvsp[(1) - (1)].string))) {
							printf("%s is not declared\n",(yyvsp[(1) - (1)].string));
							exit(-1);
						}
						else{
							(yyval.ivalue) = getval((yyvsp[(1) - (1)].string));
						}
					;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 594 "main.y"
    {(yyval.ivalue) = (yyvsp[(1) - (3)].ivalue) + (yyvsp[(3) - (3)].ivalue);
	 						//printf("PLUS \n");
	 						;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 597 "main.y"
    {(yyval.ivalue) = (yyvsp[(1) - (3)].ivalue) - (yyvsp[(3) - (3)].ivalue);
							//printf("MINUS \n");
							;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 600 "main.y"
    {(yyval.ivalue) = (yyvsp[(1) - (3)].ivalue) * (yyvsp[(3) - (3)].ivalue);
							//printf("MUL \n");
							;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 603 "main.y"
    {(yyval.ivalue) = (yyvsp[(1) - (3)].ivalue) / (yyvsp[(3) - (3)].ivalue);
							//printf("DIV \n");
							;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 607 "main.y"
    {(yyval.ivalue) = (yyvsp[(1) - (3)].ivalue) > (yyvsp[(3) - (3)].ivalue); 
	                           l=(yyvsp[(1) - (3)].ivalue);
	                           r=(yyvsp[(3) - (3)].ivalue);
	                           g=1;
							//printf("GT \n");
							;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 613 "main.y"
    {(yyval.ivalue) = (yyvsp[(1) - (3)].ivalue)<(yyvsp[(3) - (3)].ivalue);
	                           l=(yyvsp[(1) - (3)].ivalue);
	                           r=(yyvsp[(3) - (3)].ivalue);
							//printf("DIV \n");
							;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 618 "main.y"
    {(yyval.ivalue) = (yyvsp[(1) - (3)].ivalue)== (yyvsp[(3) - (3)].ivalue);
							   l=(yyvsp[(1) - (3)].ivalue);
	                           r=(yyvsp[(3) - (3)].ivalue);
							//printf("DIV \n");
							;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 623 "main.y"
    {(yyval.ivalue) = (yyvsp[(1) - (3)].ivalue)!= (yyvsp[(3) - (3)].ivalue);
							  l=(yyvsp[(1) - (3)].ivalue);
	                          r=(yyvsp[(3) - (3)].ivalue);
							//printf("DIV \n");
							;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 628 "main.y"
    {(yyval.ivalue)=(yyvsp[(2) - (3)].ivalue);
                             //printf("DIV \n");
                             ;}
    break;



/* Line 1455 of yacc.c  */
#line 2458 "main.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 635 "main.y"

int yywrap()
{
    return 1;
}

int main(void)
{
   yyin=freopen("in.txt","r",stdin);
	yyout=freopen("out.txt","w",stdout);

    yyparse();

    fclose(yyin);
   	fclose(yyout);
    return 0;
}
void yyerror( char *s)
{
    printf("%s\n",s);
}

