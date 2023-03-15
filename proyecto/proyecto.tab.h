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

#ifndef YY_YY_PROYECTO_TAB_H_INCLUDED
# define YY_YY_PROYECTO_TAB_H_INCLUDED
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
    H1 = 258,
    H2 = 259,
    H3 = 260,
    H4 = 261,
    H5 = 262,
    H6 = 263,
    ITALIC = 264,
    COMB = 265,
    COMB2 = 266,
    EMPHASIS = 267,
    SCRATCH = 268,
    CODE = 269,
    ORDLIST = 270,
    DESORDLIST = 271,
    LINK = 272,
    TEXTWORD = 273,
    TITLE = 274,
    LINKNAME = 275,
    IMAGE = 276,
    SPAN = 277,
    SPAN2 = 278,
    BR = 279
  };
#endif
/* Tokens.  */
#define H1 258
#define H2 259
#define H3 260
#define H4 261
#define H5 262
#define H6 263
#define ITALIC 264
#define COMB 265
#define COMB2 266
#define EMPHASIS 267
#define SCRATCH 268
#define CODE 269
#define ORDLIST 270
#define DESORDLIST 271
#define LINK 272
#define TEXTWORD 273
#define TITLE 274
#define LINKNAME 275
#define IMAGE 276
#define SPAN 277
#define SPAN2 278
#define BR 279

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "proyecto.y" /* yacc.c:1909  */
   
     char* string;

#line 106 "proyecto.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROYECTO_TAB_H_INCLUDED  */
