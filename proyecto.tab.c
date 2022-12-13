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


#line 82 "proyecto.tab.c"

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
  YYSYMBOL_YYACCEPT = 20,                  /* $accept  */
  YYSYMBOL_S = 21,                         /* S  */
  YYSYMBOL_title = 22,                     /* title  */
  YYSYMBOL_textword = 23,                  /* textword  */
  YYSYMBOL_emphasis = 24,                  /* emphasis  */
  YYSYMBOL_cursiva = 25,                   /* cursiva  */
  YYSYMBOL_comb = 26,                      /* comb  */
  YYSYMBOL_comb2 = 27,                     /* comb2  */
  YYSYMBOL_scratch = 28,                   /* scratch  */
  YYSYMBOL_listas = 29                     /* listas  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  65
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   171

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  20
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  126

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   274


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
      15,    16,    17,    18,    19
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    44,    44,    47,    50,    52,    54,    56,    58,    60,
      62,    64,    66,    68,    70,    72,    74,    76,    78,    80,
      82,    84,    86,    88,    90,    92,    94,    96,    98,   100,
     102,   104,   106,   108,   110,   112,   114,   116,   118,   120,
     122,   124,   126,   128,   130,   132,   134,   136,   138,   140,
     142,   144,   146,   148,   150,   152,   154,   163,   164,   165,
     166,   167,   168,   169,   170,   176,   183,   189,   194,   199,
     204,   209,   213,   219,   222,   225,   228,   231,   234,   238,
     242,   250,   253,   256,   259,   262,   265,   268,   271,   275,
     280,   283,   286,   289,   292,   295,   298,   302,   306,   317,
     321,   324,   327,   330,   333,   336,   339,   355,   357,   359,
     361,   363,   365,   367,   369,   371,   373,   375,   377,   379,
     381,   383,   385,   387,   389
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
  "LISTAORD", "LISTADESORD", "LINK", "TEXTWORD", "TITLE", "$accept", "S",
  "title", "textword", "emphasis", "cursiva", "comb", "comb2", "scratch",
  "listas", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-4)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     163,    -3,    -3,    -3,    -3,    -3,    -3,    11,    -4,    29,
      -3,    -3,    29,    29,    -3,    -3,   135,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     3,     4,     5,     6,     7,     8,     0,     2,    73,
      81,    90,    65,    99,   107,   116,    57,     9,    15,    21,
      27,    45,    51,    33,    39,    10,    16,    22,    28,    46,
      52,    34,    40,    11,    17,    23,    29,    47,    53,    35,
      41,    12,    18,    24,    30,    48,    54,    36,    42,    13,
      19,    25,    31,    49,    55,    37,    43,    14,    20,    26,
      32,    50,    56,    38,    44,     1,    74,    78,    75,    76,
      79,    80,    77,    82,    86,    83,    84,    88,    87,    85,
      89,    91,    95,    92,    93,    96,    97,    94,    98,    66,
      70,    67,    68,    71,    72,    69,   100,   104,   103,   102,
     105,   106,   101,   109,   113,   112,   111,   114,   115,   110,
     108,   118,   122,   121,   120,   123,   124,   119,   117,    58,
      64,    59,    62,    63,    61,    60
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
      -4,    -4,    15,   150,    46,    61,    76,    91,   106,   121
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     7,     8,    18,    19,    20,    21,    22,    23,    24
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
       1,     2,     3,     4,     5,     6,     9,    10,    11,    12,
      13,    65,    14,    15,     0,    16,    17,    25,    33,    41,
      49,    57,     0,     0,    66,    73,    81,    89,    96,   103,
     111,   119,     1,     2,     3,     4,     5,     6,     9,    10,
      11,    12,    13,     0,     0,     0,     0,    16,    27,    35,
      43,    51,    59,     0,     0,    68,    75,    83,    91,    98,
     105,   113,   120,    28,    36,    44,    52,    60,     0,     0,
      69,    76,    84,    92,    99,   106,   114,   121,    29,    37,
      45,    53,    61,     0,     0,    70,    77,    85,    93,   100,
     107,   115,   122,    30,    38,    46,    54,    62,     0,     0,
      71,    78,    86,    94,   101,   108,   116,   123,    31,    39,
      47,    55,    63,     0,     0,    72,    79,    87,    95,   102,
     109,   117,   124,    32,    40,    48,    56,    64,     0,     0,
       0,    80,    88,     0,     0,   110,   118,   125,     1,     2,
       3,     4,     5,     6,     9,    10,    11,    12,    13,     0,
      14,    15,    26,    34,    42,    50,    58,     0,     0,    67,
      74,    82,    90,    97,   104,   112,     1,     2,     3,     4,
       5,     6
};

static const yytype_int8 yycheck[] =
{
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,     0,    15,    16,    -1,    18,     1,     2,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    -1,    -1,    -1,    18,     2,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,     2,     3,     4,     5,     6,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,     2,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,     2,     3,     4,     5,     6,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,     2,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,     2,     3,     4,     5,     6,    -1,    -1,
      -1,    10,    11,    -1,    -1,    14,    15,    16,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,     2,     3,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,     3,     4,     5,     6,
       7,     8
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    21,    22,     9,
      10,    11,    12,    13,    15,    16,    18,    22,    23,    24,
      25,    26,    27,    28,    29,    22,    23,    24,    25,    26,
      27,    28,    29,    22,    23,    24,    25,    26,    27,    28,
      29,    22,    23,    24,    25,    26,    27,    28,    29,    22,
      23,    24,    25,    26,    27,    28,    29,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    22,    23,    24,    25,
      26,    27,    28,    22,    23,    24,    25,    26,    27,    28,
      29,    22,    23,    24,    25,    26,    27,    28,    29,    22,
      23,    24,    25,    26,    27,    28,    22,    23,    24,    25,
      26,    27,    28,    22,    23,    24,    25,    26,    27,    28,
      29,    22,    23,    24,    25,    26,    27,    28,    29,    22,
      24,    25,    26,    27,    28,    29
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    20,    21,    22,    22,    22,    22,    22,    22,    22,
      22,    22,    22,    22,    22,    22,    22,    22,    22,    22,
      22,    22,    22,    22,    22,    22,    22,    22,    22,    22,
      22,    22,    22,    22,    22,    22,    22,    22,    22,    22,
      22,    22,    22,    22,    22,    22,    22,    22,    22,    22,
      22,    22,    22,    22,    22,    22,    22,    23,    23,    23,
      23,    23,    23,    23,    23,    24,    24,    24,    24,    24,
      24,    24,    24,    25,    25,    25,    25,    25,    25,    25,
      25,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      27,    27,    27,    27,    27,    27,    27,    27,    27,    28,
      28,    28,    28,    28,    28,    28,    28,    29,    29,    29,
      29,    29,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    29,    29
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       2,     2,     2,     2,     2,     2,     2,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     2,     2,
       2,     2,     2,     2,     2
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
#line 49 "proyecto.y"
   {printf("<h1>%s</h1>\n", (yyvsp[0].string)+2);}
#line 1195 "proyecto.tab.c"
    break;

  case 4: /* title: H2  */
