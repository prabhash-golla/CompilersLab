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
  YYSYMBOL_loop_block = 149,               /* loop_block  */
  YYSYMBOL_labeled_statement = 150,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 151,       /* compound_statement  */
  YYSYMBOL_createST = 152,                 /* createST  */
  YYSYMBOL_block_item_list_opt = 153,      /* block_item_list_opt  */
  YYSYMBOL_block_item_list = 154,          /* block_item_list  */
  YYSYMBOL_block_item = 155,               /* block_item  */
  YYSYMBOL_expression_statement = 156,     /* expression_statement  */
  YYSYMBOL_expression_opt = 157,           /* expression_opt  */
  YYSYMBOL_selection_statement = 158,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 159,      /* iteration_statement  */
  YYSYMBOL_forstart = 160,                 /* forstart  */
  YYSYMBOL_whilestart = 161,               /* whilestart  */
  YYSYMBOL_dostart = 162,                  /* dostart  */
  YYSYMBOL_jump_statement = 163,           /* jump_statement  */
  YYSYMBOL_start_symbol = 164,             /* start_symbol  */
  YYSYMBOL_translation_unit = 165,         /* translation_unit  */
  YYSYMBOL_external_declaration = 166,     /* external_declaration  */
  YYSYMBOL_function_definition = 167,      /* function_definition  */
  YYSYMBOL_declaration_list_opt = 168,     /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 169          /* declaration_list  */
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
#define YYLAST   1329

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  217
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  392

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
    1404,  1409,  1418,  1422,  1430,  1434,  1441,  1445,  1453,  1457,
    1465,  1469,  1477,  1485,  1490,  1494,  1502,  1506,  1512,  1517,
    1524,  1532,  1536,  1544,  1548,  1559,  1563,  1568,  1574,  1579,
    1584,  1591,  1595,  1601,  1606,  1611,  1621,  1625,  1629,  1637,
    1646,  1658,  1662,  1671,  1676,  1686,  1691,  1700,  1708,  1712,
    1721,  1731,  1742,  1750,  1762,  1774,  1784,  1794,  1807,  1820,
    1833,  1849,  1855,  1861,  1868,  1872,  1877,  1882,  1896,  1902,
    1906,  1914,  1918,  1926,  1936,  1939,  1947,  1951
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
  "designator", "statement", "loop_block", "labeled_statement",
  "compound_statement", "createST", "block_item_list_opt",
  "block_item_list", "block_item", "expression_statement",
  "expression_opt", "selection_statement", "iteration_statement",
  "forstart", "whilestart", "dostart", "jump_statement", "start_symbol",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list_opt", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-340)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-215)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1263,  -340,  -340,  -340,  -340,  -340,  -340,  -340,  -340,  -340,
    -340,  -340,  -340,  -340,  -340,  -340,  -340,  -340,  -340,  -340,
    -340,  -340,   -32,  1263,  1263,  1263,  1263,    19,  1263,  -340,
    -340,   -32,   162,  -340,   -33,   -35,  -340,   996,    33,   -31,
    -340,  -340,  -340,  -340,  -340,  -340,    29,  -340,    26,   162,
    -340,   -32,  1040,  -340,   -32,    56,  1263,   857,    22,    33,
    -340,  -340,  -340,  -340,    37,  1070,   806,     1,  1120,  1120,
    -340,  -340,  -340,  -340,  -340,  -340,  -340,  -340,  -340,  -340,
    -340,  -340,  -340,   198,   176,  1136,  -340,    51,    65,    66,
      90,   166,    63,    49,    76,    99,   172,  -340,  -340,  -340,
    -340,  -340,   162,  -340,   133,   907,  -340,  1225,   -27,   806,
    -340,  -340,   -20,  1288,  -340,  1288,   139,  1136,    89,   -36,
    1040,  -340,    -3,  -340,   806,  -340,  -340,  1136,  1136,    97,
     127,  -340,  -340,  1136,  1136,  1136,  1136,  1136,  1136,  1136,
    1136,  1136,  1136,  1136,  -340,  -340,  1136,  1136,  1136,  1136,
    1136,  1136,  1136,  1136,  1136,  1136,  1136,  1136,  1136,  1136,
    1136,  1136,  1136,  1136,   147,   289,  1136,  -340,  1136,   179,
    -340,   182,  -340,   -32,   185,   140,  -340,  -340,   145,   193,
    -340,  1136,  -340,  -340,  1054,  -340,   222,  -340,  -340,   161,
    -340,  -340,  -340,   226,   -23,   227,   186,  -340,  -340,  -340,
    -340,  -340,  -340,  -340,  -340,  -340,  -340,  -340,  -340,  -340,
    -340,  -340,  -340,  -340,    51,    51,    65,    65,    66,    66,
      66,    66,    90,    90,   166,    63,    49,    76,    99,  -340,
     201,  1136,   202,   204,  -340,  -340,   190,   236,  1136,   238,
    -340,  -340,   210,   197,  -340,  -340,  -340,  -340,   239,   240,
    -340,  -340,   211,  -340,  -340,  -340,   245,   246,  -340,  -340,
    -340,  -340,  1038,  -340,   244,  -340,     1,  -340,  -340,  -340,
    1040,   244,  -340,  -340,  1136,  1136,  -340,   218,  -340,   523,
    -340,   249,   229,  1136,   230,  1136,   276,  -340,   523,  -340,
     378,  -340,  -340,  -340,  -340,  -340,   -21,  -340,  -340,   197,
     523,  -340,   579,  -340,  -340,   197,  -340,   -18,  -340,   289,
    -340,  -340,  -340,   165,   250,  -340,   289,  -340,  -340,  -340,
    -340,  -340,  -340,  -340,   277,   523,  -340,   284,  -340,  -340,
     287,   298,   467,  -340,  -340,  -340,  -340,  1136,  -340,   293,
    -340,   264,   523,  1136,  -340,   309,  1136,  1136,  -340,  -340,
     -11,   304,    -7,   275,  1136,   336,  -340,  1136,   278,  -340,
     279,  -340,   635,    -5,  -340,  1136,  -340,   523,   289,  -340,
     280,  -340,  1136,  -340,   308,  -340,   306,  -340,  -340,  -340,
     311,   691,  -340,   289,  -340,   747,   310,   289,  -340,  -340,
     312,  -340
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    99,   103,   118,   113,    98,   100,   107,   121,   105,
     106,   119,   104,   108,   101,   109,   102,   120,   110,   111,
     112,   212,    92,    84,    85,    86,    87,     0,   208,   209,
     211,     0,   136,   124,     0,    93,    94,    96,   123,     0,
      88,    89,    90,    91,     1,   210,     0,   142,   140,   137,
      83,     0,     0,   216,    92,     0,   215,     0,   135,   122,
     125,   141,   143,    95,    96,     0,     0,   159,     0,     0,
      28,    29,    30,    31,    32,    33,     5,     2,     3,     4,
       7,     6,     9,    22,    34,     0,    36,    40,    43,    46,
      51,    54,    56,    58,    60,    62,    64,    68,   153,    97,
     135,   217,   136,   128,     0,   138,   150,     0,     0,     0,
      26,    80,     0,   116,   152,   117,     0,     0,     0,     0,
       0,   158,     0,   161,     0,    23,    24,     0,    18,     0,
       0,    14,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   181,     0,   127,     0,    29,
     139,     0,   133,   149,     0,   144,   146,   134,     0,     0,
       8,     0,   114,   115,     0,    82,     0,   164,   154,   159,
     156,   160,   162,     0,     0,     0,    19,    20,    12,    13,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    37,    38,    39,    41,    42,    44,    45,    47,    48,
      49,    50,    52,    53,    55,    57,    59,    61,    63,    66,
       0,     0,     0,     0,   203,   201,     0,     0,   188,     0,
     202,   180,     5,   189,   185,   186,   165,   166,     0,    66,
     183,   167,     0,   168,   169,   170,     0,     0,   131,   126,
     148,   132,     0,   151,    27,    81,   159,    35,   163,   155,
       0,     0,    10,    11,     0,     0,   206,     0,   205,   188,
      66,     0,     0,     0,     0,     0,     0,   135,   188,   213,
     188,   187,   129,   130,   145,   147,     0,   157,    21,    67,
     188,   178,   188,   180,   204,    67,   207,     0,   180,   181,
     176,   184,    16,   159,     0,   177,   181,    66,   171,   172,
     173,   174,   175,   135,     0,   188,   135,     0,    17,    66,
       0,     0,   188,    66,   192,    66,   179,     0,    66,     0,
      66,     0,   188,     0,    65,     0,     0,   188,    66,    67,
       0,     0,     0,     0,   188,   190,    66,     0,     0,    66,
       0,    66,   188,     0,   195,   188,    66,   188,   181,   193,
       0,    67,   188,   191,     0,   196,     0,    67,   194,    66,
       0,   188,    66,   181,   199,   188,     0,   181,   197,   200,
       0,   198
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -340,  -340,  -340,  -340,  -340,  -340,   -63,  -340,   -76,    87,
     112,    41,   110,   199,   200,   203,   205,   206,  -340,  -113,
    -168,  -126,    -4,   -65,   130,     0,     7,  -340,  -340,   314,
    -340,    91,    -8,   126,  -340,   -14,   323,   -97,   266,  -340,
     318,   313,  -340,  -340,   109,  -340,   -95,  -110,   106,  -173,
    -340,  -340,   251,  -264,  -339,  -239,  -340,  -253,  -166,  -340,
      84,  -237,  -191,  -234,  -196,  -340,  -340,  -340,  -180,  -340,
    -340,   347,  -340,  -340,  -340
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    81,    82,    83,   195,   196,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     275,   164,   111,   243,   186,   244,    54,    34,    35,    36,
      23,    24,   114,    25,    26,    64,    38,   107,    48,   171,
      39,    49,   174,   175,   176,   108,   116,    99,   119,   120,
     121,   122,   123,   245,   317,   246,   247,   287,   248,   249,
     250,   251,   252,   253,   254,   281,   286,   280,   255,    27,
      28,    29,    30,    55,    56
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,   112,   110,   165,   185,   125,   126,    22,    37,   145,
     190,   188,    31,    31,   179,   301,   270,    46,   177,    44,
     272,    32,   144,   369,   310,   180,   312,   325,    21,   193,
      40,    41,    42,    43,   356,    22,   315,    53,   358,   117,
     370,    50,   384,   117,   112,   118,   388,   284,    98,   118,
     323,   189,    51,   104,   144,   326,   101,    33,    33,   112,
     178,   334,   194,   318,   181,   319,   313,   181,   320,   181,
     211,   212,   213,   191,    60,    57,   181,    58,   349,    32,
     181,   290,   181,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   170,   100,   373,   146,   182,   321,   183,   267,   147,
     148,   106,   302,    52,   173,   159,    98,   160,   185,   149,
     150,   144,   322,   318,   197,   319,   151,   152,   320,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     270,   341,   318,   327,   319,   161,   318,   320,   319,   331,
     330,   320,   153,   154,   155,   156,   353,   113,    47,   260,
     297,   337,   256,   360,   257,   342,   321,   343,   144,   162,
     345,     3,   347,   314,   371,    62,   167,   265,   187,   324,
     354,   377,   322,    47,   184,   321,   198,    11,   362,   321,
     309,   365,   115,   367,   218,   219,   220,   221,   372,    17,
     113,   322,   374,   117,   113,   322,   113,   117,   269,   118,
     299,   381,   328,   118,   385,   113,   199,   386,   305,   229,
     307,   390,   258,   355,   344,   259,   332,   262,    47,   335,
     261,    62,   157,   158,   263,   115,   214,   215,   264,   115,
     127,   115,   128,   163,   -67,   376,   129,   130,   131,   132,
     115,   380,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   216,   217,   268,    98,   222,   223,   173,
     298,   271,   273,   274,   144,   276,   278,   279,   350,   282,
     283,   352,   285,   288,   181,   291,   289,  -182,   292,   293,
     266,   300,   363,   303,     1,   230,   231,     2,     3,   232,
     233,   234,     4,   304,   306,     5,     6,     7,   235,   236,
     237,     8,     9,    10,    11,   238,    12,    13,    65,    14,
     308,   239,   333,   329,    15,    16,    17,   240,    18,    19,
      20,   336,   340,    66,   338,   241,   339,   346,   348,    68,
      69,    70,    71,    72,    73,    74,    75,   351,   357,   359,
     361,   379,   364,   366,   375,   378,   382,   389,   224,   391,
     225,   277,    59,  -188,   226,    63,    61,   227,   166,   228,
     105,   295,   296,   192,   311,    45,     0,     0,   242,    77,
      78,    79,    80,     1,   230,   231,     2,     3,   232,   233,
     234,     4,     0,     0,     5,     6,     7,   235,   236,   237,
       8,     9,    10,    11,   238,    12,    13,    65,    14,     0,
     239,     0,     0,    15,    16,    17,   240,    18,    19,    20,
       0,     0,    66,     0,   241,     0,     0,     0,    68,    69,
      70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   242,    77,    78,
      79,    80,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     0,     5,     6,     7,     0,     0,     0,     8,
       9,    10,    11,     0,    12,    13,    65,    14,     0,     0,
       0,     0,    15,    16,    17,     0,    18,    19,    20,     0,
       0,    66,     0,     0,     0,     0,     0,    68,    69,    70,
      71,    72,    73,    74,    75,     0,     0,     0,     0,   230,
     231,     0,     0,   232,   233,   234,     0,     0,     0,     0,
       0,     0,   235,   236,   237,     0,     0,     0,     0,   238,
       0,     0,    65,     0,     0,   239,    76,    77,    78,    79,
      80,   240,     0,     0,     0,     0,     0,    66,     0,   241,
       0,     0,     0,    68,    69,    70,    71,    72,    73,    74,
      75,     0,     0,     0,     0,   230,   231,     0,     0,   232,
     233,   234,     0,     0,     0,     0,     0,     0,   235,   236,
     237,     0,     0,     0,     0,   238,     0,     0,    65,     0,
       0,   239,   242,    77,    78,    79,    80,   240,     0,     0,
       0,     0,     0,    66,     0,   316,     0,     0,     0,    68,
      69,    70,    71,    72,    73,    74,    75,     0,     0,     0,
       0,   230,   231,     0,     0,   232,   233,   234,     0,     0,
       0,     0,     0,     0,   235,   236,   237,     0,     0,     0,
       0,   238,     0,     0,    65,     0,     0,   239,   242,    77,
      78,    79,    80,   240,     0,     0,     0,     0,     0,    66,
       0,   368,     0,     0,     0,    68,    69,    70,    71,    72,
      73,    74,    75,     0,     0,     0,     0,   230,   231,     0,
       0,   232,   233,   234,     0,     0,     0,     0,     0,     0,
     235,   236,   237,     0,     0,     0,     0,   238,     0,     0,
      65,     0,     0,   239,   242,    77,    78,    79,    80,   240,
       0,     0,     0,     0,     0,    66,     0,   383,     0,     0,
       0,    68,    69,    70,    71,    72,    73,    74,    75,     0,
       0,     0,     0,   230,   231,     0,     0,   232,   233,   234,
       0,     0,     0,     0,     0,     0,   235,   236,   237,     0,
       0,     0,     0,   238,     0,     0,    65,     0,     0,   239,
     242,    77,    78,    79,    80,   240,     0,     0,     0,     0,
       0,    66,     0,   387,     0,     0,     0,    68,    69,    70,
      71,    72,    73,    74,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     0,     0,     0,     7,     0,     0,     0,     0,     9,
      10,    11,     0,    12,    13,    65,   242,    77,    78,    79,
      80,    15,    16,    17,     0,    18,    19,    20,     0,     0,
      66,     0,     0,     0,     0,     0,    68,    69,    70,    71,
      72,    73,    74,    75,     0,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,     0,     0,     0,    65,   102,     0,     0,
       0,     0,     0,     0,    17,    76,    77,    78,    79,    80,
     103,    66,     0,     0,     0,     0,     0,    68,    69,    70,
      71,    72,    73,    74,    75,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,     0,     0,     0,    65,   168,     0,     0,
       0,     0,     0,     0,    17,     0,    76,    77,    78,    79,
      80,    66,     0,     0,     0,     0,     0,    68,    69,    70,
     169,    72,    73,    74,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,    77,    78,    79,
      80,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    11,     0,    12,    13,     0,    14,     0,     0,     0,
       0,    15,    16,    17,     0,    18,    19,    20,     0,     0,
       0,     0,  -214,     1,     0,     0,     2,     3,     0,     0,
       0,     4,     0,     0,     5,     6,     7,     0,     0,     0,
       8,     9,    10,    11,     0,    12,    13,     0,    14,    65,
       0,     0,    52,    15,    16,    17,     0,    18,    19,    20,
       0,     0,     0,    65,    66,     0,    67,     0,     0,     0,
      68,    69,    70,    71,    72,    73,    74,    75,    66,    65,
     266,     0,     0,     0,    68,    69,    70,    71,    72,    73,
      74,    75,     0,   294,   109,     0,     0,     0,     0,     0,
      68,    69,    70,    71,    72,    73,    74,    75,     0,    76,
      77,    78,    79,    80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,    77,    78,    79,    80,     0,    65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
      77,    78,    79,    80,   124,    65,     0,     0,     0,     0,
      68,    69,    70,    71,    72,    73,    74,    75,     0,     0,
      66,     0,     0,     0,     0,     0,    68,    69,    70,    71,
      72,    73,    74,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
      77,    78,    79,    80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,    77,    78,    79,    80,
       1,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
      11,     0,    12,    13,     0,    14,     0,     0,     0,     0,
      15,    16,    17,     0,    18,    19,    20,     0,     1,     0,
     172,     2,     3,     0,     0,     0,     4,     0,     0,     5,
       6,     7,     0,     0,     0,     8,     9,    10,    11,     0,
      12,    13,     0,    14,     0,     0,     2,     3,    15,    16,
      17,     4,    18,    19,    20,     0,     7,     0,     0,     0,
       0,     9,    10,    11,     0,    12,    13,     0,     0,     0,
       0,     0,     0,    15,    16,    17,     0,    18,    19,    20
};

