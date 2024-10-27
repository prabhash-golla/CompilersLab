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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    AUTO = 258,                    /* AUTO  */
    BREAK = 259,                   /* BREAK  */
    CASE = 260,                    /* CASE  */
    CHAR = 261,                    /* CHAR  */
    CONST = 262,                   /* CONST  */
    CONTINUE = 263,                /* CONTINUE  */
    DEFAULT = 264,                 /* DEFAULT  */
    DO = 265,                      /* DO  */
    DOUBLE = 266,                  /* DOUBLE  */
    ELSE = 267,                    /* ELSE  */
    EXTERN = 268,                  /* EXTERN  */
    REGISTER = 269,                /* REGISTER  */
    FLOAT = 270,                   /* FLOAT  */
    FOR = 271,                     /* FOR  */
    GOTO = 272,                    /* GOTO  */
    IF = 273,                      /* IF  */
    INLINE = 274,                  /* INLINE  */
    INT = 275,                     /* INT  */
    LONG = 276,                    /* LONG  */
    RESTRICT = 277,                /* RESTRICT  */
    RETURN = 278,                  /* RETURN  */
    SHORT = 279,                   /* SHORT  */
    SIGNED = 280,                  /* SIGNED  */
    SIZEOF = 281,                  /* SIZEOF  */
    STATIC = 282,                  /* STATIC  */
    SWITCH = 283,                  /* SWITCH  */
    UNSIGNED = 284,                /* UNSIGNED  */
    VOID = 285,                    /* VOID  */
    VOLATILE = 286,                /* VOLATILE  */
    WHILE = 287,                   /* WHILE  */
    BOOL = 288,                    /* BOOL  */
    COMPLEX = 289,                 /* COMPLEX  */
    IMAGINARY = 290,               /* IMAGINARY  */
    SQUARE_BRACKET_OPEN = 291,     /* SQUARE_BRACKET_OPEN  */
    SQUARE_BRACKET_CLOSE = 292,    /* SQUARE_BRACKET_CLOSE  */
    ROUND_BRACKET_OPEN = 293,      /* ROUND_BRACKET_OPEN  */
    ROUND_BRACKET_CLOSE = 294,     /* ROUND_BRACKET_CLOSE  */
    CURLY_BRACKET_OPEN = 295,      /* CURLY_BRACKET_OPEN  */
    CURLY_BRACKET_CLOSE = 296,     /* CURLY_BRACKET_CLOSE  */
    DOT = 297,                     /* DOT  */
    IMPLIES = 298,                 /* IMPLIES  */
    INCREMENT = 299,               /* INCREMENT  */
    DECREMENT = 300,               /* DECREMENT  */
    BITWISE_AND = 301,             /* BITWISE_AND  */
    MUL = 302,                     /* MUL  */
    PLUS = 303,                    /* PLUS  */
    MINUS = 304,                   /* MINUS  */
    BITWISE_NOT = 305,             /* BITWISE_NOT  */
    NOT = 306,                     /* NOT  */
    DIV = 307,                     /* DIV  */
    MOD = 308,                     /* MOD  */
    LEFT_SHIFT = 309,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 310,             /* RIGHT_SHIFT  */
    LESS_THAN = 311,               /* LESS_THAN  */
    GREATER_THAN = 312,            /* GREATER_THAN  */
    LESS_EQUAL = 313,              /* LESS_EQUAL  */
    GREATER_EQUAL = 314,           /* GREATER_EQUAL  */
    EQUAL = 315,                   /* EQUAL  */
    NOT_EQUAL = 316,               /* NOT_EQUAL  */
    BITWISE_XOR = 317,             /* BITWISE_XOR  */
    BITWISE_OR = 318,              /* BITWISE_OR  */
    AND = 319,                     /* AND  */
    OR = 320,                      /* OR  */
    QUESTION = 321,                /* QUESTION  */
    COLON = 322,                   /* COLON  */
    SEMICOLON = 323,               /* SEMICOLON  */
    ELLIPSIS = 324,                /* ELLIPSIS  */
    ASSIGN = 325,                  /* ASSIGN  */
    MUL_EQUAL = 326,               /* MUL_EQUAL  */
    DIV_EQUAL = 327,               /* DIV_EQUAL  */
    MOD_EQUAL = 328,               /* MOD_EQUAL  */
    PLUS_EQUAL = 329,              /* PLUS_EQUAL  */
    MINUS_EQUAL = 330,             /* MINUS_EQUAL  */
    SHIFT_LEFT_EQUAL = 331,        /* SHIFT_LEFT_EQUAL  */
    SHIFT_RIGHT_EQUAL = 332,       /* SHIFT_RIGHT_EQUAL  */
    BITWISE_AND_EQUAL = 333,       /* BITWISE_AND_EQUAL  */
    BITWISE_XOR_EQUAL = 334,       /* BITWISE_XOR_EQUAL  */
    BITWISE_OR_EQUAL = 335,        /* BITWISE_OR_EQUAL  */
    COMMA = 336,                   /* COMMA  */
    IDENTIFIER = 337,              /* IDENTIFIER  */
    INTEGER = 338,                 /* INTEGER  */
    FLOATING_CONSTANT = 339,       /* FLOATING_CONSTANT  */
    CHARACTER_CONSTANT = 340,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 341,          /* STRING_LITERAL  */
    THEN = 342                     /* THEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define AUTO 258
#define BREAK 259
#define CASE 260
#define CHAR 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ELSE 267
#define EXTERN 268
#define REGISTER 269
#define FLOAT 270
#define FOR 271
#define GOTO 272
#define IF 273
#define INLINE 274
#define INT 275
#define LONG 276
#define RESTRICT 277
#define RETURN 278
#define SHORT 279
#define SIGNED 280
#define SIZEOF 281
#define STATIC 282
#define SWITCH 283
#define UNSIGNED 284
#define VOID 285
#define VOLATILE 286
#define WHILE 287
#define BOOL 288
#define COMPLEX 289
#define IMAGINARY 290
#define SQUARE_BRACKET_OPEN 291
#define SQUARE_BRACKET_CLOSE 292
#define ROUND_BRACKET_OPEN 293
#define ROUND_BRACKET_CLOSE 294
#define CURLY_BRACKET_OPEN 295
#define CURLY_BRACKET_CLOSE 296
#define DOT 297
#define IMPLIES 298
#define INCREMENT 299
#define DECREMENT 300
#define BITWISE_AND 301
#define MUL 302
#define PLUS 303
#define MINUS 304
#define BITWISE_NOT 305
#define NOT 306
#define DIV 307
#define MOD 308
#define LEFT_SHIFT 309
#define RIGHT_SHIFT 310
#define LESS_THAN 311
#define GREATER_THAN 312
#define LESS_EQUAL 313
#define GREATER_EQUAL 314
#define EQUAL 315
#define NOT_EQUAL 316
#define BITWISE_XOR 317
#define BITWISE_OR 318
#define AND 319
#define OR 320
#define QUESTION 321
#define COLON 322
#define SEMICOLON 323
#define ELLIPSIS 324
#define ASSIGN 325
#define MUL_EQUAL 326
#define DIV_EQUAL 327
#define MOD_EQUAL 328
#define PLUS_EQUAL 329
#define MINUS_EQUAL 330
#define SHIFT_LEFT_EQUAL 331
#define SHIFT_RIGHT_EQUAL 332
#define BITWISE_AND_EQUAL 333
#define BITWISE_XOR_EQUAL 334
#define BITWISE_OR_EQUAL 335
#define COMMA 336
#define IDENTIFIER 337
#define INTEGER 338
#define FLOATING_CONSTANT 339
#define CHARACTER_CONSTANT 340
#define STRING_LITERAL 341
#define THEN 342

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "TinyC3_22CS30027_22CS30019.y"

    int INTVAL;
    int InstCount;
    float FLOATVAL;
    char* CHARVAL;
    char UnaryOper;
    ArrayType* Array;
    int Parameter;
    Symbol* SymbolPointer;
    Statement* Stateme;
    SType* Type;
    Expression* Express;

#line 255 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