#line 51 "proyecto.y"
    {printf("<h2>%s</h2>\n", (yyvsp[0].string)+3);}
#line 1201 "proyecto.tab.c"
    break;

  case 5: /* title: H3  */
#line 53 "proyecto.y"
    {printf("<h3>%s</h3>\n", (yyvsp[0].string)+4);}
#line 1207 "proyecto.tab.c"
    break;

  case 6: /* title: H4  */
#line 55 "proyecto.y"
    {printf("<h4> %s </h4>\n", (yyvsp[0].string)+5);}
#line 1213 "proyecto.tab.c"
    break;

  case 7: /* title: H5  */
#line 57 "proyecto.y"
    {printf("<h5>%s</h5>\n", (yyvsp[0].string)+6);}
#line 1219 "proyecto.tab.c"
    break;

  case 8: /* title: H6  */
#line 59 "proyecto.y"
    {printf("<h6>%s</h6>\n", (yyvsp[0].string)+7);}
#line 1225 "proyecto.tab.c"
    break;

  case 9: /* title: H1 title  */
#line 61 "proyecto.y"
        {printf("<h1>%s</h1>\n", (yyvsp[-1].string)+2);}
#line 1231 "proyecto.tab.c"
    break;

  case 10: /* title: H2 title  */
#line 63 "proyecto.y"
        {printf("<h2>%s</h2>\n", (yyvsp[-1].string)+3);}