static const yytype_int16 yycheck[] =
{
       0,    66,    65,   100,   117,    68,    69,     0,    22,    85,
     120,    47,    44,    44,   109,   279,   189,    31,    45,     0,
      43,    53,    85,   362,   288,    45,    47,    45,    28,   124,
      23,    24,    25,    26,    45,    28,   300,    37,    45,    42,
      45,    74,   381,    42,   109,    48,   385,   238,    52,    48,
     303,    87,    87,    57,   117,   308,    56,    89,    89,   124,
      87,   325,   127,   302,    87,   302,    87,    87,   302,    87,
     146,   147,   148,    76,    45,    42,    87,    44,   342,    53,
      87,   249,    87,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   105,    46,   367,    53,   113,   302,   115,   184,    58,
      59,    89,   280,    76,   107,    52,   120,    68,   231,    54,
      55,   184,   302,   362,   128,   362,    60,    61,   362,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     313,   332,   381,   309,   381,    69,   385,   381,   385,   317,
     316,   385,    62,    63,    64,    65,   347,    66,    32,   173,
     270,   329,   166,   354,   168,   333,   362,   335,   231,    70,
     338,     9,   340,   299,   365,    49,    43,   181,    89,   305,
     348,   372,   362,    57,    45,   381,    89,    25,   356,   385,
     287,   359,    66,   361,   153,   154,   155,   156,   366,    37,
     109,   381,   368,    42,   113,   385,   115,    42,    47,    48,
     275,   379,    47,    48,   382,   124,    89,   383,   283,    72,
     285,   387,    43,   349,   337,    43,   323,    87,   102,   326,
      45,   105,    66,    67,    89,   109,   149,   150,    45,   113,
      42,   115,    44,    71,    72,   371,    48,    49,    50,    51,
     124,   377,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,   151,   152,    43,   270,   157,   158,   262,
     274,    45,    45,    87,   337,    74,    74,    73,   343,    89,
      44,   346,    44,    73,    87,    74,    47,    47,    43,    43,
      46,    73,   357,    44,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    74,    74,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      44,    32,    45,    73,    35,    36,    37,    38,    39,    40,
      41,    47,   332,    44,    47,    46,    38,    44,    74,    50,
      51,    52,    53,    54,    55,    56,    57,    38,    44,    74,
      14,    45,    74,    74,    74,    47,    45,    47,   159,    47,
     160,   231,    39,    74,   161,    51,    48,   162,   102,   163,
      57,   262,   266,   122,   290,    28,    -1,    -1,    89,    90,
      91,    92,    93,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    44,    -1,    46,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
      92,    93,     5,    -1,    -1,     8,     9,    -1,    -1,    -1,
      13,    -1,    -1,    16,    17,    18,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    35,    36,    37,    -1,    39,    40,    41,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,     6,
       7,    -1,    -1,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    20,    21,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    29,    -1,    -1,    32,    89,    90,    91,    92,
      93,    38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    46,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,     6,     7,    -1,    -1,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      21,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    -1,
      -1,    32,    89,    90,    91,    92,    93,    38,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    46,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,     6,     7,    -1,    -1,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    29,    -1,    -1,    32,    89,    90,
      91,    92,    93,    38,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    46,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,     6,     7,    -1,
      -1,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    20,    21,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      29,    -1,    -1,    32,    89,    90,    91,    92,    93,    38,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    46,    -1,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,     6,     7,    -1,    -1,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    -1,    32,
      89,    90,    91,    92,    93,    38,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    46,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,     9,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    27,    28,    29,    89,    90,    91,    92,
      93,    35,    36,    37,    -1,    39,    40,    41,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    89,    90,    91,    92,    93,
      43,    44,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    89,    90,    91,    92,
      93,    44,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,    92,
      93,     5,    -1,    -1,     8,     9,    -1,    -1,    -1,    13,
      -1,    -1,    16,    17,    18,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    27,    28,    -1,    30,    -1,    -1,    -1,
      -1,    35,    36,    37,    -1,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,     5,    -1,    -1,     8,     9,    -1,    -1,
      -1,    13,    -1,    -1,    16,    17,    18,    -1,    -1,    -1,
      22,    23,    24,    25,    -1,    27,    28,    -1,    30,    29,
      -1,    -1,    76,    35,    36,    37,    -1,    39,    40,    41,
      -1,    -1,    -1,    29,    44,    -1,    46,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    44,    29,
      46,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    75,    44,    -1,    -1,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    89,
      90,    91,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    90,    91,    92,    93,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      90,    91,    92,    93,    44,    29,    -1,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      90,    91,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    90,    91,    92,    93,
       5,    -1,    -1,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    17,    18,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    28,    -1,    30,    -1,    -1,    -1,    -1,
      35,    36,    37,    -1,    39,    40,    41,    -1,     5,    -1,
      45,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,
      17,    18,    -1,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    30,    -1,    -1,     8,     9,    35,    36,
      37,    13,    39,    40,    41,    -1,    18,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    -1,    39,    40,    41
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     8,     9,    13,    16,    17,    18,    22,    23,
      24,    25,    27,    28,    30,    35,    36,    37,    39,    40,
      41,   120,   121,   125,   126,   128,   129,   164,   165,   166,
     167,    44,    53,    89,   122,   123,   124,   130,   131,   135,
     121,   121,   121,   121,     0,   166,   130,   128,   133,   136,
      74,    87,    76,   120,   121,   168,   169,    42,    44,   131,
      45,   135,   128,   124,   130,    29,    44,    46,    50,    51,
      52,    53,    54,    55,    56,    57,    89,    90,    91,    92,
      93,    96,    97,    98,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   117,   142,
      46,   120,    30,    43,   117,   136,    89,   132,   140,    44,
     101,   117,   118,   126,   127,   128,   141,    42,    48,   143,
     144,   145,   146,   147,    44,   101,   101,    42,    44,    48,
      49,    50,    51,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,   101,   103,    53,    58,    59,    54,
      55,    60,    61,    62,    63,    64,    65,    66,    67,    52,
      68,    69,    70,    71,   116,   132,   133,    43,    30,    53,
     117,   134,    45,   121,   137,   138,   139,    45,    87,   141,
      45,    87,   127,   127,    45,   114,   119,    89,    47,    87,
     142,    76,   147,   141,   118,    99,   100,   117,    89,    89,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   103,   103,   103,   104,   104,   105,   105,   106,   106,
     106,   106,   107,   107,   108,   109,   110,   111,   112,    72,
       6,     7,    10,    11,    12,    19,    20,    21,    26,    32,
      38,    46,    89,   118,   120,   148,   150,   151,   153,   154,
     155,   156,   157,   158,   159,   163,   117,   117,    43,    43,
     130,    45,    87,    89,    45,   117,    46,   103,    43,    47,
     144,    45,    43,    45,    87,   115,    74,   119,    74,    73,
     162,   160,    89,    44,   157,    44,   161,   152,    73,    47,
     115,    74,    43,    43,    75,   139,   143,   142,   117,   118,
      73,   148,   115,    44,    74,   118,    74,   118,    44,   132,
     148,   155,    47,    87,   116,   148,    46,   149,   150,   156,
     158,   159,   163,   152,   116,    45,   152,   153,    47,    73,
     153,   115,   132,    45,   148,   132,    47,   115,    47,    38,
     120,   157,   115,   115,   114,   115,    44,   115,    74,   148,
     118,    38,   118,   157,   115,   116,    45,    44,    45,    74,
     157,    14,   115,   118,    74,   115,    74,   115,    46,   149,
      45,   157,   115,   148,   153,    74,   116,   157,    47,    45,
     116,   115,    45,    46,   149,   115,   153,    46,   149,    47,
     153,    47
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
     148,   149,   149,   149,   149,   149,   150,   150,   150,   151,
     152,   153,   153,   154,   154,   155,   155,   156,   157,   157,
     158,   158,   158,   159,   159,   159,   159,   159,   159,   159,
     159,   160,   161,   162,   163,   163,   163,   163,   164,   165,
     165,   166,   166,   167,   168,   168,   169,   169
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
       1,     1,     1,     1,     1,     1,     3,     4,     3,     5,
       0,     0,     1,     1,     3,     1,     1,     2,     0,     1,
       8,    11,     5,    10,    12,    10,    12,    16,    18,    15,
      17,     0,     0,     0,     3,     2,     2,     3,     1,     1,
       2,     1,     1,     7,     0,     1,     1,     2
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
#line 1991 "y.tab.c"
    break;

  case 3: /* constant: FLOATING_CONSTANT  */
#line 99 "TinyC3_22CS30027_22CS30019.y"
            { 
                (yyval.Express) = new Expression();
                (yyval.Express)->Location = SymbolTable::GenTemp(new SType("float"),ftos((yyvsp[0].FLOATVAL)));
                QuadArray::Emit("=",(yyval.Express)->Location->Name,(yyvsp[0].FLOATVAL));
                //$$ = createNode("constant",createNode("FLOATING_CONSTANT", NULL, NULL),NULL); 
            }
#line 2002 "y.tab.c"
    break;

  case 4: /* constant: CHARACTER_CONSTANT  */
#line 106 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Express) = new Expression();
                (yyval.Express)->Location = SymbolTable::GenTemp(new SType("char"),string((yyvsp[0].CHARVAL)));
                QuadArray::Emit("=",(yyval.Express)->Location->Name,(yyvsp[0].CHARVAL));
                //$$ = createNode("constant",createNode("CHARACTER_CONSTANT", NULL, NULL),NULL); 
            }
