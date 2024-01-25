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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         sql_yyparse
#define yylex           sql_yylex
#define yyerror         sql_yyerror
#define yydebug         sql_yydebug
#define yynerrs         sql_yynerrs

/* First part of user prologue.  */
#line 7 "source/sql.y"

   /*
   * SQLPARSER
   * SQL YACC Rules and Actions
   * Copyright (c) 2003 - Marcelo Lombardo  <lombardo@uol.com.br>
   * All Rights Reserved
   */
   #ifdef HB_THREAD_SUPPORT
   #undef HB_THREAD_SUPPORT
   #endif

   #include "hbsql.h"

   #include <stdlib.h>
   #include <stdio.h>
   #include <string.h>
   #include <ctype.h>

   #include "msg.ch"
   #include "hbapi.h"
   #include "hbapiitm.h"

   /* These symbols are used internally in bison.simple */

   #undef alloca
   #define alloca  hb_xgrab
   #undef malloc
   #define malloc  hb_xgrab
   #undef free
   #define free hb_xfree


#line 109 ".hbmk/linux/gcc/sqly.c"

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

#include "sqly.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ERRORVAL = 3,                   /* ERRORVAL  */
  YYSYMBOL_INTEGERVAL = 4,                 /* INTEGERVAL  */
  YYSYMBOL_STRINGVAL = 5,                  /* STRINGVAL  */
  YYSYMBOL_REALVAL = 6,                    /* REALVAL  */
  YYSYMBOL_DATEVAL = 7,                    /* DATEVAL  */
  YYSYMBOL_BINDVAR = 8,                    /* BINDVAR  */
  YYSYMBOL_NULLVAL = 9,                    /* NULLVAL  */
  YYSYMBOL_PARAM = 10,                     /* PARAM  */
  YYSYMBOL_PARAM_NOT_NULL = 11,            /* PARAM_NOT_NULL  */
  YYSYMBOL_IDENT = 12,                     /* IDENT  */
  YYSYMBOL_QUOTED_IDENT = 13,              /* QUOTED_IDENT  */
  YYSYMBOL_ASTERISK = 14,                  /* ASTERISK  */
  YYSYMBOL_EQUALS = 15,                    /* EQUALS  */
  YYSYMBOL_COMPARE = 16,                   /* COMPARE  */
  YYSYMBOL_OPERATOR = 17,                  /* OPERATOR  */
  YYSYMBOL_IS_OP = 18,                     /* IS_OP  */
  YYSYMBOL_AND_OP = 19,                    /* AND_OP  */
  YYSYMBOL_OR = 20,                        /* OR  */
  YYSYMBOL_IN_OP = 21,                     /* IN_OP  */
  YYSYMBOL_INSERT = 22,                    /* INSERT  */
  YYSYMBOL_UPDATE = 23,                    /* UPDATE  */
  YYSYMBOL_SELECT = 24,                    /* SELECT  */
  YYSYMBOL_DELETE_SQL = 25,                /* DELETE_SQL  */
  YYSYMBOL_ALL = 26,                       /* ALL  */
  YYSYMBOL_DISTINCT = 27,                  /* DISTINCT  */
  YYSYMBOL_WHERE = 28,                     /* WHERE  */
  YYSYMBOL_ORDER = 29,                     /* ORDER  */
  YYSYMBOL_LIMIT = 30,                     /* LIMIT  */
  YYSYMBOL_ASC = 31,                       /* ASC  */
  YYSYMBOL_DESC = 32,                      /* DESC  */
  YYSYMBOL_FROM = 33,                      /* FROM  */
  YYSYMBOL_INTO = 34,                      /* INTO  */
  YYSYMBOL_BY = 35,                        /* BY  */
  YYSYMBOL_VALUES = 36,                    /* VALUES  */
  YYSYMBOL_SET = 37,                       /* SET  */
  YYSYMBOL_NOT = 38,                       /* NOT  */
  YYSYMBOL_AS = 39,                        /* AS  */
  YYSYMBOL_UNION = 40,                     /* UNION  */
  YYSYMBOL_LEFT = 41,                      /* LEFT  */
  YYSYMBOL_OUTER = 42,                     /* OUTER  */
  YYSYMBOL_JOIN = 43,                      /* JOIN  */
  YYSYMBOL_GROUP = 44,                     /* GROUP  */
  YYSYMBOL_RIGHT = 45,                     /* RIGHT  */
  YYSYMBOL_LOCK = 46,                      /* LOCK  */
  YYSYMBOL_LIKE = 47,                      /* LIKE  */
  YYSYMBOL_COUNT = 48,                     /* COUNT  */
  YYSYMBOL_MAX = 49,                       /* MAX  */
  YYSYMBOL_MIN = 50,                       /* MIN  */
  YYSYMBOL_TOKEN_ISNULL = 51,              /* TOKEN_ISNULL  */
  YYSYMBOL_SUBSTR = 52,                    /* SUBSTR  */
  YYSYMBOL_ABS = 53,                       /* ABS  */
  YYSYMBOL_POWER = 54,                     /* POWER  */
  YYSYMBOL_ROUND = 55,                     /* ROUND  */
  YYSYMBOL_TRIM = 56,                      /* TRIM  */
  YYSYMBOL_SUM = 57,                       /* SUM  */
  YYSYMBOL_AVG = 58,                       /* AVG  */
  YYSYMBOL_CURRENT_DATE = 59,              /* CURRENT_DATE  */
  YYSYMBOL_60_ = 60,                       /* ','  */
  YYSYMBOL_61_ = 61,                       /* '('  */
  YYSYMBOL_62_ = 62,                       /* ')'  */
  YYSYMBOL_63_ = 63,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 64,                  /* $accept  */
  YYSYMBOL_sql_expression = 65,            /* sql_expression  */
  YYSYMBOL_select_final = 66,              /* select_final  */
  YYSYMBOL_union_expression = 67,          /* union_expression  */
  YYSYMBOL_select_expression = 68,         /* select_expression  */
  YYSYMBOL_opt_order_by = 69,              /* opt_order_by  */
  YYSYMBOL_order_by_item_commalist = 70,   /* order_by_item_commalist  */
  YYSYMBOL_order_by_item = 71,             /* order_by_item  */
  YYSYMBOL_opt_limit = 72,                 /* opt_limit  */
  YYSYMBOL_insert_final = 73,              /* insert_final  */
  YYSYMBOL_update_final = 74,              /* update_final  */
  YYSYMBOL_delete_final = 75,              /* delete_final  */
  YYSYMBOL_update_item_commalist = 76,     /* update_item_commalist  */
  YYSYMBOL_update_item = 77,               /* update_item  */
  YYSYMBOL_insert_item_expression = 78,    /* insert_item_expression  */
  YYSYMBOL_insert_item_commalist = 79,     /* insert_item_commalist  */
  YYSYMBOL_insert_value_commalist = 80,    /* insert_value_commalist  */
  YYSYMBOL_insert_col_value = 81,          /* insert_col_value  */
  YYSYMBOL_opt_dist = 82,                  /* opt_dist  */
  YYSYMBOL_select_item_commalist = 83,     /* select_item_commalist  */
  YYSYMBOL_select_item = 84,               /* select_item  */
  YYSYMBOL_opt_as = 85,                    /* opt_as  */
  YYSYMBOL_column = 86,                    /* column  */
  YYSYMBOL_select_col_constructor = 87,    /* select_col_constructor  */
  YYSYMBOL_col_constructor_expr = 88,      /* col_constructor_expr  */
  YYSYMBOL_table_reference_commalist = 89, /* table_reference_commalist  */
  YYSYMBOL_table_reference = 90,           /* table_reference  */
  YYSYMBOL_opt_table_alias = 91,           /* opt_table_alias  */
  YYSYMBOL_table = 92,                     /* table  */
  YYSYMBOL_opt_where = 93,                 /* opt_where  */
  YYSYMBOL_opt_group = 94,                 /* opt_group  */
  YYSYMBOL_group_by_item_commalist = 95,   /* group_by_item_commalist  */
  YYSYMBOL_group_by_col_expr = 96,         /* group_by_col_expr  */
  YYSYMBOL_opt_having = 97,                /* opt_having  */
  YYSYMBOL_conditional_expression = 98,    /* conditional_expression  */
  YYSYMBOL_conditional_term = 99,          /* conditional_term  */
  YYSYMBOL_conditional_factor = 100,       /* conditional_factor  */
  YYSYMBOL_conditional_primary = 101,      /* conditional_primary  */
  YYSYMBOL_simple_condition = 102,         /* simple_condition  */
  YYSYMBOL_scalar_expression_commalist = 103, /* scalar_expression_commalist  */
  YYSYMBOL_opt_lock = 104,                 /* opt_lock  */
  YYSYMBOL_col_constructor2 = 105,         /* col_constructor2  */
  YYSYMBOL_col_constructor = 106,          /* col_constructor  */
  YYSYMBOL_col_value = 107,                /* col_value  */
  YYSYMBOL_col_name = 108,                 /* col_name  */
  YYSYMBOL_col_list_name = 109             /* col_list_name  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 48 "source/sql.y"

   int yyerror(void * stmt,const char * msg);
   int yyparse(void * stmt);
   int yylex(YYSTYPE* yylvaluep, void* s);

#line 258 ".hbmk/linux/gcc/sqly.c"


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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   595

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  141
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  288

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   314


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
      61,    62,     2,     2,    60,     2,    63,     2,     2,     2,
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
static const yytype_int16 yyrline[] =
{
       0,   175,   175,   181,   187,   193,   199,   210,   215,   223,
     228,   233,   238,   246,   254,   258,   266,   270,   277,   282,
     287,   295,   300,   308,   315,   322,   329,   334,   341,   348,
     352,   359,   363,   370,   374,   381,   388,   393,   398,   406,
     411,   419,   423,   428,   436,   441,   446,   451,   459,   464,
     469,   474,   479,   484,   492,   497,   502,   507,   512,   517,
     522,   527,   532,   537,   542,   547,   552,   557,   562,   570,
     575,   580,   585,   593,   598,   606,   611,   619,   624,   632,
     637,   642,   647,   655,   660,   668,   673,   681,   686,   694,
     697,   702,   707,   714,   720,   725,   733,   738,   746,   751,
     759,   763,   771,   776,   781,   786,   791,   796,   801,   806,
     811,   816,   821,   826,   831,   836,   841,   846,   854,   859,
     867,   872,   880,   884,   892,   897,   905,   910,   915,   920,
     925,   930,   935,   940,   948,   953,   958,   963,   968,   973,
     981,   986
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
  "\"end of file\"", "error", "\"invalid token\"", "ERRORVAL",
  "INTEGERVAL", "STRINGVAL", "REALVAL", "DATEVAL", "BINDVAR", "NULLVAL",
  "PARAM", "PARAM_NOT_NULL", "IDENT", "QUOTED_IDENT", "ASTERISK", "EQUALS",
  "COMPARE", "OPERATOR", "IS_OP", "AND_OP", "OR", "IN_OP", "INSERT",
  "UPDATE", "SELECT", "DELETE_SQL", "ALL", "DISTINCT", "WHERE", "ORDER",
  "LIMIT", "ASC", "DESC", "FROM", "INTO", "BY", "VALUES", "SET", "NOT",
  "AS", "UNION", "LEFT", "OUTER", "JOIN", "GROUP", "RIGHT", "LOCK", "LIKE",
  "COUNT", "MAX", "MIN", "TOKEN_ISNULL", "SUBSTR", "ABS", "POWER", "ROUND",
  "TRIM", "SUM", "AVG", "CURRENT_DATE", "','", "'('", "')'", "'.'",
  "$accept", "sql_expression", "select_final", "union_expression",
  "select_expression", "opt_order_by", "order_by_item_commalist",
  "order_by_item", "opt_limit", "insert_final", "update_final",
  "delete_final", "update_item_commalist", "update_item",
  "insert_item_expression", "insert_item_commalist",
  "insert_value_commalist", "insert_col_value", "opt_dist",
  "select_item_commalist", "select_item", "opt_as", "column",
  "select_col_constructor", "col_constructor_expr",
  "table_reference_commalist", "table_reference", "opt_table_alias",
  "table", "opt_where", "opt_group", "group_by_item_commalist",
  "group_by_col_expr", "opt_having", "conditional_expression",
  "conditional_term", "conditional_factor", "conditional_primary",
  "simple_condition", "scalar_expression_commalist", "opt_lock",
  "col_constructor2", "col_constructor", "col_value", "col_name",
  "col_list_name", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-102)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     167,  -102,   -23,     2,    10,    -5,    64,  -102,    46,    51,
    -102,  -102,  -102,   188,    65,  -102,  -102,  -102,    90,    95,
     152,  -102,   126,     2,  -102,   107,   173,   197,    82,  -102,
     110,    28,  -102,  -102,  -102,  -102,   151,   175,   174,  -102,
      90,  -102,    90,  -102,    28,   177,   152,  -102,  -102,   -12,
    -102,   205,   268,   226,   248,  -102,   282,  -102,  -102,    58,
    -102,   212,  -102,    28,  -102,   327,  -102,  -102,  -102,  -102,
    -102,   296,  -102,  -102,  -102,   262,  -102,  -102,   237,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   280,
     327,    49,   308,   190,  -102,  -102,  -102,  -102,   286,   385,
     248,   275,   331,   333,  -102,  -102,  -102,   315,   303,   309,
    -102,   127,    28,  -102,   554,  -102,   190,  -102,   161,   310,
     496,    25,  -102,    48,    55,    30,    37,    57,    62,   146,
      61,    66,    71,  -102,    94,     2,   226,    14,  -102,   399,
     413,   202,  -102,    43,     5,   471,   485,    12,   248,   248,
     359,   312,    60,   329,   282,   332,   554,   282,  -102,  -102,
    -102,   166,  -102,  -102,   375,  -102,  -102,  -102,  -102,  -102,
     148,   544,   544,  -102,  -102,  -102,   496,   496,  -102,   496,
     496,  -102,  -102,  -102,  -102,   -11,  -102,   308,  -102,  -102,
    -102,   327,  -102,   327,  -102,  -102,   306,   190,   306,   190,
    -102,   390,   333,  -102,  -102,   507,   339,   554,   358,  -102,
     370,  -102,  -102,   554,  -102,  -102,   496,   258,  -102,  -102,
    -102,    99,     6,   120,   124,     2,   371,  -102,   125,   131,
     340,   352,  -102,   354,   260,  -102,   507,  -102,   282,   282,
    -102,   133,   367,  -102,   496,  -102,  -102,  -102,  -102,   393,
    -102,  -102,  -102,  -102,  -102,  -102,   554,  -102,   368,   261,
    -102,  -102,  -102,   258,   140,   314,  -102,  -102,  -102,   369,
    -102,   282,   282,   372,  -102,  -102,  -102,   425,   383,   314,
     554,  -102,  -102,   283,   554,  -102,   397,  -102
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     6,     0,     0,   120,     0,     0,    93,     8,     7,
       3,     4,     5,     0,     0,    81,    79,    80,     0,     0,
      77,   121,    36,     0,     1,    14,     0,     0,    29,    82,
       0,     0,    78,    75,    37,    38,    21,    83,     0,     2,
       0,     9,     0,    11,     0,     0,    77,   140,   141,    83,
      26,     0,     0,     0,     0,    25,     0,    10,    12,     0,
      31,     0,    76,     0,    24,     0,    22,   126,   128,   127,
     130,     0,   129,   131,   132,   137,   136,    43,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    44,    41,    48,    54,   124,   125,   137,     0,
       0,     0,    84,    94,    96,    98,   100,    54,   125,    15,
      16,    18,     0,    30,     0,    27,    28,   133,     0,     0,
       0,     0,    69,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    68,     0,     0,     0,     0,    40,     0,
       0,     0,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,    20,
      32,     0,    33,    35,     0,   138,   135,   134,    42,    56,
       0,     0,     0,    55,    58,    59,     0,     0,    57,     0,
       0,    65,    66,    67,    49,    83,    73,    44,    45,    46,
      47,     0,    51,     0,    50,   101,     0,   102,     0,   111,
     112,     0,    95,    97,   113,     0,     0,     0,     0,   115,
       0,   103,    17,     0,    23,   139,     0,     0,    72,   122,
      71,     0,     0,     0,     0,     0,    85,    39,     0,     0,
       0,     0,   114,     0,     0,   119,     0,   104,     0,     0,
      34,     0,     0,    60,     0,    62,    63,    64,    74,     0,
      13,    53,    52,   109,   110,   105,     0,   106,     0,     0,
     116,   117,    70,     0,     0,     0,   118,   107,   108,     0,
      61,     0,     0,    86,    87,    89,   123,     0,     0,     0,
       0,    92,    88,     0,     0,    91,     0,    90
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -102,  -102,   -17,  -102,   -18,  -102,  -102,   272,  -102,  -102,
    -102,  -102,  -102,   410,  -102,  -102,  -102,   273,  -102,  -102,
     351,   301,    31,   189,   -50,  -102,   -20,   453,   497,   -45,
    -102,  -102,   266,  -102,   466,   419,   420,   469,  -102,   334,
    -102,   400,   -47,  -101,   -54,   -39
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     6,     7,     8,     9,    39,   109,   110,    53,    10,
      11,    12,    49,    50,    45,    59,   161,   162,    36,    91,
      92,   138,   101,    94,   121,   185,    19,    33,    20,    55,
     250,   273,   274,    25,   102,   103,   104,   105,   106,   234,
      22,   218,   122,    96,    97,    51
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     108,    30,   111,    37,    64,    60,    95,   107,    41,    43,
      14,    13,    15,   163,    16,    17,    54,    54,    95,   188,
     171,   200,    57,   172,    58,   148,   189,   190,    23,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   171,
      47,    48,   172,    95,   171,   108,   108,   172,    63,   225,
     201,   171,   107,   107,   172,   211,    21,   139,   145,   146,
     140,   147,   171,    18,    24,   172,   244,   195,   245,   171,
     170,   171,   172,   160,   172,   171,   171,    29,   172,   172,
     171,   206,   135,   172,    93,   171,    26,   173,   172,    95,
     176,    27,    95,    95,   108,   108,   116,   177,    95,    95,
     209,   107,   107,   111,   235,   184,   237,   207,   139,   136,
     174,   140,   163,   171,     4,   186,   172,   175,   112,   178,
     113,   134,   179,   181,   219,   219,   221,   222,   182,   223,
     224,   143,    31,   183,   171,   235,    38,   172,   171,   139,
     226,   172,   140,    44,    95,   139,    95,   171,   140,    95,
     172,    95,    34,    35,   171,   266,   184,   172,   158,   159,
     171,   243,   171,   172,    32,   172,   241,    93,     1,   164,
     242,   165,    46,   166,   167,   168,   197,   199,   230,   283,
     231,    52,   246,   286,   260,   261,   247,   251,   233,     2,
       3,     4,     5,   252,   264,   262,    14,     4,    15,    40,
      16,    17,   270,    54,   139,   248,   180,   140,   216,    56,
     164,   275,   165,    61,   166,   167,   269,   277,   278,   258,
      65,     4,   228,    42,   229,   275,   213,   134,   214,   134,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    67,    68,    69,    70,    71,    72,    73,    74,    98,
      76,   119,    67,    68,    69,    70,    71,    72,    73,    74,
      98,    76,    67,    68,    69,    70,    71,    72,    73,    74,
      98,    76,    66,   114,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    99,    90,   120,   139,
     145,   146,   140,   147,    98,    76,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,   117,   100,
      67,    68,    69,    70,    71,    72,    73,    74,    98,    76,
     256,   256,   257,   268,   151,   118,    98,    76,   192,   194,
       4,    67,    68,    69,    70,    71,    72,    73,    74,    98,
      76,   152,   133,   284,   153,   285,   154,   137,   155,   141,
     156,   148,   149,   150,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,   271,    90,   204,   157,
     272,   208,   169,   205,   210,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,   215,    90,    67,
      68,    69,    70,    71,    72,    73,    74,    98,    76,   232,
     236,   238,   253,    67,    68,    69,    70,    71,    72,    73,
      74,    98,    76,   239,   254,   249,   255,    67,    68,    69,
      70,    71,    72,    73,    74,    98,    76,   263,   265,   212,
     267,   276,   279,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,   281,   100,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,   287,
     191,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,   115,   193,    67,    68,    69,    70,    71,
      72,    73,    74,    98,    76,   280,   240,   187,   227,    67,
      68,    69,    70,    71,    72,    73,    74,    98,    76,    62,
      67,    68,    69,    70,    71,    72,    73,    74,    98,    76,
      28,    67,    68,    69,    70,    71,    72,    73,    74,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,     4,   196,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,   282,   198,   120,    67,    68,
      69,    70,    71,    72,    73,    74,    98,    76,    67,    68,
      69,    70,    71,    72,    73,    74,   144,   202,   142,   203,
     259,     0,   220,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   217
};

static const yytype_int16 yycheck[] =
{
      54,    18,    56,    23,    49,    44,    53,    54,    26,    27,
       8,    34,    10,   114,    12,    13,    28,    28,    65,     5,
      14,     9,    40,    17,    42,    20,    12,    13,    33,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    14,
      12,    13,    17,    90,    14,    99,   100,    17,    60,    60,
      38,    14,    99,   100,    17,   156,    46,    14,    15,    16,
      17,    18,    14,    61,     0,    17,    60,    62,    62,    14,
     120,    14,    17,   112,    17,    14,    14,    12,    17,    17,
      14,    21,    33,    17,    53,    14,    40,    62,    17,   136,
      60,    40,   139,   140,   148,   149,    65,    60,   145,   146,
     154,   148,   149,   157,   205,    62,   207,    47,    14,    60,
      62,    17,   213,    14,    24,   135,    17,    62,    60,    62,
      62,    90,    60,    62,   171,   172,   176,   177,    62,   179,
     180,   100,    37,    62,    14,   236,    29,    17,    14,    14,
     185,    17,    17,    61,   191,    14,   193,    14,    17,   196,
      17,   198,    26,    27,    14,   256,    62,    17,    31,    32,
      14,    62,    14,    17,    12,    17,   216,   136,     1,     8,
     217,    10,    62,    12,    13,    14,   145,   146,   196,   280,
     198,    30,    62,   284,   238,   239,    62,    62,   205,    22,
      23,    24,    25,    62,   244,    62,     8,    24,    10,    26,
      12,    13,    62,    28,    14,   225,    60,    17,    60,    35,
       8,   265,    10,    36,    12,    13,   263,   271,   272,   236,
      15,    24,   191,    26,   193,   279,    60,   196,    62,   198,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     4,    61,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    38,    61,    51,    14,
      15,    16,    17,    18,    12,    13,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    12,    61,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      60,    60,    62,    62,    21,    63,    12,    13,   139,   140,
      24,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    38,    62,    60,    41,    62,    43,    39,    45,    63,
      47,    20,    19,    38,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    52,    61,     9,    60,
      56,    42,    62,    61,    42,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    12,    61,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     9,
      61,    43,    62,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    43,    62,    44,    62,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    60,    35,   157,
      62,    62,    60,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    62,    61,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    62,
      61,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    63,    61,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    60,   213,   136,   187,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    46,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      13,     4,     5,     6,     7,     8,     9,    10,    11,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    24,    61,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,   279,    61,    51,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     4,     5,
       6,     7,     8,     9,    10,    11,   100,   148,    99,   149,
     236,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    22,    23,    24,    25,    65,    66,    67,    68,
      73,    74,    75,    34,     8,    10,    12,    13,    61,    90,
      92,    46,   104,    33,     0,    97,    40,    40,    92,    12,
      66,    37,    12,    91,    26,    27,    82,    90,    29,    69,
      26,    68,    26,    68,    61,    78,    62,    12,    13,    76,
      77,   109,    30,    72,    28,    93,    35,    68,    68,    79,
     109,    36,    91,    60,    93,    15,     4,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      61,    83,    84,    86,    87,   106,   107,   108,    12,    38,
      61,    86,    98,    99,   100,   101,   102,   106,   108,    70,
      71,   108,    60,    62,    61,    77,    86,    12,    63,    14,
      51,    88,   106,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    62,    86,    33,    60,    39,    85,    14,
      17,    63,   101,    86,    98,    15,    16,    18,    20,    19,
      38,    21,    38,    41,    43,    45,    47,    60,    31,    32,
     109,    80,    81,   107,     8,    10,    12,    13,    14,    62,
      88,    14,    17,    62,    62,    62,    60,    60,    62,    60,
      60,    62,    62,    62,    62,    89,    90,    84,     5,    12,
      13,    61,    87,    61,    87,    62,    61,    86,    61,    86,
       9,    38,    99,   100,     9,    61,    21,    47,    42,   108,
      42,   107,    71,    60,    62,    12,    60,    51,   105,   106,
     105,    88,    88,    88,    88,    60,    93,    85,    86,    86,
      68,    68,     9,    66,   103,   107,    61,   107,    43,    43,
      81,    88,   106,    62,    60,    62,    62,    62,    90,    44,
      94,    62,    62,    62,    62,    62,    60,    62,    66,   103,
     108,   108,    62,    60,    88,    35,   107,    62,    62,   106,
      62,    52,    56,    95,    96,   108,    62,   108,   108,    60,
      60,    62,    96,   107,    60,    62,   107,    62
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    65,    65,    65,    65,    65,    66,    66,    67,
      67,    67,    67,    68,    69,    69,    70,    70,    71,    71,
      71,    72,    72,    73,    74,    75,    76,    76,    77,    78,
      78,    79,    79,    80,    80,    81,    82,    82,    82,    83,
      83,    84,    84,    84,    85,    85,    85,    85,    86,    86,
      86,    86,    86,    86,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    88,
      88,    88,    88,    89,    89,    90,    90,    91,    91,    92,
      92,    92,    92,    93,    93,    94,    94,    95,    95,    96,
      96,    96,    96,    97,    98,    98,    99,    99,   100,   100,
     101,   101,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   103,   103,
     104,   104,   105,   105,   106,   106,   107,   107,   107,   107,
     107,   107,   107,   107,   108,   108,   108,   108,   108,   108,
     109,   109
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     4,     9,     0,     3,     1,     3,     1,     2,
       2,     0,     2,     8,     5,     4,     1,     3,     3,     0,
       3,     1,     3,     1,     3,     1,     0,     1,     1,     4,
       2,     1,     3,     1,     0,     2,     2,     2,     1,     3,
       3,     3,     5,     5,     1,     3,     3,     3,     3,     3,
       5,     7,     5,     5,     5,     3,     3,     3,     2,     1,
       5,     3,     3,     1,     3,     2,     4,     0,     1,     1,
       1,     1,     2,     0,     2,     0,     3,     1,     3,     1,
       7,     5,     3,     0,     1,     3,     1,     3,     1,     2,
       1,     3,     3,     3,     4,     5,     5,     6,     6,     5,
       5,     3,     3,     3,     4,     3,     5,     5,     3,     1,
       0,     1,     1,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     3,     1,     1,     3,     4,
       1,     1
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
        yyerror (stmt, YY_("syntax error: cannot back up")); \
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
                  Kind, Value, stmt); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, void * stmt)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (stmt);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, void * stmt)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, stmt);
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
                 int yyrule, void * stmt)
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
                       &yyvsp[(yyi + 1) - (yynrhs)], stmt);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, stmt); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, void * stmt)
{
  YY_USE (yyvaluep);
  YY_USE (stmt);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (void * stmt)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

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
      yychar = yylex (&yylval, stmt);
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
  case 2: /* sql_expression: select_final opt_having opt_order_by  */