#line 1237 "proyecto.tab.c"
    break;

  case 11: /* title: H3 title  */
#line 65 "proyecto.y"
        {printf("<h3>%s</h3>\n", (yyvsp[-1].string)+4);}
#line 1243 "proyecto.tab.c"
    break;

  case 12: /* title: H4 title  */
#line 67 "proyecto.y"
        {printf("<h4>%s</h4>\n", (yyvsp[-1].string)+5);}
#line 1249 "proyecto.tab.c"
    break;

  case 13: /* title: H5 title  */
#line 69 "proyecto.y"
        {printf("<h5>%s</h5>\n", (yyvsp[-1].string)+6);}
#line 1255 "proyecto.tab.c"
    break;

  case 14: /* title: H6 title  */
#line 71 "proyecto.y"
        {printf("<h6>%s</h6>\n", (yyvsp[-1].string)+7);}
#line 1261 "proyecto.tab.c"
    break;

  case 15: /* title: H1 textword  */
#line 73 "proyecto.y"
        {printf("<h1>%s</h1>\n", (yyvsp[-1].string)+2);}
#line 1267 "proyecto.tab.c"
    break;

  case 16: /* title: H2 textword  */
#line 75 "proyecto.y"
        {printf("<h2>%s</h2>\n", (yyvsp[-1].string)+2);}
#line 1273 "proyecto.tab.c"
    break;

  case 17: /* title: H3 textword  */
#line 77 "proyecto.y"
        {printf("<h3>%s</h3>\n", (yyvsp[-1].string)+2);}
#line 1279 "proyecto.tab.c"
    break;

  case 18: /* title: H4 textword  */
#line 79 "proyecto.y"
        {printf("<h4>%s</h4>\n", (yyvsp[-1].string)+2);}
#line 1285 "proyecto.tab.c"
    break;

  case 19: /* title: H5 textword  */
#line 81 "proyecto.y"
        {printf("<h5>%s</h5>\n", (yyvsp[-1].string)+2);}
#line 1291 "proyecto.tab.c"
    break;

  case 20: /* title: H6 textword  */
#line 83 "proyecto.y"
        {printf("<h6>%s</h6>\n", (yyvsp[-1].string)+2);}
#line 1297 "proyecto.tab.c"
    break;

  case 21: /* title: H1 emphasis  */
#line 85 "proyecto.y"
        {printf("<h1>%s</h1>\n", (yyvsp[-1].string)+2);}
#line 1303 "proyecto.tab.c"
    break;

  case 22: /* title: H2 emphasis  */
#line 87 "proyecto.y"
        {printf("<h2>%s</h2>\n", (yyvsp[-1].string)+3);}
#line 1309 "proyecto.tab.c"
    break;

  case 23: /* title: H3 emphasis  */
#line 89 "proyecto.y"
        {printf("<h3>%s</h3>\n", (yyvsp[-1].string)+4);}
#line 1315 "proyecto.tab.c"
    break;

  case 24: /* title: H4 emphasis  */
#line 91 "proyecto.y"
        {printf("<h4>%s</h4>\n", (yyvsp[-1].string)+5);}
#line 1321 "proyecto.tab.c"
    break;

  case 25: /* title: H5 emphasis  */
#line 93 "proyecto.y"
        {printf("<h5>%s</h5>\n", (yyvsp[-1].string)+6);}
#line 1327 "proyecto.tab.c"
    break;

  case 26: /* title: H6 emphasis  */
#line 95 "proyecto.y"
        {printf("<h6>%s</h6>\n", (yyvsp[-1].string)+7);}
#line 1333 "proyecto.tab.c"
    break;

  case 27: /* title: H1 cursiva  */
#line 97 "proyecto.y"
        {printf("<h1>%s</h1>\n", (yyvsp[-1].string)+2);}
#line 1339 "proyecto.tab.c"
    break;

  case 28: /* title: H2 cursiva  */
