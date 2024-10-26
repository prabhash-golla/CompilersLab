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
    void yyerror(string ERRORS);
   

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

#line 345 "y.tab.c"

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
  YYSYMBOL_countinst = 115,                /* countinst  */
  YYSYMBOL_newstatement = 116,             /* newstatement  */
  YYSYMBOL_assignment_expression = 117,    /* assignment_expression  */
  YYSYMBOL_expression = 118,               /* expression  */
  YYSYMBOL_constant_expression = 119,      /* constant_expression  */
  YYSYMBOL_declaration = 120,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 121,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list_opt = 122, /* init_declarator_list_opt  */
  YYSYMBOL_init_declarator_list = 123,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 124,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 125,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 126,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 127, /* specifier_qualifier_list  */
  YYSYMBOL_type_qualifier = 128,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 129,       /* function_specifier  */
  YYSYMBOL_declarator = 130,               /* declarator  */
  YYSYMBOL_direct_declarator = 131,        /* direct_declarator  */
  YYSYMBOL_switch_table = 132,             /* switch_table  */
  YYSYMBOL_type_qualifier_list_opt = 133,  /* type_qualifier_list_opt  */
  YYSYMBOL_assignment_expression_opt = 134, /* assignment_expression_opt  */
  YYSYMBOL_pointer = 135,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 136,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 137,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 138,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 139,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 140,          /* identifier_list  */
  YYSYMBOL_type_name = 141,                /* type_name  */
  YYSYMBOL_initializer = 142,              /* initializer  */
  YYSYMBOL_initializer_list = 143,         /* initializer_list  */
  YYSYMBOL_designation_opt = 144,          /* designation_opt  */
  YYSYMBOL_designation = 145,              /* designation  */
  YYSYMBOL_designator_list = 146,          /* designator_list  */
  YYSYMBOL_designator = 147,               /* designator  */
  YYSYMBOL_statement = 148,                /* statement  */
  YYSYMBOL_labeled_statement = 149,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 150,       /* compound_statement  */
  YYSYMBOL_block_item_list_opt = 151,      /* block_item_list_opt  */
  YYSYMBOL_block_item_list = 152,          /* block_item_list  */
  YYSYMBOL_block_item = 153,               /* block_item  */
  YYSYMBOL_expression_statement = 154,     /* expression_statement  */
  YYSYMBOL_expression_opt = 155,           /* expression_opt  */
  YYSYMBOL_selection_statement = 156,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 157,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 158,           /* jump_statement  */
  YYSYMBOL_start_symbol = 159,             /* start_symbol  */
  YYSYMBOL_translation_unit = 160,         /* translation_unit  */
  YYSYMBOL_external_declaration = 161,     /* external_declaration  */
  YYSYMBOL_function_definition = 162,      /* function_definition  */
  YYSYMBOL_declaration_list_opt = 163,     /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 164          /* declaration_list  */
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
#define YYFINAL  44
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   945

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  204
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  341

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
       0,    91,    91,    98,   105,   114,   122,   127,   135,   144,
     152,   173,   180,   184,   188,   196,   204,   208,   217,   221,
     228,   234,   244,   249,   255,   261,   297,   301,   309,   314,
     319,   324,   329,   334,   343,   348,   359,   377,   391,   405,
     423,   428,   442,   460,   465,   479,   497,   502,   519,   536,
     553,   574,   579,   598,   621,   626,   647,   652,   673,   678,
     699,   704,   719,   724,   739,   744,   767,   773,   781,   786,
     805,   824,   843,   862,   881,   900,   919,   939,   959,   979,
    1003,  1008,  1015,  1027,  1035,  1039,  1043,  1047,  1051,  1055,
    1059,  1063,  1072,  1075,  1081,  1085,  1093,  1098,  1111,  1115,
    1119,  1123,  1131,  1136,  1141,  1146,  1151,  1156,  1161,  1166,
    1171,  1176,  1181,  1186,  1195,  1199,  1203,  1207,  1215,  1219,
    1223,  1231,  1239,  1250,  1258,  1267,  1272,  1276,  1303,  1324,
    1328,  1332,  1336,  1350,  1364,  1371,  1384,  1387,  1393,  1396,
    1414,  1419,  1428,  1432,  1440,  1444,  1451,  1455,  1463,  1467,
    1475,  1479,  1487,  1495,  1500,  1504,  1512,  1516,  1522,  1527,
    1534,  1542,  1546,  1554,  1558,  1569,  1573,  1578,  1584,  1589,
    1594,  1603,  1607,  1611,  1619,  1626,  1629,  1637,  1641,  1649,
    1653,  1661,  1668,  1671,  1679,  1683,  1687,  1695,  1699,  1703,
    1707,  1715,  1719,  1723,  1727,  1739,  1745,  1749,  1757,  1761,
    1769,  1776,  1779,  1787,  1791
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
  "conditional_expression", "countinst", "newstatement",
  "assignment_expression", "expression", "constant_expression",
  "declaration", "declaration_specifiers", "init_declarator_list_opt",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "specifier_qualifier_list", "type_qualifier",
  "function_specifier", "declarator", "direct_declarator", "switch_table",
  "type_qualifier_list_opt", "assignment_expression_opt", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "designation_opt", "designation", "designator_list",
  "designator", "statement", "labeled_statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "expression_opt", "selection_statement",
  "iteration_statement", "jump_statement", "start_symbol",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list_opt", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-209)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-202)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     879,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,    -8,   879,   879,   879,   879,    14,   879,  -209,
    -209,    -8,   151,  -209,    28,   -41,  -209,   628,   142,   -32,
    -209,  -209,  -209,  -209,  -209,  -209,    29,  -209,    52,   151,
    -209,    -8,   -13,  -209,    -8,    81,   879,   539,    39,   142,
    -209,  -209,  -209,  -209,    57,   686,   488,    25,   702,   702,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,   117,   173,   752,  -209,    -6,    15,    22,
     166,    45,    93,    85,   102,    92,    48,  -209,  -209,  -209,
     284,  -209,  -209,   151,  -209,   137,   128,   189,  -209,   841,
     -27,   488,  -209,  -209,   -26,   904,  -209,   904,   140,   752,
     101,   -12,   -13,  -209,    74,  -209,   488,  -209,  -209,   752,
     752,   104,   110,  -209,  -209,   752,   752,   752,   752,   752,
     752,   752,   752,   752,   752,   752,  -209,  -209,   752,   752,
     752,   752,   752,   752,   752,   752,   752,   752,   752,   752,
     752,   752,   752,   752,   752,   752,   132,   133,   752,   134,
     138,   429,   168,   121,   172,   752,   176,   177,   144,   136,
    -209,  -209,  -209,  -209,   178,   284,  -209,  -209,   164,  -209,
    -209,  -209,   752,  -209,   204,   752,  -209,   217,  -209,    -8,
     216,   175,  -209,  -209,   174,   219,  -209,   752,  -209,  -209,
     672,  -209,   222,  -209,  -209,    84,  -209,  -209,  -209,   221,
     -33,   224,   180,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
      -6,    -6,    15,    15,    22,    22,    22,    22,   166,   166,
      45,    93,    85,   102,    92,  -209,  -209,   197,  -209,   429,
     233,   373,   198,   752,   199,   752,   752,   429,  -209,  -209,
    -209,   231,  -209,   232,  -209,  -209,  -209,   670,  -209,   230,
    -209,    25,  -209,  -209,  -209,   -13,   230,  -209,  -209,   752,
     752,   429,  -209,   239,   752,   211,  -209,   -25,  -209,   -23,
     -15,  -209,  -209,  -209,  -209,  -209,    21,  -209,  -209,   136,
    -209,   752,   212,   752,   429,   429,   429,  -209,   135,   214,
      20,   752,   225,   301,  -209,  -209,  -209,  -209,   243,   253,
     752,   429,   752,  -209,   429,   273,  -209,  -209,  -209,   429,
    -209
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    99,   103,   118,   113,    98,   100,   107,   121,   105,
     106,   119,   104,   108,   101,   109,   102,   120,   110,   111,
     112,   199,    92,    84,    85,    86,    87,     0,   195,   196,
     198,     0,   136,   124,     0,    93,    94,    96,   123,     0,
      88,    89,    90,    91,     1,   197,     0,   142,   140,   137,
      83,     0,     0,   203,    92,     0,   202,     0,   135,   122,
     125,   141,   143,    95,    96,     0,     0,   159,     0,     0,
      28,    29,    30,    31,    32,    33,     5,     2,     3,     4,
       7,     6,     9,    22,    34,     0,    36,    40,    43,    46,
      51,    54,    56,    58,    60,    62,    64,    68,   153,    97,
     175,   200,   204,   136,   128,     0,     0,   138,   150,     0,
       0,     0,    26,    80,     0,   116,   152,   117,     0,     0,
       0,     0,     0,   158,     0,   161,     0,    23,    24,     0,
      18,     0,     0,    14,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    34,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   182,     0,     0,     0,   182,     0,     0,     5,   183,
     179,   180,   165,   166,     0,   176,   177,   167,     0,   168,
     169,   170,     0,   127,     0,     0,   139,     0,   133,   149,
       0,   144,   146,   134,     0,     0,     8,     0,   114,   115,
       0,    82,     0,   164,   154,   159,   156,   160,   162,     0,
       0,     0,    19,    20,    12,    13,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    37,    38,    39,
      41,    42,    44,    45,    47,    48,    49,    50,    52,    53,
      55,    57,    59,    61,    63,    66,   193,     0,   192,   182,
       0,   182,     0,     0,     0,     0,     0,   182,   174,   178,
     181,     0,   131,     0,   126,   148,   132,     0,   151,    27,
      81,   159,    35,   163,   155,     0,     0,    10,    11,     0,
       0,   182,   173,     0,   182,     0,   191,     0,   194,     0,
       0,   171,   129,   130,   145,   147,     0,   157,    21,    67,
     172,     0,     0,   182,   182,   182,   182,    16,   159,     0,
       0,   182,     0,   184,   186,   187,    17,    66,     0,     0,
     182,   182,     0,   188,   182,     0,   185,    65,   190,   182,
     189
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -209,  -209,  -209,  -209,  -209,  -209,   -64,  -209,   -35,   -28,
       4,    79,    36,   165,   167,   169,   163,   179,  -209,  -110,
       6,    33,    -1,   -63,   181,   -29,     0,  -209,  -209,   280,
    -209,    37,  -100,    98,  -209,   -20,   304,  -209,   -44,  -209,
     297,   289,  -209,  -209,    70,  -209,   -77,  -116,    67,  -208,
    -209,  -209,   226,  -142,  -209,   296,  -209,  -209,   170,  -209,
    -143,  -209,  -209,  -209,  -209,  -209,   324,  -209,  -209,  -209
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    81,    82,    83,   221,   222,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     290,   166,   113,   179,   212,    21,    54,    34,    35,    36,
      23,    24,   116,    25,    26,    64,    38,   109,    48,   197,
      39,    49,   200,   201,   202,   110,   118,    99,   121,   122,
     123,   124,   125,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,    27,    28,    29,    30,    55,    56
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,   112,    37,   114,   127,   128,   216,   285,    53,   211,
     287,    46,    31,   106,    44,   208,    65,   209,   203,   206,
     314,   146,   315,    40,    41,    42,    43,   102,    22,   260,
     316,    66,   264,    67,   205,   214,    31,    68,    69,    70,
      71,    72,    73,    74,    75,    32,    51,   148,   114,   219,
     147,    98,   149,   150,   207,   146,   105,    33,   211,   192,
     204,   207,   207,   114,   207,   328,   220,   119,   317,   151,
     152,   180,   207,   120,    60,   215,    76,    77,    78,    79,
      80,    33,   153,   154,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,    50,   115,   146,    32,   196,   207,   318,   199,
     285,   159,   160,   237,   238,   239,   119,   292,   295,   165,
     -67,    98,   120,   240,   241,   301,   119,   100,   108,   223,
      47,   284,   120,    52,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   161,   146,    62,   115,   310,
     217,   312,   115,   162,   115,    47,   180,   242,   243,   129,
       3,   130,   164,   115,   117,   131,   132,   133,   134,   307,
     322,   163,   323,   324,   325,   282,    11,   119,   329,   275,
     193,   194,   326,   120,    57,   210,    58,   335,    17,   336,
     213,   271,   338,   224,   273,   248,   249,   340,     3,   225,
     297,    47,   299,   300,   255,    62,   280,   256,   258,   117,
     262,   259,   261,   117,    11,   117,   263,   267,    65,   195,
     265,   266,   337,   207,   117,   268,    17,   309,   155,   156,
     157,   158,   294,    66,   244,   245,   246,   247,   270,    68,
      69,    70,    71,    72,    73,    74,    75,   272,   320,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     274,   276,   277,   278,   279,   283,   286,   289,   146,   288,
     291,   293,   296,   298,   302,   303,   281,   199,    76,    77,
      78,    79,    80,   311,    98,   313,   321,   327,   308,     1,
     167,   168,     2,     3,   169,   170,   171,     4,   334,   330,
       5,     6,     7,   172,   173,   174,     8,     9,    10,    11,
     175,    12,    13,    65,    14,   331,   176,   333,   339,    15,
      16,    17,   177,    18,    19,    20,   250,   253,    66,   251,
     100,    63,   252,   332,    68,    69,    70,    71,    72,    73,
      74,    75,   319,    59,   254,    61,   107,   305,   306,   257,
     218,   101,    45,     0,     0,   269,     0,     0,  -182,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   178,    77,    78,    79,    80,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     0,     5,
       6,     7,     0,     0,     0,     8,     9,    10,    11,     0,
      12,    13,    65,    14,     0,     0,     0,     0,    15,    16,
      17,     0,    18,    19,    20,     0,     0,    66,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,    73,    74,
      75,     0,     0,     0,     0,   167,   168,     0,     0,   169,
     170,   171,     0,     0,     0,     0,     0,     0,   172,   173,
     174,     0,     0,     0,     0,   175,     0,     0,    65,     0,
       0,   176,    76,    77,    78,    79,    80,   177,     0,     0,
       0,     0,     0,    66,     0,   100,     0,     0,     0,    68,
      69,    70,    71,    72,    73,    74,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     0,     0,
       0,     4,     0,     0,     0,     0,     7,     0,     0,     0,
       0,     9,    10,    11,     0,    12,    13,    65,   178,    77,
      78,    79,    80,    15,    16,    17,     0,    18,    19,    20,
       0,     0,    66,     0,     0,     0,     0,     0,    68,    69,
      70,    71,    72,    73,    74,    75,     0,     0,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,     0,     0,     0,    65,   103,
       0,     0,     0,     0,     0,     0,    17,    76,    77,    78,
      79,    80,   104,    66,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,    73,    74,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,    77,
      78,    79,    80,     1,     0,     0,     2,     3,     0,     0,
       0,     4,     0,     0,     5,     6,     7,     0,     0,     0,
       8,     9,    10,    11,     0,    12,    13,     0,    14,     0,
       0,     0,     0,    15,    16,    17,     0,    18,    19,    20,
       0,     0,     0,     0,  -201,     1,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,    11,     0,    12,    13,     0,
      14,    65,     0,     0,    52,    15,    16,    17,     0,    18,
      19,    20,     0,     0,     0,    65,    66,     0,   281,     0,
       0,     0,    68,    69,    70,    71,    72,    73,    74,    75,
     111,    65,     0,     0,     0,     0,    68,    69,    70,    71,
      72,    73,    74,    75,     0,   304,   126,     0,     0,     0,
       0,     0,    68,    69,    70,    71,    72,    73,    74,    75,
       0,    76,    77,    78,    79,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,    77,    78,    79,    80,
       0,    65,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,    77,    78,    79,    80,    66,     0,     0,     0,
       0,     0,    68,    69,    70,    71,    72,    73,    74,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,    77,    78,    79,    80,     1,     0,     0,     2,
       3,     0,     0,     0,     4,     0,     0,     5,     6,     7,
       0,     0,     0,     8,     9,    10,    11,     0,    12,    13,
       0,    14,     0,     0,     0,     0,    15,    16,    17,     0,
      18,    19,    20,     0,     1,     0,   198,     2,     3,     0,
       0,     0,     4,     0,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,    11,     0,    12,    13,     0,    14,
       0,     0,     2,     3,    15,    16,    17,     4,    18,    19,
      20,     0,     7,     0,     0,     0,     0,     9,    10,    11,
       0,    12,    13,     0,     0,     0,     0,     0,     0,    15,
      16,    17,     0,    18,    19,    20
};

