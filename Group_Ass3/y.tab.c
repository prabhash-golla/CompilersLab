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
#line 1 "TinyC3_22CS30027_22CS30019.y"

    #include <iostream>
    #include "TinyC3_22CS30027_22CS30019_translator.h"
    // #define YYDEBUG 1 //For Debugging 
    // int yydebug=1;
    
    /*
        Group :- TinyC-67
        Golla Meghanandh Manvith Prabhash :- 22CS30027
        Darapu Adhithya  :- 22CS30019
    */
    using namespace std;
    extern int yylineno;
    int yylex();
    extern string Globe;
    void yyerror(char *ERRORS);
   

#line 90 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
#line 20 "TinyC3_22CS30027_22CS30019.y"

    int INTVAL;
    float FLOATVAL;
    char* CHARVAL;
    char UnaryOper;
    ArrayType* Array;
    int Parameter;
    Symbol* SymbolPointer;
    Statement* Stateme;
    SType* Type;
    Expression* Express;

#line 344 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_SINGLE_COMMENT = 3,             /* SINGLE_COMMENT  */
  YYSYMBOL_MULTILINE_COMMENT = 4,          /* MULTILINE_COMMENT  */
  YYSYMBOL_AUTO = 5,                       /* AUTO  */
  YYSYMBOL_BREAK = 6,                      /* BREAK  */
  YYSYMBOL_CASE = 7,                       /* CASE  */
  YYSYMBOL_CHAR = 8,                       /* CHAR  */
  YYSYMBOL_CONST = 9,                      /* CONST  */
  YYSYMBOL_CONTINUE = 10,                  /* CONTINUE  */
  YYSYMBOL_DEFAULT = 11,                   /* DEFAULT  */
  YYSYMBOL_DO = 12,                        /* DO  */
  YYSYMBOL_DOUBLE = 13,                    /* DOUBLE  */
  YYSYMBOL_ELSE = 14,                      /* ELSE  */
  YYSYMBOL_ENUM = 15,                      /* ENUM  */
  YYSYMBOL_EXTERN = 16,                    /* EXTERN  */
  YYSYMBOL_REGISTER = 17,                  /* REGISTER  */
  YYSYMBOL_FLOAT = 18,                     /* FLOAT  */
  YYSYMBOL_FOR = 19,                       /* FOR  */
  YYSYMBOL_GOTO = 20,                      /* GOTO  */
  YYSYMBOL_IF = 21,                        /* IF  */
  YYSYMBOL_INLINE = 22,                    /* INLINE  */
  YYSYMBOL_INT = 23,                       /* INT  */
  YYSYMBOL_LONG = 24,                      /* LONG  */
  YYSYMBOL_RESTRICT = 25,                  /* RESTRICT  */
  YYSYMBOL_RETURN = 26,                    /* RETURN  */
  YYSYMBOL_SHORT = 27,                     /* SHORT  */
  YYSYMBOL_SIGNED = 28,                    /* SIGNED  */
  YYSYMBOL_SIZEOF = 29,                    /* SIZEOF  */
  YYSYMBOL_STATIC = 30,                    /* STATIC  */
  YYSYMBOL_STRUCT = 31,                    /* STRUCT  */
  YYSYMBOL_SWITCH = 32,                    /* SWITCH  */
  YYSYMBOL_TYPEDEF = 33,                   /* TYPEDEF  */
  YYSYMBOL_UNION = 34,                     /* UNION  */
  YYSYMBOL_UNSIGNED = 35,                  /* UNSIGNED  */
  YYSYMBOL_VOID = 36,                      /* VOID  */
  YYSYMBOL_VOLATILE = 37,                  /* VOLATILE  */
  YYSYMBOL_WHILE = 38,                     /* WHILE  */
  YYSYMBOL_BOOL = 39,                      /* BOOL  */
  YYSYMBOL_COMPLEX = 40,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 41,                 /* IMAGINARY  */
  YYSYMBOL_SQUARE_BRACKET_OPEN = 42,       /* SQUARE_BRACKET_OPEN  */
  YYSYMBOL_SQUARE_BRACKET_CLOSE = 43,      /* SQUARE_BRACKET_CLOSE  */
  YYSYMBOL_ROUND_BRACKET_OPEN = 44,        /* ROUND_BRACKET_OPEN  */
  YYSYMBOL_ROUND_BRACKET_CLOSE = 45,       /* ROUND_BRACKET_CLOSE  */
  YYSYMBOL_CURLY_BRACKET_OPEN = 46,        /* CURLY_BRACKET_OPEN  */
  YYSYMBOL_CURLY_BRACKET_CLOSE = 47,       /* CURLY_BRACKET_CLOSE  */
  YYSYMBOL_DOT = 48,                       /* DOT  */
  YYSYMBOL_IMPLIES = 49,                   /* IMPLIES  */
  YYSYMBOL_INCREMENT = 50,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 51,                 /* DECREMENT  */
  YYSYMBOL_BITWISE_AND = 52,               /* BITWISE_AND  */
  YYSYMBOL_MUL = 53,                       /* MUL  */
  YYSYMBOL_PLUS = 54,                      /* PLUS  */
  YYSYMBOL_MINUS = 55,                     /* MINUS  */
  YYSYMBOL_BITWISE_NOT = 56,               /* BITWISE_NOT  */
  YYSYMBOL_NOT = 57,                       /* NOT  */
  YYSYMBOL_DIV = 58,                       /* DIV  */
  YYSYMBOL_MOD = 59,                       /* MOD  */
  YYSYMBOL_LEFT_SHIFT = 60,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 61,               /* RIGHT_SHIFT  */
  YYSYMBOL_LESS_THAN = 62,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 63,              /* GREATER_THAN  */
  YYSYMBOL_LESS_EQUAL = 64,                /* LESS_EQUAL  */
  YYSYMBOL_GREATER_EQUAL = 65,             /* GREATER_EQUAL  */
  YYSYMBOL_EQUAL = 66,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 67,                 /* NOT_EQUAL  */
  YYSYMBOL_BITWISE_XOR = 68,               /* BITWISE_XOR  */
  YYSYMBOL_BITWISE_OR = 69,                /* BITWISE_OR  */
  YYSYMBOL_AND = 70,                       /* AND  */
  YYSYMBOL_OR = 71,                        /* OR  */
  YYSYMBOL_QUESTION = 72,                  /* QUESTION  */
  YYSYMBOL_COLON = 73,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 74,                 /* SEMICOLON  */
  YYSYMBOL_ELLIPSIS = 75,                  /* ELLIPSIS  */
  YYSYMBOL_ASSIGN = 76,                    /* ASSIGN  */
  YYSYMBOL_MUL_EQUAL = 77,                 /* MUL_EQUAL  */
  YYSYMBOL_DIV_EQUAL = 78,                 /* DIV_EQUAL  */
  YYSYMBOL_MOD_EQUAL = 79,                 /* MOD_EQUAL  */
  YYSYMBOL_PLUS_EQUAL = 80,                /* PLUS_EQUAL  */
  YYSYMBOL_MINUS_EQUAL = 81,               /* MINUS_EQUAL  */
  YYSYMBOL_SHIFT_LEFT_EQUAL = 82,          /* SHIFT_LEFT_EQUAL  */
  YYSYMBOL_SHIFT_RIGHT_EQUAL = 83,         /* SHIFT_RIGHT_EQUAL  */
  YYSYMBOL_BITWISE_AND_EQUAL = 84,         /* BITWISE_AND_EQUAL  */
  YYSYMBOL_BITWISE_XOR_EQUAL = 85,         /* BITWISE_XOR_EQUAL  */
  YYSYMBOL_BITWISE_OR_EQUAL = 86,          /* BITWISE_OR_EQUAL  */
  YYSYMBOL_COMMA = 87,                     /* COMMA  */
  YYSYMBOL_HASH = 88,                      /* HASH  */
  YYSYMBOL_IDENTIFIER = 89,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER = 90,                   /* INTEGER  */
  YYSYMBOL_FLOATING_CONSTANT = 91,         /* FLOATING_CONSTANT  */
  YYSYMBOL_CHARACTER_CONSTANT = 92,        /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 93,            /* STRING_LITERAL  */
  YYSYMBOL_THEN = 94,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 95,                  /* $accept  */
  YYSYMBOL_constant = 96,                  /* constant  */
  YYSYMBOL_primary_expression = 97,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 98,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list_opt = 99, /* argument_expression_list_opt  */
  YYSYMBOL_argument_expression_list = 100, /* argument_expression_list  */
  YYSYMBOL_unary_expression = 101,         /* unary_expression  */
  YYSYMBOL_unary_operator = 102,           /* unary_operator  */
  YYSYMBOL_cast_expression = 103,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 104, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 105,      /* additive_expression  */
  YYSYMBOL_shift_expression = 106,         /* shift_expression  */
  YYSYMBOL_relational_expression = 107,    /* relational_expression  */
  YYSYMBOL_equality_expression = 108,      /* equality_expression  */
  YYSYMBOL_and_expression = 109,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 110,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 111,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 112,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 113,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 114,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 115,    /* assignment_expression  */
  YYSYMBOL_expression = 116,               /* expression  */
  YYSYMBOL_constant_expression = 117,      /* constant_expression  */
  YYSYMBOL_declaration = 118,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 119,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list_opt = 120, /* init_declarator_list_opt  */
  YYSYMBOL_init_declarator_list = 121,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 122,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 123,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 124,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 125, /* specifier_qualifier_list  */
  YYSYMBOL_type_qualifier = 126,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 127,       /* function_specifier  */
  YYSYMBOL_declarator = 128,               /* declarator  */
  YYSYMBOL_direct_declarator = 129,        /* direct_declarator  */
  YYSYMBOL_type_qualifier_list_opt = 130,  /* type_qualifier_list_opt  */
  YYSYMBOL_assignment_expression_opt = 131, /* assignment_expression_opt  */
  YYSYMBOL_identifier_list_opt = 132,      /* identifier_list_opt  */
  YYSYMBOL_pointer_opt = 133,              /* pointer_opt  */
  YYSYMBOL_pointer = 134,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 135,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 136,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 137,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 138,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 139,          /* identifier_list  */
  YYSYMBOL_type_name = 140,                /* type_name  */
  YYSYMBOL_initializer = 141,              /* initializer  */
  YYSYMBOL_initializer_list = 142,         /* initializer_list  */
  YYSYMBOL_designation_opt = 143,          /* designation_opt  */
  YYSYMBOL_designation = 144,              /* designation  */
  YYSYMBOL_designator_list = 145,          /* designator_list  */
  YYSYMBOL_designator = 146,               /* designator  */
  YYSYMBOL_statement = 147,                /* statement  */
  YYSYMBOL_labeled_statement = 148,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 149,       /* compound_statement  */
  YYSYMBOL_block_item_list_opt = 150,      /* block_item_list_opt  */
  YYSYMBOL_block_item_list = 151,          /* block_item_list  */
  YYSYMBOL_block_item = 152,               /* block_item  */
  YYSYMBOL_expression_statement = 153,     /* expression_statement  */
  YYSYMBOL_expression_opt = 154,           /* expression_opt  */
  YYSYMBOL_selection_statement = 155,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 156,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 157,           /* jump_statement  */
  YYSYMBOL_start_symbol = 158,             /* start_symbol  */
  YYSYMBOL_translation_unit = 159,         /* translation_unit  */
  YYSYMBOL_external_declaration = 160,     /* external_declaration  */
  YYSYMBOL_function_definition = 161,      /* function_definition  */
  YYSYMBOL_declaration_list_opt = 162,     /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 163          /* declaration_list  */
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
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   865

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  201
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  333

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   349


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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    86,    86,    93,   100,   109,   117,   122,   130,   139,
     147,   168,   175,   179,   183,   191,   199,   203,   212,   216,
     223,   229,   239,   244,   250,   256,   270,   274,   282,   286,
     290,   294,   298,   302,   310,   314,   322,   326,   330,   334,
     342,   346,   350,   358,   362,   366,   374,   378,   382,   386,
     390,   398,   402,   406,   414,   418,   426,   430,   438,   442,
     450,   454,   462,   466,   474,   478,   486,   490,   494,   498,
     502,   506,   510,   514,   518,   523,   528,   533,   542,   546,
     553,   565,   573,   577,   581,   585,   589,   593,   597,   601,
     610,   613,   619,   623,   631,   635,   643,   647,   651,   655,
     663,   667,   671,   675,   679,   683,   687,   691,   695,   699,
     703,   707,   715,   719,   723,   727,   735,   739,   743,   751,
     759,   767,   771,   775,   779,   783,   787,   791,   795,   801,
     804,   810,   813,   820,   823,   832,   835,   841,   845,   853,
     857,   865,   869,   876,   880,   888,   892,   900,   904,   912,
     920,   924,   928,   936,   940,   946,   951,   958,   966,   970,
     978,   982,   993,   997,  1001,  1005,  1009,  1013,  1021,  1025,
    1029,  1037,  1044,  1047,  1055,  1059,  1067,  1071,  1079,  1086,
    1089,  1097,  1101,  1105,  1113,  1117,  1121,  1125,  1133,  1137,
    1141,  1145,  1157,  1163,  1167,  1175,  1179,  1187,  1194,  1197,
    1205,  1209
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
  "\"end of file\"", "error", "\"invalid token\"", "SINGLE_COMMENT",
  "MULTILINE_COMMENT", "AUTO", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN",
  "REGISTER", "FLOAT", "FOR", "GOTO", "IF", "INLINE", "INT", "LONG",
  "RESTRICT", "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT",
  "SWITCH", "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE",
  "BOOL", "COMPLEX", "IMAGINARY", "SQUARE_BRACKET_OPEN",
  "SQUARE_BRACKET_CLOSE", "ROUND_BRACKET_OPEN", "ROUND_BRACKET_CLOSE",
  "CURLY_BRACKET_OPEN", "CURLY_BRACKET_CLOSE", "DOT", "IMPLIES",
  "INCREMENT", "DECREMENT", "BITWISE_AND", "MUL", "PLUS", "MINUS",
  "BITWISE_NOT", "NOT", "DIV", "MOD", "LEFT_SHIFT", "RIGHT_SHIFT",
  "LESS_THAN", "GREATER_THAN", "LESS_EQUAL", "GREATER_EQUAL", "EQUAL",
  "NOT_EQUAL", "BITWISE_XOR", "BITWISE_OR", "AND", "OR", "QUESTION",
  "COLON", "SEMICOLON", "ELLIPSIS", "ASSIGN", "MUL_EQUAL", "DIV_EQUAL",
  "MOD_EQUAL", "PLUS_EQUAL", "MINUS_EQUAL", "SHIFT_LEFT_EQUAL",
  "SHIFT_RIGHT_EQUAL", "BITWISE_AND_EQUAL", "BITWISE_XOR_EQUAL",
  "BITWISE_OR_EQUAL", "COMMA", "HASH", "IDENTIFIER", "INTEGER",
  "FLOATING_CONSTANT", "CHARACTER_CONSTANT", "STRING_LITERAL", "THEN",
  "$accept", "constant", "primary_expression", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "type_qualifier_list_opt",
  "assignment_expression_opt", "identifier_list_opt", "pointer_opt",
  "pointer", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "type_name", "initializer", "initializer_list", "designation_opt",
  "designation", "designator_list", "designator", "statement",
  "labeled_statement", "compound_statement", "block_item_list_opt",
  "block_item_list", "block_item", "expression_statement",
  "expression_opt", "selection_statement", "iteration_statement",
  "jump_statement", "start_symbol", "translation_unit",
  "external_declaration", "function_definition", "declaration_list_opt",
  "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-192)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-199)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     799,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,
    -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,
    -192,  -192,    -4,   799,   799,   799,   799,    19,   799,  -192,
    -192,     9,   -52,    10,  -192,   570,   -29,  -192,  -192,  -192,
    -192,  -192,  -192,  -192,  -192,     2,     9,  -192,     2,   130,
    -192,    -4,    25,   799,     2,  -192,    -2,  -192,  -192,  -192,
      48,   628,   481,    51,   644,   644,  -192,  -192,  -192,  -192,
    -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,   156,
     259,   694,  -192,    76,    49,    82,   146,    84,    81,    32,
      70,    77,   107,  -192,  -192,  -192,   277,  -192,  -192,   113,
       7,   237,   481,  -192,  -192,   -25,   824,  -192,   824,   118,
     694,   101,   -35,   130,  -192,    -3,  -192,   481,  -192,  -192,
     694,   694,   103,   110,  -192,  -192,   694,   694,   694,   694,
     694,   694,   694,   694,   694,   694,   694,  -192,  -192,   694,
     694,   694,   694,   694,   694,   694,   694,   694,   694,   694,
     694,   694,   694,   694,   694,   694,   694,   694,    96,   694,
     122,   129,   422,   172,   139,   186,   694,   187,   188,   161,
     148,  -192,  -192,  -192,  -192,   189,   277,  -192,  -192,   163,
    -192,  -192,  -192,  -192,     9,   710,   123,  -192,   -10,   193,
     194,   153,  -192,   154,   198,  -192,   694,  -192,  -192,   614,
    -192,   205,  -192,  -192,    89,  -192,  -192,  -192,   204,   -33,
     206,   165,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,
    -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,    76,
      76,    49,    49,    82,    82,    82,    82,   146,   146,    84,
      81,    32,    70,    77,   -22,  -192,   183,  -192,   422,   219,
     366,   184,   694,   192,   694,   694,   422,  -192,  -192,  -192,
     694,   220,  -192,   226,   694,  -192,  -192,  -192,   612,   181,
     225,  -192,    51,  -192,  -192,  -192,   130,   225,  -192,  -192,
     694,   694,   422,  -192,   231,   694,   217,  -192,   -12,  -192,
      -9,     3,  -192,   249,  -192,  -192,   265,  -192,  -192,  -192,
      11,  -192,  -192,  -192,  -192,   694,   236,   694,   422,   422,
     422,  -192,  -192,  -192,    98,     5,   694,   245,   266,  -192,
    -192,  -192,   246,   279,   694,   422,  -192,   422,   280,  -192,
    -192,   422,  -192
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    97,   101,   116,   111,    96,    98,   105,   119,   103,
     104,   117,   102,   106,    99,   107,   100,   118,   108,   109,
     110,   196,   135,    82,    83,    84,    85,     0,   192,   193,
     195,   129,     0,    91,    92,    94,     0,   136,    86,    87,
      88,    89,     1,   194,   139,   137,   130,    81,   135,     0,
     200,   135,     0,   199,   135,   121,   120,   138,   140,    93,
      94,     0,     0,   156,     0,     0,    28,    29,    30,    31,
      32,    33,     5,     2,     3,     4,     7,     6,     9,    22,
      34,     0,    36,    40,    43,    46,    51,    54,    56,    58,
      60,    62,    64,    66,   150,    95,   172,   197,   201,     0,
     129,   133,     0,    26,    78,     0,   114,   149,   115,     0,
       0,     0,     0,     0,   155,     0,   158,     0,    23,    24,
       0,    18,     0,     0,    14,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    34,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   179,     0,     0,     0,   179,     0,     0,     5,
     180,   176,   177,   162,   163,     0,   173,   174,   164,     0,
     165,   166,   167,   122,   129,   131,   130,   147,   135,     0,
       0,   141,   143,   134,     0,     8,     0,   112,   113,     0,
      80,     0,   161,   151,   156,   153,   157,   159,     0,     0,
       0,    19,    20,    12,    13,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    37,    38,    39,    41,
      42,    44,    45,    47,    48,    49,    50,    52,    53,    55,
      57,    59,    61,    63,     0,   190,     0,   189,   179,     0,
     179,     0,     0,     0,     0,     0,   179,   171,   175,   178,
       0,    29,   132,     0,     0,   145,   128,   127,     0,     0,
      27,    79,   156,    35,   160,   152,     0,     0,    10,    11,
       0,     0,   179,   170,     0,   179,     0,   188,     0,   191,
       0,     0,   168,     0,   126,   123,     0,   142,   144,   148,
       0,   154,    21,    65,   169,     0,     0,   179,   179,   179,
     179,   124,   125,    16,   156,     0,   179,     0,   181,   183,
     184,    17,     0,     0,   179,   179,   185,   179,     0,   182,
     187,   179,   186
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -192,  -192,  -192,  -192,  -192,  -192,   -34,  -192,   -72,    24,
      44,    78,    64,   159,   169,   195,   191,   196,  -192,  -106,
     -47,   -61,   197,   -32,     0,  -192,  -192,   299,  -192,   -45,
      56,    95,  -192,   -16,  -192,   -93,  -192,  -192,  -192,   303,
     250,  -192,  -192,    85,  -192,   -88,  -108,    83,  -191,  -192,
    -192,   239,  -154,  -192,   305,  -192,  -192,   182,  -192,  -155,
    -192,  -192,  -192,  -192,  -192,   331,  -192,  -192,  -192
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    77,    78,    79,   210,   211,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
     104,   170,   201,    21,    51,    32,    33,    34,    23,    24,
     107,    25,    26,    60,    56,    45,   263,   189,    36,    37,
      46,   190,   191,   192,   193,   109,    95,   112,   113,   114,
     115,   116,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,    27,    28,    29,    30,    52,    53
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,   105,    94,    50,   200,   205,    35,   185,   249,   138,
     278,   253,   203,   276,   194,    54,     3,   106,     3,    42,
     195,    98,    47,    38,    39,    40,    41,   103,    22,   208,
     118,   119,    11,   308,    11,  -146,   309,   184,    99,   110,
     100,   105,   101,    31,    17,   111,    17,   137,   310,    31,
     322,   281,   204,   200,   196,    31,   105,   106,   313,   209,
      55,   106,   196,   106,   171,   196,    94,   226,   227,   228,
     -90,    96,   106,   206,   212,   196,   137,  -146,   196,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     196,   260,   196,   110,   283,   286,   244,    48,   314,   111,
     153,   188,   292,   142,   143,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   276,    49,   137,    44,   273,   304,   139,
     306,   110,     3,   152,   140,   141,   275,   111,   262,   154,
     110,    58,   144,   145,   171,   321,   111,   155,    11,   271,
     150,   151,   317,   264,   318,   319,   320,   108,   183,    61,
      17,   323,   197,   199,   198,   137,   229,   230,   301,   328,
     245,   329,   265,   330,    62,   303,    63,   332,   156,   157,
      64,    65,    66,    67,    68,    69,    70,    71,   231,   232,
     202,   288,   213,   290,   291,    44,   247,   108,   120,   214,
     121,   108,   248,   108,   122,   123,   124,   125,   146,   147,
     148,   149,   108,   293,   237,   238,   250,   296,   285,    72,
      73,    74,    75,    76,   233,   234,   235,   236,   251,    94,
     252,   254,   255,   302,   256,   196,   257,   259,   266,   267,
     268,   269,     1,   270,   315,     2,     3,   137,   274,   277,
       4,   279,   280,     5,     6,     7,   282,   284,   287,     8,
       9,    10,    11,   294,    12,    13,   289,    14,   188,   295,
     299,   272,    15,    16,    17,   305,    18,    19,    20,    44,
     325,    58,     1,   158,   159,     2,     3,   160,   161,   162,
       4,   307,   311,     5,     6,     7,   163,   164,   165,     8,
       9,    10,    11,   166,    12,    13,    61,    14,   312,   167,
     316,   239,    15,    16,    17,   168,    18,    19,    20,   324,
     326,    62,   240,    96,   327,   331,   187,    64,    65,    66,
      67,    68,    69,    70,    71,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   242,    59,    57,   241,
     186,  -179,   243,   298,   207,   300,   246,    97,   258,    43,
       0,     0,     0,     0,     0,     0,   169,    73,    74,    75,
      76,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    11,     0,    12,    13,    61,    14,     0,     0,     0,
       0,    15,    16,    17,     0,    18,    19,    20,     0,     0,
      62,     0,     0,     0,     0,     0,    64,    65,    66,    67,
      68,    69,    70,    71,     0,     0,     0,     0,   158,   159,
       0,     0,   160,   161,   162,     0,     0,     0,     0,     0,
       0,   163,   164,   165,     0,     0,     0,     0,   166,     0,
       0,    61,     0,     0,   167,    72,    73,    74,    75,    76,
     168,     0,     0,     0,     0,     0,    62,     0,    96,     0,
       0,     0,    64,    65,    66,    67,    68,    69,    70,    71,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       3,     0,     0,     0,     4,     0,     0,     0,     0,     7,
       0,     0,     0,     0,     9,    10,    11,     0,    12,    13,
      61,   169,    73,    74,    75,    76,    15,    16,    17,     0,
      18,    19,    20,     0,     0,    62,     0,     0,     0,     0,
       0,    64,    65,    66,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,    76,     1,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,    11,     0,    12,    13,     0,
      14,     0,     0,     0,     0,    15,    16,    17,     0,    18,
      19,    20,     0,     0,     0,     0,  -198,     1,     0,     0,
       2,     3,     0,     0,     0,     4,     0,     0,     5,     6,
       7,     0,     0,     0,     8,     9,    10,    11,     0,    12,
      13,     0,    14,    61,     0,     0,    49,    15,    16,    17,
       0,    18,    19,    20,     0,     0,     0,    61,    62,     0,
     272,     0,     0,     0,    64,    65,    66,    67,    68,    69,
      70,    71,   102,    61,     0,     0,     0,     0,    64,    65,
      66,    67,    68,    69,    70,    71,     0,   297,   117,     0,
       0,     0,     0,     0,    64,    65,    66,    67,    68,    69,
      70,    71,     0,    72,    73,    74,    75,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,     0,    61,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,    62,    61,
       0,     0,     0,     0,    64,    65,    66,    67,    68,    69,
      70,    71,     0,     0,    62,     0,     0,     0,     0,     0,
      64,    65,    66,   261,    68,    69,    70,    71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,     1,     0,     0,     2,     3,     0,
       0,     0,     4,     0,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,    11,     0,    12,    13,     0,    14,
       0,     0,     2,     3,    15,    16,    17,     4,    18,    19,
      20,     0,     7,     0,     0,     0,     0,     9,    10,    11,
       0,    12,    13,     0,     0,     0,     0,     0,     0,    15,
      16,    17,     0,    18,    19,    20
};

