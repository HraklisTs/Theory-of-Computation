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

#ifndef YY_YY_BISON_TAB_H_INCLUDED
# define YY_YY_BISON_TAB_H_INCLUDED
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
    GT = 258,
    L_BRAC = 259,
    R_BRAC = 260,
    AND = 261,
    STRING = 262,
    OP_OR = 263,
    NOT = 264,
    TRUE = 265,
    FALSE = 266,
    IF = 267,
    FI = 268,
    ELSE = 269,
    WHILE = 270,
    BOOL = 271,
    CHAR = 272,
    RL = 273,
    POSINT = 274,
    ID = 275,
    STR = 276,
    LOOP = 277,
    POOL = 278,
    CONST = 279,
    LET = 280,
    BR = 281,
    RET = 282,
    START = 283,
    LST = 284,
    ASSIGN = 285,
    EQ = 286,
    OP_PLUS = 287,
    OP_MIN = 288,
    L_PAR = 289,
    R_PAR = 290,
    DIV = 291,
    OP_MUL = 292,
    SEMICOLON = 293,
    COLON = 294,
    MOD = 295,
    DIFF = 296,
    EAR = 297,
    ARROW = 298,
    INT = 299,
    REAL = 300,
    THEN = 301,
    NEG = 302,
    EXPREC = 303
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "bison.y" /* yacc.c:1909  */

	char* reg;

#line 107 "bison.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BISON_TAB_H_INCLUDED  */
