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
    SINGLE_COMMENT = 258,          /* SINGLE_COMMENT  */
    MULTILINE_COMMENT = 259,       /* MULTILINE_COMMENT  */
    AUTO = 260,                    /* AUTO  */
    BREAK = 261,                   /* BREAK  */
    CASE = 262,                    /* CASE  */
    CHAR = 263,                    /* CHAR  */
    CONST = 264,                   /* CONST  */
    CONTINUE = 265,                /* CONTINUE  */
    DEFAULT = 266,                 /* DEFAULT  */
    DO = 267,                      /* DO  */
    DOUBLE = 268,                  /* DOUBLE  */
    ELSE = 269,                    /* ELSE  */
    ENUM = 270,                    /* ENUM  */
    EXTERN = 271,                  /* EXTERN  */
    REGISTER = 272,                /* REGISTER  */
    FLOAT = 273,                   /* FLOAT  */
    FOR = 274,                     /* FOR  */
    GOTO = 275,                    /* GOTO  */
    IF = 276,                      /* IF  */
    INLINE = 277,                  /* INLINE  */
    INT = 278,                     /* INT  */
    LONG = 279,                    /* LONG  */
    RESTRICT = 280,                /* RESTRICT  */
    RETURN = 281,                  /* RETURN  */
    SHORT = 282,                   /* SHORT  */
    SIGNED = 283,                  /* SIGNED  */
    SIZEOF = 284,                  /* SIZEOF  */
    STATIC = 285,                  /* STATIC  */
    STRUCT = 286,                  /* STRUCT  */
    SWITCH = 287,                  /* SWITCH  */
    TYPEDEF = 288,                 /* TYPEDEF  */
    UNION = 289,                   /* UNION  */
    UNSIGNED = 290,                /* UNSIGNED  */
    VOID = 291,                    /* VOID  */
    VOLATILE = 292,                /* VOLATILE  */
    WHILE = 293,                   /* WHILE  */
    BOOL = 294,                    /* BOOL  */
    COMPLEX = 295,                 /* COMPLEX  */
    IMAGINARY = 296,               /* IMAGINARY  */
    SQUARE_BRACKET_OPEN = 297,     /* SQUARE_BRACKET_OPEN  */
    SQUARE_BRACKET_CLOSE = 298,    /* SQUARE_BRACKET_CLOSE  */
    ROUND_BRACKET_OPEN = 299,      /* ROUND_BRACKET_OPEN  */
    ROUND_BRACKET_CLOSE = 300,     /* ROUND_BRACKET_CLOSE  */
    CURLY_BRACKET_OPEN = 301,      /* CURLY_BRACKET_OPEN  */
    CURLY_BRACKET_CLOSE = 302,     /* CURLY_BRACKET_CLOSE  */
    DOT = 303,                     /* DOT  */
    IMPLIES = 304,                 /* IMPLIES  */
    INCREMENT = 305,               /* INCREMENT  */
    DECREMENT = 306,               /* DECREMENT  */
    BITWISE_AND = 307,             /* BITWISE_AND  */
    MUL = 308,                     /* MUL  */
    PLUS = 309,                    /* PLUS  */
    MINUS = 310,                   /* MINUS  */
    BITWISE_NOT = 311,             /* BITWISE_NOT  */
    NOT = 312,                     /* NOT  */
    DIV = 313,                     /* DIV  */
    MOD = 314,                     /* MOD  */
    LEFT_SHIFT = 315,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 316,             /* RIGHT_SHIFT  */
    LESS_THAN = 317,               /* LESS_THAN  */
    GREATER_THAN = 318,            /* GREATER_THAN  */
    LESS_EQUAL = 319,              /* LESS_EQUAL  */
    GREATER_EQUAL = 320,           /* GREATER_EQUAL  */
    EQUAL = 321,                   /* EQUAL  */
    NOT_EQUAL = 322,               /* NOT_EQUAL  */
    BITWISE_XOR = 323,             /* BITWISE_XOR  */
    BITWISE_OR = 324,              /* BITWISE_OR  */
    AND = 325,                     /* AND  */
    OR = 326,                      /* OR  */
    QUESTION = 327,                /* QUESTION  */
    COLON = 328,                   /* COLON  */
    SEMICOLON = 329,               /* SEMICOLON  */
    ELLIPSIS = 330,                /* ELLIPSIS  */
    ASSIGN = 331,                  /* ASSIGN  */
    MUL_EQUAL = 332,               /* MUL_EQUAL  */
    DIV_EQUAL = 333,               /* DIV_EQUAL  */
    MOD_EQUAL = 334,               /* MOD_EQUAL  */
    PLUS_EQUAL = 335,              /* PLUS_EQUAL  */
    MINUS_EQUAL = 336,             /* MINUS_EQUAL  */
    SHIFT_LEFT_EQUAL = 337,        /* SHIFT_LEFT_EQUAL  */
    SHIFT_RIGHT_EQUAL = 338,       /* SHIFT_RIGHT_EQUAL  */
    BITWISE_AND_EQUAL = 339,       /* BITWISE_AND_EQUAL  */
    BITWISE_XOR_EQUAL = 340,       /* BITWISE_XOR_EQUAL  */
    BITWISE_OR_EQUAL = 341,        /* BITWISE_OR_EQUAL  */
    COMMA = 342,                   /* COMMA  */
    HASH = 343,                    /* HASH  */
    IDENTIFIER = 344,              /* IDENTIFIER  */
    INTEGER = 345,                 /* INTEGER  */
    FLOATING_CONSTANT = 346,       /* FLOATING_CONSTANT  */
    CHARACTER_CONSTANT = 347,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 348,          /* STRING_LITERAL  */
    THEN = 349                     /* THEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define SINGLE_COMMENT 258
#define MULTILINE_COMMENT 259
#define AUTO 260
#define BREAK 261
#define CASE 262
#define CHAR 263
#define CONST 264
#define CONTINUE 265
#define DEFAULT 266
#define DO 267
#define DOUBLE 268
#define ELSE 269
#define ENUM 270
#define EXTERN 271
#define REGISTER 272
#define FLOAT 273
#define FOR 274
#define GOTO 275
#define IF 276
#define INLINE 277
#define INT 278
#define LONG 279
#define RESTRICT 280
#define RETURN 281
#define SHORT 282
#define SIGNED 283
#define SIZEOF 284
#define STATIC 285
#define STRUCT 286
#define SWITCH 287
#define TYPEDEF 288
#define UNION 289
#define UNSIGNED 290
#define VOID 291
#define VOLATILE 292
#define WHILE 293
#define BOOL 294
#define COMPLEX 295
#define IMAGINARY 296
#define SQUARE_BRACKET_OPEN 297
#define SQUARE_BRACKET_CLOSE 298
#define ROUND_BRACKET_OPEN 299
#define ROUND_BRACKET_CLOSE 300
#define CURLY_BRACKET_OPEN 301
#define CURLY_BRACKET_CLOSE 302
#define DOT 303
#define IMPLIES 304
#define INCREMENT 305
#define DECREMENT 306
#define BITWISE_AND 307
#define MUL 308
#define PLUS 309
#define MINUS 310
#define BITWISE_NOT 311
#define NOT 312
#define DIV 313
#define MOD 314
#define LEFT_SHIFT 315
#define RIGHT_SHIFT 316
#define LESS_THAN 317
#define GREATER_THAN 318
#define LESS_EQUAL 319
#define GREATER_EQUAL 320
#define EQUAL 321
#define NOT_EQUAL 322
#define BITWISE_XOR 323
#define BITWISE_OR 324
#define AND 325
#define OR 326
#define QUESTION 327
#define COLON 328
#define SEMICOLON 329
#define ELLIPSIS 330
#define ASSIGN 331
#define MUL_EQUAL 332
#define DIV_EQUAL 333
#define MOD_EQUAL 334
#define PLUS_EQUAL 335
#define MINUS_EQUAL 336
#define SHIFT_LEFT_EQUAL 337
#define SHIFT_RIGHT_EQUAL 338
#define BITWISE_AND_EQUAL 339
#define BITWISE_XOR_EQUAL 340
#define BITWISE_OR_EQUAL 341
#define COMMA 342
#define HASH 343
#define IDENTIFIER 344
#define INTEGER 345
#define FLOATING_CONSTANT 346
#define CHARACTER_CONSTANT 347
#define STRING_LITERAL 348
#define THEN 349

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 33 "tinyC2_22CS30027_22CS30019.y"

    int INTVAL;
    Node *node;

#line 260 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
