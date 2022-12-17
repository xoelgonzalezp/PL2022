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
#line 1 "proyecto.y"


#include "stdlib.h"
#include "stdio.h"
#include "string.h"
int yylex(void);
void yyerror(char  *s); 
char *rmposition (char *s);
void *detectlist(char *s);
FILE *HTML;

#line 83 "proyecto.tab.c"

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

#include "proyecto.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_H1 = 3,                         /* H1  */
  YYSYMBOL_H2 = 4,                         /* H2  */
  YYSYMBOL_H3 = 5,                         /* H3  */
  YYSYMBOL_H4 = 6,                         /* H4  */
  YYSYMBOL_H5 = 7,                         /* H5  */
  YYSYMBOL_H6 = 8,                         /* H6  */
  YYSYMBOL_CURSIVA = 9,                    /* CURSIVA  */
  YYSYMBOL_COMB = 10,                      /* COMB  */
  YYSYMBOL_COMB2 = 11,                     /* COMB2  */
  YYSYMBOL_EMPHASIS = 12,                  /* EMPHASIS  */
  YYSYMBOL_SCRATCH = 13,                   /* SCRATCH  */
  YYSYMBOL_CODE = 14,                      /* CODE  */
  YYSYMBOL_LISTAORD = 15,                  /* LISTAORD  */
  YYSYMBOL_LISTADESORD = 16,               /* LISTADESORD  */
  YYSYMBOL_LINK = 17,                      /* LINK  */
  YYSYMBOL_TEXTWORD = 18,                  /* TEXTWORD  */
  YYSYMBOL_TITLE = 19,                     /* TITLE  */
  YYSYMBOL_LINKNAME = 20,                  /* LINKNAME  */
  YYSYMBOL_YYACCEPT = 21,                  /* $accept  */
  YYSYMBOL_S = 22,                         /* S  */
  YYSYMBOL_title = 23,                     /* title  */
  YYSYMBOL_textword = 24,                  /* textword  */
  YYSYMBOL_emphasis = 25,                  /* emphasis  */
  YYSYMBOL_cursiva = 26,                   /* cursiva  */
  YYSYMBOL_comb = 27,                      /* comb  */
  YYSYMBOL_comb2 = 28,                     /* comb2  */
  YYSYMBOL_scratch = 29,                   /* scratch  */
  YYSYMBOL_listas = 30,                    /* listas  */
  YYSYMBOL_code = 31,                      /* code  */
  YYSYMBOL_link = 32                       /* link  */
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
#define YYFINAL  79
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   310

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  21
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  175
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  178

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   275


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
      15,    16,    17,    18,    19,    20
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    47,    47,    50,    55,    57,    59,    61,    63,    65,
      67,    69,    71,    73,    75,    77,    79,    81,    83,    85,
      87,    89,    91,    93,    95,    97,    99,   101,   103,   105,
     107,   109,   111,   113,   115,   117,   119,   121,   123,   125,
     127,   129,   131,   133,   135,   137,   139,   141,   143,   145,
     147,   149,   151,   153,   155,   157,   159,   161,   163,   165,
     167,   169,   171,   174,   176,   178,   180,   182,   184,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     212,   219,   225,   230,   235,   240,   245,   249,   254,   259,
     265,   268,   271,   274,   277,   280,   284,   288,   292,   297,
     307,   310,   313,   316,   319,   322,   325,   328,   332,   337,
     342,   350,   353,   356,   359,   362,   365,   368,   372,   376,
     380,   385,   396,   400,   403,   406,   409,   412,   415,   418,
     422,   426,   442,   448,   454,   460,   467,   474,   480,   485,
     490,   495,   500,   505,   510,   515,   520,   525,   530,   535,
     540,   545,   551,   556,   566,   571,   575,   580,   585,   590,
     595,   600,   605,   610,   614,   623,   631,   639,   647,   656,
     665,   674,   683,   692,   701,   709
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
  "\"end of file\"", "error", "\"invalid token\"", "H1", "H2", "H3", "H4",
  "H5", "H6", "CURSIVA", "COMB", "COMB2", "EMPHASIS", "SCRATCH", "CODE",
  "LISTAORD", "LISTADESORD", "LINK", "TEXTWORD", "TITLE", "LINKNAME",
  "$accept", "S", "title", "textword", "emphasis", "cursiva", "comb",
  "comb2", "scratch", "listas", "code", "link", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-11)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     201,   165,   165,   165,   165,   165,   165,     6,   -11,   183,
     165,   165,   183,   183,   165,   165,   165,   165,   -10,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   165,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     4,     5,     6,     7,     8,     0,     2,    90,
     100,   111,    80,   122,   154,   132,   143,    69,     0,     9,
      15,    21,    27,    45,    51,    33,    39,    57,    63,    10,
      16,    22,    28,    46,    52,    34,    40,    58,    64,    11,
      17,    23,    29,    47,    53,    35,    41,    59,    65,    12,
      18,    24,    30,    48,    54,    36,    42,    60,    66,    13,
      19,    25,    31,    49,    55,    37,    43,    61,    67,    14,
      20,    26,    32,    50,    56,    38,    44,    62,    68,     1,
      91,    95,    92,    93,    96,    97,    94,    98,    99,   101,
     105,   102,   103,   107,   106,   104,   108,   109,   110,   112,
     116,   113,   114,   117,   118,   115,   119,   120,   121,    81,
      85,    82,    83,    86,    87,    84,    88,    89,   123,   127,
     126,   125,   128,   129,   124,   130,   131,   155,   158,   159,
     157,   160,   161,   156,   163,   162,   164,   134,   138,   137,
     136,   139,   140,   135,   133,   141,   142,   145,   149,   148,
     147,   150,   151,   146,   144,   152,   153,    70,    78,    76,
      71,    74,    75,    73,    72,    77,    79,   165,   167,   170,
     171,   169,   172,   173,   168,   175,   174,   166
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -11,   -11,    -1,    15,    31,    47,    63,    79,    95,   143,
     111,   127
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     7,     8,    20,    21,    22,    23,    24,    25,    26,
      27,    28
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      19,    29,    39,    49,    59,    69,    79,   167,    80,    89,
      99,   109,   118,   127,   137,   147,   157,    30,    40,    50,
      60,    70,     0,     0,    81,    90,   100,   110,   119,   128,
     138,   148,   158,    31,    41,    51,    61,    71,     0,     0,
      82,    91,   101,   111,   120,   129,   139,   149,   159,    32,
      42,    52,    62,    72,     0,     0,    83,    92,   102,   112,
     121,   130,   140,   150,   160,    33,    43,    53,    63,    73,
       0,     0,    84,    93,   103,   113,   122,   131,   141,   151,
     161,    34,    44,    54,    64,    74,     0,     0,    85,    94,
     104,   114,   123,   132,   142,   152,   162,    35,    45,    55,
      65,    75,     0,     0,    86,    95,   105,   115,   124,   133,
     143,   153,   163,    37,    47,    57,    67,    77,     0,     0,
      87,    97,   107,   116,   125,   135,   145,   155,   165,    38,
      48,    58,    68,    78,     0,     0,    88,    98,   108,   117,
     126,   136,   146,   156,   166,    36,    46,    56,    66,    76,
       0,     0,     0,    96,   106,     0,     0,   134,   144,   154,
     164,     0,     0,     0,     0,     0,   168,     0,     1,     2,
       3,     4,     5,     6,     9,    10,    11,    12,    13,    14,
      15,    16,   169,    17,     0,    18,     1,     2,     3,     4,
       5,     6,     9,    10,    11,    12,    13,    14,   170,     0,
       0,    17,     0,    18,     1,     2,     3,     4,     5,     6,
       0,     0,     0,     0,   171,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     172,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   173,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   174,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   176,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   177,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     175
};