#line 2013 "y.tab.c"
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
#line 2025 "y.tab.c"
    break;

  case 6: /* primary_expression: constant  */
#line 123 "TinyC3_22CS30027_22CS30019.y"
                    { 
                       (yyval.Express) = (yyvsp[0].Express);
                        //$$ = createNode("primary_expression",$1,NULL); 
                    }
#line 2034 "y.tab.c"
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
#line 2046 "y.tab.c"
    break;

  case 8: /* primary_expression: ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE  */
#line 136 "TinyC3_22CS30027_22CS30019.y"
                    {   
                        (yyval.Express) = (yyvsp[-1].Express);
                        //$$ = createNode("primary_expression", createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$2), createNode("ROUND_BRACKET_CLOSE",NULL,NULL)); 
                    }
#line 2055 "y.tab.c"
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
#line 2067 "y.tab.c"
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
#line 2092 "y.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression ROUND_BRACKET_OPEN argument_expression_list_opt ROUND_BRACKET_CLOSE  */
#line 174 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        (yyval.Array)  = new ArrayType();
                        (yyval.Array)->Array = SymbolTable::GenTemp((yyvsp[-3].Array)->Type);
                        QuadArray::Emit("call",(yyval.Array)->Array->Name,(yyvsp[-3].Array)->Array->Name,itos((yyvsp[-1].Parameter)));
                        //$$ = createNode("postfix_expression", $1, createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$3,createNode("ROUND_BRACKET_OPEN",NULL,NULL)))); 
                    }
#line 2103 "y.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 181 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        //$$ = createNode("postfix_expression", $1,createNode("ignore",createNode("DOT",NULL,NULL),createNode("IDENTIFIER", NULL, NULL))); 
                    }
#line 2111 "y.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression IMPLIES IDENTIFIER  */
#line 185 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        //$$ = createNode("postfix_expression", $1,createNode("ignore",createNode("IMPLIES",NULL,NULL),createNode("IDENTIFIER", NULL, NULL)));
                    }
#line 2119 "y.tab.c"
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
#line 2131 "y.tab.c"
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
#line 2143 "y.tab.c"
    break;

  case 16: /* postfix_expression: ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE  */
#line 205 "TinyC3_22CS30027_22CS30019.y"
                    {
                        // $$ = createNode("postfix_expression", createNode("ignore",createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$2),createNode("ROUND_BRACKET_OPEN",NULL,NULL)),createNode("ignore",createNode("ignore",createNode("CURLY_BRACKET_CLOSE",NULL,NULL),$5),createNode("CURLY_BRACKET_CLOSE",NULL,NULL))); 
                    }
#line 2151 "y.tab.c"
    break;

  case 17: /* postfix_expression: ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE  */
#line 209 "TinyC3_22CS30027_22CS30019.y"
                    {
                        // $$ = createNode("postfix_expression", createNode("ignore",createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$2),createNode("ROUND_BRACKET_OPEN",NULL,NULL)),createNode("ignore",createNode("ignore",createNode("CURLY_BRACKET_CLOSE",NULL,NULL),$5),createNode("ignore",createNode("COMMA",NULL,NULL),createNode("CURLY_BRACKET_CLOSE",NULL,NULL)))); 
                    }
#line 2159 "y.tab.c"
    break;

  case 18: /* argument_expression_list_opt: %empty  */
