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
void yyerror(char const *message); 
char *rmposition (char *s);
char writeBuffer[65536];
FILE* outputFile;
void writeLinetoFile(char*);

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
  YYSYMBOL_IMAGE = 21,                     /* IMAGE  */
  YYSYMBOL_YYACCEPT = 22,                  /* $accept  */
  YYSYMBOL_S = 23,                         /* S  */
  YYSYMBOL_title = 24,                     /* title  */
  YYSYMBOL_textword = 25,                  /* textword  */
  YYSYMBOL_emphasis = 26,                  /* emphasis  */
  YYSYMBOL_cursiva = 27,                   /* cursiva  */
  YYSYMBOL_comb = 28,                      /* comb  */
  YYSYMBOL_comb2 = 29,                     /* comb2  */
  YYSYMBOL_scratch = 30,                   /* scratch  */
  YYSYMBOL_listas = 31,                    /* listas  */
  YYSYMBOL_code = 32,                      /* code  */
  YYSYMBOL_link = 33,                      /* link  */
  YYSYMBOL_image = 34                      /* image  */
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
#define YYFINAL  198
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   439

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  22
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  237
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  242

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   276


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
      15,    16,    17,    18,    19,    20,    21
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    48,    48,    53,    58,    63,    68,    73,    78,    83,
      88,    93,    98,   105,   110,   113,   116,   119,   123,   126,
     130,   133,   136,   139,   142,   146,   149,   152,   155,   158,
     161,   164,   167,   170,   173,   176,   179,   182,   185,   188,
     191,   194,   197,   200,   203,   206,   209,   212,   215,   218,
     221,   224,   227,   230,   233,   236,   239,   242,   245,   248,
     251,   254,   257,   260,   263,   266,   269,   272,   275,   278,
     280,   283,   286,   289,   292,   295,   297,   300,   303,   306,
     309,   312,   315,   318,   321,   327,   330,   333,   337,   340,
     344,   347,   350,   353,   356,   359,   362,   365,   368,   371,
     374,   377,   380,   383,   386,   389,   392,   395,   398,   401,
     404,   407,   410,   413,   416,   419,   422,   425,   428,   431,
     434,   440,   444,   448,   452,   456,   460,   464,   468,   472,
     476,   480,   486,   489,   493,   497,   501,   505,   509,   513,
     517,   521,   525,   530,   537,   541,   545,   549,   553,   557,
     561,   565,   569,   573,   577,   581,   588,   591,   595,   599,
     603,   607,   611,   615,   619,   624,   630,   634,   645,   648,
     652,   656,   660,   664,   668,   672,   676,   680,   684,   688,
     695,   699,   703,   707,   711,   715,   719,   723,   728,   733,
     738,   743,   748,   753,   758,   763,   768,   773,   778,   783,
     789,   794,   799,   809,   815,   820,   826,   832,   838,   844,
     850,   856,   862,   867,   871,   880,   885,   892,   899,   908,
     917,   926,   935,   944,   952,   960,   966,   973,   978,   984,
     991,   998,  1005,  1012,  1019,  1026,  1033,  1039
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
  "IMAGE", "$accept", "S", "title", "textword", "emphasis", "cursiva",
  "comb", "comb2", "scratch", "listas", "code", "link", "image", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-2)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
     166,   381,   381,   381,   400,   343,   112,   131,   165,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,   381,   362,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,   381,   419,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    13,    14,    15,    16,    17,    18,   132,   144,   156,
     121,   168,   203,   180,   191,    85,    97,     0,     0,     2,
       3,     5,     4,     6,     7,     9,     8,    10,    11,    12,
      19,    25,    31,    37,    55,    61,    43,    49,    67,    73,
      79,    20,    26,    32,    38,    56,    62,    44,    50,    68,
      74,    80,    21,    27,    33,    39,    57,    63,    45,    51,
      69,    75,    81,    22,    28,    34,    40,    58,    64,    46,
      52,    70,    76,    82,    23,    29,    35,    41,    59,    65,
      47,    53,    71,    77,    83,    24,    30,    36,    42,    60,
      66,    48,    54,    72,    78,    84,   133,   137,   134,   135,
     138,   139,   136,   143,   140,   141,   142,   145,   149,   146,
     147,   151,   150,   148,   152,   153,   154,   155,   157,   161,
     158,   159,   162,   163,   160,   164,   165,   166,   167,   122,
     126,   123,   124,   127,   128,   125,   129,   130,   131,   170,
     174,   173,   172,   175,   176,   171,   169,   177,   178,   179,
     204,   207,   208,   206,   209,   210,   205,   212,   211,   213,
     214,   182,   186,   185,   184,   187,   188,   183,   181,   189,
     190,   202,    97,   193,   197,   196,   195,   198,   199,   194,
     192,   200,   201,   109,    97,    86,    94,    92,    87,    90,
      91,    89,    88,    93,    95,    96,   215,   227,     1,   110,
     118,   116,   111,   114,   115,   113,   112,   117,   119,   120,
      98,   106,   104,    99,   102,   103,   101,   100,   105,   107,
     108,   217,   220,   221,   219,   222,   223,   218,   225,   224,
     216,   226,   228,   231,   232,   230,   233,   234,   229,   236,
     235,   237
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
      -2,    -2,    -1,    14,    29,    44,    59,    74,    89,   119,
     104,   134,   149
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      30,    41,    52,    63,    74,    85,    96,   107,   118,   129,
     139,   150,   161,   173,   185,    31,    42,    53,    64,    75,
      86,    97,   108,   119,   130,   140,   151,   162,   174,   186,
      32,    43,    54,    65,    76,    87,    98,   109,   120,   131,
     141,   152,   163,   175,   187,    33,    44,    55,    66,    77,
      88,    99,   110,   121,   132,   142,   153,   164,   176,   188,
      34,    45,    56,    67,    78,    89,   100,   111,   122,   133,
     143,   154,   165,   177,   189,    35,    46,    57,    68,    79,
      90,   101,   112,   123,   134,   144,   155,   166,   178,   190,
      36,    47,    58,    69,    80,    91,   102,   113,   124,   135,
     145,   156,   167,   179,   191,    38,    49,    60,    71,    82,
      93,   104,   115,   126,   136,   147,   158,   169,   181,   193,
      37,    48,    59,    70,    81,    92,   103,   114,   125,   196,
     146,   157,   168,   180,   192,    39,    50,    61,    72,    83,
      94,   105,   116,   127,   137,   148,   159,   170,   197,   194,
      40,    51,    62,    73,    84,    95,   106,   117,   128,   138,
     149,   160,   171,   182,   195,   198,     0,     0,     0,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,     0,   199,   210,    15,     0,    16,    17,     0,     0,
       0,     0,     0,     0,     0,   221,   232,   200,   211,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     222,   233,   201,   212,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   223,   234,   202,   213,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,   235,   203,   214,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   225,   236,   204,   215,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     226,   237,   205,   216,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   227,   238,   207,   218,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     229,   240,   206,   217,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   228,   239,   208,   219,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     230,   241,   209,   220,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   231,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
     183,    15,     0,   184,    17,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,   196,
      15,     0,    16,    17,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,     0,    15,
       0,    16,    17,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,     0,    15,     0,
     172,    17,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,     0,    15,     0,    16
};