static const yytype_int16 yycheck[] =
{
       0,    65,    22,    66,    68,    69,   122,   215,    37,   119,
      43,    31,    44,    57,     0,   115,    29,   117,    45,    45,
      45,    85,    45,    23,    24,    25,    26,    56,    28,   171,
      45,    44,   175,    46,   111,    47,    44,    50,    51,    52,
      53,    54,    55,    56,    57,    53,    87,    53,   111,   126,
      85,    52,    58,    59,    87,   119,    57,    89,   168,   103,
      87,    87,    87,   126,    87,    45,   129,    42,    47,    54,
      55,   100,    87,    48,    45,    87,    89,    90,    91,    92,
      93,    89,    60,    61,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,    74,    66,   168,    53,   107,    87,    87,   109,
     318,    66,    67,   148,   149,   150,    42,   259,   261,    71,
      72,   122,    48,   151,   152,   267,    42,    46,    89,   130,
      32,    47,    48,    76,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,    52,   210,    49,   111,   291,
      76,   294,   115,    68,   117,    57,   185,   153,   154,    42,
       9,    44,    70,   126,    66,    48,    49,    50,    51,   285,
     313,    69,   314,   315,   316,   210,    25,    42,   321,   199,
      43,    53,    47,    48,    42,    45,    44,   330,    37,   331,
      89,   192,   334,    89,   195,   159,   160,   339,     9,    89,
     263,   103,   265,   266,    72,   107,   207,    74,    74,   111,
      89,    73,    44,   115,    25,   117,    44,    73,    29,    30,
      44,    44,   332,    87,   126,    47,    37,   290,    62,    63,
      64,    65,   261,    44,   155,   156,   157,   158,    74,    50,
      51,    52,    53,    54,    55,    56,    57,    43,   311,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      43,    45,    87,    89,    45,    43,    45,    87,   332,    45,
      73,    38,    74,    74,    43,    43,    46,   277,    89,    90,
      91,    92,    93,    44,   285,    74,    74,    73,   289,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    45,    74,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    14,    32,    74,    45,    35,
      36,    37,    38,    39,    40,    41,   161,   164,    44,   162,
      46,    51,   163,   327,    50,    51,    52,    53,    54,    55,
      56,    57,   309,    39,   165,    48,    57,   277,   281,   168,
     124,    55,    28,    -1,    -1,   185,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    90,    91,    92,    93,     5,    -1,
      -1,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,
      17,    18,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    35,    36,
      37,    -1,    39,    40,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,     6,     7,    -1,    -1,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      21,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    -1,
      -1,    32,    89,    90,    91,    92,    93,    38,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    46,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     8,     9,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    27,    28,    29,    89,    90,
      91,    92,    93,    35,    36,    37,    -1,    39,    40,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    89,    90,    91,
      92,    93,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,
      91,    92,    93,     5,    -1,    -1,     8,     9,    -1,    -1,
      -1,    13,    -1,    -1,    16,    17,    18,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    30,    -1,
      -1,    -1,    -1,    35,    36,    37,    -1,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,     5,    -1,    -1,     8,     9,
      -1,    -1,    -1,    13,    -1,    -1,    16,    17,    18,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,    28,    -1,
      30,    29,    -1,    -1,    76,    35,    36,    37,    -1,    39,
      40,    41,    -1,    -1,    -1,    29,    44,    -1,    46,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      44,    29,    -1,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    75,    44,    -1,    -1,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    89,    90,    91,    92,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    90,    91,    92,    93,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    90,    91,    92,    93,    44,    -1,    -1,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    90,    91,    92,    93,     5,    -1,    -1,     8,
       9,    -1,    -1,    -1,    13,    -1,    -1,    16,    17,    18,
      -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,    28,
      -1,    30,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,
      39,    40,    41,    -1,     5,    -1,    45,     8,     9,    -1,
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
      41,   120,   121,   125,   126,   128,   129,   159,   160,   161,
     162,    44,    53,    89,   122,   123,   124,   130,   131,   135,
     121,   121,   121,   121,     0,   161,   130,   128,   133,   136,
      74,    87,    76,   120,   121,   163,   164,    42,    44,   131,
      45,   135,   128,   124,   130,    29,    44,    46,    50,    51,
      52,    53,    54,    55,    56,    57,    89,    90,    91,    92,
      93,    96,    97,    98,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   117,   142,
      46,   150,   120,    30,    43,   117,   133,   136,    89,   132,
     140,    44,   101,   117,   118,   126,   127,   128,   141,    42,
      48,   143,   144,   145,   146,   147,    44,   101,   101,    42,
      44,    48,    49,    50,    51,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,   101,   103,    53,    58,
      59,    54,    55,    60,    61,    62,    63,    64,    65,    66,
      67,    52,    68,    69,    70,    71,   116,     6,     7,    10,
      11,    12,    19,    20,    21,    26,    32,    38,    89,   118,
     120,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   133,    43,    53,    30,   117,   134,    45,   121,
     137,   138,   139,    45,    87,   141,    45,    87,   127,   127,
      45,   114,   119,    89,    47,    87,   142,    76,   147,   141,
     118,    99,   100,   117,    89,    89,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   103,   103,   103,
     104,   104,   105,   105,   106,   106,   106,   106,   107,   107,
     108,   109,   110,   111,   112,    72,    74,   119,    74,    73,
     148,    44,    89,    44,   155,    44,    44,    73,    47,   153,
      74,   117,    43,   117,    43,   130,    45,    87,    89,    45,
     117,    46,   103,    43,    47,   144,    45,    43,    45,    87,
     115,    73,   148,    38,   120,   155,    74,   118,    74,   118,
     118,   148,    43,    43,    75,   139,   143,   142,   117,   118,
     148,    44,   155,    74,    45,    45,    45,    47,    87,   116,
     118,    74,   155,   148,   148,   148,    47,    73,    45,   155,
      74,    14,   115,    74,    45,   155,   148,   114,   148,    45,
     148
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
     112,   112,   113,   113,   114,   114,   115,   116,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     118,   118,   119,   120,   121,   121,   121,   121,   121,   121,
     121,   121,   122,   122,   123,   123,   124,   124,   125,   125,
     125,   125,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   127,   127,   127,   127,   128,   128,
     128,   129,   130,   130,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   132,   133,   133,   134,   134,
     135,   135,   136,   136,   137,   137,   138,   138,   139,   139,
     140,   140,   141,   142,   142,   142,   143,   143,   144,   144,
     145,   146,   146,   147,   147,   148,   148,   148,   148,   148,
     148,   149,   149,   149,   150,   151,   151,   152,   152,   153,
     153,   154,   155,   155,   156,   156,   156,   157,   157,   157,
     157,   158,   158,   158,   158,   159,   160,   160,   161,   161,
     162,   163,   163,   164,   164
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
       1,     3,     1,     3,     1,     9,     0,     0,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     2,     2,
       2,     2,     0,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     3,     5,     4,     3,     6,
       6,     5,     5,     4,     4,     0,     0,     1,     0,     1,
       2,     3,     1,     2,     1,     3,     1,     3,     2,     1,
       1,     3,     1,     1,     3,     4,     2,     4,     1,     0,
       2,     1,     2,     3,     2,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     3,     0,     1,     1,     2,     1,
       1,     2,     0,     1,     5,     7,     5,     5,     7,     9,
       8,     3,     2,     2,     3,     1,     1,     2,     1,     1,
       4,     0,     1,     1,     2
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
#line 92 "TinyC3_22CS30027_22CS30019.y"
            { 
                (yyval.Express) = new Expression();
                (yyval.Express)->Location = SymbolTable::GenTemp(new SType("int"),itos((yyvsp[0].INTVAL)));
                QuadArray::Emit("=",(yyval.Express)->Location->Name,(yyvsp[0].INTVAL));
                //$$ = createNode("constant",createNode("INTEGER", NULL, NULL),NULL); 
            }
#line 1889 "y.tab.c"
    break;

  case 3: /* constant: FLOATING_CONSTANT  */
#line 99 "TinyC3_22CS30027_22CS30019.y"
            { 
                (yyval.Express) = new Expression();
                (yyval.Express)->Location = SymbolTable::GenTemp(new SType("float"),ftos((yyvsp[0].FLOATVAL)));
                QuadArray::Emit("=",(yyval.Express)->Location->Name,(yyvsp[0].FLOATVAL));
                //$$ = createNode("constant",createNode("FLOATING_CONSTANT", NULL, NULL),NULL); 
            }
#line 1900 "y.tab.c"
    break;

  case 4: /* constant: CHARACTER_CONSTANT  */
#line 106 "TinyC3_22CS30027_22CS30019.y"
            { 
                (yyval.Express) = new Expression();
                (yyval.Express)->Location = SymbolTable::GenTemp(new SType("char"),string((yyvsp[0].CHARVAL)));
                QuadArray::Emit("=",(yyval.Express)->Location->Name,(yyvsp[0].CHARVAL));
                //$$ = createNode("constant",createNode("CHARACTER_CONSTANT", NULL, NULL),NULL); 
            }
#line 1911 "y.tab.c"
    break;

  case 5: /* primary_expression: IDENTIFIER  */
#line 115 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        Symbol* Temp = CurrentST->LookUp(Globe);
                        (yyval.Express) = new Expression();
                        (yyval.Express)->Location = Temp;
                        (yyval.Express)->Type = "non_bool";
                        //$$ = createNode("primary_expression",createNode("IDENTIFIER", NULL, NULL),NULL); 
                    }
#line 1923 "y.tab.c"
    break;

  case 6: /* primary_expression: constant  */
#line 123 "TinyC3_22CS30027_22CS30019.y"
                    { 
                       (yyval.Express) = (yyvsp[0].Express);
                        //$$ = createNode("primary_expression",$1,NULL); 
                    }
#line 1932 "y.tab.c"
    break;

  case 7: /* primary_expression: STRING_LITERAL  */
#line 128 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        (yyval.Express) = new Expression();
                        (yyval.Express)->Location = SymbolTable::GenTemp(new SType("ptr"),string((yyvsp[0].CHARVAL)));
                        // QuadArray::Emit("=",$$->LocalST->Name,$1);
                        (yyval.Express)->Location->Type->ArrType = new SType("char");
                        //$$ = createNode("primary_expression",createNode("STRING_LITERAL", NULL, NULL),NULL); 
                    }
#line 1944 "y.tab.c"
    break;

  case 8: /* primary_expression: ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE  */
#line 136 "TinyC3_22CS30027_22CS30019.y"
                    {   
                        (yyval.Express) = (yyvsp[-1].Express);
                        //$$ = createNode("primary_expression", createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$2), createNode("ROUND_BRACKET_CLOSE",NULL,NULL)); 
                    }