#line 99 "proyecto.y"
        {printf("<h2>%s</h2>\n", (yyvsp[-1].string)+3);}
#line 1345 "proyecto.tab.c"
    break;

  case 29: /* title: H3 cursiva  */
#line 101 "proyecto.y"
        {printf("<h3>%s</h3>\n", (yyvsp[-1].string)+4);}
#line 1351 "proyecto.tab.c"
    break;

  case 30: /* title: H4 cursiva  */
#line 103 "proyecto.y"
        {printf("<h4>%s</h4>\n", (yyvsp[-1].string)+5);}
#line 1357 "proyecto.tab.c"
    break;

  case 31: /* title: H5 cursiva  */
#line 105 "proyecto.y"
        {printf("<h5>%s</h5>\n", (yyvsp[-1].string)+6);}
#line 1363 "proyecto.tab.c"
    break;

  case 32: /* title: H6 cursiva  */
#line 107 "proyecto.y"
        {printf("<h6>%s</h6>\n", (yyvsp[-1].string)+7);}
#line 1369 "proyecto.tab.c"
    break;

  case 33: /* title: H1 scratch  */
#line 109 "proyecto.y"
        {printf("<h1>%s</h1>\n", (yyvsp[-1].string)+2);}
#line 1375 "proyecto.tab.c"
    break;

  case 34: /* title: H2 scratch  */
#line 111 "proyecto.y"
        {printf("<h2>%s</h2>\n", (yyvsp[-1].string)+3);}
#line 1381 "proyecto.tab.c"
    break;

  case 35: /* title: H3 scratch  */
#line 113 "proyecto.y"
        {printf("<h3>%s</h3>\n", (yyvsp[-1].string)+4);}
#line 1387 "proyecto.tab.c"
    break;

  case 36: /* title: H4 scratch  */
#line 115 "proyecto.y"
        {printf("<h4>%s</h4>\n", (yyvsp[-1].string)+5);}
#line 1393 "proyecto.tab.c"
    break;

  case 37: /* title: H5 scratch  */
#line 117 "proyecto.y"
        {printf("<h5>%s</h5>\n", (yyvsp[-1].string)+6);}
#line 1399 "proyecto.tab.c"
    break;

  case 38: /* title: H6 scratch  */
#line 119 "proyecto.y"
        {printf("<h6>%s</h6>\n", (yyvsp[-1].string)+7);}
#line 1405 "proyecto.tab.c"
    break;

  case 39: /* title: H1 listas  */
#line 121 "proyecto.y"
        {printf("<h1>%s</h1>\n", (yyvsp[-1].string)+2);}
#line 1411 "proyecto.tab.c"
    break;

  case 40: /* title: H2 listas  */
#line 123 "proyecto.y"
        {printf("<h2>%s</h2>\n", (yyvsp[-1].string)+3);}
#line 1417 "proyecto.tab.c"
    break;

  case 41: /* title: H3 listas  */
#line 125 "proyecto.y"
        {printf("<h3>%s</h3>\n", (yyvsp[-1].string)+4);}
#line 1423 "proyecto.tab.c"
    break;

  case 42: /* title: H4 listas  */
#line 127 "proyecto.y"
        {printf("<h4>%s</h4>\n", (yyvsp[-1].string)+5);}
#line 1429 "proyecto.tab.c"
    break;

  case 43: /* title: H5 listas  */
#line 129 "proyecto.y"
        {printf("<h5>%s</h5>\n", (yyvsp[-1].string)+6);}
#line 1435 "proyecto.tab.c"
    break;

  case 44: /* title: H6 listas  */
#line 131 "proyecto.y"
        {printf("<h6>%s</h6>\n", (yyvsp[-1].string)+7);}
#line 1441 "proyecto.tab.c"
    break;

  case 45: /* title: H1 comb  */
#line 133 "proyecto.y"
        {printf("<h1>%s</h1>\n", (yyvsp[-1].string)+2);}
#line 1447 "proyecto.tab.c"
    break;

  case 46: /* title: H2 comb  */
#line 135 "proyecto.y"
        {printf("<h2>%s</h2>\n", (yyvsp[-1].string)+3);}