#line 217 "TinyC3_22CS30027_22CS30019.y"
                        {
                            (yyval.Parameter) = 0;
                            //$$ = createNode("argument_expression_list_opt",NULL, NULL);
                        }
#line 2168 "y.tab.c"
    break;

  case 19: /* argument_expression_list_opt: argument_expression_list  */
#line 222 "TinyC3_22CS30027_22CS30019.y"
                        {
                            (yyval.Parameter) = (yyvsp[0].Parameter);
                            //$$ = createNode("argument_expression_list_opt", $1, NULL);
                        }
#line 2177 "y.tab.c"
    break;

  case 20: /* argument_expression_list: assignment_expression  */
#line 229 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            (yyval.Parameter) = 1;
                            QuadArray::Emit("param",(yyvsp[0].Express)->Location->Name);
                            //$$ = createNode("argument_expression_list", $1, NULL); 
                        }
#line 2187 "y.tab.c"
    break;

  case 21: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 235 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            (yyval.Parameter) = (yyvsp[-2].Parameter) + 1;
                            QuadArray::Emit("param",(yyvsp[0].Express)->Location->Name);
                            //$$ = createNode("argument_expression_list", $1, createNode("ignore",createNode("COMMA",NULL,NULL),$3)); 
                        }
#line 2197 "y.tab.c"
    break;

  case 22: /* unary_expression: postfix_expression  */
#line 245 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Array) = (yyvsp[0].Array);
                        // $$ = createNode("unary_expression", $1, NULL); 
                    }
#line 2206 "y.tab.c"
    break;

  case 23: /* unary_expression: INCREMENT unary_expression  */
#line 250 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        QuadArray::Emit("+",(yyvsp[0].Array)->Array->Name,(yyvsp[0].Array)->Array->Name,"1");
                        (yyval.Array) = (yyvsp[0].Array);
                        //$$ = createNode("unary_expression", createNode("INCREMENT",NULL,NULL), $2); 
                    }
#line 2216 "y.tab.c"
    break;

  case 24: /* unary_expression: DECREMENT unary_expression  */
#line 256 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        QuadArray::Emit("-",(yyvsp[0].Array)->Array->Name,(yyvsp[0].Array)->Array->Name,"1");
                        (yyval.Array) = (yyvsp[0].Array);
                        //$$ = createNode("unary_expression", createNode("DECREMENT",NULL,NULL), $2); 
                    }
#line 2226 "y.tab.c"
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
#line 2266 "y.tab.c"
    break;

  case 26: /* unary_expression: SIZEOF unary_expression  */
#line 298 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        //$$ = createNode("unary_expression", createNode("SIZEOF",NULL,NULL), $2); 
                    }
#line 2274 "y.tab.c"
    break;

  case 27: /* unary_expression: SIZEOF ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE  */
#line 302 "TinyC3_22CS30027_22CS30019.y"
                    {  
                        //$$ = createNode("unary_expression", createNode("SIZEOF",NULL,NULL), createNode("ignore",createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3),createNode("ROUND_BRACKET_CLOSE",NULL,NULL))); 
                    }
#line 2282 "y.tab.c"
    break;

  case 28: /* unary_operator: BITWISE_AND  */
#line 310 "TinyC3_22CS30027_22CS30019.y"
                {
                    (yyval.UnaryOper) = '&';
                    // $$ = createNode("BITWISE_AND", NULL, NULL); 
                }
#line 2291 "y.tab.c"
    break;

  case 29: /* unary_operator: MUL  */
#line 315 "TinyC3_22CS30027_22CS30019.y"
                { 
                    (yyval.UnaryOper) = '*';
                    //$$ = createNode("MUL", NULL, NULL); 
                }
#line 2300 "y.tab.c"
    break;

  case 30: /* unary_operator: PLUS  */
#line 320 "TinyC3_22CS30027_22CS30019.y"
                { 
                    (yyval.UnaryOper) = '+';
                    //$$ = createNode('PLUS', NULL, NULL); 
                }
#line 2309 "y.tab.c"
    break;

  case 31: /* unary_operator: MINUS  */
#line 325 "TinyC3_22CS30027_22CS30019.y"
                { 
                    (yyval.UnaryOper) = '-';
                    //$$ = createNode('MINUS', NULL, NULL); 
                }
#line 2318 "y.tab.c"
    break;

  case 32: /* unary_operator: BITWISE_NOT  */
#line 330 "TinyC3_22CS30027_22CS30019.y"
                { 
                    (yyval.UnaryOper) = '~';
                    //$$ = createNode('BITWISE_NOT', NULL, NULL); 
                }
#line 2327 "y.tab.c"
    break;

  case 33: /* unary_operator: NOT  */
#line 335 "TinyC3_22CS30027_22CS30019.y"
                {
                    (yyval.UnaryOper) = '!';
                    // $$ = createNode('NOT', NULL, NULL); 
                }
#line 2336 "y.tab.c"
    break;

  case 34: /* cast_expression: unary_expression  */
#line 344 "TinyC3_22CS30027_22CS30019.y"
                { 
                    (yyval.Array) = (yyvsp[0].Array);
                    //$$ =  createNode("cast_expression", $1, NULL); 
                }
#line 2345 "y.tab.c"
    break;

  case 35: /* cast_expression: ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE cast_expression  */
#line 349 "TinyC3_22CS30027_22CS30019.y"
                { 
                    (yyval.Array) = new ArrayType();
                    (yyval.Array)->Array = (yyvsp[0].Array)->Array;
                    // $$->Array = TypeConvertor($4->Array,varType)
                    //$$ =  createNode("cast_expression", createNode("ROUND_BRACKET_OPEN",NULL,NULL), createNode("ignore",$2,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$4))); 
                }
#line 2356 "y.tab.c"
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
#line 2378 "y.tab.c"
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
#line 2396 "y.tab.c"
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
#line 2414 "y.tab.c"
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
#line 2432 "y.tab.c"
    break;

  case 40: /* additive_expression: multiplicative_expression  */
#line 424 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        (yyval.Express) = (yyvsp[0].Express);
                        //$$ =createNode("additive_expression",$1,NULL); 
                    }
#line 2441 "y.tab.c"
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
#line 2459 "y.tab.c"
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
#line 2477 "y.tab.c"
    break;

  case 43: /* shift_expression: additive_expression  */
#line 461 "TinyC3_22CS30027_22CS30019.y"
                 { 
                    (yyval.Express) = (yyvsp[0].Express);
                    //$$ =createNode("shift_expression",$1,NULL); 
                }
#line 2486 "y.tab.c"
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
#line 2504 "y.tab.c"
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
#line 2522 "y.tab.c"
    break;

  case 46: /* relational_expression: shift_expression  */
#line 498 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Express)=(yyvsp[0].Express);
                        // $$ =createNode("relational_expression",$1,NULL); 
                    }
#line 2531 "y.tab.c"
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
#line 2552 "y.tab.c"
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
#line 2573 "y.tab.c"
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
#line 2594 "y.tab.c"
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
#line 2615 "y.tab.c"
    break;

  case 51: /* equality_expression: relational_expression  */
#line 575 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        (yyval.Express) = (yyvsp[0].Express);
                        //$$ = createNode("equality_expression",$1,NULL); 
                    }
#line 2624 "y.tab.c"
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
#line 2647 "y.tab.c"
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
#line 2670 "y.tab.c"
    break;

  case 54: /* and_expression: equality_expression  */
#line 622 "TinyC3_22CS30027_22CS30019.y"
                { 
                    (yyval.Express) = (yyvsp[0].Express);
                    //$$ = createNode("and_expression",$1,NULL); 
                }
#line 2679 "y.tab.c"
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
#line 2700 "y.tab.c"
    break;

  case 56: /* exclusive_or_expression: and_expression  */
#line 648 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            (yyval.Express) = (yyvsp[0].Express);
                            //$$ = createNode("exclusive_or_expression",$1,NULL); 
                        }
#line 2709 "y.tab.c"
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
#line 2730 "y.tab.c"
    break;

  case 58: /* inclusive_or_expression: exclusive_or_expression  */
#line 674 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            (yyval.Express) = (yyvsp[0].Express);
                            //$$ = createNode("inclusive_or_expression",$1,NULL); 
                        }
#line 2739 "y.tab.c"
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
#line 2760 "y.tab.c"
    break;

  case 60: /* logical_and_expression: inclusive_or_expression  */
#line 700 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            (yyval.Express) = (yyvsp[0].Express);
                            //$$ = createNode("logical_and_expression",$1,NULL); 
                        }
#line 2769 "y.tab.c"
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
#line 2784 "y.tab.c"
    break;

  case 62: /* logical_or_expression: logical_and_expression  */
#line 720 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            (yyval.Express) = (yyvsp[0].Express);
                            //$$ = createNode("logical_or_expression",$1,NULL); 
                        }
#line 2793 "y.tab.c"
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
#line 2808 "y.tab.c"
    break;

  case 64: /* conditional_expression: logical_or_expression  */
#line 740 "TinyC3_22CS30027_22CS30019.y"
                        {
                            (yyval.Express) = (yyvsp[0].Express);
                            // $$ = createNode("conditional_expression",$1,NULL); 
                        }
#line 2817 "y.tab.c"
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
#line 2841 "y.tab.c"
    break;

  case 66: /* countinst: %empty  */
#line 767 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.InstCount) = QuadList.InstructionList.size();
            }
#line 2849 "y.tab.c"
    break;

  case 67: /* newstatement: %empty  */
#line 773 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Stateme) = new Statement();
                (yyval.Stateme)->NextList = MakeList(QuadList.InstructionList.size());
                QuadArray::Emit("goto","");
            }
#line 2859 "y.tab.c"
    break;

  case 68: /* assignment_expression: conditional_expression  */
#line 782 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Express) = (yyvsp[0].Express);
                        // $$ = createNode("assignment_expression",$1,NULL); 
                    }
#line 2868 "y.tab.c"
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
#line 2891 "y.tab.c"
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
#line 2914 "y.tab.c"
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
#line 2937 "y.tab.c"
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
#line 2960 "y.tab.c"
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
#line 2983 "y.tab.c"
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
#line 3006 "y.tab.c"
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
#line 3029 "y.tab.c"
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
#line 3052 "y.tab.c"
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
#line 3075 "y.tab.c"
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
#line 3098 "y.tab.c"
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
#line 3121 "y.tab.c"
    break;

  case 80: /* expression: assignment_expression  */