#line 1953 "y.tab.c"
    break;

  case 9: /* postfix_expression: primary_expression  */
#line 145 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        (yyval.Array)  = new ArrayType();
                        (yyval.Array)->Location = (yyvsp[0].Express)->Location;
                        (yyval.Array)->Array = (yyvsp[0].Express)->Location;
                        (yyval.Array)->Type = (yyvsp[0].Express)->Location->Type;
                        //$$ = createNode("postfix_expression",$1,NULL); 
                    }
#line 1965 "y.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression SQUARE_BRACKET_OPEN expression SQUARE_BRACKET_CLOSE  */
#line 153 "TinyC3_22CS30027_22CS30019.y"
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
#line 1990 "y.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression ROUND_BRACKET_OPEN argument_expression_list_opt ROUND_BRACKET_CLOSE  */
#line 174 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        (yyval.Array)  = new ArrayType();
                        (yyval.Array)->Array = SymbolTable::GenTemp((yyvsp[-3].Array)->Type);
                        QuadArray::Emit("call",(yyval.Array)->Array->Name,(yyvsp[-3].Array)->Array->Name,itos((yyvsp[-1].Parameter)));
                        //$$ = createNode("postfix_expression", $1, createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$3,createNode("ROUND_BRACKET_OPEN",NULL,NULL)))); 
                    }
#line 2001 "y.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 181 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        //$$ = createNode("postfix_expression", $1,createNode("ignore",createNode("DOT",NULL,NULL),createNode("IDENTIFIER", NULL, NULL))); 
                    }
#line 2009 "y.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression IMPLIES IDENTIFIER  */
#line 185 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        //$$ = createNode("postfix_expression", $1,createNode("ignore",createNode("IMPLIES",NULL,NULL),createNode("IDENTIFIER", NULL, NULL)));
                    }
#line 2017 "y.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression INCREMENT  */
#line 189 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Array)  = new ArrayType();
                        (yyval.Array)->Array = SymbolTable::GenTemp((yyvsp[-1].Array)->Array->Type);
                        QuadArray::Emit("=",(yyval.Array)->Array->Name,(yyvsp[-1].Array)->Array->Name);
                        QuadArray::Emit("+",(yyvsp[-1].Array)->Array->Name,(yyvsp[-1].Array)->Array->Name,"1");
                        // $$ = createNode("postfix_expression", $1, createNode("INCREMENT",NULL,NULL)); 
                    }
#line 2029 "y.tab.c"
    break;

  case 15: /* postfix_expression: postfix_expression DECREMENT  */
#line 197 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        (yyval.Array)  = new ArrayType();
                        (yyval.Array)->Array = SymbolTable::GenTemp((yyvsp[-1].Array)->Array->Type);
                        QuadArray::Emit("=",(yyval.Array)->Array->Name,(yyvsp[-1].Array)->Array->Name);
                        QuadArray::Emit("-",(yyvsp[-1].Array)->Array->Name,(yyvsp[-1].Array)->Array->Name,"1");
                        //$$ = createNode("postfix_expression", $1, createNode("DECREMENT",NULL,NULL)); 
                    }
#line 2041 "y.tab.c"
    break;

  case 16: /* postfix_expression: ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE  */
#line 205 "TinyC3_22CS30027_22CS30019.y"
                    {
                        // $$ = createNode("postfix_expression", createNode("ignore",createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$2),createNode("ROUND_BRACKET_OPEN",NULL,NULL)),createNode("ignore",createNode("ignore",createNode("CURLY_BRACKET_CLOSE",NULL,NULL),$5),createNode("CURLY_BRACKET_CLOSE",NULL,NULL))); 
                    }
#line 2049 "y.tab.c"
    break;

  case 17: /* postfix_expression: ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE  */
#line 209 "TinyC3_22CS30027_22CS30019.y"
                    {
                        // $$ = createNode("postfix_expression", createNode("ignore",createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$2),createNode("ROUND_BRACKET_OPEN",NULL,NULL)),createNode("ignore",createNode("ignore",createNode("CURLY_BRACKET_CLOSE",NULL,NULL),$5),createNode("ignore",createNode("COMMA",NULL,NULL),createNode("CURLY_BRACKET_CLOSE",NULL,NULL)))); 
                    }
#line 2057 "y.tab.c"
    break;

  case 18: /* argument_expression_list_opt: %empty  */
#line 217 "TinyC3_22CS30027_22CS30019.y"
                        {
                            (yyval.Parameter) = 0;
                            //$$ = createNode("argument_expression_list_opt",NULL, NULL);
                        }
#line 2066 "y.tab.c"
    break;

  case 19: /* argument_expression_list_opt: argument_expression_list  */
#line 222 "TinyC3_22CS30027_22CS30019.y"
                        {
                            (yyval.Parameter) = (yyvsp[0].Parameter);
                            //$$ = createNode("argument_expression_list_opt", $1, NULL);
                        }
#line 2075 "y.tab.c"
    break;

  case 20: /* argument_expression_list: assignment_expression  */
#line 229 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            (yyval.Parameter) = 1;
                            QuadArray::Emit("param",(yyvsp[0].Express)->Location->Name);
                            //$$ = createNode("argument_expression_list", $1, NULL); 
                        }
#line 2085 "y.tab.c"
    break;

  case 21: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 235 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            (yyval.Parameter) = (yyvsp[-2].Parameter) + 1;
                            QuadArray::Emit("param",(yyvsp[0].Express)->Location->Name);
                            //$$ = createNode("argument_expression_list", $1, createNode("ignore",createNode("COMMA",NULL,NULL),$3)); 
                        }
#line 2095 "y.tab.c"
    break;

  case 22: /* unary_expression: postfix_expression  */
#line 245 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Array) = (yyvsp[0].Array);
                        // $$ = createNode("unary_expression", $1, NULL); 
                    }
#line 2104 "y.tab.c"
    break;

  case 23: /* unary_expression: INCREMENT unary_expression  */
#line 250 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        QuadArray::Emit("+",(yyvsp[0].Array)->Array->Name,(yyvsp[0].Array)->Array->Name,"1");
                        (yyval.Array) = (yyvsp[0].Array);
                        //$$ = createNode("unary_expression", createNode("INCREMENT",NULL,NULL), $2); 
                    }
#line 2114 "y.tab.c"
    break;

  case 24: /* unary_expression: DECREMENT unary_expression  */
#line 256 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        QuadArray::Emit("-",(yyvsp[0].Array)->Array->Name,(yyvsp[0].Array)->Array->Name,"1");
                        (yyval.Array) = (yyvsp[0].Array);
                        //$$ = createNode("unary_expression", createNode("DECREMENT",NULL,NULL), $2); 
                    }
#line 2124 "y.tab.c"
    break;

  case 25: /* unary_expression: unary_operator cast_expression  */
#line 262 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        (yyval.Array) = new ArrayType();
                        switch((yyvsp[-1].UnaryOper))
                        {
                            case '&':
                                (yyval.Array)->Array = SymbolTable::GenTemp(new SType("ptr"));
                                (yyval.Array)->Array->Type->ArrType = (yyvsp[0].Array)->Array->Type;
                                QuadArray::Emit("= &",(yyval.Array)->Array->Name,(yyvsp[0].Array)->Array->Name);
                                break;
                            case '*':
                                (yyval.Array)->Array = (yyvsp[0].Array)->Array;
                                (yyval.Array)->Location = SymbolTable::GenTemp((yyvsp[0].Array)->Array->Type->ArrType);
                                (yyval.Array)->A_Type = "ptr";
                                QuadArray::Emit("= &",(yyval.Array)->Location->Name,(yyvsp[0].Array)->Array->Name);
                                break;
                            case '+':
                                (yyval.Array)= (yyvsp[0].Array);
                                break;
                            case '-':
                                (yyval.Array)->Array = SymbolTable::GenTemp((yyvsp[0].Array)->Array->Type->Type);
                                QuadArray::Emit("= -",(yyval.Array)->Array->Name,(yyvsp[0].Array)->Array->Name);
                                break;
                            case '~':
                                (yyval.Array)->Array = SymbolTable::GenTemp((yyvsp[0].Array)->Array->Type->Type);
                                QuadArray::Emit("= ~",(yyval.Array)->Array->Name,(yyvsp[0].Array)->Array->Name);
                                break;
                            case '!':
                                (yyval.Array)->Array = SymbolTable::GenTemp((yyvsp[0].Array)->Array->Type->Type);
                                QuadArray::Emit("= !",(yyval.Array)->Array->Name,(yyvsp[0].Array)->Array->Name);
                                break;

                        }
                        
                        //$$ = createNode("unary_expression", $1, $2); 
                    }
#line 2164 "y.tab.c"
    break;

  case 26: /* unary_expression: SIZEOF unary_expression  */
#line 298 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        //$$ = createNode("unary_expression", createNode("SIZEOF",NULL,NULL), $2); 
                    }
#line 2172 "y.tab.c"
    break;

  case 27: /* unary_expression: SIZEOF ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE  */
#line 302 "TinyC3_22CS30027_22CS30019.y"
                    {  
                        //$$ = createNode("unary_expression", createNode("SIZEOF",NULL,NULL), createNode("ignore",createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3),createNode("ROUND_BRACKET_CLOSE",NULL,NULL))); 
                    }
#line 2180 "y.tab.c"
    break;

  case 28: /* unary_operator: BITWISE_AND  */
#line 310 "TinyC3_22CS30027_22CS30019.y"
                {
                    (yyval.UnaryOper) = '&';
                    // $$ = createNode("BITWISE_AND", NULL, NULL); 
                }
#line 2189 "y.tab.c"
    break;

  case 29: /* unary_operator: MUL  */
#line 315 "TinyC3_22CS30027_22CS30019.y"
                { 
                    (yyval.UnaryOper) = '*';
                    //$$ = createNode("MUL", NULL, NULL); 
                }
#line 2198 "y.tab.c"
    break;

  case 30: /* unary_operator: PLUS  */
#line 320 "TinyC3_22CS30027_22CS30019.y"
                { 
                    (yyval.UnaryOper) = '+';
                    //$$ = createNode('PLUS', NULL, NULL); 
                }
#line 2207 "y.tab.c"
    break;

  case 31: /* unary_operator: MINUS  */
#line 325 "TinyC3_22CS30027_22CS30019.y"
                { 
                    (yyval.UnaryOper) = '-';
                    //$$ = createNode('MINUS', NULL, NULL); 
                }
#line 2216 "y.tab.c"
    break;

  case 32: /* unary_operator: BITWISE_NOT  */
#line 330 "TinyC3_22CS30027_22CS30019.y"
                { 
                    (yyval.UnaryOper) = '~';
                    //$$ = createNode('BITWISE_NOT', NULL, NULL); 
                }
#line 2225 "y.tab.c"
    break;

  case 33: /* unary_operator: NOT  */
#line 335 "TinyC3_22CS30027_22CS30019.y"
                {
                    (yyval.UnaryOper) = '!';
                    // $$ = createNode('NOT', NULL, NULL); 
                }
#line 2234 "y.tab.c"
    break;

  case 34: /* cast_expression: unary_expression  */
#line 344 "TinyC3_22CS30027_22CS30019.y"
                { 
                    (yyval.Array) = (yyvsp[0].Array);
                    //$$ =  createNode("cast_expression", $1, NULL); 
                }
#line 2243 "y.tab.c"
    break;

  case 35: /* cast_expression: ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE cast_expression  */
#line 349 "TinyC3_22CS30027_22CS30019.y"
                { 
                    (yyval.Array) = new ArrayType();
                    (yyval.Array)->Array = (yyvsp[0].Array)->Array;
                    // $$->Array = TypeConvertor($4->Array,varType)
                    //$$ =  createNode("cast_expression", createNode("ROUND_BRACKET_OPEN",NULL,NULL), createNode("ignore",$2,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$4))); 
                }
#line 2254 "y.tab.c"
    break;

  case 36: /* multiplicative_expression: cast_expression  */
#line 360 "TinyC3_22CS30027_22CS30019.y"
                            { 
                                (yyval.Express) = new Expression();
                                if((yyvsp[0].Array)->A_Type=="arr")
                                {
                                    (yyval.Express)->Location = SymbolTable::GenTemp((yyvsp[0].Array)->Location->Type);
                                    QuadArray::Emit("=[]",(yyval.Express)->Location->Name,(yyvsp[0].Array)->Array->Name,(yyvsp[0].Array)->Location->Name);
                                }
                                else if((yyvsp[0].Array)->A_Type=="ptr")
                                {
                                    (yyval.Express)->Location = (yyvsp[0].Array)->Location;
                                }
                                else
                                {
                                    (yyval.Express)->Location = (yyvsp[0].Array)->Array;
                                }
                                //$$ =createNode("multiplicative_expression",$1,NULL);  
                            }
#line 2276 "y.tab.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression MUL cast_expression  */
#line 378 "TinyC3_22CS30027_22CS30019.y"
                            { 
                                if(TypeCheck((yyvsp[-2].Express)->Location,(yyvsp[0].Array)->Array))
                                {
                                    (yyval.Express) = new Expression();
                                    (yyval.Express)->Location = SymbolTable::GenTemp(new SType((yyvsp[-2].Express)->Location->Type->Type));
                                    QuadArray::Emit("*",(yyval.Express)->Location->Name,(yyvsp[-2].Express)->Location->Name,(yyvsp[0].Array)->Array->Name);
                                }
                                else
                                {
                                    yyerror("Type Mismatch");
                                }
                                //$$ = createNode("multiplicative_expression",$1,createNode("ignore",createNode("MUL", NULL, NULL),$3)); 
                            }