static const yytype_int16 yycheck[] =
{
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    17,
      11,    12,    13,    14,    15,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    17,    15,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,     0,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,   183,   184,    18,    -1,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   196,   197,   183,   184,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     196,   197,   183,   184,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   196,   197,   183,   184,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     196,   197,   183,   184,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   196,   197,   183,   184,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     196,   197,   183,   184,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   196,   197,   183,   184,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     196,   197,   183,   184,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   196,   197,   183,   184,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     196,   197,   183,   184,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   196,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    20,    21,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      -1,    20,    21,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    -1,
      20,    21,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    -1,    20
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    18,    20,    21,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    24,
      25,    26,    27,    28,    29,    30,    32,    33,    34,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    20,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    34,    17,    20,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    17,    17,     0,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    22,    23,    23,    23,    23,    23,    23,    23,    23,
      23,    23,    23,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    25,    25,    25,    25,    25,
      25,    25,    25,    25,    25,    25,    25,    25,    25,    25,
      25,    25,    25,    25,    25,    25,    25,    25,    25,    25,
      25,    25,    25,    25,    25,    25,    25,    25,    25,    25,
      25,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    26,    27,    27,    27,    27,    27,    27,    27,    27,
      27,    27,    27,    27,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    29,    29,    29,    29,
      29,    29,    29,    29,    29,    29,    29,    29,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    32,    32,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    33,    33,    33,    33,    33,
      33,    33,    33,    33,    33,    33,    33,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3
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
  case 2: /* S: title  */
#line 49 "proyecto.y"
  {
    sprintf(writeBuffer,"%s",(yyvsp[0].string));writeLinetoFile(writeBuffer);
    free((yyvsp[0].string));
  }
#line 1327 "proyecto.tab.c"
    break;

  case 3: /* S: textword  */
#line 54 "proyecto.y"
    {
    sprintf(writeBuffer,"%s",(yyvsp[0].string));writeLinetoFile(writeBuffer);
    free((yyvsp[0].string));
  }
#line 1336 "proyecto.tab.c"
    break;

  case 4: /* S: cursiva  */
#line 59 "proyecto.y"
    {
    sprintf(writeBuffer,"%s",(yyvsp[0].string));writeLinetoFile(writeBuffer);
    free((yyvsp[0].string));
  }
#line 1345 "proyecto.tab.c"
    break;

  case 5: /* S: emphasis  */
#line 64 "proyecto.y"
    {
    sprintf(writeBuffer,"%s",(yyvsp[0].string));writeLinetoFile(writeBuffer);
    free((yyvsp[0].string));
  }
#line 1354 "proyecto.tab.c"
    break;

  case 6: /* S: comb  */
#line 69 "proyecto.y"
    {
    sprintf(writeBuffer,"%s",(yyvsp[0].string));writeLinetoFile(writeBuffer);
    free((yyvsp[0].string));
  }
#line 1363 "proyecto.tab.c"
    break;

  case 7: /* S: comb2  */
#line 74 "proyecto.y"
    {
    sprintf(writeBuffer,"%s",(yyvsp[0].string));writeLinetoFile(writeBuffer);
    free((yyvsp[0].string));
  }
#line 1372 "proyecto.tab.c"
    break;

  case 8: /* S: listas  */
#line 79 "proyecto.y"
    {
    sprintf(writeBuffer,"%s",(yyvsp[0].string));writeLinetoFile(writeBuffer);
    free((yyvsp[0].string));
  }
#line 1381 "proyecto.tab.c"
    break;

  case 9: /* S: scratch  */
#line 84 "proyecto.y"
    {
    sprintf(writeBuffer,"%s",(yyvsp[0].string));writeLinetoFile(writeBuffer);
    free((yyvsp[0].string));
  }
#line 1390 "proyecto.tab.c"
    break;

  case 10: /* S: code  */
#line 89 "proyecto.y"
    {
    sprintf(writeBuffer,"%s",(yyvsp[0].string));writeLinetoFile(writeBuffer);
    free((yyvsp[0].string));
  }
#line 1399 "proyecto.tab.c"
    break;

  case 11: /* S: link  */
#line 94 "proyecto.y"
    {
    sprintf(writeBuffer,"%s",(yyvsp[0].string));writeLinetoFile(writeBuffer);
    free((yyvsp[0].string));
  }
#line 1408 "proyecto.tab.c"
    break;

  case 12: /* S: image  */
#line 99 "proyecto.y"
    {
    sprintf(writeBuffer,"%s",(yyvsp[0].string));writeLinetoFile(writeBuffer);
    free((yyvsp[0].string));
  }
#line 1417 "proyecto.tab.c"
    break;

  case 13: /* title: H1  */
#line 106 "proyecto.y"
    {
    (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[0].string))+5000));
    sprintf((yyval.string),"<h1>%s</h1>", (yyvsp[0].string)+2);
    }
#line 1426 "proyecto.tab.c"
    break;

  case 14: /* title: H2  */
#line 111 "proyecto.y"
    { (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[0].string))+5000));
      sprintf((yyval.string),"<h2>%s</h2>", (yyvsp[0].string)+3);}
#line 1433 "proyecto.tab.c"
    break;

  case 15: /* title: H3  */
#line 114 "proyecto.y"
    {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[0].string))+5000));
    sprintf((yyval.string),"<h3>%s</h3>", (yyvsp[0].string)+4);}
#line 1440 "proyecto.tab.c"
    break;

  case 16: /* title: H4  */
#line 117 "proyecto.y"
    {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[0].string))+5000));
    sprintf((yyval.string),"<h4>%s</h4>", (yyvsp[0].string)+5);}
#line 1447 "proyecto.tab.c"
    break;

  case 17: /* title: H5  */
#line 120 "proyecto.y"
    {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[0].string))+5000));
    sprintf((yyval.string),"<h5>%s</h5>", (yyvsp[0].string)+6);
    }
#line 1455 "proyecto.tab.c"
    break;

  case 18: /* title: H6  */
#line 124 "proyecto.y"
    {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[0].string))+5000));
    sprintf((yyval.string),"<h6>%s</h6>", (yyvsp[0].string)+2);}
#line 1462 "proyecto.tab.c"
    break;

  case 19: /* title: H1 title  */
#line 127 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h1>%s</h1>\n%s", (yyvsp[-1].string)+2,(yyvsp[0].string));
       }
#line 1470 "proyecto.tab.c"
    break;

  case 20: /* title: H2 title  */
#line 131 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h2>%s</h2>\n%s", (yyvsp[-1].string)+3,(yyvsp[0].string));}
#line 1477 "proyecto.tab.c"
    break;

  case 21: /* title: H3 title  */
#line 134 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h3>%s</h3>\n%s", (yyvsp[-1].string)+4,(yyvsp[0].string));}
#line 1484 "proyecto.tab.c"
    break;

  case 22: /* title: H4 title  */
#line 137 "proyecto.y"
    {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h4>%s</h4>\n%s", (yyvsp[-1].string)+5,(yyvsp[0].string));}
#line 1491 "proyecto.tab.c"
    break;

  case 23: /* title: H5 title  */
#line 140 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h5>%s</h5>\n%s", (yyvsp[-1].string)+6,(yyvsp[0].string));}
#line 1498 "proyecto.tab.c"
    break;

  case 24: /* title: H6 title  */
#line 143 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h6>%s</h6>\n%s", (yyvsp[-1].string)+7,(yyvsp[0].string));
    }
#line 1506 "proyecto.tab.c"
    break;

  case 25: /* title: H1 textword  */