#line 1004 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Express) = (yyvsp[0].Express);
                //$$ = createNode("expression",$1,NULL); 
            }
#line 3130 "y.tab.c"
    break;

  case 81: /* expression: expression COMMA assignment_expression  */
#line 1009 "TinyC3_22CS30027_22CS30019.y"
            { 
                //$$ = createNode("expression",$1,createNode("ignore",createNode("COMMA", NULL, NULL),$3)); 
            }
#line 3138 "y.tab.c"
    break;

  case 82: /* constant_expression: conditional_expression  */
#line 1016 "TinyC3_22CS30027_22CS30019.y"
                    {
                        // $$ = createNode("constant_expression", $1, NULL); 
                    }
#line 3146 "y.tab.c"
    break;

  case 83: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 1028 "TinyC3_22CS30027_22CS30019.y"
            { 
                //$$ = createNode("declaration", $1, createNode("ignore",$2,createNode("SEMICOLON",NULL,NULL))); 
            }
#line 3154 "y.tab.c"
    break;

  case 84: /* declaration_specifiers: storage_class_specifier  */
#line 1036 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifier", $1, NULL);
                        }
#line 3162 "y.tab.c"
    break;

  case 85: /* declaration_specifiers: type_specifier  */
#line 1040 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifier", $1, NULL);
                        }
#line 3170 "y.tab.c"
    break;

  case 86: /* declaration_specifiers: type_qualifier  */
#line 1044 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifier", $1, NULL);
                        }
#line 3178 "y.tab.c"
    break;

  case 87: /* declaration_specifiers: function_specifier  */
#line 1048 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifier", $1, NULL);
                        }
#line 3186 "y.tab.c"
    break;

  case 88: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 1052 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifiers", $1, $2);
                        }
#line 3194 "y.tab.c"
    break;

  case 89: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 1056 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifiers", $1, $2);
                        }
#line 3202 "y.tab.c"
    break;

  case 90: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 1060 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifiers", $1, $2);
                        }
#line 3210 "y.tab.c"
    break;

  case 91: /* declaration_specifiers: function_specifier declaration_specifiers  */
#line 1064 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifiers", $1, $2);
                        }
#line 3218 "y.tab.c"
    break;

  case 92: /* init_declarator_list_opt: %empty  */
#line 1072 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("init_declarator_list_opt",NULL, NULL);
                        }
#line 3226 "y.tab.c"
    break;

  case 93: /* init_declarator_list_opt: init_declarator_list  */
#line 1076 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("init_declarator_list_opt", $1, NULL);
                        }
#line 3234 "y.tab.c"
    break;

  case 94: /* init_declarator_list: init_declarator  */
#line 1082 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("init_declerator_list", $1, NULL);
                        }
#line 3242 "y.tab.c"
    break;

  case 95: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 1086 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("init_declerator_list", $1, createNode("ignore",createNode("COMMA",NULL,NULL),$3));
                        }
#line 3250 "y.tab.c"
    break;

  case 96: /* init_declarator: declarator  */
#line 1094 "TinyC3_22CS30027_22CS30019.y"
                {
                    (yyval.SymbolPointer) = (yyvsp[0].SymbolPointer);
                    //$$ = createNode("init_declerator", $1,NULL);
                }
#line 3259 "y.tab.c"
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
#line 3272 "y.tab.c"
    break;

  case 98: /* storage_class_specifier: EXTERN  */
#line 1112 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("storage_class_specifier", createNode("EXTERN",NULL,NULL), NULL);
                        }
#line 3280 "y.tab.c"
    break;

  case 99: /* storage_class_specifier: AUTO  */
#line 1116 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("storage_class_specifier", createNode("AUTO",NULL,NULL), NULL);
                        }
#line 3288 "y.tab.c"
    break;

  case 100: /* storage_class_specifier: REGISTER  */
#line 1120 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("storage_class_specifier", createNode("REGISTER",NULL,NULL), NULL);
                        }
#line 3296 "y.tab.c"
    break;

  case 101: /* storage_class_specifier: STATIC  */
#line 1124 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("storage_class_specifier",createNode("STATIC",NULL,NULL), NULL);
                        }
#line 3304 "y.tab.c"
    break;

  case 102: /* type_specifier: VOID  */
#line 1132 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="void";
                    // $$ = createNode("type_specifier", createNode("VOID",NULL,NULL), NULL); 
                }
#line 3313 "y.tab.c"
    break;

  case 103: /* type_specifier: CHAR  */
#line 1137 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="char";
                    // $$ = createNode("type_specifier", createNode("CHARACTER",NULL,NULL), NULL); 
                }
#line 3322 "y.tab.c"
    break;

  case 104: /* type_specifier: SHORT  */
#line 1142 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="short";
                    // $$ = createNode("type_specifier", createNode("SHORT",NULL,NULL), NULL); 
                }
#line 3331 "y.tab.c"
    break;

  case 105: /* type_specifier: INT  */
#line 1147 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="int";
                    // $$ = createNode("type_specifier", createNode("INTEGER",NULL,NULL), NULL); 
                }
#line 3340 "y.tab.c"
    break;

  case 106: /* type_specifier: LONG  */
#line 1152 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="long";
                    // $$ = createNode("type_specifier", createNode("LONG",NULL,NULL), NULL); 
                }
#line 3349 "y.tab.c"
    break;

  case 107: /* type_specifier: FLOAT  */
#line 1157 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="float";
                    // $$ = createNode("type_specifier", createNode("FLOAT",NULL,NULL), NULL); 
                }
#line 3358 "y.tab.c"
    break;

  case 108: /* type_specifier: SIGNED  */
#line 1162 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="signed";
                    // $$ = createNode("type_specifier", createNode("SIGNED",NULL,NULL), NULL); 
                }
#line 3367 "y.tab.c"
    break;

  case 109: /* type_specifier: UNSIGNED  */
#line 1167 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="unsigned";
                    // $$ = createNode("type_specifier", createNode("UNSIGNED",NULL,NULL), NULL); 
                }
#line 3376 "y.tab.c"
    break;

  case 110: /* type_specifier: BOOL  */
#line 1172 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="bool";
                    // $$ = createNode("type_specifier", createNode("_BOOL",NULL,NULL), NULL); 
                }
#line 3385 "y.tab.c"
    break;

  case 111: /* type_specifier: COMPLEX  */
#line 1177 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="complex";
                    // $$ = createNode("type_specifier", createNode("_COMPLEX",NULL,NULL), NULL); 
                }
#line 3394 "y.tab.c"
    break;

  case 112: /* type_specifier: IMAGINARY  */
#line 1182 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="imaginary";
                    // $$ = createNode("type_specifier", createNode("_IMAGINARY",NULL,NULL), NULL); 
                }
#line 3403 "y.tab.c"
    break;

  case 113: /* type_specifier: DOUBLE  */
#line 1187 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="double";
                    // $$ = createNode("type_specifier", createNode("DOUBLE",NULL,NULL), NULL); 
                }
#line 3412 "y.tab.c"
    break;

  case 114: /* specifier_qualifier_list: type_specifier specifier_qualifier_list  */
#line 1196 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("specifier_qualifier_list", $1, $2);
                        }
#line 3420 "y.tab.c"
    break;

  case 115: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list  */
#line 1200 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("specifier_qualifier_list", $1, $2);
                        }
#line 3428 "y.tab.c"
    break;

  case 116: /* specifier_qualifier_list: type_specifier  */
#line 1204 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("specifier_qualifier_list", $1, NULL);
                        }
#line 3436 "y.tab.c"
    break;

  case 117: /* specifier_qualifier_list: type_qualifier  */
#line 1208 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("specifier_qualifier_list", $1, NULL);
                        }
#line 3444 "y.tab.c"
    break;

  case 118: /* type_qualifier: CONST  */
#line 1216 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$ = createNode("type_qualifier", createNode("CONST",NULL,NULL), NULL);
                }
#line 3452 "y.tab.c"
    break;

  case 119: /* type_qualifier: RESTRICT  */
#line 1220 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$ = createNode("type_qualifier", createNode("RESTRICT",NULL,NULL), NULL);
                }
#line 3460 "y.tab.c"
    break;

  case 120: /* type_qualifier: VOLATILE  */
#line 1224 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$ = createNode("type_qualifier", createNode("VOLATILE",NULL,NULL), NULL);
                }
#line 3468 "y.tab.c"
    break;

  case 121: /* function_specifier: INLINE  */
#line 1232 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("function_specifier", createNode("INLINE",NULL,NULL), NULL);
                    }
#line 3476 "y.tab.c"
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
#line 3491 "y.tab.c"
    break;

  case 123: /* declarator: direct_declarator  */
#line 1251 "TinyC3_22CS30027_22CS30019.y"
            {

            }
#line 3499 "y.tab.c"
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
#line 3512 "y.tab.c"
    break;

  case 125: /* direct_declarator: ROUND_BRACKET_OPEN declarator ROUND_BRACKET_CLOSE  */
#line 1268 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.SymbolPointer) = (yyvsp[-1].SymbolPointer);
                        //$$ = createNode("direct_declarator",createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$2), createNode("ROUND_BRACKET_CLOSE",NULL,NULL));
                    }
#line 3521 "y.tab.c"
    break;

  case 126: /* direct_declarator: direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list assignment_expression_opt SQUARE_BRACKET_CLOSE  */
#line 1273 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("SQUARE_BRACKET_OPEN",NULL,NULL)), createNode("ignore",$3,createNode("ignore",$4,createNode("SQUARE_BRACKET_CLOSE",NULL,NULL))));
                    }
#line 3529 "y.tab.c"
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
#line 3560 "y.tab.c"
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
#line 3585 "y.tab.c"
    break;

  case 129: /* direct_declarator: direct_declarator SQUARE_BRACKET_OPEN STATIC type_qualifier_list_opt assignment_expression SQUARE_BRACKET_CLOSE  */
#line 1325 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("SQUARE_BRACKET_OPEN",NULL,NULL)), createNode("ignore",createNode("ignore",createNode("STATIC",NULL,NULL),$4),createNode("ignore",$5,createNode("SQUARE_BRACKET_CLOSE",NULL,NULL))));
                    }
#line 3593 "y.tab.c"
    break;

  case 130: /* direct_declarator: direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list STATIC assignment_expression SQUARE_BRACKET_CLOSE  */