#line 2294 "y.tab.c"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression DIV cast_expression  */
#line 392 "TinyC3_22CS30027_22CS30019.y"
                            { 
                                if(TypeCheck((yyvsp[-2].Express)->Location,(yyvsp[0].Array)->Array))
                                {
                                    (yyval.Express) = new Expression();
                                    (yyval.Express)->Location = SymbolTable::GenTemp(new SType((yyvsp[-2].Express)->Location->Type->Type));
                                    QuadArray::Emit("/",(yyval.Express)->Location->Name,(yyvsp[-2].Express)->Location->Name,(yyvsp[0].Array)->Array->Name);
                                }
                                else
                                {
                                    yyerror("Type Mismatch");
                                }
                                //$$ = createNode("multiplicative_expression",$1,createNode("ignore",createNode("DIV", NULL, NULL),$3)); 
                            }
#line 2312 "y.tab.c"
    break;

  case 39: /* multiplicative_expression: multiplicative_expression MOD cast_expression  */
#line 406 "TinyC3_22CS30027_22CS30019.y"
                            { 
                                if(TypeCheck((yyvsp[-2].Express)->Location,(yyvsp[0].Array)->Array))
                                {
                                    (yyval.Express) = new Expression();
                                    (yyval.Express)->Location = SymbolTable::GenTemp(new SType((yyvsp[-2].Express)->Location->Type->Type));
                                    QuadArray::Emit("%",(yyval.Express)->Location->Name,(yyvsp[-2].Express)->Location->Name,(yyvsp[0].Array)->Array->Name);
                                }
                                else
                                {
                                    yyerror("Type Mismatch");
                                }
                                //$$ = createNode("multiplicative_expression",$1,createNode("ignore",createNode("MOD", NULL, NULL),$3)); 
                            }
#line 2330 "y.tab.c"
    break;

  case 40: /* additive_expression: multiplicative_expression  */
#line 424 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        (yyval.Express) = (yyvsp[0].Express);
                        //$$ =createNode("additive_expression",$1,NULL); 
                    }
#line 2339 "y.tab.c"
    break;

  case 41: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 429 "TinyC3_22CS30027_22CS30019.y"
                    {
                        if(TypeCheck((yyvsp[-2].Express)->Location,(yyvsp[0].Express)->Location))
                        {
                            (yyval.Express) = new Expression();
                            (yyval.Express)->Location = SymbolTable::GenTemp(new SType((yyvsp[-2].Express)->Location->Type->Type));
                            QuadArray::Emit("+",(yyval.Express)->Location->Name,(yyvsp[-2].Express)->Location->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        else
                        {
                            yyerror("Type Mismatch");
                        }
                        //$$ = createNode("additive_expression",$1,createNode("ignore",createNode("PLUS", NULL, NULL),$3)); 
                    }
#line 2357 "y.tab.c"
    break;

  case 42: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 443 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        if(TypeCheck((yyvsp[-2].Express)->Location,(yyvsp[0].Express)->Location))
                        {
                            (yyval.Express) = new Expression();
                            (yyval.Express)->Location = SymbolTable::GenTemp(new SType((yyvsp[-2].Express)->Location->Type->Type));
                            QuadArray::Emit("-",(yyval.Express)->Location->Name,(yyvsp[-2].Express)->Location->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        else
                        {
                            yyerror("Type Mismatch");
                        }
                        //$$ = createNode("additive_expression",$1,createNode("ignore",createNode("MINUS", NULL, NULL),$3)); 
                    }
#line 2375 "y.tab.c"
    break;

  case 43: /* shift_expression: additive_expression  */
#line 461 "TinyC3_22CS30027_22CS30019.y"
                 { 
                    (yyval.Express) = (yyvsp[0].Express);
                    //$$ =createNode("shift_expression",$1,NULL); 
                }
#line 2384 "y.tab.c"
    break;

  case 44: /* shift_expression: shift_expression LEFT_SHIFT additive_expression  */
#line 466 "TinyC3_22CS30027_22CS30019.y"
                 { 
                    if((yyvsp[0].Express)->Location->Type->Type=="int")
                    {
                        (yyval.Express) = new Expression();
                        (yyval.Express)->Location = SymbolTable::GenTemp(new SType("int"));
                        QuadArray::Emit("<<",(yyval.Express)->Location->Name,(yyvsp[-2].Express)->Location->Name,(yyvsp[0].Express)->Location->Name);
                    }
                    else
                    {
                        yyerror("Type Error");
                    }
                    //$$ = createNode("shift_expression",$1,createNode("ignore",createNode("LEFT_SHIFT", NULL, NULL),$3)); 
                }
#line 2402 "y.tab.c"
    break;

  case 45: /* shift_expression: shift_expression RIGHT_SHIFT additive_expression  */
#line 480 "TinyC3_22CS30027_22CS30019.y"
                 {
                    if((yyvsp[0].Express)->Location->Type->Type=="int")
                    {
                        (yyval.Express) = new Expression();
                        (yyval.Express)->Location = SymbolTable::GenTemp(new SType("int"));
                        QuadArray::Emit(">>",(yyval.Express)->Location->Name,(yyvsp[-2].Express)->Location->Name,(yyvsp[0].Express)->Location->Name);
                    }
                    else
                    {
                        yyerror("Type Error");
                    }
                    // $$ = createNode("shift_expression",$1,createNode("ignore",createNode("RIGHT_SHIFT", NULL, NULL),$3)); 
                }
#line 2420 "y.tab.c"
    break;

  case 46: /* relational_expression: shift_expression  */
#line 498 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Express)=(yyvsp[0].Express);
                        // $$ =createNode("relational_expression",$1,NULL); 
                    }
#line 2429 "y.tab.c"
    break;

  case 47: /* relational_expression: relational_expression LESS_THAN shift_expression  */
#line 503 "TinyC3_22CS30027_22CS30019.y"
                    {
                        if(TypeCheck((yyvsp[-2].Express)->Location,(yyvsp[0].Express)->Location))
                        {
                            (yyval.Express) = new Expression();
                            (yyval.Express)->Type="bool";
                            (yyval.Express)->TrueList= MakeList(QuadList.InstructionList.size());
                            (yyval.Express)->FalseList= MakeList(QuadList.InstructionList.size()+1);
                            QuadArray::Emit("<","",(yyvsp[-2].Express)->Location->Name,(yyvsp[0].Express)->Location->Name);
                            QuadArray::Emit("goto","_");
                        }
                        else
                        {
                            yyerror("Type mismatch");
                        }
                        //$$ = createNode("relational_expression",$1,createNode("ignore",createNode("LESS_THAN", NULL, NULL),$3)); 
                    }
#line 2450 "y.tab.c"
    break;

  case 48: /* relational_expression: relational_expression GREATER_THAN shift_expression  */
#line 520 "TinyC3_22CS30027_22CS30019.y"
                     { 
                        if(TypeCheck((yyvsp[-2].Express)->Location,(yyvsp[0].Express)->Location))
                        {
                            (yyval.Express) = new Expression();
                            (yyval.Express)->Type="bool";
                            (yyval.Express)->TrueList= MakeList(QuadList.InstructionList.size());
                            (yyval.Express)->FalseList= MakeList(QuadList.InstructionList.size()+1);
                            QuadArray::Emit(">","",(yyvsp[-2].Express)->Location->Name,(yyvsp[0].Express)->Location->Name);
                            QuadArray::Emit("goto","_");
                        }
                        else
                        {
                            yyerror("Type mismatch");
                        }
                        //$$ = createNode("relational_expression",$1,createNode("ignore",createNode("GREATER_THAN", NULL, NULL),$3)); 
                    }
#line 2471 "y.tab.c"
    break;

  case 49: /* relational_expression: relational_expression LESS_EQUAL shift_expression  */
#line 537 "TinyC3_22CS30027_22CS30019.y"
                     { 
                        if(TypeCheck((yyvsp[-2].Express)->Location,(yyvsp[0].Express)->Location))
                        {
                            (yyval.Express) = new Expression();
                            (yyval.Express)->Type="bool";
                            (yyval.Express)->TrueList= MakeList(QuadList.InstructionList.size());
                            (yyval.Express)->FalseList= MakeList(QuadList.InstructionList.size()+1);
                            QuadArray::Emit("<=","",(yyvsp[-2].Express)->Location->Name,(yyvsp[0].Express)->Location->Name);
                            QuadArray::Emit("goto","_");
                        }
                        else
                        {
                            yyerror("Type mismatch");
                        }
                        //$$ = createNode("relational_expression",$1,createNode("ignore",createNode("LESS_EQUAL", NULL, NULL),$3)); 
                    }
#line 2492 "y.tab.c"
    break;

  case 50: /* relational_expression: relational_expression GREATER_EQUAL shift_expression  */
#line 554 "TinyC3_22CS30027_22CS30019.y"
                     { 
                        if(TypeCheck((yyvsp[-2].Express)->Location,(yyvsp[0].Express)->Location))
                        {
                            (yyval.Express) = new Expression();
                            (yyval.Express)->Type="bool";
                            (yyval.Express)->TrueList= MakeList(QuadList.InstructionList.size());
                            (yyval.Express)->FalseList= MakeList(QuadList.InstructionList.size()+1);
                            QuadArray::Emit(">=","",(yyvsp[-2].Express)->Location->Name,(yyvsp[0].Express)->Location->Name);
                            QuadArray::Emit("goto","_");
                        }
                        else
                        {
                            yyerror("Type mismatch");
                        }
                        //$$ = createNode("relational_expression",$1,createNode("ignore",createNode("GREATER_EQUAL", NULL, NULL),$3)); 
                    }
#line 2513 "y.tab.c"
    break;

  case 51: /* equality_expression: relational_expression  */
#line 575 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        (yyval.Express) = (yyvsp[0].Express);
                        //$$ = createNode("equality_expression",$1,NULL); 
                    }
#line 2522 "y.tab.c"
    break;

  case 52: /* equality_expression: equality_expression EQUAL relational_expression  */
#line 580 "TinyC3_22CS30027_22CS30019.y"
                   { 
                        if(TypeCheck((yyvsp[-2].Express)->Location,(yyvsp[0].Express)->Location))
                        {
                            (yyval.Express) = new Expression();
                            btoi((yyvsp[-2].Express));
                            btoi((yyvsp[0].Express));
                            (yyval.Express)->Type="bool";
                            (yyval.Express)->TrueList= MakeList(QuadList.InstructionList.size());
                            (yyval.Express)->FalseList= MakeList(QuadList.InstructionList.size()+1);
                            QuadArray::Emit("==","",(yyvsp[-2].Express)->Location->Name,(yyvsp[0].Express)->Location->Name);
                            QuadArray::Emit("goto","_");
                        }
                        else
                        {
                            yyerror("Type mismatch");
                        }
                       //$$ = createNode("equality_expression",$1,createNode("ignore",createNode("EQUAL", NULL, NULL),$3)); 
                    }
#line 2545 "y.tab.c"
    break;

  case 53: /* equality_expression: equality_expression NOT_EQUAL relational_expression  */
#line 599 "TinyC3_22CS30027_22CS30019.y"
                   {
                        if(TypeCheck((yyvsp[-2].Express)->Location,(yyvsp[0].Express)->Location))
                        {
                            (yyval.Express) = new Expression();
                            btoi((yyvsp[-2].Express));
                            btoi((yyvsp[0].Express));
                            (yyval.Express)->Type="bool";
                            (yyval.Express)->TrueList= MakeList(QuadList.InstructionList.size());
                            (yyval.Express)->FalseList= MakeList(QuadList.InstructionList.size()+1);
                            QuadArray::Emit("!=","",(yyvsp[-2].Express)->Location->Name,(yyvsp[0].Express)->Location->Name);
                            QuadArray::Emit("goto","_");
                        }
                        else
                        {
                            yyerror("Type mismatch");
                        }
                     //$$ = createNode("equality_expression",$1,createNode("ignore",createNode("NOT_EQUAL", NULL, NULL),$3));
                     }
#line 2568 "y.tab.c"
    break;

  case 54: /* and_expression: equality_expression  */
#line 622 "TinyC3_22CS30027_22CS30019.y"
                { 
                    (yyval.Express) = (yyvsp[0].Express);
                    //$$ = createNode("and_expression",$1,NULL); 
                }
#line 2577 "y.tab.c"
    break;

  case 55: /* and_expression: and_expression BITWISE_AND equality_expression  */
#line 627 "TinyC3_22CS30027_22CS30019.y"
                { 
                    if(TypeCheck((yyvsp[-2].Express)->Location,(yyvsp[0].Express)->Location))
                    {
                        (yyval.Express) = new Expression();
                        btoi((yyvsp[-2].Express));
                        btoi((yyvsp[0].Express));
                        (yyval.Express)->Type="notbool";
                        (yyval.Express)->Location = SymbolTable::GenTemp(new SType("int"));
                        QuadArray::Emit("&",(yyval.Express)->Location->Name,(yyvsp[-2].Express)->Location->Name,(yyvsp[0].Express)->Location->Name);
                    }
                    else
                    {
                        yyerror("Type mismatch");
                    }
                    //$$ = createNode("and_expression",$1,createNode("ignore",createNode("BITWISE_AND", NULL, NULL),$3)); 
                }
#line 2598 "y.tab.c"
    break;

  case 56: /* exclusive_or_expression: and_expression  */
#line 648 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            (yyval.Express) = (yyvsp[0].Express);
                            //$$ = createNode("exclusive_or_expression",$1,NULL); 
                        }
#line 2607 "y.tab.c"
    break;

  case 57: /* exclusive_or_expression: exclusive_or_expression BITWISE_XOR and_expression  */