static const yytype_int16 yycheck[] =
{
       0,    62,    49,    35,   110,   113,    22,   100,   162,    81,
      43,   166,    47,   204,   102,    44,     9,    62,     9,     0,
      45,    53,    74,    23,    24,    25,    26,    61,    28,   117,
      64,    65,    25,    45,    25,    45,    45,    30,    54,    42,
      42,   102,    44,    53,    37,    48,    37,    81,    45,    53,
      45,    73,    87,   159,    87,    53,   117,   102,    47,   120,
      89,   106,    87,   108,    96,    87,   113,   139,   140,   141,
      74,    46,   117,    76,   121,    87,   110,    87,    87,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
      87,   184,    87,    42,   248,   250,   157,    87,    87,    48,
      68,   101,   256,    54,    55,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   314,    76,   159,    31,   199,   282,    53,
     285,    42,     9,    52,    58,    59,    47,    48,   185,    69,
      42,    46,    60,    61,   176,    47,    48,    70,    25,   196,
      66,    67,   307,    30,   308,   309,   310,    62,    45,    29,
      37,   316,   106,    45,   108,   199,   142,   143,   276,   324,
      74,   325,   188,   327,    44,   281,    46,   331,    71,    72,
      50,    51,    52,    53,    54,    55,    56,    57,   144,   145,
      89,   252,    89,   254,   255,   100,    74,   102,    42,    89,
      44,   106,    73,   108,    48,    49,    50,    51,    62,    63,
      64,    65,   117,   260,   150,   151,    44,   264,   250,    89,
      90,    91,    92,    93,   146,   147,   148,   149,    89,   276,
      44,    44,    44,   280,    73,    87,    47,    74,    45,    45,
      87,    87,     5,    45,   305,     8,     9,   281,    43,    45,
      13,    45,    87,    16,    17,    18,    73,    38,    74,    22,
      23,    24,    25,    43,    27,    28,    74,    30,   268,    43,
      89,    46,    35,    36,    37,    44,    39,    40,    41,   184,
      14,   186,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    74,    43,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    43,    32,
      74,   152,    35,    36,    37,    38,    39,    40,    41,    74,
      74,    44,   153,    46,    45,    45,    89,    50,    51,    52,
      53,    54,    55,    56,    57,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,   155,    48,    45,   154,
     100,    74,   156,   268,   115,   272,   159,    52,   176,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,    92,
      93,     5,    -1,    -1,     8,     9,    -1,    -1,    -1,    13,
      -1,    -1,    16,    17,    18,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    35,    36,    37,    -1,    39,    40,    41,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,     6,     7,
      -1,    -1,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    20,    21,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    29,    -1,    -1,    32,    89,    90,    91,    92,    93,
      38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    46,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
       9,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    27,    28,
      29,    89,    90,    91,    92,    93,    35,    36,    37,    -1,
      39,    40,    41,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    90,    91,    92,    93,     5,    -1,    -1,     8,     9,
      -1,    -1,    -1,    13,    -1,    -1,    16,    17,    18,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      30,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,     5,    -1,    -1,
       8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,    17,
      18,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      28,    -1,    30,    29,    -1,    -1,    76,    35,    36,    37,
      -1,    39,    40,    41,    -1,    -1,    -1,    29,    44,    -1,
      46,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    44,    29,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    75,    44,    -1,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    89,    90,    91,    92,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
      92,    93,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    90,    91,    92,    93,    44,    29,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    90,    91,    92,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      90,    91,    92,    93,     5,    -1,    -1,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    16,    17,    18,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    27,    28,    -1,    30,
      -1,    -1,     8,     9,    35,    36,    37,    13,    39,    40,
      41,    -1,    18,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    -1,    39,    40,    41
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     8,     9,    13,    16,    17,    18,    22,    23,
      24,    25,    27,    28,    30,    35,    36,    37,    39,    40,
      41,   118,   119,   123,   124,   126,   127,   158,   159,   160,
     161,    53,   120,   121,   122,   128,   133,   134,   119,   119,
     119,   119,     0,   160,   126,   130,   135,    74,    87,    76,
     118,   119,   162,   163,    44,    89,   129,   134,   126,   122,
     128,    29,    44,    46,    50,    51,    52,    53,    54,    55,
      56,    57,    89,    90,    91,    92,    93,    96,    97,    98,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   141,    46,   149,   118,   128,
      42,    44,    44,   101,   115,   116,   124,   125,   126,   140,
      42,    48,   142,   143,   144,   145,   146,    44,   101,   101,
      42,    44,    48,    49,    50,    51,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,   101,   103,    53,
      58,    59,    54,    55,    60,    61,    62,    63,    64,    65,
      66,    67,    52,    68,    69,    70,    71,    72,     6,     7,
      10,    11,    12,    19,    20,    21,    26,    32,    38,    89,
     116,   118,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,    45,    30,   130,   135,    89,   119,   132,
     136,   137,   138,   139,   140,    45,    87,   125,   125,    45,
     114,   117,    89,    47,    87,   141,    76,   146,   140,   116,
      99,   100,   115,    89,    89,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   103,   103,   103,   104,
     104,   105,   105,   106,   106,   106,   106,   107,   107,   108,
     109,   110,   111,   112,   116,    74,   117,    74,    73,   147,
      44,    89,    44,   154,    44,    44,    73,    47,   152,    74,
     130,    53,   115,   131,    30,   128,    45,    45,    87,    87,
      45,   115,    46,   103,    43,    47,   143,    45,    43,    45,
      87,    73,    73,   147,    38,   118,   154,    74,   116,    74,
     116,   116,   147,   115,    43,    43,   115,    75,   138,    89,
     142,   141,   115,   114,   147,    44,   154,    74,    45,    45,
      45,    43,    43,    47,    87,   116,    74,   154,   147,   147,
     147,    47,    45,   154,    74,    14,    74,    45,   154,   147,
     147,    45,   147
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    96,    96,    97,    97,    97,    97,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    99,    99,
     100,   100,   101,   101,   101,   101,   101,   101,   102,   102,
     102,   102,   102,   102,   103,   103,   104,   104,   104,   104,
     105,   105,   105,   106,   106,   106,   107,   107,   107,   107,
     107,   108,   108,   108,   109,   109,   110,   110,   111,   111,
     112,   112,   113,   113,   114,   114,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   116,   116,
     117,   118,   119,   119,   119,   119,   119,   119,   119,   119,
     120,   120,   121,   121,   122,   122,   123,   123,   123,   123,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   125,   125,   125,   125,   126,   126,   126,   127,
     128,   129,   129,   129,   129,   129,   129,   129,   129,   130,
     130,   131,   131,   132,   132,   133,   133,   134,   134,   135,
     135,   136,   136,   137,   137,   138,   138,   139,   139,   140,
     141,   141,   141,   142,   142,   143,   143,   144,   145,   145,
     146,   146,   147,   147,   147,   147,   147,   147,   148,   148,
     148,   149,   150,   150,   151,   151,   152,   152,   153,   154,
     154,   155,   155,   155,   156,   156,   156,   156,   157,   157,
     157,   157,   158,   159,   159,   160,   160,   161,   162,   162,
     163,   163
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     4,     3,     3,     2,     2,     6,     7,     0,     1,
       1,     3,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       1,     3,     1,     1,     1,     1,     2,     2,     2,     2,
       0,     1,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       2,     1,     3,     5,     6,     6,     5,     4,     4,     0,
       1,     0,     1,     0,     1,     0,     1,     2,     3,     1,
       2,     1,     3,     1,     3,     2,     1,     1,     3,     1,
       1,     3,     4,     2,     4,     1,     0,     2,     1,     2,
       3,     2,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     3,     0,     1,     1,     2,     1,     1,     2,     0,
       1,     5,     7,     5,     5,     7,     9,     8,     3,     2,
       2,     3,     1,     1,     2,     1,     1,     4,     0,     1,
       1,     2
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
  case 2: /* constant: INTEGER  */
#line 87 "TinyC3_22CS30027_22CS30019.y"
            { 
                (yyval.Express) = new Expression();
                (yyval.Express)->Location = SymbolTable::GenTemp(new SType("int"),itos((yyvsp[0].INTVAL)));
                QuadArray::Emit("=",(yyval.Express)->Location->Name,(yyvsp[0].INTVAL));
                //$$ = createNode("constant",createNode("INTEGER", NULL, NULL),NULL); 
            }
#line 1869 "y.tab.c"
    break;

  case 3: /* constant: FLOATING_CONSTANT  */
#line 94 "TinyC3_22CS30027_22CS30019.y"
            { 
                (yyval.Express) = new Expression();
                (yyval.Express)->Location = SymbolTable::GenTemp(new SType("float"),ftos((yyvsp[0].FLOATVAL)));
                QuadArray::Emit("=",(yyval.Express)->Location->Name,(yyvsp[0].FLOATVAL));
                //$$ = createNode("constant",createNode("FLOATING_CONSTANT", NULL, NULL),NULL); 
            }
#line 1880 "y.tab.c"
    break;

  case 4: /* constant: CHARACTER_CONSTANT  */
#line 101 "TinyC3_22CS30027_22CS30019.y"
            { 
                (yyval.Express) = new Expression();
                (yyval.Express)->Location = SymbolTable::GenTemp(new SType("char"),string((yyvsp[0].CHARVAL)));
                QuadArray::Emit("=",(yyval.Express)->Location->Name,(yyvsp[0].CHARVAL));
                //$$ = createNode("constant",createNode("CHARACTER_CONSTANT", NULL, NULL),NULL); 
            }
#line 1891 "y.tab.c"
    break;

  case 5: /* primary_expression: IDENTIFIER  */
#line 110 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        Symbol* Temp = CurrentST->LookUp(Globe);
                        (yyval.Express) = new Expression();
                        (yyval.Express)->Location = Temp;
                        (yyval.Express)->Type = "non_bool";
                        //$$ = createNode("primary_expression",createNode("IDENTIFIER", NULL, NULL),NULL); 
                    }