#line 1453 "proyecto.tab.c"
    break;

  case 47: /* title: H3 comb  */
#line 137 "proyecto.y"
        {printf("<h3>%s</h3>\n", (yyvsp[-1].string)+4);}
#line 1459 "proyecto.tab.c"
    break;

  case 48: /* title: H4 comb  */
#line 139 "proyecto.y"
        {printf("<h4>%s</h4>\n", (yyvsp[-1].string)+5);}
#line 1465 "proyecto.tab.c"
    break;

  case 49: /* title: H5 comb  */
#line 141 "proyecto.y"
        {printf("<h5>%s</h5>\n", (yyvsp[-1].string)+6);}
#line 1471 "proyecto.tab.c"
    break;

  case 50: /* title: H6 comb  */
#line 143 "proyecto.y"
        {printf("<h6>%s</h6>\n", (yyvsp[-1].string)+7);}
#line 1477 "proyecto.tab.c"
    break;

  case 51: /* title: H1 comb2  */
#line 145 "proyecto.y"
        {printf("<h1>%s</h1>\n", (yyvsp[-1].string)+2);}
#line 1483 "proyecto.tab.c"
    break;

  case 52: /* title: H2 comb2  */
#line 147 "proyecto.y"
        {printf("<h2>%s</h2>\n", (yyvsp[-1].string)+3);}
#line 1489 "proyecto.tab.c"
    break;

  case 53: /* title: H3 comb2  */
#line 149 "proyecto.y"
        {printf("<h3>%s</h3>\n", (yyvsp[-1].string)+4);}
#line 1495 "proyecto.tab.c"
    break;

  case 54: /* title: H4 comb2  */
#line 151 "proyecto.y"
        {printf("<h4>%s</h4>\n", (yyvsp[-1].string)+5);}
#line 1501 "proyecto.tab.c"
    break;

  case 55: /* title: H5 comb2  */
#line 153 "proyecto.y"
        {printf("<h5>%s</h5>\n", (yyvsp[-1].string)+6);}
#line 1507 "proyecto.tab.c"
    break;

  case 56: /* title: H6 comb2  */
#line 155 "proyecto.y"
        {printf("<h6>%s</h6>\n", (yyvsp[-1].string)+7);}
#line 1513 "proyecto.tab.c"
    break;

  case 57: /* textword: TEXTWORD  */
#line 163 "proyecto.y"
                  {printf("<p>%s</p>\n", (yyvsp[0].string)); }
#line 1519 "proyecto.tab.c"
    break;

  case 58: /* textword: TEXTWORD title  */
#line 164 "proyecto.y"
                        {printf("<p>%s</p>\n",(yyvsp[-1].string));}
#line 1525 "proyecto.tab.c"
    break;

  case 65: /* emphasis: EMPHASIS  */
#line 178 "proyecto.y"
          { rmposition((yyvsp[0].string));
          
          printf("<b>%s</b>\n", (yyvsp[0].string));}
#line 1533 "proyecto.tab.c"
    break;

  case 66: /* emphasis: EMPHASIS title  */
#line 185 "proyecto.y"
          {rmposition((yyvsp[-1].string));
          printf("<b>%s</b>\n", (yyvsp[-1].string)); }
#line 1540 "proyecto.tab.c"
    break;

  case 67: /* emphasis: EMPHASIS emphasis  */
#line 191 "proyecto.y"
          {rmposition((yyvsp[-1].string));
          printf("<b>%s</b>\n", (yyvsp[-1].string)); }
#line 1547 "proyecto.tab.c"
    break;

  case 68: /* emphasis: EMPHASIS cursiva  */
#line 196 "proyecto.y"
          {rmposition((yyvsp[-1].string));
          printf("<b>%s</b>\n", (yyvsp[-1].string)); }
#line 1554 "proyecto.tab.c"
    break;

  case 69: /* emphasis: EMPHASIS scratch  */
#line 201 "proyecto.y"
          {rmposition((yyvsp[-1].string));
          printf("<b>%s</b>\n", (yyvsp[-1].string)); }
#line 1561 "proyecto.tab.c"
    break;

  case 70: /* emphasis: EMPHASIS textword  */