#line 653 "TinyC3_22CS30027_22CS30019.y"
                        {
                            if(TypeCheck((yyvsp[-2].Express)->Location,(yyvsp[0].Express)->Location))
                            {
                                (yyval.Express) = new Expression();
                                btoi((yyvsp[-2].Express));
                                btoi((yyvsp[0].Express));
                                (yyval.Express)->Type="notbool";
                                (yyval.Express)->Location = SymbolTable::GenTemp(new SType("int"));
                                QuadArray::Emit("^",(yyval.Express)->Location->Name,(yyvsp[-2].Express)->Location->Name,(yyvsp[0].Express)->Location->Name);
                            }
                            else
                            {
                                yyerror("Type mismatch");
                            }
                            //$$ = createNode("exclusive_or_expression",$1,createNode("ignore",createNode("BITWISE_XOR", NULL, NULL),$3)); 
                        }
#line 2628 "y.tab.c"
    break;

  case 58: /* inclusive_or_expression: exclusive_or_expression  */
#line 674 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            (yyval.Express) = (yyvsp[0].Express);
                            //$$ = createNode("inclusive_or_expression",$1,NULL); 
                        }
#line 2637 "y.tab.c"
    break;

  case 59: /* inclusive_or_expression: inclusive_or_expression BITWISE_OR exclusive_or_expression  */
#line 679 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            if(TypeCheck((yyvsp[-2].Express)->Location,(yyvsp[0].Express)->Location))
                            {
                                (yyval.Express) = new Expression();
                                btoi((yyvsp[-2].Express));
                                btoi((yyvsp[0].Express));
                                (yyval.Express)->Type="notbool";
                                (yyval.Express)->Location = SymbolTable::GenTemp(new SType("int"));
                                QuadArray::Emit("|",(yyval.Express)->Location->Name,(yyvsp[-2].Express)->Location->Name,(yyvsp[0].Express)->Location->Name);
                            }
                            else
                            {
                                yyerror("Type mismatch");
                            }
                            //$$ = createNode("inclusive_or_expression",$1,createNode("ignore",createNode("BITWISE_OR", NULL, NULL),$3)); 
                        }
#line 2658 "y.tab.c"
    break;

  case 60: /* logical_and_expression: inclusive_or_expression  */
#line 700 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            (yyval.Express) = (yyvsp[0].Express);
                            //$$ = createNode("logical_and_expression",$1,NULL); 
                        }
#line 2667 "y.tab.c"
    break;

  case 61: /* logical_and_expression: logical_and_expression AND inclusive_or_expression  */
#line 705 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            (yyval.Express) = new Expression();
                            itob((yyvsp[-2].Express));
                            itob((yyvsp[0].Express));
                            (yyval.Express)->Type = "bool";
                            BackPath((yyvsp[-2].Express)->TrueList,QuadList.InstructionList.size());
                            (yyval.Express)->TrueList = (yyvsp[0].Express)->TrueList;
                            (yyval.Express)->FalseList = Merge((yyvsp[-2].Express)->FalseList,(yyvsp[0].Express)->FalseList);
                            //$$ = createNode("logical_and_expression",$1,createNode("ignore",createNode("AND", NULL, NULL),$3)); 
                        }
#line 2682 "y.tab.c"
    break;

  case 62: /* logical_or_expression: logical_and_expression  */
#line 720 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            (yyval.Express) = (yyvsp[0].Express);
                            //$$ = createNode("logical_or_expression",$1,NULL); 
                        }
#line 2691 "y.tab.c"
    break;

  case 63: /* logical_or_expression: logical_or_expression OR logical_and_expression  */
#line 725 "TinyC3_22CS30027_22CS30019.y"
                        {
                            (yyval.Express) = new Expression();
                            itob((yyvsp[-2].Express));
                            itob((yyvsp[0].Express));
                            (yyval.Express)->Type = "bool";
                            BackPath((yyvsp[-2].Express)->FalseList,QuadList.InstructionList.size());
                            (yyval.Express)->FalseList = (yyvsp[0].Express)->FalseList;
                            (yyval.Express)->TrueList = Merge((yyvsp[-2].Express)->TrueList,(yyvsp[0].Express)->TrueList);
                            // $$ = createNode("logical_or_expression",$1,createNode("ignore",createNode("OR", NULL, NULL),$3));  
                        }
#line 2706 "y.tab.c"
    break;

  case 64: /* conditional_expression: logical_or_expression  */
#line 740 "TinyC3_22CS30027_22CS30019.y"
                        {
                            (yyval.Express) = (yyvsp[0].Express);
                            // $$ = createNode("conditional_expression",$1,NULL); 
                        }
#line 2715 "y.tab.c"
    break;

  case 65: /* conditional_expression: logical_or_expression newstatement QUESTION countinst expression newstatement COLON countinst conditional_expression  */
#line 745 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            (yyval.Express) = new Expression();
                            (yyval.Express)->Location = SymbolTable::GenTemp((yyvsp[-4].Express)->Location->Type);
                            (yyval.Express)->Location->Update((yyvsp[-4].Express)->Location->Type);
                            QuadArray::Emit("=",(yyval.Express)->Location->Name,(yyvsp[0].Express)->Location->Name);
                            list<int> ll = MakeList(QuadList.InstructionList.size());
                            QuadArray::Emit("goto","");
                            BackPath((yyvsp[-3].Stateme)->NextList,QuadList.InstructionList.size());
                            QuadArray::Emit("=",(yyval.Express)->Location->Name,(yyvsp[-4].Express)->Location->Name);
                            list<int> llp = MakeList(QuadList.InstructionList.size());
                            ll = Merge(ll,llp);
                            QuadArray::Emit("goto","");
                            BackPath((yyvsp[-7].Stateme)->NextList,QuadList.InstructionList.size());
                            itob((yyvsp[-8].Express));
                            BackPath((yyvsp[-8].Express)->TrueList,(yyvsp[-5].InstCount));
                            BackPath((yyvsp[-8].Express)->FalseList,(yyvsp[-1].InstCount));
                            BackPath(ll,QuadList.InstructionList.size());
                            //$$ = createNode("conditional_expression",$1,createNode("ignore",createNode("QUESTION", NULL, NULL),createNode("ignore",$3,createNode("ignore",createNode("COLON", NULL, NULL),$5))));
                        }
#line 2739 "y.tab.c"
    break;

  case 66: /* countinst: %empty  */
#line 767 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.InstCount) = QuadList.InstructionList.size();
            }
#line 2747 "y.tab.c"
    break;

  case 67: /* newstatement: %empty  */
#line 773 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Stateme) = new Statement();
                (yyval.Stateme)->NextList = MakeList(QuadList.InstructionList.size());
                QuadArray::Emit("goto","");
            }
#line 2757 "y.tab.c"
    break;

  case 68: /* assignment_expression: conditional_expression  */
#line 782 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Express) = (yyvsp[0].Express);
                        // $$ = createNode("assignment_expression",$1,NULL); 
                    }
#line 2766 "y.tab.c"
    break;

  case 69: /* assignment_expression: unary_expression ASSIGN assignment_expression  */