#line 1903 "y.tab.c"
    break;

  case 6: /* primary_expression: constant  */
#line 118 "TinyC3_22CS30027_22CS30019.y"
                    { 
                       (yyval.Express) = (yyvsp[0].Express);
                        //$$ = createNode("primary_expression",$1,NULL); 
                    }
#line 1912 "y.tab.c"
    break;

  case 7: /* primary_expression: STRING_LITERAL  */
#line 123 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        (yyval.Express) = new Expression();
                        (yyval.Express)->Location = SymbolTable::GenTemp(new SType("ptr"),string((yyvsp[0].CHARVAL)));
                        // QuadArray::Emit("=",$$->LocalST->Name,$1);
                        (yyval.Express)->Location->Type->ArrType = new SType("char");
                        //$$ = createNode("primary_expression",createNode("STRING_LITERAL", NULL, NULL),NULL); 
                    }
#line 1924 "y.tab.c"
    break;

  case 8: /* primary_expression: ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE  */
#line 131 "TinyC3_22CS30027_22CS30019.y"
                    {   
                        (yyval.Express) = (yyvsp[-1].Express);
                        //$$ = createNode("primary_expression", createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$2), createNode("ROUND_BRACKET_CLOSE",NULL,NULL)); 
                    }
#line 1933 "y.tab.c"
    break;

  case 9: /* postfix_expression: primary_expression  */