#line 147 "proyecto.y"
   { (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h1>%s</h1>\n%s", (yyvsp[-1].string)+2,(yyvsp[0].string));}
#line 1513 "proyecto.tab.c"
    break;

  case 26: /* title: H2 textword  */
#line 150 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h2>%s</h2>\n%s", (yyvsp[-1].string)+3,(yyvsp[0].string));}
#line 1520 "proyecto.tab.c"
    break;

  case 27: /* title: H3 textword  */
#line 153 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h3>%s</h3>\n%s", (yyvsp[-1].string)+3,(yyvsp[0].string));}
#line 1527 "proyecto.tab.c"
    break;

  case 28: /* title: H4 textword  */
#line 156 "proyecto.y"
    {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h4>%s</h4>\n%s", (yyvsp[-1].string)+5,(yyvsp[0].string));}
#line 1534 "proyecto.tab.c"
    break;

  case 29: /* title: H5 textword  */
#line 159 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h5>%s</h5>\n%s", (yyvsp[-1].string)+6,(yyvsp[0].string));}
#line 1541 "proyecto.tab.c"
    break;

  case 30: /* title: H6 textword  */
#line 162 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h6>%s</h6>\n%s", (yyvsp[-1].string)+7,(yyvsp[0].string));}
#line 1548 "proyecto.tab.c"
    break;

  case 31: /* title: H1 emphasis  */
#line 165 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h1>%s</h1>\n%s", (yyvsp[-1].string)+2,(yyvsp[0].string));}
#line 1555 "proyecto.tab.c"
    break;

  case 32: /* title: H2 emphasis  */
#line 168 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h2>%s</h2>\n%s", (yyvsp[-1].string)+3,(yyvsp[0].string));}
#line 1562 "proyecto.tab.c"
    break;

  case 33: /* title: H3 emphasis  */
#line 171 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h1>%s</h1>", (yyvsp[-1].string)+2);}
#line 1569 "proyecto.tab.c"
    break;

  case 34: /* title: H4 emphasis  */
#line 174 "proyecto.y"
    {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h4>%s</h4>\n%s", (yyvsp[-1].string)+5,(yyvsp[0].string));}
#line 1576 "proyecto.tab.c"
    break;

  case 35: /* title: H5 emphasis  */
#line 177 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h5>%s</h5>\n%s", (yyvsp[-1].string)+6,(yyvsp[0].string));}
#line 1583 "proyecto.tab.c"
    break;

  case 36: /* title: H6 emphasis  */
#line 180 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h6>%s</h6>\n%s", (yyvsp[-1].string)+7,(yyvsp[0].string));}
#line 1590 "proyecto.tab.c"
    break;

  case 37: /* title: H1 cursiva  */
#line 183 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h1>%s</h1>\n%s", (yyvsp[-1].string)+2,(yyvsp[0].string));}
#line 1597 "proyecto.tab.c"
    break;

  case 38: /* title: H2 cursiva  */
#line 186 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h2>%s</h2>\n%s", (yyvsp[-1].string)+3,(yyvsp[0].string));}
#line 1604 "proyecto.tab.c"
    break;

  case 39: /* title: H3 cursiva  */
#line 189 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h1>%s</h1>", (yyvsp[-1].string)+2);}
#line 1611 "proyecto.tab.c"
    break;

  case 40: /* title: H4 cursiva  */
#line 192 "proyecto.y"
    {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h4>%s</h4>\n%s", (yyvsp[-1].string)+5,(yyvsp[0].string));}
#line 1618 "proyecto.tab.c"
    break;

  case 41: /* title: H5 cursiva  */
#line 195 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h5>%s</h5>\n%s", (yyvsp[-1].string)+6,(yyvsp[0].string));}
#line 1625 "proyecto.tab.c"
    break;

  case 42: /* title: H6 cursiva  */
#line 198 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h6>%s</h6>\n%s", (yyvsp[-1].string)+7,(yyvsp[0].string));}
#line 1632 "proyecto.tab.c"
    break;

  case 43: /* title: H1 scratch  */
#line 201 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h1>%s</h1>\n%s", (yyvsp[-1].string)+2,(yyvsp[0].string));}
#line 1639 "proyecto.tab.c"
    break;

  case 44: /* title: H2 scratch  */
#line 204 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h2>%s</h2>\n%s", (yyvsp[-1].string)+3,(yyvsp[0].string));}
#line 1646 "proyecto.tab.c"
    break;

  case 45: /* title: H3 scratch  */
#line 207 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h1>%s</h1>", (yyvsp[-1].string)+2);}
#line 1653 "proyecto.tab.c"
    break;

  case 46: /* title: H4 scratch  */
#line 210 "proyecto.y"
    {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h4>%s</h4>\n%s", (yyvsp[-1].string)+5,(yyvsp[0].string));}
#line 1660 "proyecto.tab.c"
    break;

  case 47: /* title: H5 scratch  */
#line 213 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h5>%s</h5>\n%s", (yyvsp[-1].string)+6,(yyvsp[0].string));}
#line 1667 "proyecto.tab.c"
    break;

  case 48: /* title: H6 scratch  */
#line 216 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h6>%s</h6>\n%s", (yyvsp[-1].string)+7,(yyvsp[0].string));}
#line 1674 "proyecto.tab.c"
    break;

  case 49: /* title: H1 listas  */
#line 219 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h1>%s</h1>\n%s", (yyvsp[-1].string)+2,(yyvsp[0].string));}
#line 1681 "proyecto.tab.c"
    break;

  case 50: /* title: H2 listas  */
#line 222 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h2>%s</h2>\n%s", (yyvsp[-1].string)+3,(yyvsp[0].string));}
#line 1688 "proyecto.tab.c"
    break;

  case 51: /* title: H3 listas  */
#line 225 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h1>%s</h1>", (yyvsp[-1].string)+2);}
#line 1695 "proyecto.tab.c"
    break;

  case 52: /* title: H4 listas  */
#line 228 "proyecto.y"
    {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h4>%s</h4>\n%s", (yyvsp[-1].string)+5,(yyvsp[0].string));}
#line 1702 "proyecto.tab.c"
    break;

  case 53: /* title: H5 listas  */
#line 231 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h5>%s</h5>\n%s", (yyvsp[-1].string)+6,(yyvsp[0].string));}
#line 1709 "proyecto.tab.c"
    break;

  case 54: /* title: H6 listas  */
#line 234 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h6>%s</h6>\n%s", (yyvsp[-1].string)+7,(yyvsp[0].string));}
#line 1716 "proyecto.tab.c"
    break;

  case 55: /* title: H1 comb  */
#line 237 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h1>%s</h1>\n%s", (yyvsp[-1].string)+2,(yyvsp[0].string));}
#line 1723 "proyecto.tab.c"
    break;

  case 56: /* title: H2 comb  */
#line 240 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h2>%s</h2>\n%s", (yyvsp[-1].string)+3,(yyvsp[0].string));}
#line 1730 "proyecto.tab.c"
    break;

  case 57: /* title: H3 comb  */
#line 243 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h1>%s</h1>", (yyvsp[-1].string)+2);}
#line 1737 "proyecto.tab.c"
    break;

  case 58: /* title: H4 comb  */
#line 246 "proyecto.y"
    {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h4>%s</h4>\n%s", (yyvsp[-1].string)+5,(yyvsp[0].string));}
#line 1744 "proyecto.tab.c"
    break;

  case 59: /* title: H5 comb  */
#line 249 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h5>%s</h5>\n%s", (yyvsp[-1].string)+6,(yyvsp[0].string));}
#line 1751 "proyecto.tab.c"
    break;

  case 60: /* title: H6 comb  */
#line 252 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h6>%s</h6>\n%s", (yyvsp[-1].string)+7,(yyvsp[0].string));}
#line 1758 "proyecto.tab.c"
    break;

  case 61: /* title: H1 comb2  */
#line 255 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h1>%s</h1>\n%s", (yyvsp[-1].string)+2,(yyvsp[0].string));}
#line 1765 "proyecto.tab.c"
    break;

  case 62: /* title: H2 comb2  */
#line 258 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h2>%s</h2>\n%s", (yyvsp[-1].string)+3,(yyvsp[0].string));}
#line 1772 "proyecto.tab.c"
    break;

  case 63: /* title: H3 comb2  */
#line 261 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h1>%s</h1>", (yyvsp[-1].string)+2);}
#line 1779 "proyecto.tab.c"
    break;

  case 64: /* title: H4 comb2  */
#line 264 "proyecto.y"
    {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h4>%s</h4>\n%s", (yyvsp[-1].string)+5,(yyvsp[0].string));}
#line 1786 "proyecto.tab.c"
    break;

  case 65: /* title: H5 comb2  */
#line 267 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h5>%s</h5>\n%s", (yyvsp[-1].string)+6,(yyvsp[0].string));}
#line 1793 "proyecto.tab.c"
    break;

  case 66: /* title: H6 comb2  */
#line 270 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h6>%s</h6>\n%s", (yyvsp[-1].string)+7,(yyvsp[0].string));}
#line 1800 "proyecto.tab.c"
    break;

  case 67: /* title: H1 code  */
#line 273 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h1>%s</h1>\n%s", (yyvsp[-1].string)+2,(yyvsp[0].string));}
#line 1807 "proyecto.tab.c"
    break;

  case 68: /* title: H2 code  */
#line 276 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h2>%s</h2>\n%s", (yyvsp[-1].string)+3,(yyvsp[0].string));}
#line 1814 "proyecto.tab.c"
    break;

  case 69: /* title: H3 code  */
#line 279 "proyecto.y"
        {printf("<h3>%s</h3>", (yyvsp[-1].string)+4);}
#line 1820 "proyecto.tab.c"
    break;

  case 70: /* title: H4 code  */
#line 281 "proyecto.y"
    {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h4>%s</h4>\n%s", (yyvsp[-1].string)+5,(yyvsp[0].string));}
#line 1827 "proyecto.tab.c"
    break;

  case 71: /* title: H5 code  */
#line 284 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h5>%s</h5>\n%s", (yyvsp[-1].string)+6,(yyvsp[0].string));}
#line 1834 "proyecto.tab.c"
    break;

  case 72: /* title: H6 code  */
#line 287 "proyecto.y"
    {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h6>%s</h6>", (yyvsp[-1].string)+2);}
#line 1841 "proyecto.tab.c"
    break;

  case 73: /* title: H1 link  */
#line 290 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h1>%s</h1>\n%s", (yyvsp[-1].string)+2,(yyvsp[0].string));}
#line 1848 "proyecto.tab.c"
    break;

  case 74: /* title: H2 link  */
#line 293 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h2>%s</h2>\n%s", (yyvsp[-1].string)+3,(yyvsp[0].string));}
#line 1855 "proyecto.tab.c"
    break;

  case 75: /* title: H3 link  */
#line 296 "proyecto.y"
        {printf("<h3>%s</h3>", (yyvsp[-1].string)+4);}
#line 1861 "proyecto.tab.c"
    break;

  case 76: /* title: H4 link  */
#line 298 "proyecto.y"
    {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h4>%s</h4>\n%s", (yyvsp[-1].string)+5,(yyvsp[0].string));}
#line 1868 "proyecto.tab.c"
    break;

  case 77: /* title: H5 link  */
#line 301 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h5>%s</h5>\n%s", (yyvsp[-1].string)+6,(yyvsp[0].string));}
#line 1875 "proyecto.tab.c"
    break;

  case 78: /* title: H6 link  */
#line 304 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h6>%s</h6>\n%s", (yyvsp[-1].string)+7,(yyvsp[0].string));}
#line 1882 "proyecto.tab.c"
    break;

  case 79: /* title: H1 image  */
#line 307 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h1>%s</h1>\n%s", (yyvsp[-1].string)+2,(yyvsp[0].string));}
#line 1889 "proyecto.tab.c"
    break;

  case 80: /* title: H2 image  */
#line 310 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h2>%s</h2>\n%s", (yyvsp[-1].string)+3,(yyvsp[0].string));}
#line 1896 "proyecto.tab.c"
    break;

  case 81: /* title: H3 image  */
#line 313 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h3>%s</h3>\n%s", (yyvsp[-1].string)+4,(yyvsp[0].string));}
#line 1903 "proyecto.tab.c"
    break;

  case 82: /* title: H4 image  */
#line 316 "proyecto.y"
    {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h4>%s</h4>\n%s", (yyvsp[-1].string)+5,(yyvsp[0].string));}
#line 1910 "proyecto.tab.c"
    break;

  case 83: /* title: H5 image  */
#line 319 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h5>%s</h5>\n%s", (yyvsp[-1].string)+6,(yyvsp[0].string));}
#line 1917 "proyecto.tab.c"
    break;

  case 84: /* title: H6 image  */
#line 322 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<h6>%s</h6>\n%s", (yyvsp[-1].string)+7,(yyvsp[0].string));}
#line 1924 "proyecto.tab.c"
    break;

  case 85: /* textword: TEXTWORD  */
#line 328 "proyecto.y"
    {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[0].string))+5000));
    sprintf((yyval.string),"<p>%s</p>", (yyvsp[0].string));}
#line 1931 "proyecto.tab.c"
    break;

  case 86: /* textword: TEXTWORD title  */
#line 331 "proyecto.y"
    {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<p>%s</p>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 1938 "proyecto.tab.c"
    break;

  case 87: /* textword: TEXTWORD cursiva  */
#line 334 "proyecto.y"
      {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>", (yyvsp[-1].string),(yyvsp[0].string));}
#line 1945 "proyecto.tab.c"
    break;

  case 88: /* textword: TEXTWORD listas  */
#line 338 "proyecto.y"
      {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<p>%s</p>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 1952 "proyecto.tab.c"
    break;

  case 89: /* textword: TEXTWORD scratch  */
#line 341 "proyecto.y"
      {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>", (yyvsp[-1].string),(yyvsp[0].string));}
#line 1959 "proyecto.tab.c"
    break;

  case 90: /* textword: TEXTWORD comb  */
#line 345 "proyecto.y"
      {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>", (yyvsp[-1].string),(yyvsp[0].string));}
#line 1966 "proyecto.tab.c"
    break;

  case 91: /* textword: TEXTWORD comb2  */
#line 348 "proyecto.y"
      {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>", (yyvsp[-1].string),(yyvsp[0].string));}
#line 1973 "proyecto.tab.c"
    break;

  case 92: /* textword: TEXTWORD emphasis  */
#line 351 "proyecto.y"
      {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>", (yyvsp[-1].string),(yyvsp[0].string));}
#line 1980 "proyecto.tab.c"
    break;

  case 93: /* textword: TEXTWORD code  */
#line 354 "proyecto.y"
    {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<p>%s</p>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 1987 "proyecto.tab.c"
    break;

  case 94: /* textword: TEXTWORD textword  */
#line 357 "proyecto.y"
      {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<p>%s</p>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 1994 "proyecto.tab.c"
    break;

  case 95: /* textword: TEXTWORD link  */
#line 360 "proyecto.y"
      {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<p>%s</p>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2001 "proyecto.tab.c"
    break;

  case 96: /* textword: TEXTWORD image  */
#line 363 "proyecto.y"
      {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<p>%s</p>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2008 "proyecto.tab.c"
    break;

  case 97: /* textword: LINKNAME  */
#line 366 "proyecto.y"
     {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[0].string))+5000));
    sprintf((yyval.string),"<p>%s</p>", (yyvsp[0].string));}
#line 2015 "proyecto.tab.c"
    break;

  case 98: /* textword: TEXTWORD LINKNAME title  */
#line 369 "proyecto.y"
      {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>\n%s", (yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));}
#line 2022 "proyecto.tab.c"
    break;

  case 99: /* textword: TEXTWORD LINKNAME cursiva  */
#line 372 "proyecto.y"
          {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>\n%s", (yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));}
#line 2029 "proyecto.tab.c"
    break;

  case 100: /* textword: TEXTWORD LINKNAME listas  */
#line 375 "proyecto.y"
    {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>\n%s", (yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));}
#line 2036 "proyecto.tab.c"
    break;

  case 101: /* textword: TEXTWORD LINKNAME scratch  */
#line 378 "proyecto.y"
          {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>\n%s", (yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));}
#line 2043 "proyecto.tab.c"
    break;

  case 102: /* textword: TEXTWORD LINKNAME comb  */
#line 381 "proyecto.y"
          {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>\n%s", (yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));}
#line 2050 "proyecto.tab.c"
    break;

  case 103: /* textword: TEXTWORD LINKNAME comb2  */
#line 384 "proyecto.y"
          {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>\n%s", (yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));}
#line 2057 "proyecto.tab.c"
    break;

  case 104: /* textword: TEXTWORD LINKNAME emphasis  */
#line 387 "proyecto.y"
          {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>\n%s", (yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));}
#line 2064 "proyecto.tab.c"
    break;

  case 105: /* textword: TEXTWORD LINKNAME code  */
#line 390 "proyecto.y"
          {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>\n%s", (yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));}
#line 2071 "proyecto.tab.c"
    break;

  case 106: /* textword: TEXTWORD LINKNAME textword  */
#line 393 "proyecto.y"
          {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>\n%s", (yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));}
#line 2078 "proyecto.tab.c"
    break;

  case 107: /* textword: TEXTWORD LINKNAME link  */
#line 396 "proyecto.y"
          {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>\n%s", (yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));}
#line 2085 "proyecto.tab.c"
    break;

  case 108: /* textword: TEXTWORD LINKNAME image  */
#line 399 "proyecto.y"
          {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>\n%s", (yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));}
#line 2092 "proyecto.tab.c"
    break;

  case 109: /* textword: TEXTWORD LINK  */
#line 402 "proyecto.y"
          {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2099 "proyecto.tab.c"
    break;

  case 110: /* textword: TEXTWORD LINK title  */
#line 405 "proyecto.y"
    {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>\n%s", (yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));}
#line 2106 "proyecto.tab.c"
    break;

  case 111: /* textword: TEXTWORD LINK cursiva  */
#line 408 "proyecto.y"
      {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>\n%s", (yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));}
#line 2113 "proyecto.tab.c"
    break;

  case 112: /* textword: TEXTWORD LINK listas  */
#line 411 "proyecto.y"
      {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>\n%s", (yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));}
#line 2120 "proyecto.tab.c"
    break;

  case 113: /* textword: TEXTWORD LINK scratch  */
#line 414 "proyecto.y"
      {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>\n%s", (yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));}
#line 2127 "proyecto.tab.c"
    break;

  case 114: /* textword: TEXTWORD LINK comb  */
#line 417 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>\n%s", (yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));}
#line 2134 "proyecto.tab.c"
    break;

  case 115: /* textword: TEXTWORD LINK comb2  */
#line 420 "proyecto.y"
     {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>\n%s", (yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));}
#line 2141 "proyecto.tab.c"
    break;

  case 116: /* textword: TEXTWORD LINK emphasis  */
#line 423 "proyecto.y"
          {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>\n%s", (yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));}
#line 2148 "proyecto.tab.c"
    break;

  case 117: /* textword: TEXTWORD LINK code  */
#line 426 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>\n%s", (yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));}
#line 2155 "proyecto.tab.c"
    break;

  case 118: /* textword: TEXTWORD LINK textword  */
#line 429 "proyecto.y"
        {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>\n%s", (yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));}
#line 2162 "proyecto.tab.c"
    break;

  case 119: /* textword: TEXTWORD LINK link  */
#line 432 "proyecto.y"
          {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>\n%s", (yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));}
#line 2169 "proyecto.tab.c"
    break;

  case 120: /* textword: TEXTWORD LINK image  */
#line 435 "proyecto.y"
          {(yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<p>%s%s</p>\n%s", (yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));}
#line 2176 "proyecto.tab.c"
    break;

  case 121: /* emphasis: EMPHASIS  */
#line 441 "proyecto.y"
          { rmposition((yyvsp[0].string));
          (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[0].string))+5000));
          sprintf((yyval.string),"<b>%s</b>", (yyvsp[0].string));}
#line 2184 "proyecto.tab.c"
    break;

  case 122: /* emphasis: EMPHASIS title  */
#line 445 "proyecto.y"
          {rmposition((yyvsp[-1].string));
          (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<b>%s</b>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2192 "proyecto.tab.c"
    break;

  case 123: /* emphasis: EMPHASIS emphasis  */
#line 449 "proyecto.y"
          {rmposition((yyvsp[-1].string));
          (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<b>%s</b>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2200 "proyecto.tab.c"
    break;

  case 124: /* emphasis: EMPHASIS cursiva  */
#line 453 "proyecto.y"
          {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<b>%s</b>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2208 "proyecto.tab.c"
    break;

  case 125: /* emphasis: EMPHASIS scratch  */
#line 457 "proyecto.y"
          {rmposition((yyvsp[-1].string));
          (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<b>%s</b>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2216 "proyecto.tab.c"
    break;

  case 126: /* emphasis: EMPHASIS textword  */
#line 461 "proyecto.y"
          {rmposition((yyvsp[-1].string));
          (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<b>%s</b>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2224 "proyecto.tab.c"
    break;

  case 127: /* emphasis: EMPHASIS comb  */
#line 465 "proyecto.y"
          {rmposition((yyvsp[-1].string));
          (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<b>%s</b>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2232 "proyecto.tab.c"
    break;

  case 128: /* emphasis: EMPHASIS comb2  */
#line 469 "proyecto.y"
          {rmposition((yyvsp[-1].string));
          (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<b>%s</b>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2240 "proyecto.tab.c"
    break;

  case 129: /* emphasis: EMPHASIS code  */
#line 473 "proyecto.y"
          {rmposition((yyvsp[-1].string));
          (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<b>%s</b>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2248 "proyecto.tab.c"
    break;

  case 130: /* emphasis: EMPHASIS link  */
#line 477 "proyecto.y"
          {rmposition((yyvsp[-1].string));
          (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<b>%s</b>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2256 "proyecto.tab.c"
    break;

  case 131: /* emphasis: EMPHASIS image  */
#line 481 "proyecto.y"
          {rmposition((yyvsp[-1].string));
          (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<b>%s</b>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2264 "proyecto.tab.c"
    break;

  case 132: /* cursiva: CURSIVA  */
#line 486 "proyecto.y"
                  {rmposition((yyvsp[0].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[0].string))+5000));
    sprintf((yyval.string),"<em>%s</em>", (yyvsp[0].string));}
#line 2272 "proyecto.tab.c"
    break;

  case 133: /* cursiva: CURSIVA title  */
#line 490 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<em>%s</em>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2280 "proyecto.tab.c"
    break;

  case 134: /* cursiva: CURSIVA emphasis  */
#line 494 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<em>%s</em>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2288 "proyecto.tab.c"
    break;

  case 135: /* cursiva: CURSIVA cursiva  */
#line 498 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<em>%s</em>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2296 "proyecto.tab.c"
    break;

  case 136: /* cursiva: CURSIVA scratch  */
#line 502 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<em>%s</em>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2304 "proyecto.tab.c"
    break;

  case 137: /* cursiva: CURSIVA textword  */
#line 506 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<em>%s</em>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2312 "proyecto.tab.c"
    break;

  case 138: /* cursiva: CURSIVA comb  */
#line 510 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<em>%s</em>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2320 "proyecto.tab.c"
    break;

  case 139: /* cursiva: CURSIVA comb2  */
#line 514 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<em>%s</em>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2328 "proyecto.tab.c"
    break;

  case 140: /* cursiva: CURSIVA code  */
#line 518 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<em>%s</em>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2336 "proyecto.tab.c"
    break;

  case 141: /* cursiva: CURSIVA link  */
#line 522 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<em>%s</em>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2344 "proyecto.tab.c"
    break;

  case 142: /* cursiva: CURSIVA image  */
#line 526 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<em>%s</em>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2352 "proyecto.tab.c"
    break;

  case 143: /* cursiva: CURSIVA listas  */
#line 531 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<em>%s</em>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2360 "proyecto.tab.c"
    break;

  case 144: /* comb: COMB  */
#line 537 "proyecto.y"
               {rmposition((yyvsp[0].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[0].string))+5000));
    sprintf((yyval.string),"<strong><em>%s</em></strong>", (yyvsp[0].string));}
#line 2368 "proyecto.tab.c"
    break;

  case 145: /* comb: COMB title  */
#line 542 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<strong><em>%s</em></strong>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2376 "proyecto.tab.c"
    break;

  case 146: /* comb: COMB emphasis  */
#line 546 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<strong><em>%s</em></strong>\n%s", (yyvsp[-1].string),(yyvsp[0].string));  }
#line 2384 "proyecto.tab.c"
    break;

  case 147: /* comb: COMB cursiva  */
#line 550 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<strong><em>%s</em></strong>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2392 "proyecto.tab.c"
    break;

  case 148: /* comb: COMB scratch  */
#line 554 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<strong><em>%s</em></strong>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2400 "proyecto.tab.c"
    break;

  case 149: /* comb: COMB textword  */
#line 558 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<strong><em>%s</em></strong>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2408 "proyecto.tab.c"
    break;

  case 150: /* comb: COMB comb2  */
#line 562 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<strong><em>%s</em></strong>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2416 "proyecto.tab.c"
    break;

  case 151: /* comb: COMB comb  */
#line 566 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<strong><em>%s</em></strong>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2424 "proyecto.tab.c"
    break;

  case 152: /* comb: COMB listas  */
#line 570 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<strong><em>%s</em></strong>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2432 "proyecto.tab.c"
    break;

  case 153: /* comb: COMB code  */
#line 574 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<strong><em>%s</em></strong>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2440 "proyecto.tab.c"
    break;

  case 154: /* comb: COMB link  */
#line 578 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<strong><em>%s</em></strong>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2448 "proyecto.tab.c"
    break;

  case 155: /* comb: COMB image  */
#line 582 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<strong><em>%s</em></strong>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2456 "proyecto.tab.c"
    break;

  case 156: /* comb2: COMB2  */
#line 588 "proyecto.y"
                 {rmposition((yyvsp[0].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[0].string))+5000));
    sprintf((yyval.string),"<del><em>%s</em></del>", (yyvsp[0].string)); }
#line 2464 "proyecto.tab.c"
    break;

  case 157: /* comb2: COMB2 title  */
#line 592 "proyecto.y"
         {rmposition((yyvsp[-1].string));
        (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<del><em>%s</em></del>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2472 "proyecto.tab.c"
    break;

  case 158: /* comb2: COMB2 emphasis  */
#line 596 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<del><em>%s</em></del>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2480 "proyecto.tab.c"
    break;

  case 159: /* comb2: COMB2 cursiva  */
#line 600 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<del><em>%s</em></del>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2488 "proyecto.tab.c"
    break;

  case 160: /* comb2: COMB2 scratch  */
#line 604 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<del><em>%s</em></del>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2496 "proyecto.tab.c"
    break;

  case 161: /* comb2: COMB2 textword  */
#line 608 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<del><em>%s</em></del>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2504 "proyecto.tab.c"
    break;

  case 162: /* comb2: COMB2 comb  */
#line 612 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<del><em>%s</em></del>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2512 "proyecto.tab.c"
    break;

  case 163: /* comb2: COMB2 comb2  */
#line 616 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<del><em>%s</em></del>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2520 "proyecto.tab.c"
    break;

  case 164: /* comb2: COMB2 listas  */
#line 620 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<del><em>%s</em></del>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2528 "proyecto.tab.c"
    break;

  case 165: /* comb2: COMB2 code  */
#line 625 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<del><em>%s</em></del>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2536 "proyecto.tab.c"
    break;

  case 166: /* comb2: COMB2 link  */
#line 631 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<del><em>%s</em></del>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2544 "proyecto.tab.c"
    break;

  case 167: /* comb2: COMB2 image  */
#line 635 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<del><em>%s</em></del>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2552 "proyecto.tab.c"
    break;

  case 168: /* scratch: SCRATCH  */
#line 645 "proyecto.y"
                 {rmposition((yyvsp[0].string));
    (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[0].string))+5000));
    sprintf((yyval.string),"<del>%s</del>", (yyvsp[0].string)); }
#line 2560 "proyecto.tab.c"
    break;

  case 169: /* scratch: SCRATCH listas  */
#line 649 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<del>%s</del>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2568 "proyecto.tab.c"
    break;

  case 170: /* scratch: SCRATCH title  */
#line 653 "proyecto.y"
         {rmposition((yyvsp[-1].string));
        (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<del>%s</del>\n%s", (yyvsp[-1].string),(yyvsp[0].string));  }
#line 2576 "proyecto.tab.c"
    break;

  case 171: /* scratch: SCRATCH scratch  */
#line 657 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<del>%s</del>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2584 "proyecto.tab.c"
    break;

  case 172: /* scratch: SCRATCH cursiva  */
#line 661 "proyecto.y"
         {rmposition((yyvsp[-1].string));
          (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<del>%s</del>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2592 "proyecto.tab.c"
    break;

  case 173: /* scratch: SCRATCH emphasis  */
#line 665 "proyecto.y"
         {rmposition((yyvsp[-1].string));
          (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<del>%s</del>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2600 "proyecto.tab.c"
    break;

  case 174: /* scratch: SCRATCH textword  */
#line 669 "proyecto.y"
         {rmposition((yyvsp[-1].string));
          (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<del>%s</del>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2608 "proyecto.tab.c"
    break;

  case 175: /* scratch: SCRATCH comb  */
#line 673 "proyecto.y"
         {rmposition((yyvsp[-1].string));
          (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<del>%s</del>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2616 "proyecto.tab.c"
    break;

  case 176: /* scratch: SCRATCH comb2  */
#line 677 "proyecto.y"
         {rmposition((yyvsp[-1].string));
          (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<del>%s</del>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2624 "proyecto.tab.c"
    break;

  case 177: /* scratch: SCRATCH code  */
#line 681 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<del>%s</del>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2632 "proyecto.tab.c"
    break;

  case 178: /* scratch: SCRATCH link  */
#line 685 "proyecto.y"
         {rmposition((yyvsp[-1].string));
          (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<del>%s</del>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2640 "proyecto.tab.c"
    break;

  case 179: /* scratch: SCRATCH image  */
#line 689 "proyecto.y"
         {rmposition((yyvsp[-1].string));
          (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<del>%s</del>\n%s", (yyvsp[-1].string),(yyvsp[0].string)); }
#line 2648 "proyecto.tab.c"
    break;

  case 180: /* listas: LISTAORD  */
#line 695 "proyecto.y"
                 {
         (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[0].string))+5000));
    sprintf((yyval.string),"<li>%s</li>", (yyvsp[0].string)+3);
        }
#line 2657 "proyecto.tab.c"
    break;

  case 181: /* listas: LISTAORD listas  */
#line 699 "proyecto.y"
                         {
        (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<li>%s</li>\n%s", (yyvsp[-1].string)+3,(yyvsp[0].string));
        }
#line 2666 "proyecto.tab.c"
    break;

  case 182: /* listas: LISTAORD title  */
#line 703 "proyecto.y"
                        {
        (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<li>%s</li>\n%s", (yyvsp[-1].string)+3,(yyvsp[0].string));
        }
#line 2675 "proyecto.tab.c"
    break;

  case 183: /* listas: LISTAORD scratch  */
#line 707 "proyecto.y"
                          {
       (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<li>%s</li>\n%s", (yyvsp[-1].string)+3,(yyvsp[0].string));
        }
#line 2684 "proyecto.tab.c"
    break;

  case 184: /* listas: LISTAORD cursiva  */
#line 711 "proyecto.y"
                          {
        (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<li>%s</li>\n%s", (yyvsp[-1].string)+3,(yyvsp[0].string));
        }
#line 2693 "proyecto.tab.c"
    break;

  case 185: /* listas: LISTAORD emphasis  */
#line 715 "proyecto.y"
                           {
    (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<li>%s</li>\n%s", (yyvsp[-1].string)+3,(yyvsp[0].string));
        }
#line 2702 "proyecto.tab.c"
    break;

  case 186: /* listas: LISTAORD textword  */
#line 719 "proyecto.y"
                           {
        (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<li>%s</li>\n%s", (yyvsp[-1].string)+3,(yyvsp[0].string));
        }
#line 2711 "proyecto.tab.c"
    break;

  case 187: /* listas: LISTAORD comb  */
#line 723 "proyecto.y"
                       {
        (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<li>%s</li>\n%s", (yyvsp[-1].string)+3,(yyvsp[0].string));
        }
#line 2720 "proyecto.tab.c"
    break;

  case 188: /* listas: LISTAORD comb2  */
#line 728 "proyecto.y"
                        {
        (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<li>%s</li>\n%s", (yyvsp[-1].string)+3,(yyvsp[0].string));
        }
#line 2729 "proyecto.tab.c"
    break;

  case 189: /* listas: LISTAORD code  */
#line 733 "proyecto.y"
                        {
        (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<li>%s</li>\n%s", (yyvsp[-1].string)+3,(yyvsp[0].string));
        }
#line 2738 "proyecto.tab.c"
    break;

  case 190: /* listas: LISTAORD link  */
#line 738 "proyecto.y"
                        {
        (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<li>%s</li>\n%s", (yyvsp[-1].string)+3,(yyvsp[0].string));
        }
#line 2747 "proyecto.tab.c"
    break;

  case 191: /* listas: LISTADESORD  */
#line 743 "proyecto.y"
                     {
        (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[0].string))+5000));
    sprintf((yyval.string),"<li>%s</li>", (yyvsp[0].string)+2);
        }
#line 2756 "proyecto.tab.c"
    break;

  case 192: /* listas: LISTADESORD listas  */
#line 748 "proyecto.y"
                            {
        (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<li>%s</li>\n%s", (yyvsp[-1].string)+2,(yyvsp[0].string));
        }
#line 2765 "proyecto.tab.c"
    break;

  case 193: /* listas: LISTADESORD title  */
#line 753 "proyecto.y"
                           {
        (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<li>%s</li>\n%s", (yyvsp[-1].string)+2,(yyvsp[0].string));
        }
#line 2774 "proyecto.tab.c"
    break;

  case 194: /* listas: LISTADESORD scratch  */
#line 758 "proyecto.y"
                             {
        (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<li>%s</li>\n%s", (yyvsp[-1].string)+2,(yyvsp[0].string));
        }
#line 2783 "proyecto.tab.c"
    break;

  case 195: /* listas: LISTADESORD cursiva  */
#line 763 "proyecto.y"
                             {
        (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<li>%s</li>\n%s", (yyvsp[-1].string)+2,(yyvsp[0].string));
        }
#line 2792 "proyecto.tab.c"
    break;

  case 196: /* listas: LISTADESORD emphasis  */
#line 768 "proyecto.y"
                              {
        (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<li>%s</li>\n%s", (yyvsp[-1].string)+2,(yyvsp[0].string));
        }
#line 2801 "proyecto.tab.c"
    break;

  case 197: /* listas: LISTADESORD textword  */
#line 773 "proyecto.y"
                              {
        (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<li>%s</li>\n%s", (yyvsp[-1].string)+2,(yyvsp[0].string));
        }
#line 2810 "proyecto.tab.c"
    break;

  case 198: /* listas: LISTADESORD comb  */
#line 778 "proyecto.y"
                          {
        (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<li>%s</li>\n%s", (yyvsp[-1].string)+2,(yyvsp[0].string));
        }
#line 2819 "proyecto.tab.c"
    break;

  case 199: /* listas: LISTADESORD comb2  */
#line 783 "proyecto.y"
                           {
        (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<li>%s</li>\n%s", (yyvsp[-1].string)+2,(yyvsp[0].string));
        }
#line 2828 "proyecto.tab.c"
    break;

  case 200: /* listas: LISTADESORD code  */
#line 789 "proyecto.y"
                          {
       (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<li>%s</li>\n%s", (yyvsp[-1].string)+2,(yyvsp[0].string));
        }
#line 2837 "proyecto.tab.c"
    break;

  case 201: /* listas: LISTADESORD image  */
#line 794 "proyecto.y"
                           {
        (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<li>%s</li>\n%s", (yyvsp[-1].string)+2,(yyvsp[0].string));
        }
#line 2846 "proyecto.tab.c"
    break;

  case 202: /* listas: LISTAORD image  */
#line 799 "proyecto.y"
                        {
        (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<li>%s</li>\n%s", (yyvsp[-1].string)+2,(yyvsp[0].string));
        }
#line 2855 "proyecto.tab.c"
    break;

  case 203: /* code: CODE  */
#line 809 "proyecto.y"
           {
     rmposition((yyvsp[0].string));
     (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[0].string))+5000));
    sprintf((yyval.string),"<code>%s</code>", (yyvsp[0].string));}
#line 2864 "proyecto.tab.c"
    break;

  case 204: /* code: CODE title  */
#line 815 "proyecto.y"
                 {
     rmposition((yyvsp[-1].string));
     (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<code>%s</code>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2873 "proyecto.tab.c"
    break;

  case 205: /* code: CODE scratch  */
#line 820 "proyecto.y"
                   {
     rmposition((yyvsp[-1].string));
     (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<code>%s</code>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2882 "proyecto.tab.c"
    break;

  case 206: /* code: CODE cursiva  */
#line 826 "proyecto.y"
                   {
     rmposition((yyvsp[-1].string));
     (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<code>%s</code>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2891 "proyecto.tab.c"
    break;

  case 207: /* code: CODE textword  */
#line 832 "proyecto.y"
                    {
     rmposition((yyvsp[-1].string));
     (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<code>%s</code>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2900 "proyecto.tab.c"
    break;

  case 208: /* code: CODE emphasis  */
#line 838 "proyecto.y"
                    {
     rmposition((yyvsp[-1].string));
     (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<code>%s</code>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2909 "proyecto.tab.c"
    break;

  case 209: /* code: CODE comb  */
#line 844 "proyecto.y"
                {
     rmposition((yyvsp[-1].string));
     (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<code>%s</code>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2918 "proyecto.tab.c"
    break;

  case 210: /* code: CODE comb2  */
#line 850 "proyecto.y"
                 {
     rmposition((yyvsp[-1].string));
     (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<code>%s</code>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2927 "proyecto.tab.c"
    break;

  case 211: /* code: CODE code  */
#line 856 "proyecto.y"
                {
     rmposition((yyvsp[-1].string));
     (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<code>%s</code>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2936 "proyecto.tab.c"
    break;

  case 212: /* code: CODE listas  */
#line 862 "proyecto.y"
                  {
     rmposition((yyvsp[-1].string));
     (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<code>%s</code>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2945 "proyecto.tab.c"
    break;

  case 213: /* code: CODE link  */
#line 867 "proyecto.y"
                {
     rmposition((yyvsp[-1].string));
     (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<code>%s</code>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2954 "proyecto.tab.c"
    break;

  case 214: /* code: CODE image  */
#line 871 "proyecto.y"
                {
     rmposition((yyvsp[-1].string));
     (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<code>%s</code>\n%s", (yyvsp[-1].string),(yyvsp[0].string));}
#line 2963 "proyecto.tab.c"
    break;

  case 215: /* link: LINKNAME LINK  */
#line 880 "proyecto.y"
                   {
     rmposition((yyvsp[-1].string));
     rmposition((yyvsp[0].string));
      (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<a href=%s>%s</a>", (yyvsp[0].string),(yyvsp[-1].string));}
#line 2973 "proyecto.tab.c"
    break;

  case 216: /* link: LINKNAME LINK link  */
#line 885 "proyecto.y"
                        {
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
     (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<a href=%s>%s</a>\n%s", (yyvsp[-1].string),(yyvsp[-2].string),(yyvsp[0].string));}
#line 2983 "proyecto.tab.c"
    break;

  case 217: /* link: LINKNAME LINK title  */
#line 892 "proyecto.y"
                          {
  
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
     (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<a href=%s>%s</a>\n%s", (yyvsp[-1].string),(yyvsp[-2].string),(yyvsp[0].string));}
#line 2994 "proyecto.tab.c"
    break;

  case 218: /* link: LINKNAME LINK scratch  */
#line 899 "proyecto.y"
                            {
    
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
    
     (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<a href=%s>%s</a>\n%s", (yyvsp[-1].string),(yyvsp[-2].string),(yyvsp[0].string));}
#line 3006 "proyecto.tab.c"
    break;

  case 219: /* link: LINKNAME LINK cursiva  */
#line 908 "proyecto.y"
                            {
     
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
  
     (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<a href=%s>%s</a>\n%s", (yyvsp[-1].string),(yyvsp[-2].string),(yyvsp[0].string));}
#line 3018 "proyecto.tab.c"
    break;

  case 220: /* link: LINKNAME LINK textword  */
#line 917 "proyecto.y"
                             {
  
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
     
    (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<a href=%s>%s</a>\n%s", (yyvsp[-1].string),(yyvsp[-2].string),(yyvsp[0].string));}
#line 3030 "proyecto.tab.c"
    break;

  case 221: /* link: LINKNAME LINK emphasis  */
#line 926 "proyecto.y"
                             {
   
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
     
    (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<a href=%s>%s</a>\n%s", (yyvsp[-1].string),(yyvsp[-2].string),(yyvsp[0].string));}
#line 3042 "proyecto.tab.c"
    break;

  case 222: /* link: LINKNAME LINK comb  */
#line 935 "proyecto.y"
                         {
    
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
     
     (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<a href=%s>%s</a>\n%s", (yyvsp[-1].string),(yyvsp[-2].string),(yyvsp[0].string));}
#line 3054 "proyecto.tab.c"
    break;

  case 223: /* link: LINKNAME LINK comb2  */
#line 944 "proyecto.y"
                          {
    
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
  (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<a href=%s>%s</a>\n%s", (yyvsp[-1].string),(yyvsp[-2].string),(yyvsp[0].string));}
#line 3065 "proyecto.tab.c"
    break;

  case 224: /* link: LINKNAME LINK code  */
#line 952 "proyecto.y"
                         {
    
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
     (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<a href=%s>%s</a>\n%s", (yyvsp[-1].string),(yyvsp[-2].string),(yyvsp[0].string));}
#line 3076 "proyecto.tab.c"
    break;

  case 225: /* link: LINKNAME LINK listas  */
#line 960 "proyecto.y"
                           {
    
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
     (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<a href=%s>%s</a>\n%s", (yyvsp[-1].string),(yyvsp[-2].string),(yyvsp[0].string));}
#line 3087 "proyecto.tab.c"
    break;

  case 226: /* link: LINKNAME LINK image  */
#line 966 "proyecto.y"
                          {
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
     (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<a href=%s>%s</a>\n%s", (yyvsp[-1].string),(yyvsp[-2].string),(yyvsp[0].string));}
#line 3097 "proyecto.tab.c"
    break;

  case 227: /* image: IMAGE LINK  */
#line 973 "proyecto.y"
                  {
     rmposition((yyvsp[-1].string));
     rmposition((yyvsp[0].string));
    (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-1].string))+5000));
    sprintf((yyval.string),"<img src=\"%s\" alt=\"%s\">", (yyvsp[0].string),(yyvsp[-1].string));}
#line 3107 "proyecto.tab.c"
    break;

  case 228: /* image: IMAGE LINK title  */
#line 978 "proyecto.y"
                       {
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
   (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<img src=\"%s\" alt=\"%s\">\n%s", (yyvsp[-1].string),(yyvsp[-2].string),(yyvsp[0].string));}
#line 3117 "proyecto.tab.c"
    break;

  case 229: /* image: IMAGE LINK scratch  */
#line 984 "proyecto.y"
                         {
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
    (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<img src=\"%s\" alt=\"%s\">\n%s", (yyvsp[-1].string),(yyvsp[-2].string),(yyvsp[0].string));}
#line 3127 "proyecto.tab.c"
    break;

  case 230: /* image: IMAGE LINK cursiva  */
#line 991 "proyecto.y"
                         {
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
    (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<img src=\"%s\" alt=\"%s\">\n%s", (yyvsp[-1].string),(yyvsp[-2].string),(yyvsp[0].string));}
#line 3137 "proyecto.tab.c"
    break;

  case 231: /* image: IMAGE LINK textword  */
#line 998 "proyecto.y"
                          {
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
    (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<img src=\"%s\" alt=\"%s\">\n%s", (yyvsp[-1].string),(yyvsp[-2].string),(yyvsp[0].string));}
#line 3147 "proyecto.tab.c"
    break;

  case 232: /* image: IMAGE LINK emphasis  */
#line 1005 "proyecto.y"
                          {
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
   (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<img src=\"%s\" alt=\"%s\">\n%s", (yyvsp[-1].string),(yyvsp[-2].string),(yyvsp[0].string));}
#line 3157 "proyecto.tab.c"
    break;

  case 233: /* image: IMAGE LINK comb  */
#line 1012 "proyecto.y"
                      {
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
    (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<img src=\"%s\" alt=\"%s\">\n%s", (yyvsp[-1].string),(yyvsp[-2].string),(yyvsp[0].string));}
#line 3167 "proyecto.tab.c"
    break;

  case 234: /* image: IMAGE LINK comb2  */
#line 1019 "proyecto.y"
                       {
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
   (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<img src=\"%s\" alt=\"%s\">\n%s", (yyvsp[-1].string),(yyvsp[-2].string),(yyvsp[0].string));}
#line 3177 "proyecto.tab.c"
    break;

  case 235: /* image: IMAGE LINK code  */
#line 1026 "proyecto.y"
                      {
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
   (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<img src=\"%s\" alt=\"%s\">\n%s", (yyvsp[-1].string),(yyvsp[-2].string),(yyvsp[0].string));}
#line 3187 "proyecto.tab.c"
    break;

  case 236: /* image: IMAGE LINK listas  */
#line 1033 "proyecto.y"
                        {
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
    (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<img src=\"%s\" alt=\"%s\">\n%s", (yyvsp[-1].string),(yyvsp[-2].string),(yyvsp[0].string));}
#line 3197 "proyecto.tab.c"
    break;

  case 237: /* image: IMAGE LINK link  */
#line 1039 "proyecto.y"
                      {
     rmposition((yyvsp[-2].string));
     rmposition((yyvsp[-1].string));
   (yyval.string)=malloc(sizeof(char)*(strlen((yyvsp[-2].string))+5000));
    sprintf((yyval.string),"<img src=\"%s\" alt=\"%s\">\n%s", (yyvsp[-1].string),(yyvsp[-2].string),(yyvsp[0].string));}
#line 3207 "proyecto.tab.c"
    break;


#line 3211 "proyecto.tab.c"

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

#line 1046 "proyecto.y"




char *rmposition (char *s) //Function to remove symbols
{
    int ast = 0,                     
        write = 0;                     
    
    for (int i = 0; s[i]; i++) {       
        if (s[i] == '*' || s[i] == '_'|| s[i] == '~' ||
         s[i] == '`'  || s[i] == ')' ||  s[i] == '('  || s[i] == ']' ||  s[i] == '[' || s[i] == '!')                
            ast = 1;  
                  
        else                           
            s[write++] = s[i];         
    }
    
    s[write] = 0;   
    return s;                          
}


void openFile(char* fileName){
  if (fileName == NULL) {
				printf("ERROR: No se ha podido crear el fichero.\n");
    }else{
        outputFile=fopen(fileName,"w");
    }
}

void writeLinetoFile(char* str){
  fprintf(outputFile,"%s",str);
}
void closeFile(){
  fclose(outputFile);
}


int main(int argc, char *argv[]) {
  openFile("salida.html");
	extern FILE *yyin;
	switch (argc) {
		case 1:	yyin=stdin;
			yyparse();
			break;
		case 2: yyin = fopen(argv[1], "r");
			if (yyin == NULL) {
				printf("ERROR: No se ha podido abrir el fichero.\n");
			}
			else {
				yyparse();
				fclose(yyin);
			}
			break;
		default: printf("ERROR: Demasiados argumentos.\nSintaxis: %s [fichero_entrada]\n\n", argv[0]);
	}
	
  closeFile();
	return 0;
}