#line 206 "proyecto.y"
          {rmposition((yyvsp[-1].string));
          printf("<b>%s</b>\n", (yyvsp[-1].string)); }
#line 1568 "proyecto.tab.c"
    break;

  case 71: /* emphasis: EMPHASIS comb  */
#line 210 "proyecto.y"
          {rmposition((yyvsp[-1].string));
          printf("<b>%s</b>\n", (yyvsp[-1].string)); }
#line 1575 "proyecto.tab.c"
    break;

  case 72: /* emphasis: EMPHASIS comb2  */
#line 214 "proyecto.y"
          {rmposition((yyvsp[-1].string));
          printf("<b>%s</b>\n", (yyvsp[-1].string)); }
#line 1582 "proyecto.tab.c"
    break;

  case 73: /* cursiva: CURSIVA  */
#line 219 "proyecto.y"
                  {rmposition((yyvsp[0].string));
         printf("<em>%s</em>\n", (yyvsp[0].string)); }
#line 1589 "proyecto.tab.c"
    break;

  case 74: /* cursiva: CURSIVA title  */
#line 223 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<em>%s</em>\n", (yyvsp[-1].string)); }
#line 1596 "proyecto.tab.c"
    break;

  case 75: /* cursiva: CURSIVA emphasis  */
#line 226 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<em>%s</em>\n", (yyvsp[-1].string)); }
#line 1603 "proyecto.tab.c"
    break;

  case 76: /* cursiva: CURSIVA cursiva  */
#line 229 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<em>%s</em>\n", (yyvsp[-1].string)); }
#line 1610 "proyecto.tab.c"
    break;

  case 77: /* cursiva: CURSIVA scratch  */
#line 232 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<em>%s</em>\n", (yyvsp[-1].string)); }
#line 1617 "proyecto.tab.c"
    break;

  case 78: /* cursiva: CURSIVA textword  */
#line 235 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<em>%s</em>\n", (yyvsp[-1].string)); }
#line 1624 "proyecto.tab.c"
    break;

  case 79: /* cursiva: CURSIVA comb  */
#line 239 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<em>%s</em>\n", (yyvsp[-1].string)); }
#line 1631 "proyecto.tab.c"
    break;

  case 80: /* cursiva: CURSIVA comb2  */
#line 243 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<em>%s</em>\n", (yyvsp[-1].string)); }
#line 1638 "proyecto.tab.c"
    break;

  case 81: /* comb: COMB  */
#line 250 "proyecto.y"
               {rmposition((yyvsp[0].string));
         printf("<strong><em>%s</em></strong>\n", (yyvsp[0].string)); }
#line 1645 "proyecto.tab.c"
    break;

  case 82: /* comb: COMB title  */
#line 254 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<strong><em>%s</em></strong>\n", (yyvsp[-1].string)); }
#line 1652 "proyecto.tab.c"
    break;

  case 83: /* comb: COMB emphasis  */
#line 257 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<strong><em>%s</em></strong>\n", (yyvsp[-1].string)); }
#line 1659 "proyecto.tab.c"
    break;

  case 84: /* comb: COMB cursiva  */
#line 260 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<strong><em>%s</em></strong>\n", (yyvsp[-1].string)); }
#line 1666 "proyecto.tab.c"
    break;

  case 85: /* comb: COMB scratch  */
#line 263 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<strong><em>%s</em></strong>\n", (yyvsp[-1].string)); }
#line 1673 "proyecto.tab.c"
    break;

  case 86: /* comb: COMB textword  */
#line 266 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<strong><em>%s</em></strong>\n", (yyvsp[-1].string)); }
#line 1680 "proyecto.tab.c"
    break;

  case 87: /* comb: COMB comb2  */
#line 269 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<strong><em>%s</em></strong>\n", (yyvsp[-1].string)); }
#line 1687 "proyecto.tab.c"
    break;

  case 88: /* comb: COMB comb  */
#line 272 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<strong><em>%s</em></strong>\n", (yyvsp[-1].string)); }
#line 1694 "proyecto.tab.c"
    break;

  case 89: /* comb: COMB listas  */
#line 276 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<strong><em>%s</em></strong>\n", (yyvsp[-1].string)); }
#line 1701 "proyecto.tab.c"
    break;

  case 90: /* comb2: COMB2  */