#line 140 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        (yyval.Array)  = new ArrayType();
                        (yyval.Array)->Location = (yyvsp[0].Express)->Location;
                        (yyval.Array)->Array = (yyvsp[0].Express)->Location;
                        (yyval.Array)->Type = (yyvsp[0].Express)->Location->Type;
                        //$$ = createNode("postfix_expression",$1,NULL); 
                    }
#line 1945 "y.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression SQUARE_BRACKET_OPEN expression SQUARE_BRACKET_CLOSE  */
#line 148 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Array)  = new ArrayType();
                        (yyval.Array)->Location = SymbolTable::GenTemp("int");
                        (yyval.Array)->Type = (yyvsp[-3].Array)->Type->ArrType;
                        (yyval.Array)->A_Type = "arr";
                        (yyval.Array)->Array = (yyvsp[-3].Array)->Array;
                        if((yyvsp[-3].Array)->A_Type == "arr")
                        {
                            Symbol* Temp = SymbolTable::GenTemp("int");
                            int size = SizeOfS((yyval.Array)->Type);
                            QuadArray::Emit("*",Temp->Name,(yyvsp[-1].Express)->Location->Name,itos(size));
                            QuadArray::Emit("+",(yyval.Array)->Location->Name,(yyvsp[-3].Array)->Location->Name,Temp->Name);
                        }
                        else
                        {
                            int size = SizeOfS((yyval.Array)->Type);
                            QuadArray::Emit("*",(yyval.Array)->Location->Name,(yyvsp[-1].Express)->Location->Name,itos(size));
                        }
                        // $$ = createNode("postfix_expression",$1,createNode("ignore",createNode("SQUARE_BRACKET_OPEN",NULL,NULL),createNode("ignore",$3,createNode("SQUARE_BRACKET_CLOSE",NULL,NULL)))); 
                    }
#line 1970 "y.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression ROUND_BRACKET_OPEN argument_expression_list_opt ROUND_BRACKET_CLOSE  */
#line 169 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        (yyval.Array)  = new ArrayType();
                        (yyval.Array)->Array = SymbolTable::GenTemp((yyvsp[-3].Array)->Type);
                        QuadArray::Emit("call",(yyval.Array)->Array->Name,(yyvsp[-3].Array)->Array->Name,itos((yyvsp[-1].Parameter)));
                        //$$ = createNode("postfix_expression", $1, createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$3,createNode("ROUND_BRACKET_OPEN",NULL,NULL)))); 
                    }
#line 1981 "y.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 176 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        //$$ = createNode("postfix_expression", $1,createNode("ignore",createNode("DOT",NULL,NULL),createNode("IDENTIFIER", NULL, NULL))); 
                    }
#line 1989 "y.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression IMPLIES IDENTIFIER  */
#line 180 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        //$$ = createNode("postfix_expression", $1,createNode("ignore",createNode("IMPLIES",NULL,NULL),createNode("IDENTIFIER", NULL, NULL)));
                    }
#line 1997 "y.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression INCREMENT  */
#line 184 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Array)  = new ArrayType();
                        (yyval.Array)->Array = SymbolTable::GenTemp((yyvsp[-1].Array)->Array->Type);
                        QuadArray::Emit("=",(yyval.Array)->Array->Name,(yyvsp[-1].Array)->Array->Name);
                        QuadArray::Emit("+",(yyvsp[-1].Array)->Array->Name,(yyvsp[-1].Array)->Array->Name,"1");
                        // $$ = createNode("postfix_expression", $1, createNode("INCREMENT",NULL,NULL)); 
                    }
#line 2009 "y.tab.c"
    break;

  case 15: /* postfix_expression: postfix_expression DECREMENT  */
#line 192 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        (yyval.Array)  = new ArrayType();
                        (yyval.Array)->Array = SymbolTable::GenTemp((yyvsp[-1].Array)->Array->Type);
                        QuadArray::Emit("=",(yyval.Array)->Array->Name,(yyvsp[-1].Array)->Array->Name);
                        QuadArray::Emit("-",(yyvsp[-1].Array)->Array->Name,(yyvsp[-1].Array)->Array->Name,"1");
                        //$$ = createNode("postfix_expression", $1, createNode("DECREMENT",NULL,NULL)); 
                    }
#line 2021 "y.tab.c"
    break;

  case 16: /* postfix_expression: ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE  */
#line 200 "TinyC3_22CS30027_22CS30019.y"
                    {
                        // $$ = createNode("postfix_expression", createNode("ignore",createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$2),createNode("ROUND_BRACKET_OPEN",NULL,NULL)),createNode("ignore",createNode("ignore",createNode("CURLY_BRACKET_CLOSE",NULL,NULL),$5),createNode("CURLY_BRACKET_CLOSE",NULL,NULL))); 
                    }
#line 2029 "y.tab.c"
    break;

  case 17: /* postfix_expression: ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE  */
#line 204 "TinyC3_22CS30027_22CS30019.y"
                    {
                        // $$ = createNode("postfix_expression", createNode("ignore",createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$2),createNode("ROUND_BRACKET_OPEN",NULL,NULL)),createNode("ignore",createNode("ignore",createNode("CURLY_BRACKET_CLOSE",NULL,NULL),$5),createNode("ignore",createNode("COMMA",NULL,NULL),createNode("CURLY_BRACKET_CLOSE",NULL,NULL)))); 
                    }
#line 2037 "y.tab.c"
    break;

  case 18: /* argument_expression_list_opt: %empty  */
#line 212 "TinyC3_22CS30027_22CS30019.y"
                        {
                            (yyval.Parameter) = 0;
                            //$$ = createNode("argument_expression_list_opt",NULL, NULL);
                        }
#line 2046 "y.tab.c"
    break;

  case 19: /* argument_expression_list_opt: argument_expression_list  */
#line 217 "TinyC3_22CS30027_22CS30019.y"
                        {
                            (yyval.Parameter) = (yyvsp[0].Parameter);
                            //$$ = createNode("argument_expression_list_opt", $1, NULL);
                        }
#line 2055 "y.tab.c"
    break;

  case 20: /* argument_expression_list: assignment_expression  */
#line 224 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            (yyval.Parameter) = 1;
                            QuadArray::Emit("param",(yyvsp[0].Express)->Location->Name);
                            //$$ = createNode("argument_expression_list", $1, NULL); 
                        }
#line 2065 "y.tab.c"
    break;

  case 21: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 230 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            (yyval.Parameter) = (yyvsp[-2].Parameter) + 1;
                            QuadArray::Emit("param",(yyvsp[0].Express)->Location->Name);
                            //$$ = createNode("argument_expression_list", $1, createNode("ignore",createNode("COMMA",NULL,NULL),$3)); 
                        }
#line 2075 "y.tab.c"
    break;

  case 22: /* unary_expression: postfix_expression  */
#line 240 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Array) = (yyvsp[0].Array);
                        // $$ = createNode("unary_expression", $1, NULL); 
                    }
#line 2084 "y.tab.c"
    break;

  case 23: /* unary_expression: INCREMENT unary_expression  */
#line 245 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        QuadArray::Emit("+",(yyvsp[0].Array)->Array->Name,(yyvsp[0].Array)->Array->Name,"1");
                        (yyval.Array) = (yyvsp[0].Array);
                        //$$ = createNode("unary_expression", createNode("INCREMENT",NULL,NULL), $2); 
                    }