#line 175 "source/sql.y"
                                        {
      // printf( "Found select_final\n" );
      ((sql_stmt *) stmt)->pArray = (PHB_ITEM) SQLpCodeGenArrayJoin( (yyvsp[-2].item_val), (yyvsp[0].item_val) );
      (yyval.item_val) = ((sql_stmt *) stmt)->pArray;
      YYACCEPT;
   }
#line 1492 ".hbmk/linux/gcc/sqly.c"
    break;

  case 3: /* sql_expression: insert_final  */
#line 181 "source/sql.y"
                  {
      // printf( "Found insert_final\n" );
      ((sql_stmt *) stmt)->pArray = (yyvsp[0].item_val);
      (yyval.item_val) = (yyvsp[0].item_val);
      YYACCEPT;
   }
#line 1503 ".hbmk/linux/gcc/sqly.c"
    break;

  case 4: /* sql_expression: update_final  */
#line 187 "source/sql.y"
                  {
      // printf( "Found update_final\n" );
      ((sql_stmt *) stmt)->pArray = (yyvsp[0].item_val);
      (yyval.item_val) = (yyvsp[0].item_val);
      YYACCEPT;
   }
#line 1514 ".hbmk/linux/gcc/sqly.c"
    break;

  case 5: /* sql_expression: delete_final  */