#line 280 "proyecto.y"
                 {rmposition((yyvsp[0].string));
         printf("<del><em>%s</em></del>\n", (yyvsp[0].string)); }
#line 1708 "proyecto.tab.c"
    break;

  case 91: /* comb2: COMB2 title  */
#line 284 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del><em>%s</em></del>\n", (yyvsp[-1].string)); }
#line 1715 "proyecto.tab.c"
    break;

  case 92: /* comb2: COMB2 emphasis  */
#line 287 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del><em>%s</em></del>\n", (yyvsp[-1].string)); }
#line 1722 "proyecto.tab.c"
    break;

  case 93: /* comb2: COMB2 cursiva  */
#line 290 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del><em>%s</em></del>\n", (yyvsp[-1].string)); }
#line 1729 "proyecto.tab.c"
    break;

  case 94: /* comb2: COMB2 scratch  */
#line 293 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del><em>%s</em></del>\n", (yyvsp[-1].string)); }
#line 1736 "proyecto.tab.c"
    break;

  case 95: /* comb2: COMB2 textword  */
#line 296 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del><em>%s</em></del>\n", (yyvsp[-1].string)); }
#line 1743 "proyecto.tab.c"
    break;

  case 96: /* comb2: COMB2 comb  */
#line 299 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del><em>%s</em></del>\n", (yyvsp[-1].string)); }
#line 1750 "proyecto.tab.c"
    break;

  case 97: /* comb2: COMB2 comb2  */
#line 303 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del><em>%s</em></del>\n", (yyvsp[-1].string)); }
#line 1757 "proyecto.tab.c"
    break;

  case 98: /* comb2: COMB2 listas  */
#line 307 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del><em>%s</em></del>\n", (yyvsp[-1].string)); }
#line 1764 "proyecto.tab.c"
    break;

  case 99: /* scratch: SCRATCH  */
#line 317 "proyecto.y"
                 {rmposition((yyvsp[0].string));

         printf("<del>%s</del>\n", (yyvsp[0].string)); }
#line 1772 "proyecto.tab.c"
    break;

  case 100: /* scratch: SCRATCH title  */
#line 322 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del>%s</del>\n", (yyvsp[-1].string)); }
#line 1779 "proyecto.tab.c"
    break;

  case 101: /* scratch: SCRATCH scratch  */
#line 325 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del>%s</del>\n", (yyvsp[-1].string)); }
#line 1786 "proyecto.tab.c"
    break;

  case 102: /* scratch: SCRATCH cursiva  */
#line 328 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del>%s</del>\n", (yyvsp[-1].string)); }
#line 1793 "proyecto.tab.c"
    break;

  case 103: /* scratch: SCRATCH emphasis  */
#line 331 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del>%s</del>\n", (yyvsp[-1].string)); }
#line 1800 "proyecto.tab.c"
    break;

  case 104: /* scratch: SCRATCH textword  */
#line 334 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del>%s</del>\n", (yyvsp[-1].string)); }
#line 1807 "proyecto.tab.c"
    break;

  case 105: /* scratch: SCRATCH comb  */
#line 337 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del>%s</del>\n", (yyvsp[-1].string)); }
#line 1814 "proyecto.tab.c"
    break;

  case 106: /* scratch: SCRATCH comb2  */
#line 340 "proyecto.y"
         {rmposition((yyvsp[-1].string));
         printf("<del>%s</del>\n", (yyvsp[-1].string)); }
#line 1821 "proyecto.tab.c"
    break;

  case 107: /* listas: LISTAORD  */
#line 355 "proyecto.y"
                 {printf("<li>%s</li>\n",(yyvsp[0].string)+3);}
#line 1827 "proyecto.tab.c"
    break;

  case 108: /* listas: LISTAORD listas  */
#line 357 "proyecto.y"
                         {printf("<li>%s</li>\n",(yyvsp[-1].string)+3);}
#line 1833 "proyecto.tab.c"
    break;

  case 109: /* listas: LISTAORD title  */
#line 359 "proyecto.y"
                        {printf("<li>%s</li>\n",(yyvsp[-1].string)+3);}