static const yytype_int16 yycheck[] =
{
       1,     2,     3,     4,     5,     6,     0,    17,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     2,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,     2,     3,     4,     5,     6,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     2,
       3,     4,     5,     6,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     2,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,     2,     3,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     2,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,     2,     3,     4,     5,     6,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     2,
       3,     4,     5,     6,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     2,     3,     4,     5,     6,
      -1,    -1,    -1,    10,    11,    -1,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,   167,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,   167,    18,    -1,    20,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,   167,    -1,
      -1,    18,    -1,    20,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     167
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    22,    23,     9,
      10,    11,    12,    13,    14,    15,    16,    18,    20,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,     0,
      23,    24,    25,    26,    27,    28,    29,    31,    32,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    23,
      24,    25,    26,    27,    28,    29,    31,    32,    23,    24,
      25,    26,    27,    28,    29,    31,    32,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    17,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    21,    22,    23,    23,    23,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      25,    25,    25,    25,    25,    25,    25,    25,    25,    25,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      27,    27,    27,    27,    27,    27,    27,    27,    27,    27,
      27,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    32
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3
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
  case 3: /* title: H1  */
#line 52 "proyecto.y"
   {fprintf(HTML,"<h1>%s</h1>\n", (yyvsp[0].string)+2);}
#line 1259 "proyecto.tab.c"
    break;

  case 4: /* title: H2  */
#line 56 "proyecto.y"
    {printf("<h2>%s</h2>\n", (yyvsp[0].string)+3);}
#line 1265 "proyecto.tab.c"
    break;

  case 5: /* title: H3  */
#line 58 "proyecto.y"
    {printf("<h3>%s</h3>\n", (yyvsp[0].string)+4);}
#line 1271 "proyecto.tab.c"
    break;

  case 6: /* title: H4  */
#line 60 "proyecto.y"
    {printf("<h4> %s </h4>\n", (yyvsp[0].string)+5);}
#line 1277 "proyecto.tab.c"
    break;

  case 7: /* title: H5  */
#line 62 "proyecto.y"
    {printf("<h5>%s</h5>\n", (yyvsp[0].string)+6);}
#line 1283 "proyecto.tab.c"
    break;

  case 8: /* title: H6  */
#line 64 "proyecto.y"
    {printf("<h6>%s</h6>\n", (yyvsp[0].string)+7);}
#line 1289 "proyecto.tab.c"
    break;

  case 9: /* title: H1 title  */
#line 66 "proyecto.y"
        {printf("<h1>%s</h1>\n", (yyvsp[-1].string)+2);}
#line 1295 "proyecto.tab.c"
    break;

  case 10: /* title: H2 title  */
#line 68 "proyecto.y"
        {printf("<h2>%s</h2>\n", (yyvsp[-1].string)+3);}
#line 1301 "proyecto.tab.c"
    break;

  case 11: /* title: H3 title  */
#line 70 "proyecto.y"
        {printf("<h3>%s</h3>\n", (yyvsp[-1].string)+4);}
#line 1307 "proyecto.tab.c"
    break;

  case 12: /* title: H4 title  */
#line 72 "proyecto.y"
        {printf("<h4>%s</h4>\n", (yyvsp[-1].string)+5);}
#line 1313 "proyecto.tab.c"
    break;

  case 13: /* title: H5 title  */
#line 74 "proyecto.y"
        {printf("<h5>%s</h5>\n", (yyvsp[-1].string)+6);}
#line 1319 "proyecto.tab.c"
    break;

  case 14: /* title: H6 title  */
#line 76 "proyecto.y"
        {printf("<h6>%s</h6>\n", (yyvsp[-1].string)+7);}
#line 1325 "proyecto.tab.c"
    break;

  case 15: /* title: H1 textword  */
#line 78 "proyecto.y"
        {printf("<h1>%s</h1>\n", (yyvsp[-1].string)+2);}
#line 1331 "proyecto.tab.c"
    break;

  case 16: /* title: H2 textword  */
#line 80 "proyecto.y"
        {printf("<h2>%s</h2>\n", (yyvsp[-1].string)+2);}
#line 1337 "proyecto.tab.c"
    break;

  case 17: /* title: H3 textword  */
#line 82 "proyecto.y"
        {printf("<h3>%s</h3>\n", (yyvsp[-1].string)+2);}
#line 1343 "proyecto.tab.c"
    break;

  case 18: /* title: H4 textword  */
#line 84 "proyecto.y"
        {printf("<h4>%s</h4>\n", (yyvsp[-1].string)+2);}
#line 1349 "proyecto.tab.c"
    break;

  case 19: /* title: H5 textword  */
#line 86 "proyecto.y"
        {printf("<h5>%s</h5>\n", (yyvsp[-1].string)+2);}
#line 1355 "proyecto.tab.c"
    break;

  case 20: /* title: H6 textword  */
#line 88 "proyecto.y"
        {printf("<h6>%s</h6>\n", (yyvsp[-1].string)+2);}
#line 1361 "proyecto.tab.c"
    break;

  case 21: /* title: H1 emphasis  */
#line 90 "proyecto.y"
        {printf("<h1>%s</h1>\n", (yyvsp[-1].string)+2);}
#line 1367 "proyecto.tab.c"
    break;

  case 22: /* title: H2 emphasis  */
#line 92 "proyecto.y"
        {printf("<h2>%s</h2>\n", (yyvsp[-1].string)+3);}
#line 1373 "proyecto.tab.c"
    break;

  case 23: /* title: H3 emphasis  */
#line 94 "proyecto.y"
        {printf("<h3>%s</h3>\n", (yyvsp[-1].string)+4);}
#line 1379 "proyecto.tab.c"
    break;

  case 24: /* title: H4 emphasis  */
#line 96 "proyecto.y"
        {printf("<h4>%s</h4>\n", (yyvsp[-1].string)+5);}
#line 1385 "proyecto.tab.c"
    break;

  case 25: /* title: H5 emphasis  */
#line 98 "proyecto.y"
        {printf("<h5>%s</h5>\n", (yyvsp[-1].string)+6);}
#line 1391 "proyecto.tab.c"
    break;

  case 26: /* title: H6 emphasis  */
#line 100 "proyecto.y"
        {printf("<h6>%s</h6>\n", (yyvsp[-1].string)+7);}
#line 1397 "proyecto.tab.c"
    break;

  case 27: /* title: H1 cursiva  */
#line 102 "proyecto.y"
        {printf("<h1>%s</h1>\n", (yyvsp[-1].string)+2);}
#line 1403 "proyecto.tab.c"
    break;

  case 28: /* title: H2 cursiva  */
#line 104 "proyecto.y"
        {printf("<h2>%s</h2>\n", (yyvsp[-1].string)+3);}
#line 1409 "proyecto.tab.c"
    break;

  case 29: /* title: H3 cursiva  */
#line 106 "proyecto.y"
        {printf("<h3>%s</h3>\n", (yyvsp[-1].string)+4);}
#line 1415 "proyecto.tab.c"
    break;

  case 30: /* title: H4 cursiva  */
#line 108 "proyecto.y"
        {printf("<h4>%s</h4>\n", (yyvsp[-1].string)+5);}
#line 1421 "proyecto.tab.c"
    break;

  case 31: /* title: H5 cursiva  */
#line 110 "proyecto.y"
        {printf("<h5>%s</h5>\n", (yyvsp[-1].string)+6);}
#line 1427 "proyecto.tab.c"
    break;

  case 32: /* title: H6 cursiva  */
#line 112 "proyecto.y"
        {printf("<h6>%s</h6>\n", (yyvsp[-1].string)+7);}
#line 1433 "proyecto.tab.c"
    break;

  case 33: /* title: H1 scratch  */
#line 114 "proyecto.y"
        {printf("<h1>%s</h1>\n", (yyvsp[-1].string)+2);}
#line 1439 "proyecto.tab.c"
    break;

  case 34: /* title: H2 scratch  */
#line 116 "proyecto.y"
        {printf("<h2>%s</h2>\n", (yyvsp[-1].string)+3);}
#line 1445 "proyecto.tab.c"
    break;

  case 35: /* title: H3 scratch  */
#line 118 "proyecto.y"
        {printf("<h3>%s</h3>\n", (yyvsp[-1].string)+4);}
#line 1451 "proyecto.tab.c"
    break;

  case 36: /* title: H4 scratch  */
#line 120 "proyecto.y"
        {printf("<h4>%s</h4>\n", (yyvsp[-1].string)+5);}
#line 1457 "proyecto.tab.c"
    break;

  case 37: /* title: H5 scratch  */
#line 122 "proyecto.y"
        {printf("<h5>%s</h5>\n", (yyvsp[-1].string)+6);}
#line 1463 "proyecto.tab.c"
    break;

  case 38: /* title: H6 scratch  */
#line 124 "proyecto.y"
        {printf("<h6>%s</h6>\n", (yyvsp[-1].string)+7);}
#line 1469 "proyecto.tab.c"
    break;

  case 39: /* title: H1 listas  */
#line 126 "proyecto.y"
        {printf("<h1>%s</h1>\n", (yyvsp[-1].string)+2);}
#line 1475 "proyecto.tab.c"
    break;

  case 40: /* title: H2 listas  */
#line 128 "proyecto.y"
        {printf("<h2>%s</h2>\n", (yyvsp[-1].string)+3);}
#line 1481 "proyecto.tab.c"
    break;

  case 41: /* title: H3 listas  */
#line 130 "proyecto.y"
        {printf("<h3>%s</h3>\n", (yyvsp[-1].string)+4);}
#line 1487 "proyecto.tab.c"
    break;

  case 42: /* title: H4 listas  */
#line 132 "proyecto.y"
        {printf("<h4>%s</h4>\n", (yyvsp[-1].string)+5);}
#line 1493 "proyecto.tab.c"
    break;

  case 43: /* title: H5 listas  */
#line 134 "proyecto.y"
        {printf("<h5>%s</h5>\n", (yyvsp[-1].string)+6);}
#line 1499 "proyecto.tab.c"
    break;

  case 44: /* title: H6 listas  */
#line 136 "proyecto.y"
        {printf("<h6>%s</h6>\n", (yyvsp[-1].string)+7);}
#line 1505 "proyecto.tab.c"
    break;

  case 45: /* title: H1 comb  */
#line 138 "proyecto.y"
        {printf("<h1>%s</h1>\n", (yyvsp[-1].string)+2);}
#line 1511 "proyecto.tab.c"
    break;

  case 46: /* title: H2 comb  */
#line 140 "proyecto.y"
        {printf("<h2>%s</h2>\n", (yyvsp[-1].string)+3);}
#line 1517 "proyecto.tab.c"
    break;

  case 47: /* title: H3 comb  */
#line 142 "proyecto.y"
        {printf("<h3>%s</h3>\n", (yyvsp[-1].string)+4);}
#line 1523 "proyecto.tab.c"
    break;

  case 48: /* title: H4 comb  */
#line 144 "proyecto.y"
        {printf("<h4>%s</h4>\n", (yyvsp[-1].string)+5);}
#line 1529 "proyecto.tab.c"
    break;

  case 49: /* title: H5 comb  */
#line 146 "proyecto.y"
        {printf("<h5>%s</h5>\n", (yyvsp[-1].string)+6);}
#line 1535 "proyecto.tab.c"
    break;

  case 50: /* title: H6 comb  */
#line 148 "proyecto.y"
        {printf("<h6>%s</h6>\n", (yyvsp[-1].string)+7);}
#line 1541 "proyecto.tab.c"
    break;

  case 51: /* title: H1 comb2  */
#line 150 "proyecto.y"
        {printf("<h1>%s</h1>\n", (yyvsp[-1].string)+2);}
#line 1547 "proyecto.tab.c"
    break;

  case 52: /* title: H2 comb2  */
#line 152 "proyecto.y"
        {printf("<h2>%s</h2>\n", (yyvsp[-1].string)+3);}
#line 1553 "proyecto.tab.c"
    break;

  case 53: /* title: H3 comb2  */
#line 154 "proyecto.y"
        {printf("<h3>%s</h3>\n", (yyvsp[-1].string)+4);}
#line 1559 "proyecto.tab.c"
    break;

  case 54: /* title: H4 comb2  */
#line 156 "proyecto.y"
        {printf("<h4>%s</h4>\n", (yyvsp[-1].string)+5);}
#line 1565 "proyecto.tab.c"
    break;

  case 55: /* title: H5 comb2  */
#line 158 "proyecto.y"
        {printf("<h5>%s</h5>\n", (yyvsp[-1].string)+6);}
#line 1571 "proyecto.tab.c"
    break;

  case 56: /* title: H6 comb2  */
#line 160 "proyecto.y"
        {printf("<h6>%s</h6>\n", (yyvsp[-1].string)+7);}
#line 1577 "proyecto.tab.c"
    break;

  case 57: /* title: H1 code  */
#line 162 "proyecto.y"
        {printf("<h1>%s</h1>\n", (yyvsp[-1].string)+2);}
#line 1583 "proyecto.tab.c"
    break;

  case 58: /* title: H2 code  */
#line 164 "proyecto.y"
        {printf("<h2>%s</h2>\n", (yyvsp[-1].string)+3);}
#line 1589 "proyecto.tab.c"
    break;

  case 59: /* title: H3 code  */
#line 166 "proyecto.y"
        {printf("<h3>%s</h3>\n", (yyvsp[-1].string)+4);}
#line 1595 "proyecto.tab.c"
    break;

  case 60: /* title: H4 code  */
#line 168 "proyecto.y"
        {printf("<h4>%s</h4>\n", (yyvsp[-1].string)+5);}
#line 1601 "proyecto.tab.c"
    break;

  case 61: /* title: H5 code  */
#line 170 "proyecto.y"
        {printf("<h5>%s</h5>\n", (yyvsp[-1].string)+6);}
#line 1607 "proyecto.tab.c"
    break;

  case 62: /* title: H6 code  */
#line 172 "proyecto.y"
        {printf("<h6>%s</h6>\n", (yyvsp[-1].string)+7);}
#line 1613 "proyecto.tab.c"
    break;

  case 63: /* title: H1 link  */
#line 175 "proyecto.y"
        {printf("<h1>%s</h1>\n", (yyvsp[-1].string)+2);}
#line 1619 "proyecto.tab.c"
    break;

  case 64: /* title: H2 link  */
#line 177 "proyecto.y"
        {printf("<h2>%s</h2>\n", (yyvsp[-1].string)+3);}
#line 1625 "proyecto.tab.c"
    break;

  case 65: /* title: H3 link  */
#line 179 "proyecto.y"
        {printf("<h3>%s</h3>\n", (yyvsp[-1].string)+4);}
#line 1631 "proyecto.tab.c"
    break;

  case 66: /* title: H4 link  */
#line 181 "proyecto.y"
        {printf("<h4>%s</h4>\n", (yyvsp[-1].string)+5);}
#line 1637 "proyecto.tab.c"
    break;

  case 67: /* title: H5 link  */
#line 183 "proyecto.y"
        {printf("<h5>%s</h5>\n", (yyvsp[-1].string)+6);}
#line 1643 "proyecto.tab.c"
    break;

  case 68: /* title: H6 link  */
#line 185 "proyecto.y"
        {printf("<h6>%s</h6>\n", (yyvsp[-1].string)+7);}
#line 1649 "proyecto.tab.c"
    break;

  case 69: /* textword: TEXTWORD  */
#line 197 "proyecto.y"
                  {printf("<p>%s</p>\n", (yyvsp[0].string)); }
#line 1655 "proyecto.tab.c"
    break;

  case 70: /* textword: TEXTWORD title  */
#line 198 "proyecto.y"
                        {printf("<p>%s</p>\n",(yyvsp[-1].string));}
#line 1661 "proyecto.tab.c"
    break;

  case 80: /* emphasis: EMPHASIS  */
#line 214 "proyecto.y"
          { rmposition((yyvsp[0].string));
          
          printf("<b>%s</b>\n", (yyvsp[0].string));}
#line 1669 "proyecto.tab.c"
    break;

  case 81: /* emphasis: EMPHASIS title  */
#line 221 "proyecto.y"
          {rmposition((yyvsp[-1].string));
          printf("<b>%s</b>\n", (yyvsp[-1].string)); }
#line 1676 "proyecto.tab.c"
    break;

  case 82: /* emphasis: EMPHASIS emphasis  */
#line 227 "proyecto.y"
          {rmposition((yyvsp[-1].string));
          printf("<b>%s</b>\n", (yyvsp[-1].string)); }
#line 1683 "proyecto.tab.c"
    break;

  case 83: /* emphasis: EMPHASIS cursiva  */
#line 232 "proyecto.y"
          {rmposition((yyvsp[-1].string));
          printf("<b>%s</b>\n", (yyvsp[-1].string)); }
#line 1690 "proyecto.tab.c"
    break;

  case 84: /* emphasis: EMPHASIS scratch  */
#line 237 "proyecto.y"
          {rmposition((yyvsp[-1].string));
          printf("<b>%s</b>\n", (yyvsp[-1].string)); }
#line 1697 "proyecto.tab.c"
    break;

  case 85: /* emphasis: EMPHASIS textword  */
#line 242 "proyecto.y"
          {rmposition((yyvsp[-1].string));
          printf("<b>%s</b>\n", (yyvsp[-1].string)); }
#line 1704 "proyecto.tab.c"
    break;

  case 86: /* emphasis: EMPHASIS comb  */
#line 246 "proyecto.y"
          {rmposition((yyvsp[-1].string));
          printf("<b>%s</b>\n", (yyvsp[-1].string)); }
#line 1711 "proyecto.tab.c"
    break;

  case 87: /* emphasis: EMPHASIS comb2  */
#line 250 "proyecto.y"
          {rmposition((yyvsp[-1].string));
          printf("<b>%s</b>\n", (yyvsp[-1].string)); }
#line 1718 "proyecto.tab.c"
    break;

  case 88: /* emphasis: EMPHASIS code  */
#line 255 "proyecto.y"
          {rmposition((yyvsp[-1].string));
          printf("<b>%s</b>\n", (yyvsp[-1].string)); }
#line 1725 "proyecto.tab.c"
    break;

  case 89: /* emphasis: EMPHASIS link  */
#line 260 "proyecto.y"
          {rmposition((yyvsp[-1].string));
          printf("<b>%s</b>\n", (yyvsp[-1].string)); }
#line 1732 "proyecto.tab.c"
    break;

  case 90: /* cursiva: CURSIVA  */
#line 265 "proyecto.y"
                  {rmposition((yyvsp[0].string));
         printf("<em>%s</em>\n", (yyvsp[0].string)); }
#line 1739 "proyecto.tab.c"
    break;

  case 91: /* cursiva: CURSIVA title  */
#line 269 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<em>%s</em>\n", (yyvsp[-1].string)); }
#line 1746 "proyecto.tab.c"
    break;

  case 92: /* cursiva: CURSIVA emphasis  */
#line 272 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<em>%s</em>\n", (yyvsp[-1].string)); }
#line 1753 "proyecto.tab.c"
    break;

  case 93: /* cursiva: CURSIVA cursiva  */
#line 275 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<em>%s</em>\n", (yyvsp[-1].string)); }
#line 1760 "proyecto.tab.c"
    break;

  case 94: /* cursiva: CURSIVA scratch  */
#line 278 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<em>%s</em>\n", (yyvsp[-1].string)); }
#line 1767 "proyecto.tab.c"
    break;

  case 95: /* cursiva: CURSIVA textword  */
#line 281 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<em>%s</em>\n", (yyvsp[-1].string)); }
#line 1774 "proyecto.tab.c"
    break;

  case 96: /* cursiva: CURSIVA comb  */
#line 285 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<em>%s</em>\n", (yyvsp[-1].string)); }
#line 1781 "proyecto.tab.c"
    break;

  case 97: /* cursiva: CURSIVA comb2  */
#line 289 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<em>%s</em>\n", (yyvsp[-1].string)); }
#line 1788 "proyecto.tab.c"
    break;

  case 98: /* cursiva: CURSIVA code  */
#line 293 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<em>%s</em>\n", (yyvsp[-1].string)); }
#line 1795 "proyecto.tab.c"
    break;

  case 99: /* cursiva: CURSIVA link  */
#line 298 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<em>%s</em>\n", (yyvsp[-1].string)); }
#line 1802 "proyecto.tab.c"
    break;

  case 100: /* comb: COMB  */
#line 307 "proyecto.y"
               {rmposition((yyvsp[0].string));
         printf("<strong><em>%s</em></strong>\n", (yyvsp[0].string)); }
#line 1809 "proyecto.tab.c"
    break;

  case 101: /* comb: COMB title  */
#line 311 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<strong><em>%s</em></strong>\n", (yyvsp[-1].string)); }
#line 1816 "proyecto.tab.c"
    break;

  case 102: /* comb: COMB emphasis  */
#line 314 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<strong><em>%s</em></strong>\n", (yyvsp[-1].string)); }
#line 1823 "proyecto.tab.c"
    break;

  case 103: /* comb: COMB cursiva  */
#line 317 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<strong><em>%s</em></strong>\n", (yyvsp[-1].string)); }
#line 1830 "proyecto.tab.c"
    break;

  case 104: /* comb: COMB scratch  */
#line 320 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<strong><em>%s</em></strong>\n", (yyvsp[-1].string)); }
#line 1837 "proyecto.tab.c"
    break;

  case 105: /* comb: COMB textword  */
#line 323 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<strong><em>%s</em></strong>\n", (yyvsp[-1].string)); }
#line 1844 "proyecto.tab.c"
    break;

  case 106: /* comb: COMB comb2  */
#line 326 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<strong><em>%s</em></strong>\n", (yyvsp[-1].string)); }
#line 1851 "proyecto.tab.c"
    break;

  case 107: /* comb: COMB comb  */
#line 329 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<strong><em>%s</em></strong>\n", (yyvsp[-1].string)); }
#line 1858 "proyecto.tab.c"
    break;

  case 108: /* comb: COMB listas  */
#line 333 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<strong><em>%s</em></strong>\n", (yyvsp[-1].string)); }
#line 1865 "proyecto.tab.c"
    break;

  case 109: /* comb: COMB code  */
#line 338 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<strong><em>%s</em></strong>\n", (yyvsp[-1].string)); }
#line 1872 "proyecto.tab.c"
    break;

  case 110: /* comb: COMB link  */
#line 343 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<strong><em>%s</em></strong>\n", (yyvsp[-1].string)); }
#line 1879 "proyecto.tab.c"
    break;

  case 111: /* comb2: COMB2  */
#line 350 "proyecto.y"
                 {rmposition((yyvsp[0].string));
         printf("<del><em>%s</em></del>\n", (yyvsp[0].string)); }
#line 1886 "proyecto.tab.c"
    break;

  case 112: /* comb2: COMB2 title  */
#line 354 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del><em>%s</em></del>\n", (yyvsp[-1].string)); }
#line 1893 "proyecto.tab.c"
    break;

  case 113: /* comb2: COMB2 emphasis  */
#line 357 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del><em>%s</em></del>\n", (yyvsp[-1].string)); }
#line 1900 "proyecto.tab.c"
    break;

  case 114: /* comb2: COMB2 cursiva  */
#line 360 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del><em>%s</em></del>\n", (yyvsp[-1].string)); }
#line 1907 "proyecto.tab.c"
    break;

  case 115: /* comb2: COMB2 scratch  */
#line 363 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del><em>%s</em></del>\n", (yyvsp[-1].string)); }
#line 1914 "proyecto.tab.c"
    break;

  case 116: /* comb2: COMB2 textword  */
#line 366 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del><em>%s</em></del>\n", (yyvsp[-1].string)); }
#line 1921 "proyecto.tab.c"
    break;

  case 117: /* comb2: COMB2 comb  */
#line 369 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del><em>%s</em></del>\n", (yyvsp[-1].string)); }
#line 1928 "proyecto.tab.c"
    break;

  case 118: /* comb2: COMB2 comb2  */
#line 373 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del><em>%s</em></del>\n", (yyvsp[-1].string)); }
#line 1935 "proyecto.tab.c"
    break;

  case 119: /* comb2: COMB2 listas  */
#line 377 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del><em>%s</em></del>\n", (yyvsp[-1].string)); }
#line 1942 "proyecto.tab.c"
    break;

  case 120: /* comb2: COMB2 code  */
#line 381 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del><em>%s</em></del>\n", (yyvsp[-1].string)); }
#line 1949 "proyecto.tab.c"
    break;

  case 121: /* comb2: COMB2 link  */
#line 386 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del><em>%s</em></del>\n", (yyvsp[-1].string)); }
#line 1956 "proyecto.tab.c"
    break;

  case 122: /* scratch: SCRATCH  */
#line 396 "proyecto.y"
                 {rmposition((yyvsp[0].string));

         printf("<del>%s</del>\n", (yyvsp[0].string)); }
#line 1964 "proyecto.tab.c"
    break;

  case 123: /* scratch: SCRATCH title  */
#line 401 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del>%s</del>\n", (yyvsp[-1].string)); }
#line 1971 "proyecto.tab.c"
    break;

  case 124: /* scratch: SCRATCH scratch  */
#line 404 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del>%s</del>\n", (yyvsp[-1].string)); }
#line 1978 "proyecto.tab.c"
    break;

  case 125: /* scratch: SCRATCH cursiva  */
#line 407 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del>%s</del>\n", (yyvsp[-1].string)); }
#line 1985 "proyecto.tab.c"
    break;

  case 126: /* scratch: SCRATCH emphasis  */
#line 410 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del>%s</del>\n", (yyvsp[-1].string)); }
#line 1992 "proyecto.tab.c"
    break;

  case 127: /* scratch: SCRATCH textword  */
#line 413 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del>%s</del>\n", (yyvsp[-1].string)); }
#line 1999 "proyecto.tab.c"
    break;

  case 128: /* scratch: SCRATCH comb  */
#line 416 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del>%s</del>\n", (yyvsp[-1].string)); }
#line 2006 "proyecto.tab.c"
    break;

  case 129: /* scratch: SCRATCH comb2  */
#line 419 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del>%s</del>\n", (yyvsp[-1].string)); }
#line 2013 "proyecto.tab.c"
    break;

  case 130: /* scratch: SCRATCH code  */
#line 423 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del>%s</del>\n", (yyvsp[-1].string)); }
#line 2020 "proyecto.tab.c"
    break;

  case 131: /* scratch: SCRATCH link  */
#line 427 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del>%s</del>\n", (yyvsp[-1].string)); }
#line 2027 "proyecto.tab.c"
    break;

  case 132: /* listas: LISTAORD  */
#line 442 "proyecto.y"
                 {

        printf("<li>%s</li>\n",(yyvsp[0].string)+3);
        detectlist((yyvsp[0].string));
        }
#line 2037 "proyecto.tab.c"
    break;

  case 133: /* listas: LISTAORD listas  */
#line 448 "proyecto.y"
                         {
        printf("<li>%s</li>\n",(yyvsp[-1].string)+3);
        detectlist((yyvsp[-1].string));
        }
#line 2046 "proyecto.tab.c"
    break;

  case 134: /* listas: LISTAORD title  */
#line 454 "proyecto.y"
                        {
       
        printf("<li>%s</li>\n",(yyvsp[-1].string)+3);
        detectlist((yyvsp[-1].string));
        }
#line 2056 "proyecto.tab.c"
    break;

  case 135: /* listas: LISTAORD scratch  */
#line 460 "proyecto.y"
                          {
        
        printf("<li>%s</li>\n",(yyvsp[-1].string)+3);
        detectlist((yyvsp[-1].string));
        
        }
#line 2067 "proyecto.tab.c"
    break;

  case 136: /* listas: LISTAORD cursiva  */
#line 467 "proyecto.y"
                          {
        
        printf("<li>%s</li>\n",(yyvsp[-1].string)+3);
        detectlist((yyvsp[-1].string));
        
        }
#line 2078 "proyecto.tab.c"
    break;

  case 137: /* listas: LISTAORD emphasis  */
#line 474 "proyecto.y"
                           {
    
        printf("<li>%s</li>\n",(yyvsp[-1].string)+3);
        detectlist((yyvsp[-1].string));
        }
#line 2088 "proyecto.tab.c"
    break;

  case 138: /* listas: LISTAORD textword  */
#line 480 "proyecto.y"
                           {
        printf("<li>%s</li>\n", (yyvsp[-1].string)+3);
        detectlist((yyvsp[-1].string));
        }
#line 2097 "proyecto.tab.c"
    break;

  case 139: /* listas: LISTAORD comb  */
#line 485 "proyecto.y"
                       {
        printf("<li>%s</li>\n", (yyvsp[-1].string)+3);
        detectlist((yyvsp[-1].string));
        }
#line 2106 "proyecto.tab.c"
    break;

  case 140: /* listas: LISTAORD comb2  */
#line 490 "proyecto.y"
                        {
        printf("<li>%s</li>\n", (yyvsp[-1].string)+3);
        detectlist((yyvsp[-1].string));
        }
#line 2115 "proyecto.tab.c"
    break;

  case 141: /* listas: LISTAORD code  */
#line 495 "proyecto.y"
                        {
        printf("<li>%s</li>\n", (yyvsp[-1].string)+3);
        detectlist((yyvsp[-1].string));
        }
#line 2124 "proyecto.tab.c"
    break;

  case 142: /* listas: LISTAORD link  */
#line 500 "proyecto.y"
                        {
        printf("<li>%s</li>\n", (yyvsp[-1].string)+3);
        detectlist((yyvsp[-1].string));
        }
#line 2133 "proyecto.tab.c"
    break;

  case 143: /* listas: LISTADESORD  */
#line 505 "proyecto.y"
                     {
        printf("<li>%s</li>\n",(yyvsp[0].string)+2);
        detectlist((yyvsp[0].string));
        }
#line 2142 "proyecto.tab.c"
    break;

  case 144: /* listas: LISTADESORD listas  */
#line 510 "proyecto.y"
                            {
        printf("<li>%s</li>\n",(yyvsp[-1].string)+2);
        detectlist((yyvsp[-1].string));
        }
#line 2151 "proyecto.tab.c"
    break;

  case 145: /* listas: LISTADESORD title  */
#line 515 "proyecto.y"
                           {
        printf("<li>%s</li>\n",(yyvsp[-1].string)+2);
        detectlist((yyvsp[-1].string));
        }
#line 2160 "proyecto.tab.c"
    break;

  case 146: /* listas: LISTADESORD scratch  */
#line 520 "proyecto.y"
                             {
        printf("<li>%s</li>\n",(yyvsp[-1].string)+2);
        detectlist((yyvsp[-1].string));
        }
#line 2169 "proyecto.tab.c"
    break;

  case 147: /* listas: LISTADESORD cursiva  */
#line 525 "proyecto.y"
                             {
        printf("<li>%s</li>\n",(yyvsp[-1].string)+2);
        detectlist((yyvsp[-1].string));
        }
#line 2178 "proyecto.tab.c"
    break;

  case 148: /* listas: LISTADESORD emphasis  */
#line 530 "proyecto.y"
                              {
        printf("<li>%s</li>\n",(yyvsp[-1].string)+2);
        detectlist((yyvsp[-1].string));
        }
#line 2187 "proyecto.tab.c"
    break;

  case 149: /* listas: LISTADESORD textword  */
#line 535 "proyecto.y"
                              {
        printf("<li>%s</li>\n", (yyvsp[-1].string)+2);
        detectlist((yyvsp[-1].string));
        }
#line 2196 "proyecto.tab.c"
    break;

  case 150: /* listas: LISTADESORD comb  */
#line 540 "proyecto.y"
                          {
        printf("<li>%s</li>\n", (yyvsp[-1].string)+2);
        detectlist((yyvsp[-1].string));
        }
#line 2205 "proyecto.tab.c"
    break;

  case 151: /* listas: LISTADESORD comb2  */
#line 545 "proyecto.y"
                           {
        printf("<li>%s</li>\n", (yyvsp[-1].string)+2);
        detectlist((yyvsp[-1].string));
        }
#line 2214 "proyecto.tab.c"
    break;

  case 152: /* listas: LISTADESORD code  */
#line 551 "proyecto.y"
                          {
        printf("<li>%s</li>\n", (yyvsp[-1].string)+2);
        detectlist((yyvsp[-1].string));
        }
#line 2223 "proyecto.tab.c"
    break;

  case 153: /* listas: LISTADESORD link  */
#line 556 "proyecto.y"
                          {
        printf("<li>%s</li>\n", (yyvsp[-1].string)+2);
        detectlist((yyvsp[-1].string));
        }
#line 2232 "proyecto.tab.c"
    break;

  case 154: /* code: CODE  */
#line 566 "proyecto.y"
           {
     rmposition((yyvsp[0].string));
     printf("<code>%s</code>\n", (yyvsp[0].string));}
#line 2240 "proyecto.tab.c"
    break;

  case 155: /* code: CODE title  */
#line 571 "proyecto.y"
                 {
     rmposition((yyvsp[-1].string));
     printf("<code>%s</code>\n", (yyvsp[-1].string));}
#line 2248 "proyecto.tab.c"
    break;

  case 156: /* code: CODE scratch  */
#line 575 "proyecto.y"
                   {
     rmposition((yyvsp[-1].string));
     printf("<code>%s</code>\n", (yyvsp[-1].string));}
#line 2256 "proyecto.tab.c"
    break;

  case 157: /* code: CODE cursiva  */
#line 580 "proyecto.y"
                   {
     rmposition((yyvsp[-1].string));
     printf("<code>%s</code>\n", (yyvsp[-1].string));}
#line 2264 "proyecto.tab.c"
    break;

  case 158: /* code: CODE textword  */
#line 585 "proyecto.y"
                    {
     rmposition((yyvsp[-1].string));
     printf("<code>%s</code>\n", (yyvsp[-1].string));}
#line 2272 "proyecto.tab.c"
    break;

  case 159: /* code: CODE emphasis  */
#line 590 "proyecto.y"
                    {
     rmposition((yyvsp[-1].string));
     printf("<code>%s</code>\n", (yyvsp[-1].string));}
#line 2280 "proyecto.tab.c"
    break;

  case 160: /* code: CODE comb  */
#line 595 "proyecto.y"
                {
     rmposition((yyvsp[-1].string));
     printf("<code>%s</code>\n", (yyvsp[-1].string));}
#line 2288 "proyecto.tab.c"
    break;

  case 161: /* code: CODE comb2  */
#line 600 "proyecto.y"
                 {
     rmposition((yyvsp[-1].string));
     printf("<code>%s</code>\n", (yyvsp[-1].string));}
#line 2296 "proyecto.tab.c"
    break;

  case 162: /* code: CODE code  */
#line 605 "proyecto.y"
                {
     rmposition((yyvsp[-1].string));
     printf("<code>%s</code>\n", (yyvsp[-1].string));}
#line 2304 "proyecto.tab.c"
    break;

  case 163: /* code: CODE listas  */
#line 610 "proyecto.y"
                  {
     rmposition((yyvsp[-1].string));
     printf("<code>%s</code>\n", (yyvsp[-1].string));}
#line 2312 "proyecto.tab.c"
    break;

  case 164: /* code: CODE link  */
#line 614 "proyecto.y"
                {
     rmposition((yyvsp[-1].string));
     printf("<code>%s</code>\n", (yyvsp[-1].string));}
#line 2320 "proyecto.tab.c"
    break;

  case 165: /* link: LINKNAME LINK  */
#line 623 "proyecto.y"
                   {
     
   
     rmposition((yyvsp[-1].string));
     rmposition((yyvsp[0].string));
     printf("<a href=%s>",(yyvsp[0].string));
     printf("%s</a>\n", (yyvsp[-1].string));}
#line 2332 "proyecto.tab.c"
    break;

  case 166: /* link: LINKNAME LINK link  */
#line 631 "proyecto.y"
                        {
    
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
     printf("<a href=%s>",(yyvsp[-1].string));
     printf("%s</a>\n", (yyvsp[-2].string));}
#line 2343 "proyecto.tab.c"
    break;

  case 167: /* link: LINKNAME LINK title  */
#line 639 "proyecto.y"
                          {
  
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
     
     printf("<a href=%s>",(yyvsp[-1].string));
     printf("%s</a>\n", (yyvsp[-2].string));}
#line 2355 "proyecto.tab.c"
    break;

  case 168: /* link: LINKNAME LINK scratch  */
#line 647 "proyecto.y"
                            {
    
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
    
     printf("<a href=%s>",(yyvsp[-1].string));
     printf("%s</a>\n", (yyvsp[-2].string));}
#line 2367 "proyecto.tab.c"
    break;

  case 169: /* link: LINKNAME LINK cursiva  */
#line 656 "proyecto.y"
                            {
     
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
  
     printf("<a href=%s>",(yyvsp[-1].string));
     printf("%s</a>\n", (yyvsp[-2].string));}
#line 2379 "proyecto.tab.c"
    break;

  case 170: /* link: LINKNAME LINK textword  */
#line 665 "proyecto.y"
                             {
  
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
     
     printf("<a href=%s>",(yyvsp[-1].string));
     printf("%s</a>\n", (yyvsp[-2].string));}
#line 2391 "proyecto.tab.c"
    break;

  case 171: /* link: LINKNAME LINK emphasis  */
#line 674 "proyecto.y"
                             {
   
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
     
    printf("<a href=%s>",(yyvsp[-1].string));
     printf("%s</a>\n", (yyvsp[-2].string));}
#line 2403 "proyecto.tab.c"
    break;

  case 172: /* link: LINKNAME LINK comb  */
#line 683 "proyecto.y"
                         {
    
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
     
     printf("<a href=%s>",(yyvsp[-1].string));
     printf("%s</a>\n", (yyvsp[-2].string));}
#line 2415 "proyecto.tab.c"
    break;

  case 173: /* link: LINKNAME LINK comb2  */
#line 692 "proyecto.y"
                          {
    
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
  
     printf("<a href=%s>",(yyvsp[-1].string));
     printf("%s</a>\n", (yyvsp[-2].string));}
#line 2427 "proyecto.tab.c"
    break;

  case 174: /* link: LINKNAME LINK code  */
#line 701 "proyecto.y"
                         {
    
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
     printf("<a href=%s>",(yyvsp[-1].string));
     printf("%s</a>\n", (yyvsp[-2].string));}
#line 2438 "proyecto.tab.c"
    break;

  case 175: /* link: LINKNAME LINK listas  */
#line 709 "proyecto.y"
                           {
    
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
     printf("<a href=%s>",(yyvsp[-1].string));
     printf("%s</a>\n", (yyvsp[-2].string));}
#line 2449 "proyecto.tab.c"
    break;


#line 2453 "proyecto.tab.c"

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

#line 717 "proyecto.y"




char *rmposition (char *s) //Function to remove symbols
{
    int ast = 0,                     
        write = 0;                     
    
    for (int i = 0; s[i]; i++) {       
        if (s[i] == '*' || s[i] == '_'|| s[i] == '~' ||
         s[i] == '`'  || s[i] == ')' ||  s[i] == '('  || s[i] == ']' ||  s[i] == '['    )                
            ast = 1;  
                  
        else                           
            s[write++] = s[i];         
    }
    
    s[write] = 0;   
    

    return s;                          
}




void *detectlist(char *s){


   for (int i = 0; s[i]; i++) {       
        if (s[i] == '1' && s[i+1] == '.' && s[i+2] == ' ')                
          printf("Inicio de lista ordenada\n");  
          
        if (s[i] == '+' && s[i+1] == ' ' || s[i] == '-' && s[i+1] == ' '    )
          printf("Inicio de lista desordenada\n");
          
    }
   
}


int main(int argc, char *argv[]) {

        HTML = fopen("exit.md","w");
	yyparse();
	fclose(HTML);
	return 0;
}


void yyerror(char *s){

fprintf(stderr, "error: %s \n",s);

}