#line 787 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        if((yyvsp[-2].Array)->A_Type=="arr")
                        {
                            (yyvsp[0].Express)->Location = TypeConvertor((yyvsp[0].Express)->Location,(yyvsp[-2].Array)->Type->Type);
                            QuadArray::Emit("[]=",(yyvsp[-2].Array)->Array->Name,(yyvsp[-2].Array)->Location->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        else if((yyvsp[-2].Array)->A_Type=="ptr")
                        {
                            QuadArray::Emit("*=",(yyvsp[-2].Array)->Array->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        else
                        {
                            (yyvsp[0].Express)->Location = TypeConvertor((yyvsp[0].Express)->Location,(yyvsp[-2].Array)->Array->Type->Type);
                            QuadArray::Emit("=",(yyvsp[-2].Array)->Array->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        (yyval.Express) = (yyvsp[0].Express);
                        //$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("ASSIGN", NULL, NULL),$3)); 
                    }
#line 2789 "y.tab.c"
    break;

  case 70: /* assignment_expression: unary_expression MUL_EQUAL assignment_expression  */
#line 806 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        if((yyvsp[-2].Array)->A_Type=="arr")
                        {
                            (yyvsp[0].Express)->Location = TypeConvertor((yyvsp[0].Express)->Location,(yyvsp[-2].Array)->Type->Type);
                            QuadArray::Emit("[]=",(yyvsp[-2].Array)->Array->Name,(yyvsp[-2].Array)->Location->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        else if((yyvsp[-2].Array)->A_Type=="ptr")
                        {
                            QuadArray::Emit("*=",(yyvsp[-2].Array)->Array->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        else
                        {
                            (yyvsp[0].Express)->Location = TypeConvertor((yyvsp[0].Express)->Location,(yyvsp[-2].Array)->Array->Type->Type);
                            QuadArray::Emit("=",(yyvsp[-2].Array)->Array->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        (yyval.Express) = (yyvsp[0].Express);
                        //$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("MUL_EQUAL", NULL, NULL),$3)); 
                    }
#line 2812 "y.tab.c"
    break;

  case 71: /* assignment_expression: unary_expression DIV_EQUAL assignment_expression  */
#line 825 "TinyC3_22CS30027_22CS30019.y"
                    {
                        if((yyvsp[-2].Array)->A_Type=="arr")
                        {
                            (yyvsp[0].Express)->Location = TypeConvertor((yyvsp[0].Express)->Location,(yyvsp[-2].Array)->Type->Type);
                            QuadArray::Emit("[]=",(yyvsp[-2].Array)->Array->Name,(yyvsp[-2].Array)->Location->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        else if((yyvsp[-2].Array)->A_Type=="ptr")
                        {
                            QuadArray::Emit("*=",(yyvsp[-2].Array)->Array->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        else
                        {
                            (yyvsp[0].Express)->Location = TypeConvertor((yyvsp[0].Express)->Location,(yyvsp[-2].Array)->Array->Type->Type);
                            QuadArray::Emit("=",(yyvsp[-2].Array)->Array->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        (yyval.Express) = (yyvsp[0].Express);
                        //$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("DIV_EQUAL", NULL, NULL),$3)); 
                    }
#line 2835 "y.tab.c"
    break;

  case 72: /* assignment_expression: unary_expression MOD_EQUAL assignment_expression  */
#line 844 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        if((yyvsp[-2].Array)->A_Type=="arr")
                        {
                            (yyvsp[0].Express)->Location = TypeConvertor((yyvsp[0].Express)->Location,(yyvsp[-2].Array)->Type->Type);
                            QuadArray::Emit("[]=",(yyvsp[-2].Array)->Array->Name,(yyvsp[-2].Array)->Location->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        else if((yyvsp[-2].Array)->A_Type=="ptr")
                        {
                            QuadArray::Emit("*=",(yyvsp[-2].Array)->Array->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        else
                        {
                            (yyvsp[0].Express)->Location = TypeConvertor((yyvsp[0].Express)->Location,(yyvsp[-2].Array)->Array->Type->Type);
                            QuadArray::Emit("=",(yyvsp[-2].Array)->Array->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        (yyval.Express) = (yyvsp[0].Express);
                        //$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("MOD_EQUAL", NULL, NULL),$3)); 
                    }
#line 2858 "y.tab.c"
    break;

  case 73: /* assignment_expression: unary_expression PLUS_EQUAL assignment_expression  */
#line 863 "TinyC3_22CS30027_22CS30019.y"
                    {
                        if((yyvsp[-2].Array)->A_Type=="arr")
                        {
                            (yyvsp[0].Express)->Location = TypeConvertor((yyvsp[0].Express)->Location,(yyvsp[-2].Array)->Type->Type);
                            QuadArray::Emit("[]=",(yyvsp[-2].Array)->Array->Name,(yyvsp[-2].Array)->Location->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        else if((yyvsp[-2].Array)->A_Type=="ptr")
                        {
                            QuadArray::Emit("*=",(yyvsp[-2].Array)->Array->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        else
                        {
                            (yyvsp[0].Express)->Location = TypeConvertor((yyvsp[0].Express)->Location,(yyvsp[-2].Array)->Array->Type->Type);
                            QuadArray::Emit("=",(yyvsp[-2].Array)->Array->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        (yyval.Express) = (yyvsp[0].Express);
                        //$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("PLUS_EQUAL", NULL, NULL),$3)); 
                    }
#line 2881 "y.tab.c"
    break;

  case 74: /* assignment_expression: unary_expression MINUS_EQUAL assignment_expression  */
#line 882 "TinyC3_22CS30027_22CS30019.y"
                    {
                        if((yyvsp[-2].Array)->A_Type=="arr")
                        {
                            (yyvsp[0].Express)->Location = TypeConvertor((yyvsp[0].Express)->Location,(yyvsp[-2].Array)->Type->Type);
                            QuadArray::Emit("[]=",(yyvsp[-2].Array)->Array->Name,(yyvsp[-2].Array)->Location->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        else if((yyvsp[-2].Array)->A_Type=="ptr")
                        {
                            QuadArray::Emit("*=",(yyvsp[-2].Array)->Array->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        else
                        {
                            (yyvsp[0].Express)->Location = TypeConvertor((yyvsp[0].Express)->Location,(yyvsp[-2].Array)->Array->Type->Type);
                            QuadArray::Emit("=",(yyvsp[-2].Array)->Array->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        (yyval.Express) = (yyvsp[0].Express);
                        //$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("MINUS_EQUAL", NULL, NULL),$3)); 
                    }
#line 2904 "y.tab.c"
    break;

  case 75: /* assignment_expression: unary_expression SHIFT_LEFT_EQUAL assignment_expression  */
#line 901 "TinyC3_22CS30027_22CS30019.y"
                    {
                        if((yyvsp[-2].Array)->A_Type=="arr")
                        {
                            (yyvsp[0].Express)->Location = TypeConvertor((yyvsp[0].Express)->Location,(yyvsp[-2].Array)->Type->Type);
                            QuadArray::Emit("[]=",(yyvsp[-2].Array)->Array->Name,(yyvsp[-2].Array)->Location->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        else if((yyvsp[-2].Array)->A_Type=="ptr")
                        {
                            QuadArray::Emit("*=",(yyvsp[-2].Array)->Array->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        else
                        {
                            (yyvsp[0].Express)->Location = TypeConvertor((yyvsp[0].Express)->Location,(yyvsp[-2].Array)->Array->Type->Type);
                            QuadArray::Emit("=",(yyvsp[-2].Array)->Array->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        (yyval.Express) = (yyvsp[0].Express);
                        //$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("SHIFT_LEFT_EQUAL", NULL, NULL),$3)); 
                    }
#line 2927 "y.tab.c"
    break;

  case 76: /* assignment_expression: unary_expression SHIFT_RIGHT_EQUAL assignment_expression  */
#line 920 "TinyC3_22CS30027_22CS30019.y"
                    {
                        if((yyvsp[-2].Array)->A_Type=="arr")
                        {
                            (yyvsp[0].Express)->Location = TypeConvertor((yyvsp[0].Express)->Location,(yyvsp[-2].Array)->Type->Type);
                            QuadArray::Emit("[]=",(yyvsp[-2].Array)->Array->Name,(yyvsp[-2].Array)->Location->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        else if((yyvsp[-2].Array)->A_Type=="ptr")
                        {
                            QuadArray::Emit("*=",(yyvsp[-2].Array)->Array->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        else
                        {
                            (yyvsp[0].Express)->Location = TypeConvertor((yyvsp[0].Express)->Location,(yyvsp[-2].Array)->Array->Type->Type);
                            QuadArray::Emit("=",(yyvsp[-2].Array)->Array->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        (yyval.Express) = (yyvsp[0].Express);
                        //$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("PLUS_EQUAL", NULL, NULL),$3)); 
                    }
#line 2950 "y.tab.c"
    break;

  case 77: /* assignment_expression: unary_expression BITWISE_AND_EQUAL assignment_expression  */
#line 940 "TinyC3_22CS30027_22CS30019.y"
                    {
                        if((yyvsp[-2].Array)->A_Type=="arr")
                        {
                            (yyvsp[0].Express)->Location = TypeConvertor((yyvsp[0].Express)->Location,(yyvsp[-2].Array)->Type->Type);
                            QuadArray::Emit("[]=",(yyvsp[-2].Array)->Array->Name,(yyvsp[-2].Array)->Location->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        else if((yyvsp[-2].Array)->A_Type=="ptr")
                        {
                            QuadArray::Emit("*=",(yyvsp[-2].Array)->Array->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        else
                        {
                            (yyvsp[0].Express)->Location = TypeConvertor((yyvsp[0].Express)->Location,(yyvsp[-2].Array)->Array->Type->Type);
                            QuadArray::Emit("=",(yyvsp[-2].Array)->Array->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        (yyval.Express) = (yyvsp[0].Express);
                        //$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("BITWISE_AND_EQUAL", NULL, NULL),$3)); 
                    }
#line 2973 "y.tab.c"
    break;

  case 78: /* assignment_expression: unary_expression BITWISE_XOR_EQUAL assignment_expression  */
#line 960 "TinyC3_22CS30027_22CS30019.y"
                    {
                        if((yyvsp[-2].Array)->A_Type=="arr")
                        {
                            (yyvsp[0].Express)->Location = TypeConvertor((yyvsp[0].Express)->Location,(yyvsp[-2].Array)->Type->Type);
                            QuadArray::Emit("[]=",(yyvsp[-2].Array)->Array->Name,(yyvsp[-2].Array)->Location->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        else if((yyvsp[-2].Array)->A_Type=="ptr")
                        {
                            QuadArray::Emit("*=",(yyvsp[-2].Array)->Array->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        else
                        {
                            (yyvsp[0].Express)->Location = TypeConvertor((yyvsp[0].Express)->Location,(yyvsp[-2].Array)->Array->Type->Type);
                            QuadArray::Emit("=",(yyvsp[-2].Array)->Array->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        (yyval.Express) = (yyvsp[0].Express);
                        //$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("BITWISE_XOR_EQUAL", NULL, NULL),$3)); 
                    }
#line 2996 "y.tab.c"
    break;

  case 79: /* assignment_expression: unary_expression BITWISE_OR_EQUAL assignment_expression  */
#line 980 "TinyC3_22CS30027_22CS30019.y"
                    {
                        if((yyvsp[-2].Array)->A_Type=="arr")
                        {
                            (yyvsp[0].Express)->Location = TypeConvertor((yyvsp[0].Express)->Location,(yyvsp[-2].Array)->Type->Type);
                            QuadArray::Emit("[]=",(yyvsp[-2].Array)->Array->Name,(yyvsp[-2].Array)->Location->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        else if((yyvsp[-2].Array)->A_Type=="ptr")
                        {
                            QuadArray::Emit("*=",(yyvsp[-2].Array)->Array->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        else
                        {
                            (yyvsp[0].Express)->Location = TypeConvertor((yyvsp[0].Express)->Location,(yyvsp[-2].Array)->Array->Type->Type);
                            QuadArray::Emit("=",(yyvsp[-2].Array)->Array->Name,(yyvsp[0].Express)->Location->Name);
                        }
                        (yyval.Express) = (yyvsp[0].Express);
                        //$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("BITWISE_OR_EQUAL", NULL, NULL),$3)); 
                    }
#line 3019 "y.tab.c"
    break;

  case 80: /* expression: assignment_expression  */
#line 1004 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Express) = (yyvsp[0].Express);
                //$$ = createNode("expression",$1,NULL); 
            }
#line 3028 "y.tab.c"
    break;

  case 81: /* expression: expression COMMA assignment_expression  */
#line 1009 "TinyC3_22CS30027_22CS30019.y"
            { 
                //$$ = createNode("expression",$1,createNode("ignore",createNode("COMMA", NULL, NULL),$3)); 
            }
#line 3036 "y.tab.c"
    break;

  case 82: /* constant_expression: conditional_expression  */
#line 1016 "TinyC3_22CS30027_22CS30019.y"
                    {
                        // $$ = createNode("constant_expression", $1, NULL); 
                    }
#line 3044 "y.tab.c"
    break;

  case 83: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 1028 "TinyC3_22CS30027_22CS30019.y"
            { 
                //$$ = createNode("declaration", $1, createNode("ignore",$2,createNode("SEMICOLON",NULL,NULL))); 
            }
#line 3052 "y.tab.c"
    break;

  case 84: /* declaration_specifiers: storage_class_specifier  */
#line 1036 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifier", $1, NULL);
                        }
#line 3060 "y.tab.c"
    break;

  case 85: /* declaration_specifiers: type_specifier  */
#line 1040 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifier", $1, NULL);
                        }
#line 3068 "y.tab.c"
    break;

  case 86: /* declaration_specifiers: type_qualifier  */
#line 1044 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifier", $1, NULL);
                        }
#line 3076 "y.tab.c"
    break;

  case 87: /* declaration_specifiers: function_specifier  */
#line 1048 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifier", $1, NULL);
                        }
#line 3084 "y.tab.c"
    break;

  case 88: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 1052 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifiers", $1, $2);
                        }
#line 3092 "y.tab.c"
    break;

  case 89: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 1056 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifiers", $1, $2);
                        }
#line 3100 "y.tab.c"
    break;

  case 90: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 1060 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifiers", $1, $2);
                        }
#line 3108 "y.tab.c"
    break;

  case 91: /* declaration_specifiers: function_specifier declaration_specifiers  */
#line 1064 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifiers", $1, $2);
                        }
#line 3116 "y.tab.c"
    break;

  case 92: /* init_declarator_list_opt: %empty  */
#line 1072 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("init_declarator_list_opt",NULL, NULL);
                        }
#line 3124 "y.tab.c"
    break;

  case 93: /* init_declarator_list_opt: init_declarator_list  */
#line 1076 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("init_declarator_list_opt", $1, NULL);
                        }
#line 3132 "y.tab.c"
    break;

  case 94: /* init_declarator_list: init_declarator  */
#line 1082 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("init_declerator_list", $1, NULL);
                        }
#line 3140 "y.tab.c"
    break;

  case 95: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 1086 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("init_declerator_list", $1, createNode("ignore",createNode("COMMA",NULL,NULL),$3));
                        }
#line 3148 "y.tab.c"
    break;

  case 96: /* init_declarator: declarator  */
#line 1094 "TinyC3_22CS30027_22CS30019.y"
                {
                    (yyval.SymbolPointer) = (yyvsp[0].SymbolPointer);
                    //$$ = createNode("init_declerator", $1,NULL);
                }
#line 3157 "y.tab.c"
    break;

  case 97: /* init_declarator: declarator ASSIGN initializer  */
#line 1099 "TinyC3_22CS30027_22CS30019.y"
                {
                    if((yyvsp[0].SymbolPointer)->InitialValue!="")
                    {
                        (yyvsp[-2].SymbolPointer)->InitialValue = (yyvsp[0].SymbolPointer)->InitialValue;
                    }
                    QuadArray::Emit("=",(yyvsp[-2].SymbolPointer)->Name,(yyvsp[0].SymbolPointer)->Name);
                    //$$ = createNode("init_declerator", $1, createNode("ignore",createNode("ASSIGN",NULL,NULL),$3));
                }
#line 3170 "y.tab.c"
    break;

  case 98: /* storage_class_specifier: EXTERN  */
#line 1112 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("storage_class_specifier", createNode("EXTERN",NULL,NULL), NULL);
                        }
#line 3178 "y.tab.c"
    break;

  case 99: /* storage_class_specifier: AUTO  */
#line 1116 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("storage_class_specifier", createNode("AUTO",NULL,NULL), NULL);
                        }
#line 3186 "y.tab.c"
    break;

  case 100: /* storage_class_specifier: REGISTER  */
#line 1120 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("storage_class_specifier", createNode("REGISTER",NULL,NULL), NULL);
                        }
#line 3194 "y.tab.c"
    break;

  case 101: /* storage_class_specifier: STATIC  */
#line 1124 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("storage_class_specifier",createNode("STATIC",NULL,NULL), NULL);
                        }
#line 3202 "y.tab.c"
    break;

  case 102: /* type_specifier: VOID  */
#line 1132 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="void";
                    // $$ = createNode("type_specifier", createNode("VOID",NULL,NULL), NULL); 
                }
#line 3211 "y.tab.c"
    break;

  case 103: /* type_specifier: CHAR  */
#line 1137 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="char";
                    // $$ = createNode("type_specifier", createNode("CHARACTER",NULL,NULL), NULL); 
                }
#line 3220 "y.tab.c"
    break;

  case 104: /* type_specifier: SHORT  */
#line 1142 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="short";
                    // $$ = createNode("type_specifier", createNode("SHORT",NULL,NULL), NULL); 
                }
#line 3229 "y.tab.c"
    break;

  case 105: /* type_specifier: INT  */
#line 1147 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="int";
                    // $$ = createNode("type_specifier", createNode("INTEGER",NULL,NULL), NULL); 
                }
#line 3238 "y.tab.c"
    break;

  case 106: /* type_specifier: LONG  */
#line 1152 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="long";
                    // $$ = createNode("type_specifier", createNode("LONG",NULL,NULL), NULL); 
                }
#line 3247 "y.tab.c"
    break;

  case 107: /* type_specifier: FLOAT  */
#line 1157 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="float";
                    // $$ = createNode("type_specifier", createNode("FLOAT",NULL,NULL), NULL); 
                }
#line 3256 "y.tab.c"
    break;

  case 108: /* type_specifier: SIGNED  */
#line 1162 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="signed";
                    // $$ = createNode("type_specifier", createNode("SIGNED",NULL,NULL), NULL); 
                }
#line 3265 "y.tab.c"
    break;

  case 109: /* type_specifier: UNSIGNED  */
#line 1167 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="unsigned";
                    // $$ = createNode("type_specifier", createNode("UNSIGNED",NULL,NULL), NULL); 
                }
#line 3274 "y.tab.c"
    break;

  case 110: /* type_specifier: BOOL  */
#line 1172 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="bool";
                    // $$ = createNode("type_specifier", createNode("_BOOL",NULL,NULL), NULL); 
                }
#line 3283 "y.tab.c"
    break;

  case 111: /* type_specifier: COMPLEX  */
#line 1177 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="complex";
                    // $$ = createNode("type_specifier", createNode("_COMPLEX",NULL,NULL), NULL); 
                }
#line 3292 "y.tab.c"
    break;

  case 112: /* type_specifier: IMAGINARY  */
#line 1182 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="imaginary";
                    // $$ = createNode("type_specifier", createNode("_IMAGINARY",NULL,NULL), NULL); 
                }
#line 3301 "y.tab.c"
    break;

  case 113: /* type_specifier: DOUBLE  */
#line 1187 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="double";
                    // $$ = createNode("type_specifier", createNode("DOUBLE",NULL,NULL), NULL); 
                }
#line 3310 "y.tab.c"
    break;

  case 114: /* specifier_qualifier_list: type_specifier specifier_qualifier_list  */
#line 1196 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("specifier_qualifier_list", $1, $2);
                        }
#line 3318 "y.tab.c"
    break;

  case 115: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list  */
#line 1200 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("specifier_qualifier_list", $1, $2);
                        }
#line 3326 "y.tab.c"
    break;

  case 116: /* specifier_qualifier_list: type_specifier  */
#line 1204 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("specifier_qualifier_list", $1, NULL);
                        }
#line 3334 "y.tab.c"
    break;

  case 117: /* specifier_qualifier_list: type_qualifier  */
#line 1208 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("specifier_qualifier_list", $1, NULL);
                        }
#line 3342 "y.tab.c"
    break;

  case 118: /* type_qualifier: CONST  */
#line 1216 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$ = createNode("type_qualifier", createNode("CONST",NULL,NULL), NULL);
                }
#line 3350 "y.tab.c"
    break;

  case 119: /* type_qualifier: RESTRICT  */
#line 1220 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$ = createNode("type_qualifier", createNode("RESTRICT",NULL,NULL), NULL);
                }
#line 3358 "y.tab.c"
    break;

  case 120: /* type_qualifier: VOLATILE  */
#line 1224 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$ = createNode("type_qualifier", createNode("VOLATILE",NULL,NULL), NULL);
                }
#line 3366 "y.tab.c"
    break;

  case 121: /* function_specifier: INLINE  */
#line 1232 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("function_specifier", createNode("INLINE",NULL,NULL), NULL);
                    }
#line 3374 "y.tab.c"
    break;

  case 122: /* declarator: pointer direct_declarator  */
#line 1240 "TinyC3_22CS30027_22CS30019.y"
            {
                SType* S = (yyvsp[-1].Type);
                while(S->ArrType!=NULL)
                {
                    S = S->ArrType;
                } 
                S->ArrType = (yyvsp[0].SymbolPointer)->Type;
                (yyval.SymbolPointer) = (yyvsp[0].SymbolPointer)->Update((yyvsp[-1].Type));
                //$$ = createNode("declarator", $1, $2);
            }
#line 3389 "y.tab.c"
    break;

  case 123: /* declarator: direct_declarator  */
#line 1251 "TinyC3_22CS30027_22CS30019.y"
            {

            }
#line 3397 "y.tab.c"
    break;

  case 124: /* direct_declarator: IDENTIFIER  */
#line 1259 "TinyC3_22CS30027_22CS30019.y"
                    {
                        Symbol* NewS = new Symbol(Globe);
                        CurrentST->Table.push_back(*NewS);
                        (yyval.SymbolPointer) = &(CurrentST->Table.back());
                        (yyval.SymbolPointer)->Update(new SType(VarType));
                        RecentSymbol = (yyval.SymbolPointer);
                        //$$ = createNode("direct_declarator", createNode("IDENTIFIER",NULL,NULL), NULL);
                    }
#line 3410 "y.tab.c"
    break;

  case 125: /* direct_declarator: ROUND_BRACKET_OPEN declarator ROUND_BRACKET_CLOSE  */
#line 1268 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.SymbolPointer) = (yyvsp[-1].SymbolPointer);
                        //$$ = createNode("direct_declarator",createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$2), createNode("ROUND_BRACKET_CLOSE",NULL,NULL));
                    }
#line 3419 "y.tab.c"
    break;

  case 126: /* direct_declarator: direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list assignment_expression_opt SQUARE_BRACKET_CLOSE  */
#line 1273 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("SQUARE_BRACKET_OPEN",NULL,NULL)), createNode("ignore",$3,createNode("ignore",$4,createNode("SQUARE_BRACKET_CLOSE",NULL,NULL))));
                    }
#line 3427 "y.tab.c"
    break;

  case 127: /* direct_declarator: direct_declarator SQUARE_BRACKET_OPEN assignment_expression SQUARE_BRACKET_CLOSE  */
#line 1277 "TinyC3_22CS30027_22CS30019.y"
                    {
                        SType* S = (yyvsp[-3].SymbolPointer)->Type;
                        SType* Prev = NULL;
                        while(S->Type=="arr")
                        {
                            Prev = S;
                            S = S->ArrType;
                        }
                        int Temp = atoi((yyvsp[-1].Express)->Location->InitialValue.c_str());
                        if(Temp<=0)
                        {
                            yyerror("Array Size Cant be negative");
                        }
                        if(Prev==NULL)
                        {
                            SType* Temp2 = new SType("arr",Temp,(yyvsp[-3].SymbolPointer)->Type);
                            (yyval.SymbolPointer) = (yyvsp[-3].SymbolPointer)->Update(Temp2);
                        }
                        else
                        {
                            SType* Temp2 = new SType("arr",Temp,S);
                            Prev->ArrType = Temp2;
                            (yyval.SymbolPointer) = (yyvsp[-3].SymbolPointer)->Update((yyvsp[-3].SymbolPointer)->Type);
                        }
                        //$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("SQUARE_BRACKET_OPEN",NULL,NULL)), createNode("ignore",$3,createNode("ignore",$4,createNode("SQUARE_BRACKET_CLOSE",NULL,NULL))));
                    }
#line 3458 "y.tab.c"
    break;

  case 128: /* direct_declarator: direct_declarator SQUARE_BRACKET_OPEN SQUARE_BRACKET_CLOSE  */
#line 1304 "TinyC3_22CS30027_22CS30019.y"
                    {
                        SType* S = (yyvsp[-2].SymbolPointer)->Type;
                        SType* Prev = NULL;
                        while(S->Type=="arr")
                        {
                            Prev = S;
                            S = S->ArrType;
                        }
                        if(Prev==NULL)
                        {
                            SType* Temp = new SType("arr",0,(yyvsp[-2].SymbolPointer)->Type);
                            (yyval.SymbolPointer) = (yyvsp[-2].SymbolPointer)->Update(Temp);
                        }
                        else
                        {
                            SType* Temp = new SType("arr",0,S);
                            Prev->ArrType = Temp;
                            (yyval.SymbolPointer) = (yyvsp[-2].SymbolPointer)->Update((yyvsp[-2].SymbolPointer)->Type);
                        }
                    }
#line 3483 "y.tab.c"
    break;

  case 129: /* direct_declarator: direct_declarator SQUARE_BRACKET_OPEN STATIC type_qualifier_list_opt assignment_expression SQUARE_BRACKET_CLOSE  */
#line 1325 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("SQUARE_BRACKET_OPEN",NULL,NULL)), createNode("ignore",createNode("ignore",createNode("STATIC",NULL,NULL),$4),createNode("ignore",$5,createNode("SQUARE_BRACKET_CLOSE",NULL,NULL))));
                    }
#line 3491 "y.tab.c"
    break;

  case 130: /* direct_declarator: direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list STATIC assignment_expression SQUARE_BRACKET_CLOSE  */
#line 1329 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("SQUARE_BRACKET_OPEN",NULL,NULL)), createNode("ignore",createNode("ignore",$3,createNode("STATIC",NULL,NULL)),createNode("ignore",$5,createNode("SQUARE_BRACKET_CLOSE",NULL,NULL))));
                    }
#line 3499 "y.tab.c"
    break;

  case 131: /* direct_declarator: direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list_opt MUL SQUARE_BRACKET_CLOSE  */
#line 1333 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("SQUARE_BRACKET_OPEN",NULL,NULL)), createNode("ignore",createNode("ignore",$3,createNode("MUL",NULL,NULL)),createNode("SQUARE_BRACKET_CLOSE",NULL,NULL)));
                    }
#line 3507 "y.tab.c"
    break;

  case 132: /* direct_declarator: direct_declarator ROUND_BRACKET_OPEN switch_table parameter_type_list ROUND_BRACKET_CLOSE  */
#line 1337 "TinyC3_22CS30027_22CS30019.y"
                    {
                        CurrentST->Name = (yyvsp[-4].SymbolPointer)->Name;
                        if((yyvsp[-4].SymbolPointer)->Type->Type!="void")
                        {
                            Symbol* Temp = CurrentST->LookUp("return");
                            Temp->Update((yyvsp[-4].SymbolPointer)->Type);
                        }
                        (yyvsp[-4].SymbolPointer)->NestedTable = CurrentST;
                        CurrentST->PtrToParent = GlobalST;
                        CurrentST = GlobalST;
                        RecentSymbol = (yyval.SymbolPointer);
                        //$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("ROUND_BRACKET_OPEN",NULL,NULL)), createNode("ignore",$3,createNode("ROUND_BRACKET_CLOSE",NULL,NULL)));
                    }
#line 3525 "y.tab.c"
    break;

  case 133: /* direct_declarator: direct_declarator ROUND_BRACKET_OPEN switch_table ROUND_BRACKET_CLOSE  */
#line 1351 "TinyC3_22CS30027_22CS30019.y"
                    {
                        CurrentST->Name = (yyvsp[-3].SymbolPointer)->Name;
                        if((yyvsp[-3].SymbolPointer)->Type->Type!="void")
                        {
                            Symbol* Temp = CurrentST->LookUp("return");
                            Temp->Update((yyvsp[-3].SymbolPointer)->Type);
                        }
                        (yyvsp[-3].SymbolPointer)->NestedTable = CurrentST;
                        CurrentST->PtrToParent = GlobalST;
                        CurrentST = GlobalST;
                        RecentSymbol = (yyval.SymbolPointer);
                        //$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("ROUND_BRACKET_OPEN",NULL,NULL)), createNode("ignore",$3,createNode("ROUND_BRACKET_CLOSE",NULL,NULL)));
                    }
#line 3543 "y.tab.c"
    break;

  case 134: /* direct_declarator: direct_declarator ROUND_BRACKET_OPEN identifier_list ROUND_BRACKET_CLOSE  */
#line 1365 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("ROUND_BRACKET_OPEN",NULL,NULL)), createNode("ignore",$3,createNode("ROUND_BRACKET_CLOSE",NULL,NULL)));
                    }
#line 3551 "y.tab.c"
    break;

  case 135: /* switch_table: %empty  */
#line 1371 "TinyC3_22CS30027_22CS30019.y"
            {
                if(RecentSymbol->NestedTable!=NULL)
                {
                    CurrentST = RecentSymbol->NestedTable;
                    QuadArray::Emit("label",CurrentST->Name);
                }
                else
                {
                    CurrentST = new SymbolTable("");
                }
            }
#line 3567 "y.tab.c"
    break;

  case 136: /* type_qualifier_list_opt: %empty  */
#line 1384 "TinyC3_22CS30027_22CS30019.y"
                          {
                            //$$ = createNode("type_qualifier_list_opt",NULL,NULL);
                        }
#line 3575 "y.tab.c"
    break;

  case 137: /* type_qualifier_list_opt: type_qualifier_list  */
#line 1388 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("type_qualifier_list_opt",$1,NULL);
                        }
#line 3583 "y.tab.c"
    break;

  case 138: /* assignment_expression_opt: %empty  */
#line 1393 "TinyC3_22CS30027_22CS30019.y"
                             {
                            //$$ = createNode("assignment_expression_opt",NULL,NULL);
                            }
#line 3591 "y.tab.c"
    break;

  case 139: /* assignment_expression_opt: assignment_expression  */
#line 1397 "TinyC3_22CS30027_22CS30019.y"
                            {
                                //$$ = createNode("assignment_expression_opt",$1,NULL);
                            }
#line 3599 "y.tab.c"
    break;

  case 140: /* pointer: MUL type_qualifier_list_opt  */
#line 1415 "TinyC3_22CS30027_22CS30019.y"
        {
            (yyval.Type) = new SType("ptr");
            //$$=createNode("pointer",createNode("MUL",NULL,NULL), $2);
        }
#line 3608 "y.tab.c"
    break;

  case 141: /* pointer: MUL type_qualifier_list_opt pointer  */
#line 1420 "TinyC3_22CS30027_22CS30019.y"
        {
            (yyval.Type) = new SType("ptr",1,(yyvsp[0].Type));
            //$$=createNode("pointer",createNode("MUL",NULL,NULL) ,createNode("ignore",$2, $3));
        }
#line 3617 "y.tab.c"
    break;

  case 142: /* type_qualifier_list: type_qualifier  */
#line 1429 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("type_qualifier_list",$1,NULL);
                    }
#line 3625 "y.tab.c"
    break;

  case 143: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 1433 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("type_qualifier_list", $1, $2);
                    }
#line 3633 "y.tab.c"
    break;

  case 144: /* parameter_type_list: parameter_list  */
#line 1441 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("parameter_type_list",$1,NULL);
                    }
#line 3641 "y.tab.c"
    break;

  case 145: /* parameter_type_list: parameter_list COMMA ELLIPSIS  */
#line 1444 "TinyC3_22CS30027_22CS30019.y"
                                                    {
                        //$$=createNode("parameter_type_list", $1, createNode("ignore",createNode("COMMA",NULL,NULL),createNode("ELLIPSIS",NULL,NULL)));
                    }
#line 3649 "y.tab.c"
    break;

  case 146: /* parameter_list: parameter_declaration  */
#line 1452 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("parameter_list",$1,NULL);
                }
#line 3657 "y.tab.c"
    break;

  case 147: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 1456 "TinyC3_22CS30027_22CS30019.y"
               {
                //$$=createNode("parameter_list", createNode("ignore",$1,createNode("COMMA",NULL,NULL)), $3);
                }
#line 3665 "y.tab.c"
    break;

  case 148: /* parameter_declaration: declaration_specifiers declarator  */
#line 1464 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("parameter_declaration", $1, $2);
                    }
#line 3673 "y.tab.c"
    break;

  case 149: /* parameter_declaration: declaration_specifiers  */
#line 1468 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("parameter_declaration",$1,NULL);
                    }
#line 3681 "y.tab.c"
    break;

  case 150: /* identifier_list: IDENTIFIER  */
#line 1476 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("identifier_list",createNode("IDENTIFIER",NULL,NULL),NULL);
                }
#line 3689 "y.tab.c"
    break;

  case 151: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 1480 "TinyC3_22CS30027_22CS30019.y"
               {
                //$$=createNode("identifier_list", $1, createNode("ignore",createNode("COMMA",NULL,NULL),createNode("IDENTIFIER",NULL,NULL)));
                }
#line 3697 "y.tab.c"
    break;

  case 152: /* type_name: specifier_qualifier_list  */
#line 1488 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("type_name",$1,NULL);
            }
#line 3705 "y.tab.c"
    break;

  case 153: /* initializer: assignment_expression  */
#line 1496 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.SymbolPointer) = (yyvsp[0].Express)->Location;
                //$$=createNode("initializer",$1,NULL);
            }
#line 3714 "y.tab.c"
    break;

  case 154: /* initializer: CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE  */
#line 1501 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("initializer",createNode("ignore",createNode("CURLY_BRACKET_OPEN",NULL,NULL),$2),createNode("CURLY_BRACKET_CLOSE",NULL,NULL));
            }
#line 3722 "y.tab.c"
    break;

  case 155: /* initializer: CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE  */
#line 1505 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("initializer",createNode("ignore",createNode("CURLY_BRACKET_OPEN",NULL,NULL),$2),createNode("ignore",createNode("COMMA",NULL,NULL),createNode("CURLY_BRACKET_CLOSE",NULL,NULL)));
            }
#line 3730 "y.tab.c"
    break;

  case 156: /* initializer_list: designation_opt initializer  */
#line 1513 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("initializer_list",$1,$2);
                }
#line 3738 "y.tab.c"
    break;

  case 157: /* initializer_list: initializer_list COMMA designation_opt initializer  */
#line 1517 "TinyC3_22CS30027_22CS30019.y"
                 {
                    //$$=createNode("initializer_list",createNode("ignore",$1,createNode("COMMA",NULL,NULL)),createNode("ignore",$3,$4));
                }
#line 3746 "y.tab.c"
    break;

  case 158: /* designation_opt: designation  */
#line 1523 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("designation_opt",$1,NULL);
                }
#line 3754 "y.tab.c"
    break;

  case 159: /* designation_opt: %empty  */
#line 1527 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$ = createNode("designation_opt",NULL,NULL);
                }
#line 3762 "y.tab.c"
    break;

  case 160: /* designation: designator_list ASSIGN  */
#line 1535 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("designation",$1,createNode("ASSIGN",NULL,NULL));
            }
#line 3770 "y.tab.c"
    break;

  case 161: /* designator_list: designator  */
#line 1543 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("designator_list",$1,NULL);
                }
#line 3778 "y.tab.c"
    break;

  case 162: /* designator_list: designator_list designator  */
#line 1547 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("designator_list",$1,$2);
                }