#line 2094 "y.tab.c"
    break;

  case 24: /* unary_expression: DECREMENT unary_expression  */
#line 251 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        QuadArray::Emit("-",(yyvsp[0].Array)->Array->Name,(yyvsp[0].Array)->Array->Name,"1");
                        (yyval.Array) = (yyvsp[0].Array);
                        //$$ = createNode("unary_expression", createNode("DECREMENT",NULL,NULL), $2); 
                    }
#line 2104 "y.tab.c"
    break;

  case 25: /* unary_expression: unary_operator cast_expression  */
#line 257 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        (yyval.Array) = new ArrayType();
                        switch((yyvsp[-1].UnaryOper))
                        {
                            case '&':
                                (yyval.Array)->Array = SymbolTable::GenTemp(new SType("ptr"));
                                (yyval.Array)->Array->Type->ArrType = (yyvsp[0].Array)->Array->Type;
                                QuadArray::Emit("= &",(yyval.Array)->Array->Name,(yyvsp[0].Array)->Array->Name);
                                break;
                        }
                        
                        //$$ = createNode("unary_expression", $1, $2); 
                    }
#line 2122 "y.tab.c"
    break;

  case 26: /* unary_expression: SIZEOF unary_expression  */
#line 271 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        //$$ = createNode("unary_expression", createNode("SIZEOF",NULL,NULL), $2); 
                    }
#line 2130 "y.tab.c"
    break;

  case 27: /* unary_expression: SIZEOF ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE  */
#line 275 "TinyC3_22CS30027_22CS30019.y"
                    {  
                        //$$ = createNode("unary_expression", createNode("SIZEOF",NULL,NULL), createNode("ignore",createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3),createNode("ROUND_BRACKET_CLOSE",NULL,NULL))); 
                    }
#line 2138 "y.tab.c"
    break;

  case 28: /* unary_operator: BITWISE_AND  */
#line 283 "TinyC3_22CS30027_22CS30019.y"
                {
                    // $$ = createNode("BITWISE_AND", NULL, NULL); 
                }
#line 2146 "y.tab.c"
    break;

  case 29: /* unary_operator: MUL  */
#line 287 "TinyC3_22CS30027_22CS30019.y"
                { 
                    //$$ = createNode("MUL", NULL, NULL); 
                }
#line 2154 "y.tab.c"
    break;

  case 30: /* unary_operator: PLUS  */
#line 291 "TinyC3_22CS30027_22CS30019.y"
                { 
                    //$$ = createNode("PLUS", NULL, NULL); 
                }
#line 2162 "y.tab.c"
    break;

  case 31: /* unary_operator: MINUS  */
#line 295 "TinyC3_22CS30027_22CS30019.y"
                { 
                    //$$ = createNode("MINUS", NULL, NULL); 
                }
#line 2170 "y.tab.c"
    break;

  case 32: /* unary_operator: BITWISE_NOT  */
#line 299 "TinyC3_22CS30027_22CS30019.y"
                { 
                    //$$ = createNode("BITWISE_NOT", NULL, NULL); 
                }
#line 2178 "y.tab.c"
    break;

  case 33: /* unary_operator: NOT  */
#line 303 "TinyC3_22CS30027_22CS30019.y"
                {
                    // $$ = createNode("NOT", NULL, NULL); 
                }
#line 2186 "y.tab.c"
    break;

  case 34: /* cast_expression: unary_expression  */
#line 311 "TinyC3_22CS30027_22CS30019.y"
                { 
                    //$$ =  createNode("cast_expression", $1, NULL); 
                }
#line 2194 "y.tab.c"
    break;

  case 35: /* cast_expression: ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE cast_expression  */
#line 315 "TinyC3_22CS30027_22CS30019.y"
                { 
                    //$$ =  createNode("cast_expression", createNode("ROUND_BRACKET_OPEN",NULL,NULL), createNode("ignore",$2,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$4))); 
                }
#line 2202 "y.tab.c"
    break;

  case 36: /* multiplicative_expression: cast_expression  */
#line 323 "TinyC3_22CS30027_22CS30019.y"
                            { 
                                //$$ =createNode("multiplicative_expression",$1,NULL);  
                            }
#line 2210 "y.tab.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression MUL cast_expression  */
#line 327 "TinyC3_22CS30027_22CS30019.y"
                            { 
                                //$$ = createNode("multiplicative_expression",$1,createNode("ignore",createNode("MUL", NULL, NULL),$3)); 
                            }
#line 2218 "y.tab.c"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression DIV cast_expression  */
#line 331 "TinyC3_22CS30027_22CS30019.y"
                            { 
                                //$$ = createNode("multiplicative_expression",$1,createNode("ignore",createNode("DIV", NULL, NULL),$3)); 
                            }
#line 2226 "y.tab.c"
    break;

  case 39: /* multiplicative_expression: multiplicative_expression MOD cast_expression  */
#line 335 "TinyC3_22CS30027_22CS30019.y"
                            { 
                                //$$ = createNode("multiplicative_expression",$1,createNode("ignore",createNode("MOD", NULL, NULL),$3)); 
                            }
#line 2234 "y.tab.c"
    break;

  case 40: /* additive_expression: multiplicative_expression  */
#line 343 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        //$$ =createNode("additive_expression",$1,NULL); 
                    }
#line 2242 "y.tab.c"
    break;

  case 41: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 347 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("additive_expression",$1,createNode("ignore",createNode("PLUS", NULL, NULL),$3)); 
                    }
#line 2250 "y.tab.c"
    break;

  case 42: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 351 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        //$$ = createNode("additive_expression",$1,createNode("ignore",createNode("MINUS", NULL, NULL),$3)); 
                    }
#line 2258 "y.tab.c"
    break;

  case 43: /* shift_expression: additive_expression  */
#line 359 "TinyC3_22CS30027_22CS30019.y"
                 { 
                    //$$ =createNode("shift_expression",$1,NULL); 
                }
#line 2266 "y.tab.c"
    break;

  case 44: /* shift_expression: shift_expression LEFT_SHIFT additive_expression  */
#line 363 "TinyC3_22CS30027_22CS30019.y"
                 { 
                    //$$ = createNode("shift_expression",$1,createNode("ignore",createNode("LEFT_SHIFT", NULL, NULL),$3)); 
                }
#line 2274 "y.tab.c"
    break;

  case 45: /* shift_expression: shift_expression RIGHT_SHIFT additive_expression  */
#line 367 "TinyC3_22CS30027_22CS30019.y"
                 {
                    // $$ = createNode("shift_expression",$1,createNode("ignore",createNode("RIGHT_SHIFT", NULL, NULL),$3)); 
                }
#line 2282 "y.tab.c"
    break;

  case 46: /* relational_expression: shift_expression  */
#line 375 "TinyC3_22CS30027_22CS30019.y"
                    {
                        // $$ =createNode("relational_expression",$1,NULL); 
                    }
#line 2290 "y.tab.c"
    break;

  case 47: /* relational_expression: relational_expression LESS_THAN shift_expression  */
#line 379 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("relational_expression",$1,createNode("ignore",createNode("LESS_THAN", NULL, NULL),$3)); 
                    }
#line 2298 "y.tab.c"
    break;

  case 48: /* relational_expression: relational_expression GREATER_THAN shift_expression  */
#line 383 "TinyC3_22CS30027_22CS30019.y"
                     { 
                        //$$ = createNode("relational_expression",$1,createNode("ignore",createNode("GREATER_THAN", NULL, NULL),$3)); 
                    }
#line 2306 "y.tab.c"
    break;

  case 49: /* relational_expression: relational_expression LESS_EQUAL shift_expression  */
#line 387 "TinyC3_22CS30027_22CS30019.y"
                     { 
                        //$$ = createNode("relational_expression",$1,createNode("ignore",createNode("LESS_EQUAL", NULL, NULL),$3)); 
                    }
#line 2314 "y.tab.c"
    break;

  case 50: /* relational_expression: relational_expression GREATER_EQUAL shift_expression  */
#line 391 "TinyC3_22CS30027_22CS30019.y"
                     { 
                        //$$ = createNode("relational_expression",$1,createNode("ignore",createNode("GREATER_EQUAL", NULL, NULL),$3)); 
                    }
#line 2322 "y.tab.c"
    break;

  case 51: /* equality_expression: relational_expression  */
#line 399 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        //$$ = createNode("equality_expression",$1,NULL); 
                    }
#line 2330 "y.tab.c"
    break;

  case 52: /* equality_expression: equality_expression EQUAL relational_expression  */
#line 403 "TinyC3_22CS30027_22CS30019.y"
                   { 
                       //$$ = createNode("equality_expression",$1,createNode("ignore",createNode("EQUAL", NULL, NULL),$3)); 
                    }
#line 2338 "y.tab.c"
    break;

  case 53: /* equality_expression: equality_expression NOT_EQUAL relational_expression  */
#line 407 "TinyC3_22CS30027_22CS30019.y"
                   {
                     //$$ = createNode("equality_expression",$1,createNode("ignore",createNode("NOT_EQUAL", NULL, NULL),$3));
                     }
#line 2346 "y.tab.c"
    break;

  case 54: /* and_expression: equality_expression  */
#line 415 "TinyC3_22CS30027_22CS30019.y"
                { 
                    //$$ = createNode("and_expression",$1,NULL); 
                }
#line 2354 "y.tab.c"
    break;

  case 55: /* and_expression: and_expression BITWISE_AND equality_expression  */
#line 419 "TinyC3_22CS30027_22CS30019.y"
                { 
                    //$$ = createNode("and_expression",$1,createNode("ignore",createNode("BITWISE_AND", NULL, NULL),$3)); 
                }
#line 2362 "y.tab.c"
    break;

  case 56: /* exclusive_or_expression: and_expression  */
#line 427 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            //$$ = createNode("exclusive_or_expression",$1,NULL); 
                        }
#line 2370 "y.tab.c"
    break;

  case 57: /* exclusive_or_expression: exclusive_or_expression BITWISE_XOR and_expression  */
#line 431 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("exclusive_or_expression",$1,createNode("ignore",createNode("BITWISE_XOR", NULL, NULL),$3)); 
                        }
#line 2378 "y.tab.c"
    break;

  case 58: /* inclusive_or_expression: exclusive_or_expression  */
#line 439 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            //$$ = createNode("inclusive_or_expression",$1,NULL); 
                        }
#line 2386 "y.tab.c"
    break;

  case 59: /* inclusive_or_expression: inclusive_or_expression BITWISE_OR exclusive_or_expression  */
#line 443 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            //$$ = createNode("inclusive_or_expression",$1,createNode("ignore",createNode("BITWISE_OR", NULL, NULL),$3)); 
                        }
#line 2394 "y.tab.c"
    break;

  case 60: /* logical_and_expression: inclusive_or_expression  */
#line 451 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            //$$ = createNode("logical_and_expression",$1,NULL); 
                        }
#line 2402 "y.tab.c"
    break;

  case 61: /* logical_and_expression: logical_and_expression AND inclusive_or_expression  */
#line 455 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            //$$ = createNode("logical_and_expression",$1,createNode("ignore",createNode("AND", NULL, NULL),$3)); 
                        }
#line 2410 "y.tab.c"
    break;

  case 62: /* logical_or_expression: logical_and_expression  */