#line 1329 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("SQUARE_BRACKET_OPEN",NULL,NULL)), createNode("ignore",createNode("ignore",$3,createNode("STATIC",NULL,NULL)),createNode("ignore",$5,createNode("SQUARE_BRACKET_CLOSE",NULL,NULL))));
                    }
#line 3601 "y.tab.c"
    break;

  case 131: /* direct_declarator: direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list MUL SQUARE_BRACKET_CLOSE  */
#line 1333 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("SQUARE_BRACKET_OPEN",NULL,NULL)), createNode("ignore",createNode("ignore",$3,createNode("MUL",NULL,NULL)),createNode("SQUARE_BRACKET_CLOSE",NULL,NULL)));
                    }
#line 3609 "y.tab.c"
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
#line 3627 "y.tab.c"
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
#line 3645 "y.tab.c"
    break;

  case 134: /* direct_declarator: direct_declarator ROUND_BRACKET_OPEN identifier_list ROUND_BRACKET_CLOSE  */
#line 1365 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("ROUND_BRACKET_OPEN",NULL,NULL)), createNode("ignore",$3,createNode("ROUND_BRACKET_CLOSE",NULL,NULL)));
                    }
#line 3653 "y.tab.c"
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
#line 3669 "y.tab.c"
    break;

  case 136: /* type_qualifier_list_opt: %empty  */
#line 1384 "TinyC3_22CS30027_22CS30019.y"
                          {
                            //$$ = createNode("type_qualifier_list_opt",NULL,NULL);
                        }
#line 3677 "y.tab.c"
    break;

  case 137: /* type_qualifier_list_opt: type_qualifier_list  */
#line 1388 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("type_qualifier_list_opt",$1,NULL);
                        }
#line 3685 "y.tab.c"
    break;

  case 138: /* assignment_expression_opt: %empty  */
#line 1393 "TinyC3_22CS30027_22CS30019.y"
                             {
                            //$$ = createNode("assignment_expression_opt",NULL,NULL);
                            }
#line 3693 "y.tab.c"
    break;

  case 139: /* assignment_expression_opt: assignment_expression  */
#line 1397 "TinyC3_22CS30027_22CS30019.y"
                            {
                                //$$ = createNode("assignment_expression_opt",$1,NULL);
                            }
#line 3701 "y.tab.c"
    break;

  case 140: /* pointer: MUL type_qualifier_list_opt  */
#line 1405 "TinyC3_22CS30027_22CS30019.y"
        {
            (yyval.Type) = new SType("ptr");
            //$$=createNode("pointer",createNode("MUL",NULL,NULL), $2);
        }
#line 3710 "y.tab.c"
    break;

  case 141: /* pointer: MUL type_qualifier_list_opt pointer  */
#line 1410 "TinyC3_22CS30027_22CS30019.y"
        {
            (yyval.Type) = new SType("ptr",1,(yyvsp[0].Type));
            //$$=createNode("pointer",createNode("MUL",NULL,NULL) ,createNode("ignore",$2, $3));
        }
#line 3719 "y.tab.c"
    break;

  case 142: /* type_qualifier_list: type_qualifier  */
#line 1419 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("type_qualifier_list",$1,NULL);
                    }
#line 3727 "y.tab.c"
    break;

  case 143: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 1423 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("type_qualifier_list", $1, $2);
                    }
#line 3735 "y.tab.c"
    break;

  case 144: /* parameter_type_list: parameter_list  */
#line 1431 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("parameter_type_list",$1,NULL);
                    }
#line 3743 "y.tab.c"
    break;

  case 145: /* parameter_type_list: parameter_list COMMA ELLIPSIS  */
#line 1434 "TinyC3_22CS30027_22CS30019.y"
                                                    {
                        //$$=createNode("parameter_type_list", $1, createNode("ignore",createNode("COMMA",NULL,NULL),createNode("ELLIPSIS",NULL,NULL)));
                    }
#line 3751 "y.tab.c"
    break;

  case 146: /* parameter_list: parameter_declaration  */
#line 1442 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("parameter_list",$1,NULL);
                }
#line 3759 "y.tab.c"
    break;

  case 147: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 1446 "TinyC3_22CS30027_22CS30019.y"
               {
                //$$=createNode("parameter_list", createNode("ignore",$1,createNode("COMMA",NULL,NULL)), $3);
                }
#line 3767 "y.tab.c"
    break;

  case 148: /* parameter_declaration: declaration_specifiers declarator  */
#line 1454 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("parameter_declaration", $1, $2);
                    }
#line 3775 "y.tab.c"
    break;

  case 149: /* parameter_declaration: declaration_specifiers  */
#line 1458 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("parameter_declaration",$1,NULL);
                    }
#line 3783 "y.tab.c"
    break;

  case 150: /* identifier_list: IDENTIFIER  */
#line 1466 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("identifier_list",createNode("IDENTIFIER",NULL,NULL),NULL);
                }
#line 3791 "y.tab.c"
    break;

  case 151: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 1470 "TinyC3_22CS30027_22CS30019.y"
               {
                //$$=createNode("identifier_list", $1, createNode("ignore",createNode("COMMA",NULL,NULL),createNode("IDENTIFIER",NULL,NULL)));
                }
#line 3799 "y.tab.c"
    break;

  case 152: /* type_name: specifier_qualifier_list  */
#line 1478 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("type_name",$1,NULL);
            }
#line 3807 "y.tab.c"
    break;

  case 153: /* initializer: assignment_expression  */
#line 1486 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.SymbolPointer) = (yyvsp[0].Express)->Location;
                //$$=createNode("initializer",$1,NULL);
            }
#line 3816 "y.tab.c"
    break;

  case 154: /* initializer: CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE  */
#line 1491 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("initializer",createNode("ignore",createNode("CURLY_BRACKET_OPEN",NULL,NULL),$2),createNode("CURLY_BRACKET_CLOSE",NULL,NULL));
            }
#line 3824 "y.tab.c"
    break;

  case 155: /* initializer: CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE  */
#line 1495 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("initializer",createNode("ignore",createNode("CURLY_BRACKET_OPEN",NULL,NULL),$2),createNode("ignore",createNode("COMMA",NULL,NULL),createNode("CURLY_BRACKET_CLOSE",NULL,NULL)));
            }
#line 3832 "y.tab.c"
    break;

  case 156: /* initializer_list: designation_opt initializer  */
#line 1503 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("initializer_list",$1,$2);
                }
#line 3840 "y.tab.c"
    break;

  case 157: /* initializer_list: initializer_list COMMA designation_opt initializer  */
#line 1507 "TinyC3_22CS30027_22CS30019.y"
                 {
                    //$$=createNode("initializer_list",createNode("ignore",$1,createNode("COMMA",NULL,NULL)),createNode("ignore",$3,$4));
                }
#line 3848 "y.tab.c"
    break;

  case 158: /* designation_opt: designation  */
#line 1513 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("designation_opt",$1,NULL);
                }
#line 3856 "y.tab.c"
    break;

  case 159: /* designation_opt: %empty  */
#line 1517 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$ = createNode("designation_opt",NULL,NULL);
                }
#line 3864 "y.tab.c"
    break;

  case 160: /* designation: designator_list ASSIGN  */
#line 1525 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("designation",$1,createNode("ASSIGN",NULL,NULL));
            }
#line 3872 "y.tab.c"
    break;

  case 161: /* designator_list: designator  */
#line 1533 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("designator_list",$1,NULL);
                }
#line 3880 "y.tab.c"
    break;

  case 162: /* designator_list: designator_list designator  */
#line 1537 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("designator_list",$1,$2);
                }
#line 3888 "y.tab.c"
    break;

  case 163: /* designator: SQUARE_BRACKET_OPEN constant_expression SQUARE_BRACKET_CLOSE  */
#line 1545 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("designator",createNode("ignore",createNode("SQUARE_BRACKET_OPEN",NULL,NULL),$2),createNode("SQUARE_BRACKET_CLOSE",NULL,NULL));
            }
#line 3896 "y.tab.c"
    break;

  case 164: /* designator: DOT IDENTIFIER  */
#line 1549 "TinyC3_22CS30027_22CS30019.y"
             {
                //$$=createNode("designator",createNode("DOT",NULL,NULL),createNode("IDENTIFIER",NULL,NULL));
            }
#line 3904 "y.tab.c"
    break;

  case 165: /* statement: labeled_statement  */
#line 1560 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("statement",$1,NULL);
            }
#line 3912 "y.tab.c"
    break;

  case 166: /* statement: compound_statement  */
#line 1564 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Stateme) = (yyvsp[0].Stateme);
                //$$=createNode("statement",$1,NULL);
            }
#line 3921 "y.tab.c"
    break;

  case 167: /* statement: expression_statement  */
#line 1569 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Stateme) = new Statement();
                (yyval.Stateme)->NextList = (yyvsp[0].Express)->NextList;
                //$$=createNode("statement",$1,NULL);
            }
#line 3931 "y.tab.c"
    break;

  case 168: /* statement: selection_statement  */
#line 1575 "TinyC3_22CS30027_22CS30019.y"
            {
               (yyval.Stateme) = (yyvsp[0].Stateme);
                //$$=createNode("statement",$1,NULL);
            }
#line 3940 "y.tab.c"
    break;

  case 169: /* statement: iteration_statement  */
#line 1580 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Stateme) = (yyvsp[0].Stateme);
                //$$=createNode("statement",$1,NULL);
            }
#line 3949 "y.tab.c"
    break;

  case 170: /* statement: jump_statement  */
#line 1585 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Stateme) = (yyvsp[0].Stateme);
                //$$=createNode("statement",$1,NULL);
            }
#line 3958 "y.tab.c"
    break;

  case 171: /* loop_block: labeled_statement  */
#line 1592 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("statement",$1,NULL);
            }
#line 3966 "y.tab.c"
    break;

  case 172: /* loop_block: expression_statement  */
#line 1596 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Stateme) = new Statement();
                (yyval.Stateme)->NextList = (yyvsp[0].Express)->NextList;
                //$$=createNode("statement",$1,NULL);
            }
#line 3976 "y.tab.c"
    break;

  case 173: /* loop_block: selection_statement  */
#line 1602 "TinyC3_22CS30027_22CS30019.y"
            {
               (yyval.Stateme) = (yyvsp[0].Stateme);
                //$$=createNode("statement",$1,NULL);
            }