#line 3786 "y.tab.c"
    break;

  case 163: /* designator: SQUARE_BRACKET_OPEN constant_expression SQUARE_BRACKET_CLOSE  */
#line 1555 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("designator",createNode("ignore",createNode("SQUARE_BRACKET_OPEN",NULL,NULL),$2),createNode("SQUARE_BRACKET_CLOSE",NULL,NULL));
            }
#line 3794 "y.tab.c"
    break;

  case 164: /* designator: DOT IDENTIFIER  */
#line 1559 "TinyC3_22CS30027_22CS30019.y"
             {
                //$$=createNode("designator",createNode("DOT",NULL,NULL),createNode("IDENTIFIER",NULL,NULL));
            }
#line 3802 "y.tab.c"
    break;

  case 165: /* statement: labeled_statement  */
#line 1570 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("statement",$1,NULL);
            }
#line 3810 "y.tab.c"
    break;

  case 166: /* statement: compound_statement  */
#line 1574 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Stateme) = (yyvsp[0].Stateme);
                //$$=createNode("statement",$1,NULL);
            }
#line 3819 "y.tab.c"
    break;

  case 167: /* statement: expression_statement  */
#line 1579 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Stateme) = new Statement();
                (yyval.Stateme)->NextList = (yyvsp[0].Stateme)->NextList;
                //$$=createNode("statement",$1,NULL);
            }