#line 193 "source/sql.y"
                  {
      // printf( "Found delete_final\n" );
      ((sql_stmt *) stmt)->pArray = (yyvsp[0].item_val);
      (yyval.item_val) = (yyvsp[0].item_val);
      YYACCEPT;
   }
#line 1525 ".hbmk/linux/gcc/sqly.c"
    break;

  case 6: /* sql_expression: error  */
#line 199 "source/sql.y"
           {
      // printf( "Parse error.\n" );
      if (((sql_stmt *) stmt)->pTemp )
      {
         hb_itemRelease(((sql_stmt *) stmt)->pTemp );
      }
      YYABORT;
   }
#line 1538 ".hbmk/linux/gcc/sqly.c"
    break;

  case 7: /* select_final: select_expression  */
#line 210 "source/sql.y"
                     {
      // printf( "Select expression\n" );
      (yyval.item_val) = (yyvsp[0].item_val);
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1548 ".hbmk/linux/gcc/sqly.c"
    break;

  case 8: /* select_final: union_expression  */
#line 215 "source/sql.y"
                       {
      // printf( "Select expression with UNION\n" );
      (yyval.item_val) = (yyvsp[0].item_val);
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1558 ".hbmk/linux/gcc/sqly.c"
    break;

  case 9: /* union_expression: union_expression UNION select_expression  */
#line 223 "source/sql.y"
                                                      {
      // printf( "Double UNION\n" );
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( (yyvsp[-2].item_val), SQL_PCODE_SELECT_UNION ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1568 ".hbmk/linux/gcc/sqly.c"
    break;

  case 10: /* union_expression: union_expression UNION ALL select_expression  */
#line 228 "source/sql.y"
                                                      {
      // printf( "Double UNION ALL\n" );
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( (yyvsp[-3].item_val), SQL_PCODE_SELECT_UNION_ALL ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1578 ".hbmk/linux/gcc/sqly.c"
    break;

  case 11: /* union_expression: select_expression UNION select_expression  */
#line 233 "source/sql.y"
                                                      {
      // printf( "UNION\n" );
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( (yyvsp[-2].item_val), SQL_PCODE_SELECT_UNION ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1588 ".hbmk/linux/gcc/sqly.c"
    break;

  case 12: /* union_expression: select_expression UNION ALL select_expression  */
#line 238 "source/sql.y"
                                                      {
      // printf( "UNION ALL\n" );
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( (yyvsp[-3].item_val), SQL_PCODE_SELECT_UNION_ALL ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1598 ".hbmk/linux/gcc/sqly.c"
    break;

  case 13: /* select_expression: SELECT opt_lock opt_dist opt_limit select_item_commalist FROM table_reference_commalist opt_where opt_group  */
#line 246 "source/sql.y"
                                                                                                               {
      // printf( "Found a SELECT\n" );
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayJoin( SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenArrayJoin( SQLpCodeGenArrayJoin( SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( (yyvsp[-7].item_val), SQL_PCODE_SELECT ), (yyvsp[-6].item_val) ), (yyvsp[-5].item_val) ), (yyvsp[-4].item_val) ), SQL_PCODE_SELECT_FROM ), (yyvsp[-2].item_val)), (yyvsp[-1].item_val)), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1608 ".hbmk/linux/gcc/sqly.c"
    break;

  case 14: /* opt_order_by: %empty  */
#line 254 "source/sql.y"
              {
      (yyval.item_val) = SQLpCodeGenInt( SQL_PCODE_SELECT_NO_ORDER );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1617 ".hbmk/linux/gcc/sqly.c"
    break;

  case 15: /* opt_order_by: ORDER BY order_by_item_commalist  */
#line 258 "source/sql.y"
                                      {
      // printf( "opt_order_by\n" );
      (yyval.item_val) = SQLpCodeGenIntArray( SQL_PCODE_SELECT_ORDER, (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1627 ".hbmk/linux/gcc/sqly.c"
    break;

  case 16: /* order_by_item_commalist: order_by_item  */
#line 266 "source/sql.y"
                 {
      (yyval.item_val) = (yyvsp[0].item_val);
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1636 ".hbmk/linux/gcc/sqly.c"
    break;

  case 17: /* order_by_item_commalist: order_by_item_commalist ',' order_by_item  */
#line 270 "source/sql.y"
                                               {
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( (yyvsp[-2].item_val), SQL_PCODE_COLUMN_LIST_SEPARATOR ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1645 ".hbmk/linux/gcc/sqly.c"
    break;

  case 18: /* order_by_item: col_name  */
#line 277 "source/sql.y"
            {
      // printf( "Found order_by_item col_name\n" );
      (yyval.item_val) = SQLpCodeGenIntArray( SQL_PCODE_SELECT_ORDER_ASC, (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1655 ".hbmk/linux/gcc/sqly.c"
    break;

  case 19: /* order_by_item: col_name ASC  */
#line 282 "source/sql.y"
                  {
      // printf( "Found order_by_item col_name ASC\n" );
      (yyval.item_val) = SQLpCodeGenIntArray( SQL_PCODE_SELECT_ORDER_ASC, (yyvsp[-1].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1665 ".hbmk/linux/gcc/sqly.c"
    break;

  case 20: /* order_by_item: col_name DESC  */
#line 287 "source/sql.y"
                   {
      // printf( "Found order_by_item col_name DESC\n" );
      (yyval.item_val) = SQLpCodeGenIntArray( SQL_PCODE_SELECT_ORDER_DESC, (yyvsp[-1].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1675 ".hbmk/linux/gcc/sqly.c"
    break;

  case 21: /* opt_limit: %empty  */
#line 295 "source/sql.y"
              {
      // printf( "No Limit\n" );
      (yyval.item_val) = SQLpCodeGenInt( SQL_PCODE_SELECT_NO_LIMIT );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1685 ".hbmk/linux/gcc/sqly.c"
    break;

  case 22: /* opt_limit: LIMIT INTEGERVAL  */
#line 300 "source/sql.y"
                      {
      // printf( "Limit %i\n", $2 );
      (yyval.item_val) = SQLpCodeGenIntArray( SQL_PCODE_SELECT_LIMIT, SQLpCodeGenInt( (int) (yyvsp[0].int_val) ) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1695 ".hbmk/linux/gcc/sqly.c"
    break;

  case 23: /* insert_final: INSERT INTO table insert_item_expression VALUES '(' insert_value_commalist ')'  */
#line 308 "source/sql.y"
                                                                                   {
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenArrayJoin( SQLpCodeGenIntArray( SQL_PCODE_INSERT, (yyvsp[-5].item_val) ), (yyvsp[-4].item_val) ), SQL_PCODE_INSERT_VALUES ), SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_START_EXPR, (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR ) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1704 ".hbmk/linux/gcc/sqly.c"
    break;

  case 24: /* update_final: UPDATE table_reference SET update_item_commalist opt_where  */
#line 315 "source/sql.y"
                                                              {
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayJoin( SQLpCodeGenIntArray( SQL_PCODE_UPDATE, (yyvsp[-3].item_val) ), (yyvsp[-1].item_val) ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1713 ".hbmk/linux/gcc/sqly.c"
    break;

  case 25: /* delete_final: DELETE_SQL FROM table_reference opt_where  */
#line 322 "source/sql.y"
                                             {
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenIntArray( SQL_PCODE_DELETE, (yyvsp[-1].item_val) ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1722 ".hbmk/linux/gcc/sqly.c"
    break;

  case 26: /* update_item_commalist: update_item  */
#line 329 "source/sql.y"
               {
      // printf( "Update commanlist ITEM\n" );
      (yyval.item_val) =  (yyvsp[0].item_val);
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1732 ".hbmk/linux/gcc/sqly.c"
    break;

  case 27: /* update_item_commalist: update_item_commalist ',' update_item  */
#line 334 "source/sql.y"
                                           {
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( (yyvsp[-2].item_val), SQL_PCODE_COLUMN_LIST_SEPARATOR ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1741 ".hbmk/linux/gcc/sqly.c"
    break;

  case 28: /* update_item: col_list_name EQUALS column  */
#line 341 "source/sql.y"
                               {
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_OPERATOR_BASE, (yyvsp[-2].item_val) ), (yyvsp[-1].iOperator) ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1750 ".hbmk/linux/gcc/sqly.c"
    break;

  case 29: /* insert_item_expression: %empty  */
#line 348 "source/sql.y"
              {
      (yyval.item_val) = SQLpCodeGenInt( SQL_PCODE_INSERT_NO_LIST );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1759 ".hbmk/linux/gcc/sqly.c"
    break;

  case 30: /* insert_item_expression: '(' insert_item_commalist ')'  */
#line 352 "source/sql.y"
                                   {
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_START_EXPR, (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1768 ".hbmk/linux/gcc/sqly.c"
    break;

  case 31: /* insert_item_commalist: col_list_name  */
#line 359 "source/sql.y"
                 {
      (yyval.item_val) = (yyvsp[0].item_val);
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1777 ".hbmk/linux/gcc/sqly.c"
    break;

  case 32: /* insert_item_commalist: insert_item_commalist ',' col_list_name  */
#line 363 "source/sql.y"
                                             {
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( (yyvsp[-2].item_val), SQL_PCODE_COLUMN_LIST_SEPARATOR ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1786 ".hbmk/linux/gcc/sqly.c"
    break;

  case 33: /* insert_value_commalist: insert_col_value  */
#line 370 "source/sql.y"
                    {
      (yyval.item_val) = (yyvsp[0].item_val);
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1795 ".hbmk/linux/gcc/sqly.c"
    break;

  case 34: /* insert_value_commalist: insert_value_commalist ',' insert_col_value  */
#line 374 "source/sql.y"
                                                  {
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( (yyvsp[-2].item_val), SQL_PCODE_COLUMN_LIST_SEPARATOR ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1804 ".hbmk/linux/gcc/sqly.c"
    break;

  case 35: /* insert_col_value: col_value  */
#line 381 "source/sql.y"
                {
      (yyval.item_val) = (yyvsp[0].item_val);
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1813 ".hbmk/linux/gcc/sqly.c"
    break;

  case 36: /* opt_dist: %empty  */
#line 388 "source/sql.y"
              {
      // printf( "OPT ALL\n" );
      (yyval.item_val) = SQLpCodeGenInt( SQL_PCODE_SELECT_ALL );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1823 ".hbmk/linux/gcc/sqly.c"
    break;

  case 37: /* opt_dist: ALL  */
#line 393 "source/sql.y"
              {
      // printf( "OPT ALL\n" );
      (yyval.item_val) = SQLpCodeGenInt( SQL_PCODE_SELECT_ALL );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1833 ".hbmk/linux/gcc/sqly.c"
    break;

  case 38: /* opt_dist: DISTINCT  */
#line 398 "source/sql.y"
              {
      // printf( "DISTINCT\n" );
      (yyval.item_val) = SQLpCodeGenInt( SQL_PCODE_SELECT_DISTINCT );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1843 ".hbmk/linux/gcc/sqly.c"
    break;

  case 39: /* select_item_commalist: select_item_commalist ',' select_item opt_as  */
#line 406 "source/sql.y"
                                                 {
      // printf( "select_item_commalist BY select_item_commalist, select_item\n" );
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( (yyvsp[-3].item_val), SQL_PCODE_COLUMN_LIST_SEPARATOR ), (yyvsp[-1].item_val) ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1853 ".hbmk/linux/gcc/sqly.c"
    break;

  case 40: /* select_item_commalist: select_item opt_as  */
#line 411 "source/sql.y"
                        {
      // printf( "select_item_commalist BY select_item\n" );
      (yyval.item_val) = SQLpCodeGenArrayJoin( (yyvsp[-1].item_val), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1863 ".hbmk/linux/gcc/sqly.c"
    break;

  case 41: /* select_item: column  */
#line 419 "source/sql.y"
          {
      (yyval.item_val) = (yyvsp[0].item_val);
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1872 ".hbmk/linux/gcc/sqly.c"
    break;

  case 42: /* select_item: IDENT '.' ASTERISK  */
#line 423 "source/sql.y"
                        {
      // printf( "%s.*\n", hb_itemGetCPtr((PHB_ITEM)$1) );
      (yyval.item_val) = SQLpCodeGenIntItem( SQL_PCODE_SELECT_ITEM_ALIAS_ASTER, (yyvsp[-2].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1882 ".hbmk/linux/gcc/sqly.c"
    break;

  case 43: /* select_item: ASTERISK  */
#line 428 "source/sql.y"
              {
      // printf( "*\n" );
      (yyval.item_val) = SQLpCodeGenInt( SQL_PCODE_SELECT_ITEM_ASTERISK );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1892 ".hbmk/linux/gcc/sqly.c"
    break;

  case 44: /* opt_as: %empty  */
#line 436 "source/sql.y"
              {
      // printf( "NO AS\n" );
      (yyval.item_val) = SQLpCodeGenInt( SQL_PCODE_COLUMN_NO_AS );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1902 ".hbmk/linux/gcc/sqly.c"
    break;

  case 45: /* opt_as: AS STRINGVAL  */
#line 441 "source/sql.y"
                  {
      // printf( "AS %s \n", hb_itemGetCPtr((PHB_ITEM)$2) );
      (yyval.item_val) = SQLpCodeGenIntItem( SQL_PCODE_COLUMN_AS, (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1912 ".hbmk/linux/gcc/sqly.c"
    break;

  case 46: /* opt_as: AS IDENT  */
#line 446 "source/sql.y"
               {
      // printf( "AS %s \n", hb_itemGetCPtr((PHB_ITEM)$2) );
      (yyval.item_val) = SQLpCodeGenIntItem( SQL_PCODE_COLUMN_AS, (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1922 ".hbmk/linux/gcc/sqly.c"
    break;

  case 47: /* opt_as: AS QUOTED_IDENT  */
#line 451 "source/sql.y"
                     {
      // printf( "AS_QUOTE %s \n", hb_itemGetCPtr((PHB_ITEM)$2) );
      (yyval.item_val) = SQLpCodeGenIntItem( SQL_PCODE_COLUMN_AS, (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1932 ".hbmk/linux/gcc/sqly.c"
    break;

  case 48: /* column: select_col_constructor  */
#line 459 "source/sql.y"
                          {
      // printf( "column BY select_col_constructor\n" );
      (yyval.item_val) = (yyvsp[0].item_val);
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1942 ".hbmk/linux/gcc/sqly.c"
    break;

  case 49: /* column: '(' column ')'  */
#line 464 "source/sql.y"
                    {
      // printf( "column BY ( column )\n" );
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_START_EXPR, (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1952 ".hbmk/linux/gcc/sqly.c"
    break;

  case 50: /* column: column OPERATOR select_col_constructor  */
#line 469 "source/sql.y"
                                            {
      // printf( "column BY column OPERATOR select_col_constructor\n" );
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_OPERATOR_BASE, (yyvsp[-2].item_val) ), (yyvsp[-1].iOperator) ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1962 ".hbmk/linux/gcc/sqly.c"
    break;

  case 51: /* column: column ASTERISK select_col_constructor  */
#line 474 "source/sql.y"
                                            {
      // printf( "column BY  column ASTERISK select_col_constructor\n" );
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_OPERATOR_BASE, (yyvsp[-2].item_val) ), (yyvsp[-1].iOperator) ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1972 ".hbmk/linux/gcc/sqly.c"
    break;

  case 52: /* column: column OPERATOR '(' column ')'  */
#line 479 "source/sql.y"
                                    {
      // printf( "column BY column OPERATOR ( column )\n" );
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_OPERATOR_BASE, (yyvsp[-4].item_val) ), (yyvsp[-3].iOperator) ), SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_START_EXPR, (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR ) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1982 ".hbmk/linux/gcc/sqly.c"
    break;

  case 53: /* column: column ASTERISK '(' column ')'  */
#line 484 "source/sql.y"
                                    {
      // printf( "column BY column ASTERISK ( column )\n" );
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_OPERATOR_BASE, (yyvsp[-4].item_val) ), (yyvsp[-3].iOperator) ), SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_START_EXPR, (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR ) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 1992 ".hbmk/linux/gcc/sqly.c"
    break;

  case 54: /* select_col_constructor: col_constructor  */
#line 492 "source/sql.y"
                      {
      // printf( "col constructor\n" );
      (yyval.item_val) = (yyvsp[0].item_val);
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2002 ".hbmk/linux/gcc/sqly.c"
    break;

  case 55: /* select_col_constructor: COUNT col_constructor_expr ')'  */
#line 497 "source/sql.y"
                                     {
      // printf( "COUNT() function\n" );
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_FUNC_COUNT, (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2012 ".hbmk/linux/gcc/sqly.c"
    break;

  case 56: /* select_col_constructor: COUNT ASTERISK ')'  */
#line 502 "source/sql.y"
                         {
      // printf( "COUNT(*) \n" );
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenInt( SQL_PCODE_FUNC_COUNT_AST ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2022 ".hbmk/linux/gcc/sqly.c"
    break;

  case 57: /* select_col_constructor: ABS col_constructor_expr ')'  */
#line 507 "source/sql.y"
                                   {
      // printf( "ABS() function\n" );
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_FUNC_ABS, (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2032 ".hbmk/linux/gcc/sqly.c"
    break;

  case 58: /* select_col_constructor: MAX col_constructor_expr ')'  */
#line 512 "source/sql.y"
                                   {
      // printf( "MAX() function\n" );
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_FUNC_MAX, (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2042 ".hbmk/linux/gcc/sqly.c"
    break;

  case 59: /* select_col_constructor: MIN col_constructor_expr ')'  */
#line 517 "source/sql.y"
                                   {
      // printf( "MIN() function\n" );
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_FUNC_MIN, (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2052 ".hbmk/linux/gcc/sqly.c"
    break;

  case 60: /* select_col_constructor: TOKEN_ISNULL col_constructor_expr ',' col_constructor_expr ')'  */
#line 522 "source/sql.y"
                                                                     {
      // printf( "ISNULL( , ) function\n" );
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_FUNC_ISNULL, (yyvsp[-3].item_val) ), SQL_PCODE_COLUMN_LIST_SEPARATOR ), (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2062 ".hbmk/linux/gcc/sqly.c"
    break;

  case 61: /* select_col_constructor: SUBSTR col_constructor_expr ',' col_constructor_expr ',' col_constructor_expr ')'  */
#line 527 "source/sql.y"
                                                                                        {
      // printf( "SUBSTR( , , ) function\n" );
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_FUNC_SUBSTR2, (yyvsp[-5].item_val) ), SQL_PCODE_COLUMN_LIST_SEPARATOR ), (yyvsp[-3].item_val) ), SQL_PCODE_COLUMN_LIST_SEPARATOR ), (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2072 ".hbmk/linux/gcc/sqly.c"
    break;

  case 62: /* select_col_constructor: SUBSTR col_constructor_expr ',' col_constructor_expr ')'  */
#line 532 "source/sql.y"
                                                               {
      // printf( "SUBSTR( , ) function\n" );
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_FUNC_SUBSTR, (yyvsp[-3].item_val) ), SQL_PCODE_COLUMN_LIST_SEPARATOR ), (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2082 ".hbmk/linux/gcc/sqly.c"
    break;

  case 63: /* select_col_constructor: POWER col_constructor_expr ',' col_constructor_expr ')'  */
#line 537 "source/sql.y"
                                                               {
      // printf( "power( , ) function\n" );
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenArrayJoin( SQLpCodeGenIntArray( SQL_PCODE_FUNC_POWER, (yyvsp[-3].item_val) ), (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2092 ".hbmk/linux/gcc/sqly.c"
    break;

  case 64: /* select_col_constructor: ROUND col_constructor_expr ',' col_constructor_expr ')'  */
#line 542 "source/sql.y"
                                                               {
      // printf( "ROUND( , ) function\n" );
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenArrayJoin( SQLpCodeGenIntArray( SQL_PCODE_FUNC_ROUND, (yyvsp[-3].item_val) ), (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2102 ".hbmk/linux/gcc/sqly.c"
    break;

  case 65: /* select_col_constructor: TRIM col_constructor_expr ')'  */
#line 547 "source/sql.y"
                                    {
      // printf( "TRIM() function\n" );
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_FUNC_TRIM, (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2112 ".hbmk/linux/gcc/sqly.c"
    break;

  case 66: /* select_col_constructor: SUM col_constructor_expr ')'  */
#line 552 "source/sql.y"
                                   {
      // printf( "SUM() function\n" );
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_FUNC_SUM, (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2122 ".hbmk/linux/gcc/sqly.c"
    break;

  case 67: /* select_col_constructor: AVG col_constructor_expr ')'  */
#line 557 "source/sql.y"
                                   {
      // printf( "AVG() function\n" );
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_FUNC_AVG, (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2132 ".hbmk/linux/gcc/sqly.c"
    break;

  case 68: /* select_col_constructor: CURRENT_DATE ')'  */
#line 562 "source/sql.y"
                       {
      // printf( "DATE() function\n" );
      (yyval.item_val) = SQLpCodeGenInt( SQL_PCODE_FUNC_DATE );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2142 ".hbmk/linux/gcc/sqly.c"
    break;

  case 69: /* col_constructor_expr: col_constructor  */
#line 570 "source/sql.y"
                    {
      // printf( "col constructor_expr\n" );
      (yyval.item_val) = (yyvsp[0].item_val);
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2152 ".hbmk/linux/gcc/sqly.c"
    break;

  case 70: /* col_constructor_expr: TOKEN_ISNULL col_constructor_expr ',' col_constructor_expr ')'  */
#line 575 "source/sql.y"
                                                                     {
      // printf( "ISNULL( , ) function\n" );
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_FUNC_ISNULL, (yyvsp[-3].item_val) ), SQL_PCODE_COLUMN_LIST_SEPARATOR ), (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2162 ".hbmk/linux/gcc/sqly.c"
    break;

  case 71: /* col_constructor_expr: col_constructor_expr OPERATOR col_constructor2  */
#line 580 "source/sql.y"
                                                     {
      // printf( "col constructor_expr OPERATOR: %i\n", $2 );
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_OPERATOR_BASE, (yyvsp[-2].item_val) ), (yyvsp[-1].iOperator) ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2172 ".hbmk/linux/gcc/sqly.c"
    break;

  case 72: /* col_constructor_expr: col_constructor_expr ASTERISK col_constructor2  */
#line 585 "source/sql.y"
                                                     {
      // printf( "col constructor_expr ASTERISK: %i\n", $2 );
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_OPERATOR_BASE, (yyvsp[-2].item_val) ), (yyvsp[-1].iOperator) ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2182 ".hbmk/linux/gcc/sqly.c"
    break;

  case 73: /* table_reference_commalist: table_reference  */
#line 593 "source/sql.y"
                   {
      // printf( "table_reference_commalist \n" );
      (yyval.item_val) = (yyvsp[0].item_val);
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2192 ".hbmk/linux/gcc/sqly.c"
    break;

  case 74: /* table_reference_commalist: table_reference_commalist ',' table_reference  */
#line 598 "source/sql.y"
                                                   {
      // printf( "table_reference_commalist \n" );
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( (yyvsp[-2].item_val), SQL_PCODE_COLUMN_LIST_SEPARATOR ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2202 ".hbmk/linux/gcc/sqly.c"
    break;

  case 75: /* table_reference: table opt_table_alias  */
#line 606 "source/sql.y"
                         {
      // printf( "table_reference\n" );
      (yyval.item_val) = SQLpCodeGenArrayJoin( (yyvsp[-1].item_val), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2212 ".hbmk/linux/gcc/sqly.c"
    break;

  case 76: /* table_reference: '(' select_final ')' opt_table_alias  */
#line 611 "source/sql.y"
                                          {
      // printf( "table_reference - SUBQUERY\n" );
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_START_EXPR, (yyvsp[-2].item_val) ), SQL_PCODE_STOP_EXPR ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2222 ".hbmk/linux/gcc/sqly.c"
    break;

  case 77: /* opt_table_alias: %empty  */
#line 619 "source/sql.y"
               {
      // printf( "NO TABLE_ALIAS" );
      (yyval.item_val) = SQLpCodeGenInt( SQL_PCODE_TABLE_NO_ALIAS );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2232 ".hbmk/linux/gcc/sqly.c"
    break;

  case 78: /* opt_table_alias: IDENT  */
#line 624 "source/sql.y"
           {
      // printf( "TABLE Alias %s \n", hb_itemGetCPtr((PHB_ITEM)$1) );
      (yyval.item_val) = SQLpCodeGenIntItem( SQL_PCODE_TABLE_ALIAS, (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2242 ".hbmk/linux/gcc/sqly.c"
    break;

  case 79: /* table: IDENT  */
#line 632 "source/sql.y"
         {
      // printf( "TABLE identifier: %s \n", hb_itemGetCPtr((PHB_ITEM)$1) );
      (yyval.item_val) = SQLpCodeGenIntItem( SQL_PCODE_TABLE_NAME, (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2252 ".hbmk/linux/gcc/sqly.c"
    break;

  case 80: /* table: QUOTED_IDENT  */
#line 637 "source/sql.y"
                  {
      // printf( "TABLE identifier (quoted): %s \n", hb_itemGetCPtr((PHB_ITEM)$1) );
      (yyval.item_val) = SQLpCodeGenIntItem( SQL_PCODE_TABLE_NAME, (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2262 ".hbmk/linux/gcc/sqly.c"
    break;

  case 81: /* table: PARAM  */
#line 642 "source/sql.y"
           {
      // printf( "PARAMETER table_reference %i\n", $1 );
      (yyval.item_val) = SQLpCodeGenIntItem( SQL_PCODE_TABLE_PARAM, hb_itemPutNI( hb_itemNew(NULL), (yyvsp[0].param) ) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2272 ".hbmk/linux/gcc/sqly.c"
    break;

  case 82: /* table: BINDVAR IDENT  */
#line 647 "source/sql.y"
                   {
      // printf( "BINDVAR table_reference: %s\n", hb_itemGetCPtr((PHB_ITEM)$2) );
      (yyval.item_val) = SQLpCodeGenIntItem( SQL_PCODE_TABLE_BINDVAR, (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2282 ".hbmk/linux/gcc/sqly.c"
    break;

  case 83: /* opt_where: %empty  */
#line 655 "source/sql.y"
              {
      // printf( "Do not have a WHERE clause\n" );
      (yyval.item_val) = SQLpCodeGenInt( SQL_PCODE_NO_WHERE );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2292 ".hbmk/linux/gcc/sqly.c"
    break;

  case 84: /* opt_where: WHERE conditional_expression  */
#line 660 "source/sql.y"
                                  {
      // printf( "WHERE clause\n" );
      (yyval.item_val) = SQLpCodeGenIntArray( SQL_PCODE_WHERE, (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2302 ".hbmk/linux/gcc/sqly.c"
    break;

  case 85: /* opt_group: %empty  */
#line 668 "source/sql.y"
               {
      // printf( "NO GROUP_BY\n" );
      (yyval.item_val) = SQLpCodeGenInt( SQL_PCODE_SELECT_NO_GROUPBY );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2312 ".hbmk/linux/gcc/sqly.c"
    break;

  case 86: /* opt_group: GROUP BY group_by_item_commalist  */
#line 673 "source/sql.y"
                                      {
      // printf( "opt_group_by\n" );
      (yyval.item_val) = SQLpCodeGenIntArray( SQL_PCODE_SELECT_GROUPBY, (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2322 ".hbmk/linux/gcc/sqly.c"
    break;

  case 87: /* group_by_item_commalist: group_by_col_expr  */
#line 681 "source/sql.y"
                     {
      // printf( "group_by_item_commalist col_name\n" );
      (yyval.item_val) = (yyvsp[0].item_val);
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2332 ".hbmk/linux/gcc/sqly.c"
    break;

  case 88: /* group_by_item_commalist: group_by_item_commalist ',' group_by_col_expr  */
#line 686 "source/sql.y"
                                                    {
      // printf( "group_by_item_commalist , colname\n" );
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( (yyvsp[-2].item_val), SQL_PCODE_COLUMN_LIST_SEPARATOR ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2342 ".hbmk/linux/gcc/sqly.c"
    break;

  case 89: /* group_by_col_expr: col_name  */
#line 694 "source/sql.y"
            {
      (yyval.item_val) = (yyvsp[0].item_val);
   }
#line 2350 ".hbmk/linux/gcc/sqly.c"
    break;

  case 90: /* group_by_col_expr: SUBSTR col_name ',' col_value ',' col_value ')'  */
#line 697 "source/sql.y"
                                                      {
      // printf( "SUBSTR( , , ) function in ORDER BY\n" );
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_FUNC_SUBSTR2, (yyvsp[-5].item_val) ), SQL_PCODE_COLUMN_LIST_SEPARATOR ), (yyvsp[-3].item_val) ), SQL_PCODE_COLUMN_LIST_SEPARATOR ), (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2360 ".hbmk/linux/gcc/sqly.c"
    break;

  case 91: /* group_by_col_expr: SUBSTR col_name ',' col_value ')'  */
#line 702 "source/sql.y"
                                        {
      // printf( "SUBSTR( , ) function in ORDER BY\n" );
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_FUNC_SUBSTR, (yyvsp[-3].item_val) ), SQL_PCODE_COLUMN_LIST_SEPARATOR ), (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2370 ".hbmk/linux/gcc/sqly.c"
    break;

  case 92: /* group_by_col_expr: TRIM col_name ')'  */
#line 707 "source/sql.y"
                        {
      // printf( "TRIM() function in ORDER BY\n" );
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_FUNC_TRIM, (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2380 ".hbmk/linux/gcc/sqly.c"
    break;

  case 94: /* conditional_expression: conditional_term  */
#line 720 "source/sql.y"
                    {
      // printf("conditional_expression\n");
      (yyval.item_val) = (yyvsp[0].item_val);
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2390 ".hbmk/linux/gcc/sqly.c"
    break;

  case 95: /* conditional_expression: conditional_expression OR conditional_term  */
#line 725 "source/sql.y"
                                               {
      // printf("OR operator\n");
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_OPERATOR_BASE, (yyvsp[-2].item_val) ), SQL_PCODE_OPERATOR_OR ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2400 ".hbmk/linux/gcc/sqly.c"
    break;

  case 96: /* conditional_term: conditional_factor  */
#line 733 "source/sql.y"
                       {
      // printf("conditional_term\n");
      (yyval.item_val) = (yyvsp[0].item_val);
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2410 ".hbmk/linux/gcc/sqly.c"
    break;

  case 97: /* conditional_term: conditional_term AND_OP conditional_factor  */
#line 738 "source/sql.y"
                                                {
      // printf("AND operator\n");
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_OPERATOR_BASE, (yyvsp[-2].item_val) ), SQL_PCODE_OPERATOR_AND ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2420 ".hbmk/linux/gcc/sqly.c"
    break;

  case 98: /* conditional_factor: conditional_primary  */
#line 746 "source/sql.y"
                       {
      // printf("conditional_primary\n");
      (yyval.item_val) = (yyvsp[0].item_val);
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2430 ".hbmk/linux/gcc/sqly.c"
    break;

  case 99: /* conditional_factor: NOT conditional_primary  */
#line 751 "source/sql.y"
                             {
      // printf("NOT conditional_primary\n");
      (yyval.item_val) = SQLpCodeGenIntArray( SQL_PCODE_NOT_EXPR, (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2440 ".hbmk/linux/gcc/sqly.c"
    break;

  case 100: /* conditional_primary: simple_condition  */
#line 759 "source/sql.y"
                    {
      (yyval.item_val) = (yyvsp[0].item_val);
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2449 ".hbmk/linux/gcc/sqly.c"
    break;

  case 101: /* conditional_primary: '(' conditional_expression ')'  */
#line 763 "source/sql.y"
                                    {
      // printf("(conditional_primary_parentisis)\n");
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_START_EXPR, (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2459 ".hbmk/linux/gcc/sqly.c"
    break;

  case 102: /* simple_condition: column EQUALS column  */
#line 771 "source/sql.y"
                        {
      // printf("comparison_operator %i\n", $2);
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_OPERATOR_BASE, (yyvsp[-2].item_val) ), (yyvsp[-1].iOperator) ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2469 ".hbmk/linux/gcc/sqly.c"
    break;

  case 103: /* simple_condition: col_name LIKE col_value  */
#line 776 "source/sql.y"
                             {
      // printf("like_operator %i\n", $2);
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_OPERATOR_BASE, (yyvsp[-2].item_val) ), SQL_PCODE_OPERATOR_LIKE ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2479 ".hbmk/linux/gcc/sqly.c"
    break;

  case 104: /* simple_condition: col_name NOT LIKE col_value  */
#line 781 "source/sql.y"
                                 {
      // printf("not like_operator %i\n", $2);
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_OPERATOR_BASE, (yyvsp[-3].item_val) ), SQL_PCODE_OPERATOR_NOT_LIKE ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2489 ".hbmk/linux/gcc/sqly.c"
    break;

  case 105: /* simple_condition: col_name IN_OP '(' select_final ')'  */
#line 786 "source/sql.y"
                                          {
      // printf("in_condition subquery\n");
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenArrayJoin( SQLpCodeGenArrayIntInt( (yyvsp[-4].item_val), SQL_PCODE_OPERATOR_IN, SQL_PCODE_START_EXPR ), (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2499 ".hbmk/linux/gcc/sqly.c"
    break;

  case 106: /* simple_condition: col_name IN_OP '(' scalar_expression_commalist ')'  */
#line 791 "source/sql.y"
                                                        {
      // printf("in_condition scalar expression\n");
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenArrayJoin( SQLpCodeGenArrayIntInt( (yyvsp[-4].item_val), SQL_PCODE_OPERATOR_IN, SQL_PCODE_START_EXPR ), (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2509 ".hbmk/linux/gcc/sqly.c"
    break;

  case 107: /* simple_condition: col_name NOT IN_OP '(' select_final ')'  */
#line 796 "source/sql.y"
                                              {
      // printf("in_condition subquery\n");
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenArrayJoin( SQLpCodeGenArrayIntInt( (yyvsp[-5].item_val), SQL_PCODE_OPERATOR_IN + 1, SQL_PCODE_START_EXPR ), (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2519 ".hbmk/linux/gcc/sqly.c"
    break;

  case 108: /* simple_condition: col_name NOT IN_OP '(' scalar_expression_commalist ')'  */
#line 801 "source/sql.y"
                                                            {
      // printf("in_condition scalar expression\n");
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenArrayJoin( SQLpCodeGenArrayIntInt( (yyvsp[-5].item_val), SQL_PCODE_OPERATOR_IN + 1, SQL_PCODE_START_EXPR ), (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2529 ".hbmk/linux/gcc/sqly.c"
    break;

  case 109: /* simple_condition: column EQUALS '(' select_expression ')'  */
#line 806 "source/sql.y"
                                              {
      // printf("equals subquery\n");
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_OPERATOR_BASE, (yyvsp[-4].item_val) ), (yyvsp[-3].iOperator) ), SQL_PCODE_START_EXPR ), (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2539 ".hbmk/linux/gcc/sqly.c"
    break;

  case 110: /* simple_condition: column COMPARE '(' select_expression ')'  */
#line 811 "source/sql.y"
                                               {
      // printf("equals subquery\n");
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_OPERATOR_BASE, (yyvsp[-4].item_val) ), (yyvsp[-3].iOperator) ), SQL_PCODE_START_EXPR ), (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2549 ".hbmk/linux/gcc/sqly.c"
    break;

  case 111: /* simple_condition: column COMPARE column  */
#line 816 "source/sql.y"
                           {
      // printf("comparison_operator %i\n", $2);
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_OPERATOR_BASE, (yyvsp[-2].item_val) ), (yyvsp[-1].iOperator) ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2559 ".hbmk/linux/gcc/sqly.c"
    break;

  case 112: /* simple_condition: column IS_OP NULLVAL  */
#line 821 "source/sql.y"
                               {
      // printf("comparison_operator == NULL\n");
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_OPERATOR_BASE, (yyvsp[-2].item_val) ), SQL_PCODE_OPERATOR_IS_NULL );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2569 ".hbmk/linux/gcc/sqly.c"
    break;

  case 113: /* simple_condition: col_constructor NOT NULLVAL  */
#line 826 "source/sql.y"
                                            {
      // printf("comparison_operator == NOT NULL\n");
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_OPERATOR_BASE, (yyvsp[-2].item_val) ), SQL_PCODE_OPERATOR_IS_NOT_NULL );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2579 ".hbmk/linux/gcc/sqly.c"
    break;

  case 114: /* simple_condition: column IS_OP NOT NULLVAL  */
#line 831 "source/sql.y"
                                         {
      // printf("comparison_operator == NOT NULL\n");
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_OPERATOR_BASE, (yyvsp[-3].item_val) ), SQL_PCODE_OPERATOR_IS_NOT_NULL );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2589 ".hbmk/linux/gcc/sqly.c"
    break;

  case 115: /* simple_condition: col_name JOIN col_name  */
#line 836 "source/sql.y"
                            {
      // printf("Simple JOIN\n");
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_OPERATOR_BASE, (yyvsp[-2].item_val) ), SQL_PCODE_OPERATOR_JOIN ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2599 ".hbmk/linux/gcc/sqly.c"
    break;

  case 116: /* simple_condition: col_name LEFT OUTER JOIN col_name  */
#line 841 "source/sql.y"
                                       {
      // printf("LEFT OUTER JOIN\n");
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenIntArray( SQL_PCODE_OPERATOR_LEFT_OUTER_JOIN, (yyvsp[-4].item_val) ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2609 ".hbmk/linux/gcc/sqly.c"
    break;

  case 117: /* simple_condition: col_name RIGHT OUTER JOIN col_name  */
#line 846 "source/sql.y"
                                        {
      // printf("RIGHT OUTER JOIN\n");
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenIntArray( SQL_PCODE_OPERATOR_RIGHT_OUTER_JOIN, (yyvsp[-4].item_val) ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2619 ".hbmk/linux/gcc/sqly.c"
    break;

  case 118: /* scalar_expression_commalist: scalar_expression_commalist ',' col_value  */
#line 854 "source/sql.y"
                                              {
      // printf("scalar_expression_commalist ,col_value\n");
      (yyval.item_val) = SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( (yyvsp[-2].item_val), SQL_PCODE_COLUMN_LIST_SEPARATOR ), (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2629 ".hbmk/linux/gcc/sqly.c"
    break;

  case 119: /* scalar_expression_commalist: col_value  */
#line 859 "source/sql.y"
                {
      // printf("scalar_expression_commalist col_value\n");
      (yyval.item_val) = (yyvsp[0].item_val);
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2639 ".hbmk/linux/gcc/sqly.c"
    break;

  case 120: /* opt_lock: %empty  */
#line 867 "source/sql.y"
              {
      // printf("NO_LOCK\n");
      (yyval.item_val) = SQLpCodeGenInt( SQL_PCODE_NOLOCK );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
      }
#line 2649 ".hbmk/linux/gcc/sqly.c"
    break;

  case 121: /* opt_lock: LOCK  */
#line 872 "source/sql.y"
          {
      // printf("LOCK\n");
      (yyval.item_val) = SQLpCodeGenInt( SQL_PCODE_LOCK );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2659 ".hbmk/linux/gcc/sqly.c"
    break;

  case 122: /* col_constructor2: col_constructor  */
#line 880 "source/sql.y"
                    {
      // printf("col_constructor - col value\n");
      (yyval.item_val) = (yyvsp[0].item_val);
   }
#line 2668 ".hbmk/linux/gcc/sqly.c"
    break;

  case 123: /* col_constructor2: TOKEN_ISNULL col_constructor ',' col_constructor ')'  */
#line 884 "source/sql.y"
                                                           {
      // printf( "ISNULL( , ) function\n" );
      (yyval.item_val) = SQLpCodeGenArrayInt( SQLpCodeGenArrayJoin( SQLpCodeGenArrayInt( SQLpCodeGenIntArray( SQL_PCODE_FUNC_ISNULL, (yyvsp[-3].item_val) ), SQL_PCODE_COLUMN_LIST_SEPARATOR ), (yyvsp[-1].item_val) ), SQL_PCODE_STOP_EXPR );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2678 ".hbmk/linux/gcc/sqly.c"
    break;

  case 124: /* col_constructor: col_value  */
#line 892 "source/sql.y"
                {
      // printf("col_constructor - col value\n");
      (yyval.item_val) = (yyvsp[0].item_val);
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2688 ".hbmk/linux/gcc/sqly.c"
    break;

  case 125: /* col_constructor: col_name  */
#line 897 "source/sql.y"
                {
      // printf("col_constructor - col name\n");
      (yyval.item_val) = (yyvsp[0].item_val);
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2698 ".hbmk/linux/gcc/sqly.c"
    break;

  case 126: /* col_value: INTEGERVAL  */
#line 905 "source/sql.y"
               {
      // printf("INTEGERVAL col value %i\n", $1);
      (yyval.item_val) = SQLpCodeGenIntItem( SQL_PCODE_COLUMN_BY_VALUE, hb_itemPutNI( hb_itemNew(NULL), (yyvsp[0].int_val) ) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2708 ".hbmk/linux/gcc/sqly.c"
    break;

  case 127: /* col_value: REALVAL  */
#line 910 "source/sql.y"
               {
      // printf("REALVAL col value %f\n", $1);
      (yyval.item_val) = SQLpCodeGenIntItem( SQL_PCODE_COLUMN_BY_VALUE, hb_itemPutND( hb_itemNew(NULL), (yyvsp[0].real_val) ) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2718 ".hbmk/linux/gcc/sqly.c"
    break;

  case 128: /* col_value: STRINGVAL  */
#line 915 "source/sql.y"
               {
      // printf("STRING col value: %s\n", hb_itemGetCPtr((PHB_ITEM)$1) );
      (yyval.item_val) = SQLpCodeGenIntItem( SQL_PCODE_COLUMN_BY_VALUE, (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2728 ".hbmk/linux/gcc/sqly.c"
    break;

  case 129: /* col_value: NULLVAL  */
#line 920 "source/sql.y"
               {
      // printf("NULLVAL col value\n");
      (yyval.item_val) = SQLpCodeGenIntItem( SQL_PCODE_COLUMN_BY_VALUE, hb_itemNew(NULL) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2738 ".hbmk/linux/gcc/sqly.c"
    break;

  case 130: /* col_value: DATEVAL  */
#line 925 "source/sql.y"
               {
      // printf("DATEVAL col value\n");
      (yyval.item_val) = SQLpCodeGenIntItem( SQL_PCODE_COLUMN_BY_VALUE, (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2748 ".hbmk/linux/gcc/sqly.c"
    break;

  case 131: /* col_value: PARAM  */
#line 930 "source/sql.y"
               {
      // printf("PARAM col value %i\n", $1);
      (yyval.item_val) = SQLpCodeGenIntItem( SQL_PCODE_COLUMN_PARAM, hb_itemPutNI( hb_itemNew(NULL), (yyvsp[0].param) ) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2758 ".hbmk/linux/gcc/sqly.c"
    break;

  case 132: /* col_value: PARAM_NOT_NULL  */
#line 935 "source/sql.y"
                    {
      // printf("PARAM_NOT_NULL col value %i\n", $1);
      (yyval.item_val) = SQLpCodeGenIntItem( SQL_PCODE_COLUMN_PARAM_NOTNULL, hb_itemPutNI( hb_itemNew(NULL), (yyvsp[0].param) ) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2768 ".hbmk/linux/gcc/sqly.c"
    break;

  case 133: /* col_value: BINDVAR IDENT  */
#line 940 "source/sql.y"
                    {
      // printf("BINDVAR col value : %s\n", hb_itemGetCPtr((PHB_ITEM)$2) );
      (yyval.item_val) = SQLpCodeGenIntItem( SQL_PCODE_COLUMN_BINDVAR, (yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2778 ".hbmk/linux/gcc/sqly.c"
    break;

  case 134: /* col_name: IDENT '.' QUOTED_IDENT  */
#line 948 "source/sql.y"
                          {
      // printf( "ALIASED_QUOTED_COL_NAME : %s - %s\n", hb_itemGetCPtr((PHB_ITEM)$1), hb_itemGetCPtr((PHB_ITEM)$3) );
      (yyval.item_val) = SQLpCodeGenIntItem2( SQL_PCODE_COLUMN_ALIAS, (PHB_ITEM)(yyvsp[-2].item_val), SQL_PCODE_COLUMN_NAME, (PHB_ITEM)(yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2788 ".hbmk/linux/gcc/sqly.c"
    break;

  case 135: /* col_name: IDENT '.' IDENT  */
#line 953 "source/sql.y"
                     {
      // printf( "ALIASED_COL_NAME : %s - %s\n", hb_itemGetCPtr((PHB_ITEM)$1), hb_itemGetCPtr((PHB_ITEM)$3) );
      (yyval.item_val) = SQLpCodeGenIntItem2( SQL_PCODE_COLUMN_ALIAS, (PHB_ITEM)(yyvsp[-2].item_val), SQL_PCODE_COLUMN_NAME, (PHB_ITEM)(yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2798 ".hbmk/linux/gcc/sqly.c"
    break;

  case 136: /* col_name: QUOTED_IDENT  */
#line 958 "source/sql.y"
                  {
      // printf( "QUOTED_COL_NAME : %s\n", hb_itemGetCPtr((PHB_ITEM)$1) );
      (yyval.item_val) = SQLpCodeGenIntItem( SQL_PCODE_COLUMN_NAME, (PHB_ITEM)(yyvsp[0].item_val)  );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2808 ".hbmk/linux/gcc/sqly.c"
    break;

  case 137: /* col_name: IDENT  */
#line 963 "source/sql.y"
           {
      // printf( "COL_NAME : %s\n", hb_itemGetCPtr((PHB_ITEM)$1) );
      (yyval.item_val) = SQLpCodeGenIntItem( SQL_PCODE_COLUMN_NAME, (PHB_ITEM)(yyvsp[0].item_val)  );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2818 ".hbmk/linux/gcc/sqly.c"
    break;

  case 138: /* col_name: IDENT '.' PARAM  */
#line 968 "source/sql.y"
                     {
      // printf("ALIASED PARAM col value: %s . %i\n", hb_itemGetCPtr((PHB_ITEM)$1),$3 );
      (yyval.item_val) = SQLpCodeGenIntItem2( SQL_PCODE_COLUMN_ALIAS, (PHB_ITEM)(yyvsp[-2].item_val), SQL_PCODE_COLUMN_NAME_PARAM, hb_itemPutNI( hb_itemNew(NULL), (yyvsp[0].param) ) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2828 ".hbmk/linux/gcc/sqly.c"
    break;

  case 139: /* col_name: IDENT '.' BINDVAR IDENT  */
#line 973 "source/sql.y"
                             {
      // printf("BINDVAR col value : %s\n", hb_itemGetCPtr((PHB_ITEM)$3) );
      (yyval.item_val) = SQLpCodeGenIntItem2( SQL_PCODE_COLUMN_ALIAS, (PHB_ITEM)(yyvsp[-3].item_val), SQL_PCODE_COLUMN_NAME_BINDVAR, (PHB_ITEM)(yyvsp[0].item_val) );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2838 ".hbmk/linux/gcc/sqly.c"
    break;

  case 140: /* col_list_name: IDENT  */
#line 981 "source/sql.y"
         {
      // printf( "col_list_name" );
      (yyval.item_val) = SQLpCodeGenIntItem( SQL_PCODE_COLUMN_NAME, (PHB_ITEM)(yyvsp[0].item_val)  );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2848 ".hbmk/linux/gcc/sqly.c"
    break;

  case 141: /* col_list_name: QUOTED_IDENT  */
#line 986 "source/sql.y"
                  {
      // printf( "col_list_name QUOTED IDENT" );
      (yyval.item_val) = SQLpCodeGenIntItem( SQL_PCODE_COLUMN_NAME, (PHB_ITEM)(yyvsp[0].item_val)  );
      // ((sql_stmt *) stmt)->pTemp = (PHB_ITEM) $$;
   }
#line 2858 ".hbmk/linux/gcc/sqly.c"
    break;


#line 2862 ".hbmk/linux/gcc/sqly.c"

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
      yyerror (stmt, YY_("syntax error"));
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
                      yytoken, &yylval, stmt);
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, stmt);
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
  yyerror (stmt, YY_("memory exhausted"));
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
                  yytoken, &yylval, stmt);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, stmt);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 993 "source/sql.y"