#line 3985 "y.tab.c"
    break;

  case 174: /* loop_block: iteration_statement  */
#line 1607 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Stateme) = (yyvsp[0].Stateme);
                //$$=createNode("statement",$1,NULL);
            }
#line 3994 "y.tab.c"
    break;

  case 175: /* loop_block: jump_statement  */
#line 1612 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Stateme) = (yyvsp[0].Stateme);
                //$$=createNode("statement",$1,NULL);
            }
#line 4003 "y.tab.c"
    break;

  case 176: /* labeled_statement: IDENTIFIER COLON statement  */
#line 1622 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=$$=createNode("labeled_statement",createNode("ignore",createNode("IDENTIFIER",NULL,NULL),createNode("COLON",NULL,NULL)),$3);
                    }
#line 4011 "y.tab.c"
    break;

  case 177: /* labeled_statement: CASE constant_expression COLON statement  */
#line 1626 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("labeled_statement",createNode("ignore",createNode("CASE",NULL,NULL),$2),createNode("ignore",createNode("CASE",NULL,NULL),$4));
                    }
#line 4019 "y.tab.c"
    break;

  case 178: /* labeled_statement: DEFAULT COLON statement  */
#line 1630 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("labeled_statement",createNode("ignore",createNode("DEFAULT",NULL,NULL),createNode("COLON",NULL,NULL)),$3);
                    }
#line 4027 "y.tab.c"
    break;

  case 179: /* compound_statement: CURLY_BRACKET_OPEN createST switch_table block_item_list_opt CURLY_BRACKET_CLOSE  */
#line 1638 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Stateme) = (yyvsp[-1].Stateme);
                        CurrentST = CurrentST->PtrToParent;
                        //$$=createNode("compound_statement",createNode("ignore",createNode("CURLY_BRACKET_OPEN",NULL,NULL),$2),createNode("CURLY_BRACKET_CLOSE",NULL,NULL));
                    }
#line 4037 "y.tab.c"
    break;

  case 180: /* createST: %empty  */
#line 1646 "TinyC3_22CS30027_22CS30019.y"
        {
            string New_ST = CurrentST->Name+"_"+BlockType+"_"+to_string(SymbolTableCount++);
            Symbol* TempSym = CurrentST->LookUp(New_ST);
            TempSym->NestedTable = new SymbolTable(New_ST);
            TempSym->Name = New_ST;
            TempSym->NestedTable->PtrToParent = CurrentST;
            TempSym->Type = new SType("block");
            RecentSymbol = TempSym;
        }
#line 4051 "y.tab.c"
    break;

  case 181: /* block_item_list_opt: %empty  */
#line 1658 "TinyC3_22CS30027_22CS30019.y"
                    {
                       (yyval.Stateme) = new Statement();
                        //$$ = createNode("block_item_list_opt",NULL,NULL);
                    }
#line 4060 "y.tab.c"
    break;

  case 182: /* block_item_list_opt: block_item_list  */
#line 1663 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Stateme) = (yyvsp[0].Stateme);
                        //$$=createNode("block_item_list_opt",$1,NULL);
                    }
#line 4069 "y.tab.c"
    break;

  case 183: /* block_item_list: block_item  */
#line 1672 "TinyC3_22CS30027_22CS30019.y"
                {
                    (yyval.Stateme) = (yyvsp[0].Stateme);
                    //$$=createNode("block_item_list",$1,NULL);
                }
#line 4078 "y.tab.c"
    break;

  case 184: /* block_item_list: block_item_list countinst block_item  */
#line 1677 "TinyC3_22CS30027_22CS30019.y"
                {
                    (yyval.Stateme) = (yyvsp[0].Stateme);
                    BackPath((yyvsp[-2].Stateme)->NextList,(yyvsp[-1].InstCount));
                    //$$=createNode("block_item_list",$1,$2);
                }
#line 4088 "y.tab.c"
    break;

  case 185: /* block_item: declaration  */
#line 1687 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Stateme) = new Statement();
                //$$=createNode("block_item",$1,NULL);
            }
#line 4097 "y.tab.c"
    break;

  case 186: /* block_item: statement  */
#line 1692 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Stateme) = (yyvsp[0].Stateme);
                //$$=createNode("block_item",$1,NULL);
            }
#line 4106 "y.tab.c"
    break;

  case 187: /* expression_statement: expression_opt SEMICOLON  */
#line 1701 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Express) = (yyvsp[-1].Express);
                        //$$=createNode("expression_statement",$1,createNode("SEMICOLON",NULL,NULL));
                    }
#line 4115 "y.tab.c"
    break;

  case 188: /* expression_opt: %empty  */
#line 1708 "TinyC3_22CS30027_22CS30019.y"
                {
                    (yyval.Express) = new Expression();
                    //$$ = createNode("expression_opt",NULL,NULL);
                }
#line 4124 "y.tab.c"
    break;

  case 189: /* expression_opt: expression  */
#line 1713 "TinyC3_22CS30027_22CS30019.y"
                {
                    (yyval.Express) = (yyvsp[0].Express);
                    //$$=createNode("expression_opt",$1,NULL);
                }
#line 4133 "y.tab.c"
    break;

  case 190: /* selection_statement: IF ROUND_BRACKET_OPEN expression newstatement ROUND_BRACKET_CLOSE countinst statement newstatement  */
#line 1722 "TinyC3_22CS30027_22CS30019.y"
                    {
                        BackPath((yyvsp[-4].Stateme)->NextList,QuadList.InstructionList.size());
                        itob((yyvsp[-5].Express));
                        (yyval.Stateme) = new Statement();
                        BackPath((yyvsp[-5].Express)->TrueList,(yyvsp[-2].InstCount));
                        list<int> ll = Merge((yyvsp[-5].Express)->FalseList,(yyvsp[-1].Stateme)->NextList);
                        (yyval.Stateme)->NextList = Merge(ll,(yyvsp[0].Stateme)->NextList);
                        //$$=createNode("selection_statement",createNode("ignore",createNode("IF",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3)),createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),createNode("ignore",$5,createNode("THEN",NULL,NULL))));
                    }
#line 4147 "y.tab.c"
    break;

  case 191: /* selection_statement: IF ROUND_BRACKET_OPEN expression newstatement ROUND_BRACKET_CLOSE countinst statement newstatement ELSE countinst statement  */
#line 1732 "TinyC3_22CS30027_22CS30019.y"
                    {
                        BackPath((yyvsp[-7].Stateme)->NextList,QuadList.InstructionList.size());
                        itob((yyvsp[-8].Express));
                        (yyval.Stateme) = new Statement();
                        BackPath((yyvsp[-8].Express)->TrueList,(yyvsp[-5].InstCount));
                        BackPath((yyvsp[-8].Express)->FalseList,(yyvsp[-1].InstCount));
                        list<int> ll = Merge((yyvsp[-4].Stateme)->NextList,(yyvsp[-3].Stateme)->NextList);
                        (yyval.Stateme)->NextList = Merge(ll,(yyvsp[0].Stateme)->NextList);
                        //$$=createNode("selection_statement",createNode("ignore",createNode("IF",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3)),createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),createNode("ignore",$5,createNode("ignore",createNode("ELSE",NULL,NULL),$7))));
                    }
#line 4162 "y.tab.c"
    break;

  case 192: /* selection_statement: SWITCH ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement  */
#line 1743 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("selection_statement",createNode("ignore",createNode("SWITCH",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3)),createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$5));
                    }
#line 4170 "y.tab.c"
    break;

  case 193: /* iteration_statement: WHILE whilestart ROUND_BRACKET_OPEN createST switch_table countinst expression ROUND_BRACKET_CLOSE countinst loop_block  */
#line 1751 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Stateme) = new Statement();
                        itob((yyvsp[-3].Express));
                        BackPath((yyvsp[0].Stateme)->NextList,(yyvsp[-4].InstCount));
                        BackPath((yyvsp[-3].Express)->TrueList,(yyvsp[-1].InstCount));
                        (yyval.Stateme)->NextList = (yyvsp[-3].Express)->FalseList;
                        QuadArray::Emit("goto",itos((yyvsp[-4].InstCount)));
                        BlockType="";
                        CurrentST = CurrentST->PtrToParent;
                        //$$=createNode("iteration_statement",createNode("ignore",createNode("WHILE",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3)),createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$5));
                    }
#line 4186 "y.tab.c"
    break;

  case 194: /* iteration_statement: WHILE whilestart ROUND_BRACKET_OPEN createST switch_table countinst expression ROUND_BRACKET_CLOSE countinst CURLY_BRACKET_OPEN block_item_list_opt CURLY_BRACKET_CLOSE  */
#line 1763 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Stateme) = new Statement();
                        itob((yyvsp[-5].Express));
                        BackPath((yyvsp[-1].Stateme)->NextList,(yyvsp[-6].InstCount));
                        BackPath((yyvsp[-5].Express)->TrueList,(yyvsp[-3].InstCount));
                        (yyval.Stateme)->NextList = (yyvsp[-5].Express)->FalseList;
                        QuadArray::Emit("goto",itos((yyvsp[-6].InstCount)));
                        BlockType="";
                        CurrentST = CurrentST->PtrToParent;
                        //$$=createNode("iteration_statement",createNode("ignore",createNode("WHILE",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3)),createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$5));
                    }
#line 4202 "y.tab.c"
    break;

  case 195: /* iteration_statement: DO dostart countinst loop_block countinst WHILE ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE SEMICOLON  */
#line 1775 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Stateme) = new Statement();
                        itob((yyvsp[-2].Express));
                        BackPath((yyvsp[-2].Express)->TrueList,(yyvsp[-7].InstCount));
                        BackPath((yyvsp[-6].Stateme)->NextList,(yyvsp[-5].InstCount));
                        (yyval.Stateme)->NextList = (yyvsp[-2].Express)->FalseList;
                        BlockType="";
                        //$$=createNode("iteration_statement",createNode("DO",NULL,NULL),createNode("ignore",$2,createNode("ignore",createNode("WHILE",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$5,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),createNode("SEMICOLON",NULL,NULL)))))));
                    }
#line 4216 "y.tab.c"
    break;

  case 196: /* iteration_statement: DO dostart countinst CURLY_BRACKET_OPEN block_item_list_opt CURLY_BRACKET_CLOSE countinst WHILE ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE SEMICOLON  */
