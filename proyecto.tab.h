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

#ifndef YY_YY_PROYECTO_TAB_H_INCLUDED
# define YY_YY_PROYECTO_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
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
    H1 = 258,                      /* H1  */
    H2 = 259,                      /* H2  */
    H3 = 260,                      /* H3  */
    H4 = 261,                      /* H4  */
    H5 = 262,                      /* H5  */
    H6 = 263,                      /* H6  */
    CURSIVA = 264,                 /* CURSIVA  */
    COMB = 265,                    /* COMB  */
    COMB2 = 266,                   /* COMB2  */
    EMPHASIS = 267,                /* EMPHASIS  */
    SCRATCH = 268,                 /* SCRATCH  */
    CODE = 269,                    /* CODE  */
    LISTAORD = 270,                /* LISTAORD  */
    LISTADESORD = 271,             /* LISTADESORD  */
    LINK = 272,                    /* LINK  */
    TEXTWORD = 273,                /* TEXTWORD  */
    TITLE = 274                    /* TITLE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define H1 258
#define H2 259
#define H3 260
#define H4 261
#define H5 262
#define H6 263
#define CURSIVA 264
#define COMB 265
#define COMB2 266
#define EMPHASIS 267
#define SCRATCH 268
#define CODE 269
#define LISTAORD 270
#define LISTADESORD 271
#define LINK 272
#define TEXTWORD 273
#define TITLE 274

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "proyecto.y"

   
     char* string;


#line 111 "proyecto.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PROYECTO_TAB_H_INCLUDED  */