#line 463 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            //$$ = createNode("logical_or_expression",$1,NULL); 
                        }
#line 2418 "y.tab.c"
    break;

  case 63: /* logical_or_expression: logical_or_expression OR logical_and_expression  */
#line 467 "TinyC3_22CS30027_22CS30019.y"
                        {
                            // $$ = createNode("logical_or_expression",$1,createNode("ignore",createNode("OR", NULL, NULL),$3));  
                        }
#line 2426 "y.tab.c"
    break;

  case 64: /* conditional_expression: logical_or_expression  */
#line 475 "TinyC3_22CS30027_22CS30019.y"
                        {
                            // $$ = createNode("conditional_expression",$1,NULL); 
                        }
#line 2434 "y.tab.c"
    break;

  case 65: /* conditional_expression: logical_or_expression QUESTION expression COLON conditional_expression  */
#line 479 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            //$$ = createNode("conditional_expression",$1,createNode("ignore",createNode("QUESTION", NULL, NULL),createNode("ignore",$3,createNode("ignore",createNode("COLON", NULL, NULL),$5))));
                        }
#line 2442 "y.tab.c"
    break;

  case 66: /* assignment_expression: conditional_expression  */
#line 487 "TinyC3_22CS30027_22CS30019.y"
                    {
                        // $$ = createNode("assignment_expression",$1,NULL); 
                    }
#line 2450 "y.tab.c"
    break;

  case 67: /* assignment_expression: unary_expression ASSIGN assignment_expression  */
#line 491 "TinyC3_22CS30027_22CS30019.y"
                    {  
                        //$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("ASSIGN", NULL, NULL),$3)); 
                    }
#line 2458 "y.tab.c"
    break;

  case 68: /* assignment_expression: unary_expression MUL_EQUAL assignment_expression  */
#line 495 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        //$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("MUL_EQUAL", NULL, NULL),$3)); 
                    }
#line 2466 "y.tab.c"
    break;

  case 69: /* assignment_expression: unary_expression DIV_EQUAL assignment_expression  */
#line 499 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("DIV_EQUAL", NULL, NULL),$3)); 
                    }
#line 2474 "y.tab.c"
    break;

  case 70: /* assignment_expression: unary_expression MOD_EQUAL assignment_expression  */
#line 503 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        //$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("MOD_EQUAL", NULL, NULL),$3)); 
                    }
#line 2482 "y.tab.c"
    break;

  case 71: /* assignment_expression: unary_expression PLUS_EQUAL assignment_expression  */
#line 507 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("PLUS_EQUAL", NULL, NULL),$3)); 
                    }
#line 2490 "y.tab.c"
    break;

  case 72: /* assignment_expression: unary_expression MINUS_EQUAL assignment_expression  */
#line 511 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("MINUS_EQUAL", NULL, NULL),$3)); 
                    }
#line 2498 "y.tab.c"
    break;

  case 73: /* assignment_expression: unary_expression SHIFT_LEFT_EQUAL assignment_expression  */
#line 515 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("SHIFT_LEFT_EQUAL", NULL, NULL),$3)); 
                    }
#line 2506 "y.tab.c"
    break;

  case 74: /* assignment_expression: unary_expression SHIFT_RIGHT_EQUAL assignment_expression  */
#line 519 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("PLUS_EQUAL", NULL, NULL),$3)); 
                    }
#line 2514 "y.tab.c"
    break;

  case 75: /* assignment_expression: unary_expression BITWISE_AND_EQUAL assignment_expression  */
#line 524 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("BITWISE_AND_EQUAL", NULL, NULL),$3)); 
                    }
#line 2522 "y.tab.c"
    break;

  case 76: /* assignment_expression: unary_expression BITWISE_XOR_EQUAL assignment_expression  */
#line 529 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("BITWISE_XOR_EQUAL", NULL, NULL),$3)); 
                    }
#line 2530 "y.tab.c"
    break;

  case 77: /* assignment_expression: unary_expression BITWISE_OR_EQUAL assignment_expression  */
#line 534 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("BITWISE_OR_EQUAL", NULL, NULL),$3)); 
                    }
#line 2538 "y.tab.c"
    break;

  case 78: /* expression: assignment_expression  */
#line 543 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$ = createNode("expression",$1,NULL); 
            }
#line 2546 "y.tab.c"
    break;

  case 79: /* expression: expression COMMA assignment_expression  */
#line 547 "TinyC3_22CS30027_22CS30019.y"
            { 
                //$$ = createNode("expression",$1,createNode("ignore",createNode("COMMA", NULL, NULL),$3)); 
            }
#line 2554 "y.tab.c"
    break;

  case 80: /* constant_expression: conditional_expression  */
#line 554 "TinyC3_22CS30027_22CS30019.y"
                    {
                        // $$ = createNode("constant_expression", $1, NULL); 
                    }
#line 2562 "y.tab.c"
    break;

  case 81: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 566 "TinyC3_22CS30027_22CS30019.y"
            { 
                //$$ = createNode("declaration", $1, createNode("ignore",$2,createNode("SEMICOLON",NULL,NULL))); 
            }
#line 2570 "y.tab.c"
    break;

  case 82: /* declaration_specifiers: storage_class_specifier  */
#line 574 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifier", $1, NULL);
                        }
#line 2578 "y.tab.c"
    break;

  case 83: /* declaration_specifiers: type_specifier  */
#line 578 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifier", $1, NULL);
                        }
#line 2586 "y.tab.c"
    break;

  case 84: /* declaration_specifiers: type_qualifier  */
#line 582 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifier", $1, NULL);
                        }
#line 2594 "y.tab.c"
    break;

  case 85: /* declaration_specifiers: function_specifier  */
#line 586 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifier", $1, NULL);
                        }
#line 2602 "y.tab.c"
    break;

  case 86: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 590 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifiers", $1, $2);
                        }
#line 2610 "y.tab.c"
    break;

  case 87: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 594 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifiers", $1, $2);
                        }
#line 2618 "y.tab.c"
    break;

  case 88: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 598 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifiers", $1, $2);
                        }
#line 2626 "y.tab.c"
    break;

  case 89: /* declaration_specifiers: function_specifier declaration_specifiers  */
#line 602 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifiers", $1, $2);
                        }
#line 2634 "y.tab.c"
    break;

  case 90: /* init_declarator_list_opt: %empty  */
#line 610 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("init_declarator_list_opt",NULL, NULL);
                        }
#line 2642 "y.tab.c"
    break;

  case 91: /* init_declarator_list_opt: init_declarator_list  */
#line 614 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("init_declarator_list_opt", $1, NULL);
                        }
#line 2650 "y.tab.c"
    break;

  case 92: /* init_declarator_list: init_declarator  */
#line 620 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("init_declerator_list", $1, NULL);
                        }
#line 2658 "y.tab.c"
    break;

  case 93: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 624 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("init_declerator_list", $1, createNode("ignore",createNode("COMMA",NULL,NULL),$3));
                        }
#line 2666 "y.tab.c"
    break;

  case 94: /* init_declarator: declarator  */
#line 632 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$ = createNode("init_declerator", $1,NULL);
                }
#line 2674 "y.tab.c"
    break;

  case 95: /* init_declarator: declarator ASSIGN initializer  */
#line 636 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$ = createNode("init_declerator", $1, createNode("ignore",createNode("ASSIGN",NULL,NULL),$3));
                }
#line 2682 "y.tab.c"
    break;

  case 96: /* storage_class_specifier: EXTERN  */
#line 644 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("storage_class_specifier", createNode("EXTERN",NULL,NULL), NULL);
                        }
#line 2690 "y.tab.c"
    break;

  case 97: /* storage_class_specifier: AUTO  */
#line 648 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("storage_class_specifier", createNode("AUTO",NULL,NULL), NULL);
                        }
#line 2698 "y.tab.c"
    break;

  case 98: /* storage_class_specifier: REGISTER  */
#line 652 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("storage_class_specifier", createNode("REGISTER",NULL,NULL), NULL);
                        }
#line 2706 "y.tab.c"
    break;

  case 99: /* storage_class_specifier: STATIC  */
#line 656 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("storage_class_specifier",createNode("STATIC",NULL,NULL), NULL);
                        }
#line 2714 "y.tab.c"
    break;

  case 100: /* type_specifier: VOID  */
#line 664 "TinyC3_22CS30027_22CS30019.y"
                {
                    // $$ = createNode("type_specifier", createNode("VOID",NULL,NULL), NULL); 
                }
#line 2722 "y.tab.c"
    break;

  case 101: /* type_specifier: CHAR  */
#line 668 "TinyC3_22CS30027_22CS30019.y"
                {
                    // $$ = createNode("type_specifier", createNode("CHARACTER",NULL,NULL), NULL); 
                }
#line 2730 "y.tab.c"
    break;

  case 102: /* type_specifier: SHORT  */
#line 672 "TinyC3_22CS30027_22CS30019.y"
                {
                    // $$ = createNode("type_specifier", createNode("SHORT",NULL,NULL), NULL); 
                }
#line 2738 "y.tab.c"
    break;

  case 103: /* type_specifier: INT  */
#line 676 "TinyC3_22CS30027_22CS30019.y"
                {
                    // $$ = createNode("type_specifier", createNode("INTEGER",NULL,NULL), NULL); 
                }
#line 2746 "y.tab.c"
    break;

  case 104: /* type_specifier: LONG  */
#line 680 "TinyC3_22CS30027_22CS30019.y"
                {
                    // $$ = createNode("type_specifier", createNode("LONG",NULL,NULL), NULL); 
                }
#line 2754 "y.tab.c"
    break;

  case 105: /* type_specifier: FLOAT  */
#line 684 "TinyC3_22CS30027_22CS30019.y"
                {
                    // $$ = createNode("type_specifier", createNode("FLOAT",NULL,NULL), NULL); 
                }
#line 2762 "y.tab.c"
    break;

  case 106: /* type_specifier: SIGNED  */
#line 688 "TinyC3_22CS30027_22CS30019.y"
                {
                    // $$ = createNode("type_specifier", createNode("SIGNED",NULL,NULL), NULL); 
                }
#line 2770 "y.tab.c"
    break;

  case 107: /* type_specifier: UNSIGNED  */
#line 692 "TinyC3_22CS30027_22CS30019.y"
                {
                    // $$ = createNode("type_specifier", createNode("UNSIGNED",NULL,NULL), NULL); 
                }
#line 2778 "y.tab.c"
    break;

  case 108: /* type_specifier: BOOL  */
#line 696 "TinyC3_22CS30027_22CS30019.y"
                {
                    // $$ = createNode("type_specifier", createNode("_BOOL",NULL,NULL), NULL); 
                }
#line 2786 "y.tab.c"
    break;

  case 109: /* type_specifier: COMPLEX  */
#line 700 "TinyC3_22CS30027_22CS30019.y"
                {
                    // $$ = createNode("type_specifier", createNode("_COMPLEX",NULL,NULL), NULL); 
                }
#line 2794 "y.tab.c"
    break;

  case 110: /* type_specifier: IMAGINARY  */
#line 704 "TinyC3_22CS30027_22CS30019.y"
                {
                    // $$ = createNode("type_specifier", createNode("_IMAGINARY",NULL,NULL), NULL); 
                }