#line 1785 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Stateme) = new Statement();
                        itob((yyvsp[-2].Express));
                        BackPath((yyvsp[-2].Express)->TrueList,(yyvsp[-9].InstCount));
                        BackPath((yyvsp[-7].Stateme)->NextList,(yyvsp[-5].InstCount));
                        (yyval.Stateme)->NextList = (yyvsp[-2].Express)->FalseList;
                        BlockType="";
                        //$$=createNode("iteration_statement",createNode("DO",NULL,NULL),createNode("ignore",$2,createNode("ignore",createNode("WHILE",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$5,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),createNode("SEMICOLON",NULL,NULL)))))));
                    }
#line 4230 "y.tab.c"
    break;

  case 197: /* iteration_statement: FOR forstart ROUND_BRACKET_OPEN createST switch_table expression_opt SEMICOLON countinst expression_opt SEMICOLON countinst expression_opt newstatement ROUND_BRACKET_CLOSE countinst loop_block  */
#line 1795 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Stateme) = new Statement();
                        itob((yyvsp[-7].Express));
                        BackPath((yyvsp[-7].Express)->TrueList,(yyvsp[-1].InstCount));
                        BackPath((yyvsp[-3].Stateme)->NextList,(yyvsp[-8].InstCount));
                        BackPath((yyvsp[0].Stateme)->NextList,(yyvsp[-5].InstCount));
                        QuadArray::Emit("goto",itos((yyvsp[-5].InstCount)));
                        (yyval.Stateme)->NextList = (yyvsp[-7].Express)->FalseList;
                        BlockType = "";
                        CurrentST = CurrentST->PtrToParent;
                        //$$=createNode("iteration_statement",createNode("FOR",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$3,createNode("ignore",createNode("SEMICOLON",NULL,NULL),createNode("ignore",$5,createNode("ignore",createNode("SEMICOLON",NULL,NULL),createNode("ignore",$7,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$9))))))));
                    }
#line 4247 "y.tab.c"
    break;

  case 198: /* iteration_statement: FOR forstart ROUND_BRACKET_OPEN createST switch_table expression_opt SEMICOLON countinst expression_opt SEMICOLON countinst expression_opt newstatement ROUND_BRACKET_CLOSE countinst CURLY_BRACKET_OPEN block_item_list_opt CURLY_BRACKET_CLOSE  */
#line 1808 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Stateme) = new Statement();
                        itob((yyvsp[-9].Express));
                        BackPath((yyvsp[-9].Express)->TrueList,(yyvsp[-3].InstCount));
                        BackPath((yyvsp[-5].Stateme)->NextList,(yyvsp[-10].InstCount));
                        BackPath((yyvsp[-1].Stateme)->NextList,(yyvsp[-7].InstCount));
                        QuadArray::Emit("goto",itos((yyvsp[-7].InstCount)));
                        (yyval.Stateme)->NextList = (yyvsp[-9].Express)->FalseList;
                        BlockType = "";
                        CurrentST = CurrentST->PtrToParent;
                        //$$=createNode("iteration_statement",createNode("FOR",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$3,createNode("ignore",createNode("SEMICOLON",NULL,NULL),createNode("ignore",$5,createNode("ignore",createNode("SEMICOLON",NULL,NULL),createNode("ignore",$7,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$9))))))));
                    }
#line 4264 "y.tab.c"
    break;

  case 199: /* iteration_statement: FOR forstart ROUND_BRACKET_OPEN createST switch_table declaration countinst expression_opt SEMICOLON countinst expression_opt newstatement ROUND_BRACKET_CLOSE countinst loop_block  */
#line 1821 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Stateme) = new Statement();
                        itob((yyvsp[-7].Express));
                        BackPath((yyvsp[-7].Express)->TrueList,(yyvsp[-1].InstCount));
                        BackPath((yyvsp[-4].Express)->NextList,(yyvsp[-8].InstCount));
                        BackPath((yyvsp[0].Stateme)->NextList,(yyvsp[-5].InstCount));
                        QuadArray::Emit("goto",itos((yyvsp[-5].InstCount)));
                        (yyval.Stateme)->NextList = (yyvsp[-7].Express)->FalseList;
                        BlockType = "";
                        CurrentST = CurrentST->PtrToParent;
                        //$$=createNode("iteration_statement",createNode("FOR",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$3,createNode("ignore",$4,createNode("ignore",createNode("SEMICOLON",NULL,NULL),createNode("ignore",$6,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$8)))))));
                    }
#line 4281 "y.tab.c"
    break;

  case 200: /* iteration_statement: FOR forstart ROUND_BRACKET_OPEN createST switch_table declaration countinst expression_opt SEMICOLON countinst expression_opt newstatement ROUND_BRACKET_CLOSE countinst CURLY_BRACKET_OPEN block_item_list_opt CURLY_BRACKET_CLOSE  */
#line 1834 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Stateme) = new Statement();
                        itob((yyvsp[-9].Express));
                        BackPath((yyvsp[-9].Express)->TrueList,(yyvsp[-3].InstCount));
                        BackPath((yyvsp[-6].Express)->NextList,(yyvsp[-10].InstCount));
                        BackPath((yyvsp[-1].Stateme)->NextList,(yyvsp[-7].InstCount));
                        QuadArray::Emit("goto",itos((yyvsp[-7].InstCount)));
                        (yyval.Stateme)->NextList = (yyvsp[-9].Express)->FalseList;
                        BlockType = "";
                        CurrentST = CurrentST->PtrToParent;
                        //$$=createNode("iteration_statement",createNode("FOR",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$3,createNode("ignore",$4,createNode("ignore",createNode("SEMICOLON",NULL,NULL),createNode("ignore",$6,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$8)))))));
                    }
#line 4298 "y.tab.c"
    break;

  case 201: /* forstart: %empty  */
#line 1849 "TinyC3_22CS30027_22CS30019.y"
        {
            BlockType="FOR";
        }
#line 4306 "y.tab.c"
    break;

  case 202: /* whilestart: %empty  */
#line 1855 "TinyC3_22CS30027_22CS30019.y"
         {
            BlockType="WHILE";
        }
#line 4314 "y.tab.c"
    break;

  case 203: /* dostart: %empty  */
#line 1861 "TinyC3_22CS30027_22CS30019.y"
         {
            BlockType="DO";
        }
#line 4322 "y.tab.c"
    break;

  case 204: /* jump_statement: GOTO IDENTIFIER SEMICOLON  */
#line 1869 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("jump_statement",createNode("GOTO",NULL,NULL),createNode("ignore",createNode("IDENTIFIER",NULL,NULL),createNode("SEMICOLON",NULL,NULL)));
                }
#line 4330 "y.tab.c"
    break;

  case 205: /* jump_statement: CONTINUE SEMICOLON  */
#line 1873 "TinyC3_22CS30027_22CS30019.y"
                {
                    (yyval.Stateme) = new Statement();
                    //$$=createNode("jump_statement",createNode("CONTINUE",NULL,NULL),createNode("SEMICOLON",NULL,NULL));
                }
#line 4339 "y.tab.c"
    break;

  case 206: /* jump_statement: BREAK SEMICOLON  */
#line 1878 "TinyC3_22CS30027_22CS30019.y"
                {
                    (yyval.Stateme) = new Statement();
                    //$$=createNode("jump_statement",createNode("BREAK",NULL,NULL),createNode("SEMICOLON",NULL,NULL));
                }
#line 4348 "y.tab.c"
    break;

  case 207: /* jump_statement: RETURN expression_opt SEMICOLON  */
#line 1883 "TinyC3_22CS30027_22CS30019.y"
                {
                    (yyval.Stateme) = new Statement();
                    QuadArray::Emit("return",(yyvsp[-1].Express)->Location->Name);
                //$$=createNode("jump_statement",createNode("RETURN",NULL,NULL),createNode("ignore",$2,createNode("SEMICOLON",NULL,NULL)));
                }
#line 4358 "y.tab.c"
    break;

  case 208: /* start_symbol: translation_unit  */
#line 1897 "TinyC3_22CS30027_22CS30019.y"
                {
                    //printTree($1,0);
                }
#line 4366 "y.tab.c"
    break;

  case 209: /* translation_unit: external_declaration  */
#line 1903 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("translation_unit",$1,NULL);
                }
#line 4374 "y.tab.c"
    break;

  case 210: /* translation_unit: translation_unit external_declaration  */
#line 1907 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("translation_unit",$1,$2);
                }
#line 4382 "y.tab.c"
    break;

  case 211: /* external_declaration: function_definition  */
#line 1915 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("external_declaration",$1,NULL);
                    }
#line 4390 "y.tab.c"
    break;

  case 212: /* external_declaration: declaration  */
#line 1919 "TinyC3_22CS30027_22CS30019.y"
                     {
                        //$$=createNode("external_declaration",$1,NULL);
                    }
#line 4398 "y.tab.c"
    break;

  case 213: /* function_definition: declaration_specifiers declarator declaration_list_opt CURLY_BRACKET_OPEN switch_table block_item_list_opt CURLY_BRACKET_CLOSE  */
#line 1927 "TinyC3_22CS30027_22CS30019.y"
                    {
                        CurrentST->PtrToParent = GlobalST;
                        SymbolTableCount=0;
                        CurrentST = GlobalST;
                        //$$=createNode("function_definition",createNode("ignore",$1,$2),createNode("ignore",$3,$4));
                    }
#line 4409 "y.tab.c"
    break;

  case 214: /* declaration_list_opt: %empty  */
#line 1936 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("declaration_list_opt",NULL,NULL);
                    }
#line 4417 "y.tab.c"
    break;

  case 215: /* declaration_list_opt: declaration_list  */
#line 1940 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("declaration_list_opt",$1,NULL);
                    }
#line 4425 "y.tab.c"
    break;

  case 216: /* declaration_list: declaration  */
#line 1948 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("declaration_list",$1,NULL);
                }
#line 4433 "y.tab.c"
    break;

  case 217: /* declaration_list: declaration_list declaration  */
#line 1952 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("declaration_list",$1,$2);
                }
#line 4441 "y.tab.c"
    break;


#line 4445 "y.tab.c"

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

#line 1959 "TinyC3_22CS30027_22CS30019.y"

void yyerror(string ERRORS) {
    cout << "Error :" << ERRORS << '\n';
}