#line 1839 "proyecto.tab.c"
    break;

  case 110: /* listas: LISTAORD scratch  */
#line 361 "proyecto.y"
                          {printf("<li>%s</li>\n",(yyvsp[-1].string)+3);}
#line 1845 "proyecto.tab.c"
    break;

  case 111: /* listas: LISTAORD cursiva  */
#line 363 "proyecto.y"
                          {printf("<li>%s</li>\n",(yyvsp[-1].string)+3);}
#line 1851 "proyecto.tab.c"
    break;

  case 112: /* listas: LISTAORD emphasis  */
#line 365 "proyecto.y"
                           {printf("<li>%s</li>\n",(yyvsp[-1].string)+3);}
#line 1857 "proyecto.tab.c"
    break;

  case 113: /* listas: LISTAORD textword  */
#line 367 "proyecto.y"
                           {printf("<li>%s</li>\n", (yyvsp[-1].string)+3);}
#line 1863 "proyecto.tab.c"
    break;

  case 114: /* listas: LISTAORD comb  */
#line 369 "proyecto.y"
                       {printf("<li>%s</li>\n", (yyvsp[-1].string)+3);}
#line 1869 "proyecto.tab.c"
    break;

  case 115: /* listas: LISTAORD comb2  */
#line 371 "proyecto.y"
                        {printf("<li>%s</li>\n", (yyvsp[-1].string)+3);}
#line 1875 "proyecto.tab.c"
    break;

  case 116: /* listas: LISTADESORD  */
#line 373 "proyecto.y"
                     {printf("<li>%s</li>\n",(yyvsp[0].string)+2);}
#line 1881 "proyecto.tab.c"
    break;

  case 117: /* listas: LISTADESORD listas  */
#line 375 "proyecto.y"
                            {printf("<li>%s</li>\n",(yyvsp[-1].string)+2);}
#line 1887 "proyecto.tab.c"
    break;

  case 118: /* listas: LISTADESORD title  */
#line 377 "proyecto.y"
                           {printf("<li>%s</li>\n",(yyvsp[-1].string)+2);}
#line 1893 "proyecto.tab.c"
    break;

  case 119: /* listas: LISTADESORD scratch  */
#line 379 "proyecto.y"
                             {printf("<li>%s</li>\n",(yyvsp[-1].string)+2);}
#line 1899 "proyecto.tab.c"
    break;

  case 120: /* listas: LISTADESORD cursiva  */
#line 381 "proyecto.y"
                             {printf("<li>%s</li>\n",(yyvsp[-1].string)+2);}
#line 1905 "proyecto.tab.c"
    break;

  case 121: /* listas: LISTADESORD emphasis  */
#line 383 "proyecto.y"
                              {printf("<li>%s</li>\n",(yyvsp[-1].string)+2);}
#line 1911 "proyecto.tab.c"
    break;

  case 122: /* listas: LISTADESORD textword  */
#line 385 "proyecto.y"
                              {printf("<li>%s</li>\n", (yyvsp[-1].string)+2);}
#line 1917 "proyecto.tab.c"
    break;

  case 123: /* listas: LISTADESORD comb  */
#line 387 "proyecto.y"
                          {printf("<li>%s</li>\n", (yyvsp[-1].string)+2);}
#line 1923 "proyecto.tab.c"
    break;

  case 124: /* listas: LISTADESORD comb2  */
#line 389 "proyecto.y"
                           {printf("<li>%s</li>\n", (yyvsp[-1].string)+2);}
#line 1929 "proyecto.tab.c"
    break;


#line 1933 "proyecto.tab.c"

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

#line 395 "proyecto.y"




char *rmposition (char *s) //Function to remove symbols
{
    int ast = 0,                     
        write = 0;                     
    
    for (int i = 0; s[i]; i++) {       
        if (s[i] == '*' || s[i] == '_'|| s[i] == '~' )                
            ast = 1;                 
        else                           
            s[write++] = s[i];         
    }
    s[write] = 0;                       
    
    return s;                          
}






int main(int argc, char *argv[]) {
	extern FILE *yyin;
	yyin = fopen(argv[1], "r");
	yyparse();
	return 0;
}