#line 2802 "y.tab.c"
    break;

  case 111: /* type_specifier: DOUBLE  */
#line 708 "TinyC3_22CS30027_22CS30019.y"
                {
                    // $$ = createNode("type_specifier", createNode("DOUBLE",NULL,NULL), NULL); 
                }
#line 2810 "y.tab.c"
    break;

  case 112: /* specifier_qualifier_list: type_specifier specifier_qualifier_list  */
#line 716 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("specifier_qualifier_list", $1, $2);
                        }
#line 2818 "y.tab.c"
    break;

  case 113: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list  */
#line 720 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("specifier_qualifier_list", $1, $2);
                        }
#line 2826 "y.tab.c"
    break;

  case 114: /* specifier_qualifier_list: type_specifier  */
#line 724 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("specifier_qualifier_list", $1, NULL);
                        }
#line 2834 "y.tab.c"
    break;

  case 115: /* specifier_qualifier_list: type_qualifier  */
#line 728 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("specifier_qualifier_list", $1, NULL);
                        }
#line 2842 "y.tab.c"
    break;

  case 116: /* type_qualifier: CONST  */
#line 736 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$ = createNode("type_qualifier", createNode("CONST",NULL,NULL), NULL);
                }
#line 2850 "y.tab.c"
    break;

  case 117: /* type_qualifier: RESTRICT  */
#line 740 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$ = createNode("type_qualifier", createNode("RESTRICT",NULL,NULL), NULL);
                }
#line 2858 "y.tab.c"
    break;

  case 118: /* type_qualifier: VOLATILE  */
#line 744 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$ = createNode("type_qualifier", createNode("VOLATILE",NULL,NULL), NULL);
                }
#line 2866 "y.tab.c"
    break;

  case 119: /* function_specifier: INLINE  */
#line 752 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("function_specifier", createNode("INLINE",NULL,NULL), NULL);
                    }
#line 2874 "y.tab.c"
    break;

  case 120: /* declarator: pointer_opt direct_declarator  */
#line 760 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$ = createNode("declarator", $1, $2);
            }
#line 2882 "y.tab.c"
    break;

  case 121: /* direct_declarator: IDENTIFIER  */
#line 768 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("direct_declarator", createNode("IDENTIFIER",NULL,NULL), NULL);
                    }
#line 2890 "y.tab.c"
    break;

  case 122: /* direct_declarator: ROUND_BRACKET_OPEN declarator ROUND_BRACKET_CLOSE  */
#line 772 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("direct_declarator",createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$2), createNode("ROUND_BRACKET_CLOSE",NULL,NULL));
                    }
#line 2898 "y.tab.c"
    break;

  case 123: /* direct_declarator: direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list_opt assignment_expression_opt SQUARE_BRACKET_CLOSE  */
#line 776 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("SQUARE_BRACKET_OPEN",NULL,NULL)), createNode("ignore",$3,createNode("ignore",$4,createNode("SQUARE_BRACKET_CLOSE",NULL,NULL))));
                    }
#line 2906 "y.tab.c"
    break;

  case 124: /* direct_declarator: direct_declarator SQUARE_BRACKET_OPEN STATIC type_qualifier_list_opt assignment_expression SQUARE_BRACKET_CLOSE  */
#line 780 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("SQUARE_BRACKET_OPEN",NULL,NULL)), createNode("ignore",createNode("ignore",createNode("STATIC",NULL,NULL),$4),createNode("ignore",$5,createNode("SQUARE_BRACKET_CLOSE",NULL,NULL))));
                    }
#line 2914 "y.tab.c"
    break;

  case 125: /* direct_declarator: direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list STATIC assignment_expression SQUARE_BRACKET_CLOSE  */
#line 784 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("SQUARE_BRACKET_OPEN",NULL,NULL)), createNode("ignore",createNode("ignore",$3,createNode("STATIC",NULL,NULL)),createNode("ignore",$5,createNode("SQUARE_BRACKET_CLOSE",NULL,NULL))));
                    }
#line 2922 "y.tab.c"
    break;

  case 126: /* direct_declarator: direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list_opt MUL SQUARE_BRACKET_CLOSE  */
#line 788 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("SQUARE_BRACKET_OPEN",NULL,NULL)), createNode("ignore",createNode("ignore",$3,createNode("MUL",NULL,NULL)),createNode("SQUARE_BRACKET_CLOSE",NULL,NULL)));
                    }
#line 2930 "y.tab.c"
    break;

  case 127: /* direct_declarator: direct_declarator ROUND_BRACKET_OPEN parameter_type_list ROUND_BRACKET_CLOSE  */
#line 792 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("ROUND_BRACKET_OPEN",NULL,NULL)), createNode("ignore",$3,createNode("ROUND_BRACKET_CLOSE",NULL,NULL)));
                    }
#line 2938 "y.tab.c"
    break;

  case 128: /* direct_declarator: direct_declarator ROUND_BRACKET_OPEN identifier_list_opt ROUND_BRACKET_CLOSE  */
#line 796 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("ROUND_BRACKET_OPEN",NULL,NULL)), createNode("ignore",$3,createNode("ROUND_BRACKET_CLOSE",NULL,NULL)));
                    }
#line 2946 "y.tab.c"
    break;

  case 129: /* type_qualifier_list_opt: %empty  */
#line 801 "TinyC3_22CS30027_22CS30019.y"
                          {
                            //$$ = createNode("type_qualifier_list_opt",NULL,NULL);
                        }
#line 2954 "y.tab.c"
    break;

  case 130: /* type_qualifier_list_opt: type_qualifier_list  */
#line 805 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("type_qualifier_list_opt",$1,NULL);
                        }
#line 2962 "y.tab.c"
    break;

  case 131: /* assignment_expression_opt: %empty  */
#line 810 "TinyC3_22CS30027_22CS30019.y"
                             {
                            //$$ = createNode("assignment_expression_opt",NULL,NULL);
                            }
#line 2970 "y.tab.c"
    break;

  case 132: /* assignment_expression_opt: assignment_expression  */
#line 814 "TinyC3_22CS30027_22CS30019.y"
                            {
                                //$$ = createNode("assignment_expression_opt",$1,NULL);
                            }
#line 2978 "y.tab.c"
    break;

  case 133: /* identifier_list_opt: %empty  */
#line 820 "TinyC3_22CS30027_22CS30019.y"
                       {
                        //$$ = createNode("identifier_list_opt",NULL,NULL);
                        }
#line 2986 "y.tab.c"
    break;

  case 134: /* identifier_list_opt: identifier_list  */
#line 824 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("identifier_list_opt",$1,NULL);
                        }
#line 2994 "y.tab.c"
    break;

  case 135: /* pointer_opt: %empty  */
#line 832 "TinyC3_22CS30027_22CS30019.y"
        {
            //$$ = createNode("pointer_opt",NULL,NULL);
        }
#line 3002 "y.tab.c"
    break;

  case 136: /* pointer_opt: pointer  */
#line 836 "TinyC3_22CS30027_22CS30019.y"
        {
            //$$ = createNode("pointer_opt",$1,NULL);
        }
#line 3010 "y.tab.c"
    break;

  case 137: /* pointer: MUL type_qualifier_list_opt  */
#line 842 "TinyC3_22CS30027_22CS30019.y"
        {
            //$$=createNode("pointer",createNode("MUL",NULL,NULL), $2);
        }
#line 3018 "y.tab.c"
    break;

  case 138: /* pointer: MUL type_qualifier_list_opt pointer  */
#line 846 "TinyC3_22CS30027_22CS30019.y"
        {
            //$$=createNode("pointer",createNode("MUL",NULL,NULL) ,createNode("ignore",$2, $3));
        }
#line 3026 "y.tab.c"
    break;

  case 139: /* type_qualifier_list: type_qualifier  */
#line 854 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("type_qualifier_list",$1,NULL);
                    }
#line 3034 "y.tab.c"
    break;

  case 140: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 858 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("type_qualifier_list", $1, $2);
                    }
#line 3042 "y.tab.c"
    break;

  case 141: /* parameter_type_list: parameter_list  */
#line 866 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("parameter_type_list",$1,NULL);
                    }
#line 3050 "y.tab.c"
    break;

  case 142: /* parameter_type_list: parameter_list COMMA ELLIPSIS  */
#line 869 "TinyC3_22CS30027_22CS30019.y"
                                                    {
                        //$$=createNode("parameter_type_list", $1, createNode("ignore",createNode("COMMA",NULL,NULL),createNode("ELLIPSIS",NULL,NULL)));
                    }
#line 3058 "y.tab.c"
    break;

  case 143: /* parameter_list: parameter_declaration  */
#line 877 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("parameter_list",$1,NULL);
                }
#line 3066 "y.tab.c"
    break;

  case 144: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 881 "TinyC3_22CS30027_22CS30019.y"
               {
                //$$=createNode("parameter_list", createNode("ignore",$1,createNode("COMMA",NULL,NULL)), $3);
                }
#line 3074 "y.tab.c"
    break;

  case 145: /* parameter_declaration: declaration_specifiers declarator  */
#line 889 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("parameter_declaration", $1, $2);
                    }
#line 3082 "y.tab.c"
    break;

  case 146: /* parameter_declaration: declaration_specifiers  */
#line 893 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("parameter_declaration",$1,NULL);
                    }
#line 3090 "y.tab.c"
    break;

  case 147: /* identifier_list: IDENTIFIER  */
#line 901 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("identifier_list",createNode("IDENTIFIER",NULL,NULL),NULL);
                }
#line 3098 "y.tab.c"
    break;

  case 148: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 905 "TinyC3_22CS30027_22CS30019.y"
               {
                //$$=createNode("identifier_list", $1, createNode("ignore",createNode("COMMA",NULL,NULL),createNode("IDENTIFIER",NULL,NULL)));
                }
#line 3106 "y.tab.c"
    break;

  case 149: /* type_name: specifier_qualifier_list  */
#line 913 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("type_name",$1,NULL);
            }
#line 3114 "y.tab.c"
    break;

  case 150: /* initializer: assignment_expression  */
#line 921 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("initializer",$1,NULL);
            }
#line 3122 "y.tab.c"
    break;

  case 151: /* initializer: CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE  */
#line 925 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("initializer",createNode("ignore",createNode("CURLY_BRACKET_OPEN",NULL,NULL),$2),createNode("CURLY_BRACKET_CLOSE",NULL,NULL));
            }
#line 3130 "y.tab.c"
    break;

  case 152: /* initializer: CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE  */
#line 929 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("initializer",createNode("ignore",createNode("CURLY_BRACKET_OPEN",NULL,NULL),$2),createNode("ignore",createNode("COMMA",NULL,NULL),createNode("CURLY_BRACKET_CLOSE",NULL,NULL)));
            }
#line 3138 "y.tab.c"
    break;

  case 153: /* initializer_list: designation_opt initializer  */
#line 937 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("initializer_list",$1,$2);
                }
#line 3146 "y.tab.c"
    break;

  case 154: /* initializer_list: initializer_list COMMA designation_opt initializer  */
#line 941 "TinyC3_22CS30027_22CS30019.y"
                 {
                    //$$=createNode("initializer_list",createNode("ignore",$1,createNode("COMMA",NULL,NULL)),createNode("ignore",$3,$4));
                }
