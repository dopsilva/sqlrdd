/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_SQL_YY_HBMK_LINUX_GCC_SQLY_H_INCLUDED
# define YY_SQL_YY_HBMK_LINUX_GCC_SQLY_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int sql_yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ERRORVAL = 258,                /* ERRORVAL  */
    INTEGERVAL = 259,              /* INTEGERVAL  */
    STRINGVAL = 260,               /* STRINGVAL  */
    REALVAL = 261,                 /* REALVAL  */
    DATEVAL = 262,                 /* DATEVAL  */
    BINDVAR = 263,                 /* BINDVAR  */
    NULLVAL = 264,                 /* NULLVAL  */
    PARAM = 265,                   /* PARAM  */
    PARAM_NOT_NULL = 266,          /* PARAM_NOT_NULL  */
    IDENT = 267,                   /* IDENT  */
    QUOTED_IDENT = 268,            /* QUOTED_IDENT  */
    ASTERISK = 269,                /* ASTERISK  */
    EQUALS = 270,                  /* EQUALS  */
    COMPARE = 271,                 /* COMPARE  */
    OPERATOR = 272,                /* OPERATOR  */
    IS_OP = 273,                   /* IS_OP  */
    AND_OP = 274,                  /* AND_OP  */
    OR = 275,                      /* OR  */
    IN_OP = 276,                   /* IN_OP  */
    INSERT = 277,                  /* INSERT  */
    UPDATE = 278,                  /* UPDATE  */
    SELECT = 279,                  /* SELECT  */
    DELETE_SQL = 280,              /* DELETE_SQL  */
    ALL = 281,                     /* ALL  */
    DISTINCT = 282,                /* DISTINCT  */
    WHERE = 283,                   /* WHERE  */
    ORDER = 284,                   /* ORDER  */
    LIMIT = 285,                   /* LIMIT  */
    ASC = 286,                     /* ASC  */
    DESC = 287,                    /* DESC  */
    FROM = 288,                    /* FROM  */
    INTO = 289,                    /* INTO  */
    BY = 290,                      /* BY  */
    VALUES = 291,                  /* VALUES  */
    SET = 292,                     /* SET  */
    NOT = 293,                     /* NOT  */
    AS = 294,                      /* AS  */
    UNION = 295,                   /* UNION  */
    LEFT = 296,                    /* LEFT  */
    OUTER = 297,                   /* OUTER  */
    JOIN = 298,                    /* JOIN  */
    GROUP = 299,                   /* GROUP  */
    RIGHT = 300,                   /* RIGHT  */
    LOCK = 301,                    /* LOCK  */
    LIKE = 302,                    /* LIKE  */
    COUNT = 303,                   /* COUNT  */
    MAX = 304,                     /* MAX  */
    MIN = 305,                     /* MIN  */
    TOKEN_ISNULL = 306,            /* TOKEN_ISNULL  */
    SUBSTR = 307,                  /* SUBSTR  */
    ABS = 308,                     /* ABS  */
    POWER = 309,                   /* POWER  */
    ROUND = 310,                   /* ROUND  */
    TRIM = 311,                    /* TRIM  */
    SUM = 312,                     /* SUM  */
    AVG = 313,                     /* AVG  */
    CURRENT_DATE = 314             /* CURRENT_DATE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 40 "source/sql.y"

    int int_val;
    double real_val;
    PHB_ITEM item_val;
    int param;
    int iOperator;

#line 131 ".hbmk/linux/gcc/sqly.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int sql_yyparse (void * stmt);


#endif /* !YY_SQL_YY_HBMK_LINUX_GCC_SQLY_H_INCLUDED  */