#line 3829 "y.tab.c"
    break;

  case 168: /* statement: selection_statement  */
#line 1585 "TinyC3_22CS30027_22CS30019.y"
            {
               (yyval.Stateme) = (yyvsp[0].Stateme);
                //$$=createNode("statement",$1,NULL);
            }
#line 3838 "y.tab.c"
    break;

  case 169: /* statement: iteration_statement  */
#line 1590 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Stateme) = (yyvsp[0].Stateme);
                //$$=createNode("statement",$1,NULL);
            }
#line 3847 "y.tab.c"
    break;

  case 170: /* statement: jump_statement  */
#line 1595 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Stateme) = (yyvsp[0].Stateme);
                //$$=createNode("statement",$1,NULL);
            }
#line 3856 "y.tab.c"
    break;

  case 171: /* labeled_statement: IDENTIFIER COLON statement  */
#line 1604 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=$$=createNode("labeled_statement",createNode("ignore",createNode("IDENTIFIER",NULL,NULL),createNode("COLON",NULL,NULL)),$3);
                    }
#line 3864 "y.tab.c"
    break;

  case 172: /* labeled_statement: CASE constant_expression COLON statement  */
#line 1608 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("labeled_statement",createNode("ignore",createNode("CASE",NULL,NULL),$2),createNode("ignore",createNode("CASE",NULL,NULL),$4));
                    }
#line 3872 "y.tab.c"
    break;

  case 173: /* labeled_statement: DEFAULT COLON statement  */
#line 1612 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("labeled_statement",createNode("ignore",createNode("DEFAULT",NULL,NULL),createNode("COLON",NULL,NULL)),$3);
                    }
#line 3880 "y.tab.c"
    break;

  case 174: /* compound_statement: CURLY_BRACKET_OPEN block_item_list_opt CURLY_BRACKET_CLOSE  */
#line 1620 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("compound_statement",createNode("ignore",createNode("CURLY_BRACKET_OPEN",NULL,NULL),$2),createNode("CURLY_BRACKET_CLOSE",NULL,NULL));
                    }
#line 3888 "y.tab.c"
    break;

  case 175: /* block_item_list_opt: %empty  */
#line 1626 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("block_item_list_opt",NULL,NULL);
                    }
#line 3896 "y.tab.c"
    break;

  case 176: /* block_item_list_opt: block_item_list  */
#line 1630 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("block_item_list_opt",$1,NULL);
                    }
#line 3904 "y.tab.c"
    break;

  case 177: /* block_item_list: block_item  */
#line 1638 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("block_item_list",$1,NULL);
                }
#line 3912 "y.tab.c"
    break;

  case 178: /* block_item_list: block_item_list block_item  */
#line 1642 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("block_item_list",$1,$2);
                }
#line 3920 "y.tab.c"
    break;

  case 179: /* block_item: declaration  */
#line 1650 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("block_item",$1,NULL);
            }
#line 3928 "y.tab.c"
    break;

  case 180: /* block_item: statement  */
#line 1654 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("block_item",$1,NULL);
            }
#line 3936 "y.tab.c"
    break;

  case 181: /* expression_statement: expression_opt SEMICOLON  */
#line 1662 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("expression_statement",$1,createNode("SEMICOLON",NULL,NULL));
                    }
#line 3944 "y.tab.c"
    break;

  case 182: /* expression_opt: %empty  */
#line 1668 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$ = createNode("expression_opt",NULL,NULL);
                }
#line 3952 "y.tab.c"
    break;

  case 183: /* expression_opt: expression  */
#line 1672 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("expression_opt",$1,NULL);
                }
#line 3960 "y.tab.c"
    break;

  case 184: /* selection_statement: IF ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement  */
#line 1680 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("selection_statement",createNode("ignore",createNode("IF",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3)),createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),createNode("ignore",$5,createNode("THEN",NULL,NULL))));
                    }
#line 3968 "y.tab.c"
    break;

  case 185: /* selection_statement: IF ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement ELSE statement  */
#line 1684 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("selection_statement",createNode("ignore",createNode("IF",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3)),createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),createNode("ignore",$5,createNode("ignore",createNode("ELSE",NULL,NULL),$7))));
                    }
#line 3976 "y.tab.c"
    break;

  case 186: /* selection_statement: SWITCH ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement  */
#line 1688 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("selection_statement",createNode("ignore",createNode("SWITCH",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3)),createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$5));
                    }
#line 3984 "y.tab.c"
    break;

  case 187: /* iteration_statement: WHILE ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement  */
#line 1696 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("iteration_statement",createNode("ignore",createNode("WHILE",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3)),createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$5));
                    }
#line 3992 "y.tab.c"
    break;

  case 188: /* iteration_statement: DO statement WHILE ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE SEMICOLON  */
#line 1700 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("iteration_statement",createNode("DO",NULL,NULL),createNode("ignore",$2,createNode("ignore",createNode("WHILE",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$5,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),createNode("SEMICOLON",NULL,NULL)))))));
                    }
#line 4000 "y.tab.c"
    break;

  case 189: /* iteration_statement: FOR ROUND_BRACKET_OPEN expression_opt SEMICOLON expression_opt SEMICOLON expression_opt ROUND_BRACKET_CLOSE statement  */
#line 1704 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("iteration_statement",createNode("FOR",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$3,createNode("ignore",createNode("SEMICOLON",NULL,NULL),createNode("ignore",$5,createNode("ignore",createNode("SEMICOLON",NULL,NULL),createNode("ignore",$7,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$9))))))));
                    }
#line 4008 "y.tab.c"
    break;

  case 190: /* iteration_statement: FOR ROUND_BRACKET_OPEN declaration expression_opt SEMICOLON expression_opt ROUND_BRACKET_CLOSE statement  */
#line 1708 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("iteration_statement",createNode("FOR",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$3,createNode("ignore",$4,createNode("ignore",createNode("SEMICOLON",NULL,NULL),createNode("ignore",$6,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$8)))))));
                    }
#line 4016 "y.tab.c"
    break;

  case 191: /* jump_statement: GOTO IDENTIFIER SEMICOLON  */
#line 1716 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("jump_statement",createNode("GOTO",NULL,NULL),createNode("ignore",createNode("IDENTIFIER",NULL,NULL),createNode("SEMICOLON",NULL,NULL)));
                }
#line 4024 "y.tab.c"
    break;

  case 192: /* jump_statement: CONTINUE SEMICOLON  */
#line 1720 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("jump_statement",createNode("CONTINUE",NULL,NULL),createNode("SEMICOLON",NULL,NULL));
                }
#line 4032 "y.tab.c"
    break;

  case 193: /* jump_statement: BREAK SEMICOLON  */
#line 1724 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("jump_statement",createNode("BREAK",NULL,NULL),createNode("SEMICOLON",NULL,NULL));
                }
#line 4040 "y.tab.c"
    break;

  case 194: /* jump_statement: RETURN expression_opt SEMICOLON  */
#line 1728 "TinyC3_22CS30027_22CS30019.y"
               {
                //$$=createNode("jump_statement",createNode("RETURN",NULL,NULL),createNode("ignore",$2,createNode("SEMICOLON",NULL,NULL)));
                }
#line 4048 "y.tab.c"
    break;

  case 195: /* start_symbol: translation_unit  */
#line 1740 "TinyC3_22CS30027_22CS30019.y"
                {
                    //printTree($1,0);
                }
#line 4056 "y.tab.c"
    break;

  case 196: /* translation_unit: external_declaration  */
#line 1746 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("translation_unit",$1,NULL);
                }
#line 4064 "y.tab.c"
    break;

  case 197: /* translation_unit: translation_unit external_declaration  */
#line 1750 "TinyC3_22CS30027_22CS30019.y"
                 {
                    //$$=createNode("translation_unit",$1,$2);
                }
#line 4072 "y.tab.c"
    break;

  case 198: /* external_declaration: function_definition  */
#line 1758 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("external_declaration",$1,NULL);
                    }
#line 4080 "y.tab.c"
    break;

  case 199: /* external_declaration: declaration  */
#line 1762 "TinyC3_22CS30027_22CS30019.y"
                     {
                        //$$=createNode("external_declaration",$1,NULL);
                    }
#line 4088 "y.tab.c"
    break;

  case 200: /* function_definition: declaration_specifiers declarator declaration_list_opt compound_statement  */
#line 1770 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("function_definition",createNode("ignore",$1,$2),createNode("ignore",$3,$4));
                    }
#line 4096 "y.tab.c"
    break;

  case 201: /* declaration_list_opt: %empty  */
#line 1776 "TinyC3_22CS30027_22CS30019.y"
{
    //$$ = createNode("declaration_list_opt",NULL,NULL);
}
#line 4104 "y.tab.c"
    break;

  case 202: /* declaration_list_opt: declaration_list  */
#line 1780 "TinyC3_22CS30027_22CS30019.y"
                     {
                        //$$=createNode("declaration_list_opt",$1,NULL);
                    }
#line 4112 "y.tab.c"
    break;

  case 203: /* declaration_list: declaration  */
#line 1788 "TinyC3_22CS30027_22CS30019.y"
{
    //$$=createNode("declaration_list",$1,NULL);
}
#line 4120 "y.tab.c"
    break;

  case 204: /* declaration_list: declaration_list declaration  */
#line 1792 "TinyC3_22CS30027_22CS30019.y"
                 {
                    //$$=createNode("declaration_list",$1,$2);
                }
#line 4128 "y.tab.c"
    break;


#line 4132 "y.tab.c"

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

#line 1799 "TinyC3_22CS30027_22CS30019.y"

void yyerror(string ERRORS) {
    cout << "Error :" << ERRORS << '\n';
}