#line 3154 "y.tab.c"
    break;

  case 155: /* designation_opt: designation  */
#line 947 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("designation_opt",$1,NULL);
                }
#line 3162 "y.tab.c"
    break;

  case 156: /* designation_opt: %empty  */
#line 951 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$ = createNode("designation_opt",NULL,NULL);
                }
#line 3170 "y.tab.c"
    break;

  case 157: /* designation: designator_list ASSIGN  */
#line 959 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("designation",$1,createNode("ASSIGN",NULL,NULL));
            }
#line 3178 "y.tab.c"
    break;

  case 158: /* designator_list: designator  */
#line 967 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("designator_list",$1,NULL);
                }
#line 3186 "y.tab.c"
    break;

  case 159: /* designator_list: designator_list designator  */
#line 971 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("designator_list",$1,$2);
                }
#line 3194 "y.tab.c"
    break;

  case 160: /* designator: SQUARE_BRACKET_OPEN constant_expression SQUARE_BRACKET_CLOSE  */
#line 979 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("designator",createNode("ignore",createNode("SQUARE_BRACKET_OPEN",NULL,NULL),$2),createNode("SQUARE_BRACKET_CLOSE",NULL,NULL));
            }
#line 3202 "y.tab.c"
    break;

  case 161: /* designator: DOT IDENTIFIER  */
#line 983 "TinyC3_22CS30027_22CS30019.y"
             {
                //$$=createNode("designator",createNode("DOT",NULL,NULL),createNode("IDENTIFIER",NULL,NULL));
            }
#line 3210 "y.tab.c"
    break;

  case 162: /* statement: labeled_statement  */
#line 994 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("statement",$1,NULL);
            }
#line 3218 "y.tab.c"
    break;

  case 163: /* statement: compound_statement  */
#line 998 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("statement",$1,NULL);
            }
#line 3226 "y.tab.c"
    break;

  case 164: /* statement: expression_statement  */
#line 1002 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("statement",$1,NULL);
            }
#line 3234 "y.tab.c"
    break;

  case 165: /* statement: selection_statement  */
#line 1006 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("statement",$1,NULL);
            }
#line 3242 "y.tab.c"
    break;

  case 166: /* statement: iteration_statement  */
#line 1010 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("statement",$1,NULL);
            }
#line 3250 "y.tab.c"
    break;

  case 167: /* statement: jump_statement  */
#line 1014 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("statement",$1,NULL);
            }
#line 3258 "y.tab.c"
    break;

  case 168: /* labeled_statement: IDENTIFIER COLON statement  */
#line 1022 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=$$=createNode("labeled_statement",createNode("ignore",createNode("IDENTIFIER",NULL,NULL),createNode("COLON",NULL,NULL)),$3);
                    }
#line 3266 "y.tab.c"
    break;

  case 169: /* labeled_statement: CASE constant_expression COLON statement  */
#line 1026 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("labeled_statement",createNode("ignore",createNode("CASE",NULL,NULL),$2),createNode("ignore",createNode("CASE",NULL,NULL),$4));
                    }
#line 3274 "y.tab.c"
    break;

  case 170: /* labeled_statement: DEFAULT COLON statement  */
#line 1030 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("labeled_statement",createNode("ignore",createNode("DEFAULT",NULL,NULL),createNode("COLON",NULL,NULL)),$3);
                    }
#line 3282 "y.tab.c"
    break;

  case 171: /* compound_statement: CURLY_BRACKET_OPEN block_item_list_opt CURLY_BRACKET_CLOSE  */
#line 1038 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("compound_statement",createNode("ignore",createNode("CURLY_BRACKET_OPEN",NULL,NULL),$2),createNode("CURLY_BRACKET_CLOSE",NULL,NULL));
                    }
#line 3290 "y.tab.c"
    break;

  case 172: /* block_item_list_opt: %empty  */
#line 1044 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("block_item_list_opt",NULL,NULL);
                    }
#line 3298 "y.tab.c"
    break;

  case 173: /* block_item_list_opt: block_item_list  */
#line 1048 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("block_item_list_opt",$1,NULL);
                    }
#line 3306 "y.tab.c"
    break;

  case 174: /* block_item_list: block_item  */
#line 1056 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("block_item_list",$1,NULL);
                }
#line 3314 "y.tab.c"
    break;

  case 175: /* block_item_list: block_item_list block_item  */
#line 1060 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("block_item_list",$1,$2);
                }
#line 3322 "y.tab.c"
    break;

  case 176: /* block_item: declaration  */
#line 1068 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("block_item",$1,NULL);
            }
#line 3330 "y.tab.c"
    break;

  case 177: /* block_item: statement  */
#line 1072 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("block_item",$1,NULL);
            }
#line 3338 "y.tab.c"
    break;

  case 178: /* expression_statement: expression_opt SEMICOLON  */
#line 1080 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("expression_statement",$1,createNode("SEMICOLON",NULL,NULL));
                    }
#line 3346 "y.tab.c"
    break;

  case 179: /* expression_opt: %empty  */
#line 1086 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$ = createNode("expression_opt",NULL,NULL);
                }
#line 3354 "y.tab.c"
    break;

  case 180: /* expression_opt: expression  */
#line 1090 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("expression_opt",$1,NULL);
                }
#line 3362 "y.tab.c"
    break;

  case 181: /* selection_statement: IF ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement  */
#line 1098 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("selection_statement",createNode("ignore",createNode("IF",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3)),createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),createNode("ignore",$5,createNode("THEN",NULL,NULL))));
                    }
#line 3370 "y.tab.c"
    break;

  case 182: /* selection_statement: IF ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement ELSE statement  */
#line 1102 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("selection_statement",createNode("ignore",createNode("IF",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3)),createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),createNode("ignore",$5,createNode("ignore",createNode("ELSE",NULL,NULL),$7))));
                    }
#line 3378 "y.tab.c"
    break;

  case 183: /* selection_statement: SWITCH ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement  */
#line 1106 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("selection_statement",createNode("ignore",createNode("SWITCH",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3)),createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$5));
                    }
#line 3386 "y.tab.c"
    break;

  case 184: /* iteration_statement: WHILE ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement  */
#line 1114 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("iteration_statement",createNode("ignore",createNode("WHILE",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3)),createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$5));
                    }
#line 3394 "y.tab.c"
    break;

  case 185: /* iteration_statement: DO statement WHILE ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE SEMICOLON  */
#line 1118 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("iteration_statement",createNode("DO",NULL,NULL),createNode("ignore",$2,createNode("ignore",createNode("WHILE",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$5,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),createNode("SEMICOLON",NULL,NULL)))))));
                    }
#line 3402 "y.tab.c"
    break;

  case 186: /* iteration_statement: FOR ROUND_BRACKET_OPEN expression_opt SEMICOLON expression_opt SEMICOLON expression_opt ROUND_BRACKET_CLOSE statement  */
#line 1122 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("iteration_statement",createNode("FOR",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$3,createNode("ignore",createNode("SEMICOLON",NULL,NULL),createNode("ignore",$5,createNode("ignore",createNode("SEMICOLON",NULL,NULL),createNode("ignore",$7,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$9))))))));
                    }
#line 3410 "y.tab.c"
    break;

  case 187: /* iteration_statement: FOR ROUND_BRACKET_OPEN declaration expression_opt SEMICOLON expression_opt ROUND_BRACKET_CLOSE statement  */
#line 1126 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("iteration_statement",createNode("FOR",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$3,createNode("ignore",$4,createNode("ignore",createNode("SEMICOLON",NULL,NULL),createNode("ignore",$6,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$8)))))));
                    }
#line 3418 "y.tab.c"
    break;

  case 188: /* jump_statement: GOTO IDENTIFIER SEMICOLON  */
#line 1134 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("jump_statement",createNode("GOTO",NULL,NULL),createNode("ignore",createNode("IDENTIFIER",NULL,NULL),createNode("SEMICOLON",NULL,NULL)));
                }
#line 3426 "y.tab.c"
    break;

  case 189: /* jump_statement: CONTINUE SEMICOLON  */
#line 1138 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("jump_statement",createNode("CONTINUE",NULL,NULL),createNode("SEMICOLON",NULL,NULL));
                }
#line 3434 "y.tab.c"
    break;

  case 190: /* jump_statement: BREAK SEMICOLON  */
#line 1142 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("jump_statement",createNode("BREAK",NULL,NULL),createNode("SEMICOLON",NULL,NULL));
                }
#line 3442 "y.tab.c"
    break;

  case 191: /* jump_statement: RETURN expression_opt SEMICOLON  */
#line 1146 "TinyC3_22CS30027_22CS30019.y"
               {
                //$$=createNode("jump_statement",createNode("RETURN",NULL,NULL),createNode("ignore",$2,createNode("SEMICOLON",NULL,NULL)));
                }
#line 3450 "y.tab.c"
    break;

  case 192: /* start_symbol: translation_unit  */
#line 1158 "TinyC3_22CS30027_22CS30019.y"
                {
                    //printTree($1,0);
                }
#line 3458 "y.tab.c"
    break;

  case 193: /* translation_unit: external_declaration  */
#line 1164 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("translation_unit",$1,NULL);
                }
#line 3466 "y.tab.c"
    break;

  case 194: /* translation_unit: translation_unit external_declaration  */
#line 1168 "TinyC3_22CS30027_22CS30019.y"
                 {
                    //$$=createNode("translation_unit",$1,$2);
                }
#line 3474 "y.tab.c"
    break;

  case 195: /* external_declaration: function_definition  */
#line 1176 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("external_declaration",$1,NULL);
                    }
#line 3482 "y.tab.c"
    break;

  case 196: /* external_declaration: declaration  */
#line 1180 "TinyC3_22CS30027_22CS30019.y"
                     {
                        //$$=createNode("external_declaration",$1,NULL);
                    }
#line 3490 "y.tab.c"
    break;

  case 197: /* function_definition: declaration_specifiers declarator declaration_list_opt compound_statement  */
#line 1188 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("function_definition",createNode("ignore",$1,$2),createNode("ignore",$3,$4));
                    }
#line 3498 "y.tab.c"
    break;

  case 198: /* declaration_list_opt: %empty  */
#line 1194 "TinyC3_22CS30027_22CS30019.y"
{
    //$$ = createNode("declaration_list_opt",NULL,NULL);
}
#line 3506 "y.tab.c"
    break;

  case 199: /* declaration_list_opt: declaration_list  */
#line 1198 "TinyC3_22CS30027_22CS30019.y"
                     {
                        //$$=createNode("declaration_list_opt",$1,NULL);
                    }
#line 3514 "y.tab.c"
    break;

  case 200: /* declaration_list: declaration  */
#line 1206 "TinyC3_22CS30027_22CS30019.y"
{
    //$$=createNode("declaration_list",$1,NULL);
}
#line 3522 "y.tab.c"
    break;

  case 201: /* declaration_list: declaration_list declaration  */
#line 1210 "TinyC3_22CS30027_22CS30019.y"
                 {
                    //$$=createNode("declaration_list",$1,$2);
                }
#line 3530 "y.tab.c"
    break;


#line 3534 "y.tab.c"

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

#line 1217 "TinyC3_22CS30027_22CS30019.y"

void yyerror(char *ERRORS) {
    fprintf(stderr, "Error: %s\n", ERRORS);
}


