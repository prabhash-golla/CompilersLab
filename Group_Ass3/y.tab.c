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

#line 331 "y.tab.c"

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
  YYSYMBOL_AUTO = 3,                       /* AUTO  */
  YYSYMBOL_BREAK = 4,                      /* BREAK  */
  YYSYMBOL_CASE = 5,                       /* CASE  */
  YYSYMBOL_CHAR = 6,                       /* CHAR  */
  YYSYMBOL_CONST = 7,                      /* CONST  */
  YYSYMBOL_CONTINUE = 8,                   /* CONTINUE  */
  YYSYMBOL_DEFAULT = 9,                    /* DEFAULT  */
  YYSYMBOL_DO = 10,                        /* DO  */
  YYSYMBOL_DOUBLE = 11,                    /* DOUBLE  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_EXTERN = 13,                    /* EXTERN  */
  YYSYMBOL_REGISTER = 14,                  /* REGISTER  */
  YYSYMBOL_FLOAT = 15,                     /* FLOAT  */
  YYSYMBOL_FOR = 16,                       /* FOR  */
  YYSYMBOL_GOTO = 17,                      /* GOTO  */
  YYSYMBOL_IF = 18,                        /* IF  */
  YYSYMBOL_INLINE = 19,                    /* INLINE  */
  YYSYMBOL_INT = 20,                       /* INT  */
  YYSYMBOL_LONG = 21,                      /* LONG  */
  YYSYMBOL_RESTRICT = 22,                  /* RESTRICT  */
  YYSYMBOL_RETURN = 23,                    /* RETURN  */
  YYSYMBOL_SHORT = 24,                     /* SHORT  */
  YYSYMBOL_SIGNED = 25,                    /* SIGNED  */
  YYSYMBOL_SIZEOF = 26,                    /* SIZEOF  */
  YYSYMBOL_STATIC = 27,                    /* STATIC  */
  YYSYMBOL_SWITCH = 28,                    /* SWITCH  */
  YYSYMBOL_UNSIGNED = 29,                  /* UNSIGNED  */
  YYSYMBOL_VOID = 30,                      /* VOID  */
  YYSYMBOL_VOLATILE = 31,                  /* VOLATILE  */
  YYSYMBOL_WHILE = 32,                     /* WHILE  */
  YYSYMBOL_BOOL = 33,                      /* BOOL  */
  YYSYMBOL_COMPLEX = 34,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 35,                 /* IMAGINARY  */
  YYSYMBOL_SQUARE_BRACKET_OPEN = 36,       /* SQUARE_BRACKET_OPEN  */
  YYSYMBOL_SQUARE_BRACKET_CLOSE = 37,      /* SQUARE_BRACKET_CLOSE  */
  YYSYMBOL_ROUND_BRACKET_OPEN = 38,        /* ROUND_BRACKET_OPEN  */
  YYSYMBOL_ROUND_BRACKET_CLOSE = 39,       /* ROUND_BRACKET_CLOSE  */
  YYSYMBOL_CURLY_BRACKET_OPEN = 40,        /* CURLY_BRACKET_OPEN  */
  YYSYMBOL_CURLY_BRACKET_CLOSE = 41,       /* CURLY_BRACKET_CLOSE  */
  YYSYMBOL_DOT = 42,                       /* DOT  */
  YYSYMBOL_IMPLIES = 43,                   /* IMPLIES  */
  YYSYMBOL_INCREMENT = 44,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 45,                 /* DECREMENT  */
  YYSYMBOL_BITWISE_AND = 46,               /* BITWISE_AND  */
  YYSYMBOL_MUL = 47,                       /* MUL  */
  YYSYMBOL_PLUS = 48,                      /* PLUS  */
  YYSYMBOL_MINUS = 49,                     /* MINUS  */
  YYSYMBOL_BITWISE_NOT = 50,               /* BITWISE_NOT  */
  YYSYMBOL_NOT = 51,                       /* NOT  */
  YYSYMBOL_DIV = 52,                       /* DIV  */
  YYSYMBOL_MOD = 53,                       /* MOD  */
  YYSYMBOL_LEFT_SHIFT = 54,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 55,               /* RIGHT_SHIFT  */
  YYSYMBOL_LESS_THAN = 56,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 57,              /* GREATER_THAN  */
  YYSYMBOL_LESS_EQUAL = 58,                /* LESS_EQUAL  */
  YYSYMBOL_GREATER_EQUAL = 59,             /* GREATER_EQUAL  */
  YYSYMBOL_EQUAL = 60,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 61,                 /* NOT_EQUAL  */
  YYSYMBOL_BITWISE_XOR = 62,               /* BITWISE_XOR  */
  YYSYMBOL_BITWISE_OR = 63,                /* BITWISE_OR  */
  YYSYMBOL_AND = 64,                       /* AND  */
  YYSYMBOL_OR = 65,                        /* OR  */
  YYSYMBOL_QUESTION = 66,                  /* QUESTION  */
  YYSYMBOL_COLON = 67,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 68,                 /* SEMICOLON  */
  YYSYMBOL_ELLIPSIS = 69,                  /* ELLIPSIS  */
  YYSYMBOL_ASSIGN = 70,                    /* ASSIGN  */
  YYSYMBOL_MUL_EQUAL = 71,                 /* MUL_EQUAL  */
  YYSYMBOL_DIV_EQUAL = 72,                 /* DIV_EQUAL  */
  YYSYMBOL_MOD_EQUAL = 73,                 /* MOD_EQUAL  */
  YYSYMBOL_PLUS_EQUAL = 74,                /* PLUS_EQUAL  */
  YYSYMBOL_MINUS_EQUAL = 75,               /* MINUS_EQUAL  */
  YYSYMBOL_SHIFT_LEFT_EQUAL = 76,          /* SHIFT_LEFT_EQUAL  */
  YYSYMBOL_SHIFT_RIGHT_EQUAL = 77,         /* SHIFT_RIGHT_EQUAL  */
  YYSYMBOL_BITWISE_AND_EQUAL = 78,         /* BITWISE_AND_EQUAL  */
  YYSYMBOL_BITWISE_XOR_EQUAL = 79,         /* BITWISE_XOR_EQUAL  */
  YYSYMBOL_BITWISE_OR_EQUAL = 80,          /* BITWISE_OR_EQUAL  */
  YYSYMBOL_COMMA = 81,                     /* COMMA  */
  YYSYMBOL_IDENTIFIER = 82,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER = 83,                   /* INTEGER  */
  YYSYMBOL_FLOATING_CONSTANT = 84,         /* FLOATING_CONSTANT  */
  YYSYMBOL_CHARACTER_CONSTANT = 85,        /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 86,            /* STRING_LITERAL  */
  YYSYMBOL_THEN = 87,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 88,                  /* $accept  */
  YYSYMBOL_constant = 89,                  /* constant  */
  YYSYMBOL_primary_expression = 90,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 91,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list_opt = 92, /* argument_expression_list_opt  */
  YYSYMBOL_argument_expression_list = 93,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 94,          /* unary_expression  */
  YYSYMBOL_unary_operator = 95,            /* unary_operator  */
  YYSYMBOL_cast_expression = 96,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 97, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 98,       /* additive_expression  */
  YYSYMBOL_shift_expression = 99,          /* shift_expression  */
  YYSYMBOL_relational_expression = 100,    /* relational_expression  */
  YYSYMBOL_equality_expression = 101,      /* equality_expression  */
  YYSYMBOL_and_expression = 102,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 103,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 104,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 105,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 106,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 107,   /* conditional_expression  */
  YYSYMBOL_countinst = 108,                /* countinst  */
  YYSYMBOL_newstatement = 109,             /* newstatement  */
  YYSYMBOL_assignment_expression = 110,    /* assignment_expression  */
  YYSYMBOL_expression = 111,               /* expression  */
  YYSYMBOL_constant_expression = 112,      /* constant_expression  */
  YYSYMBOL_declaration = 113,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 114,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list_opt = 115, /* init_declarator_list_opt  */
  YYSYMBOL_init_declarator_list = 116,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 117,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 118,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 119,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 120, /* specifier_qualifier_list  */
  YYSYMBOL_type_qualifier = 121,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 122,       /* function_specifier  */
  YYSYMBOL_declarator = 123,               /* declarator  */
  YYSYMBOL_direct_declarator = 124,        /* direct_declarator  */
  YYSYMBOL_switch_table = 125,             /* switch_table  */
  YYSYMBOL_type_qualifier_list_opt = 126,  /* type_qualifier_list_opt  */
  YYSYMBOL_assignment_expression_opt = 127, /* assignment_expression_opt  */
  YYSYMBOL_pointer = 128,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 129,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 130,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 131,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 132,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 133,          /* identifier_list  */
  YYSYMBOL_type_name = 134,                /* type_name  */
  YYSYMBOL_initializer = 135,              /* initializer  */
  YYSYMBOL_initializer_list = 136,         /* initializer_list  */
  YYSYMBOL_designation_opt = 137,          /* designation_opt  */
  YYSYMBOL_designation = 138,              /* designation  */
  YYSYMBOL_designator_list = 139,          /* designator_list  */
  YYSYMBOL_designator = 140,               /* designator  */
  YYSYMBOL_statement = 141,                /* statement  */
  YYSYMBOL_loop_block = 142,               /* loop_block  */
  YYSYMBOL_labeled_statement = 143,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 144,       /* compound_statement  */
  YYSYMBOL_createST = 145,                 /* createST  */
  YYSYMBOL_block_item_list_opt = 146,      /* block_item_list_opt  */
  YYSYMBOL_block_item_list = 147,          /* block_item_list  */
  YYSYMBOL_block_item = 148,               /* block_item  */
  YYSYMBOL_expression_statement = 149,     /* expression_statement  */
  YYSYMBOL_expression_opt = 150,           /* expression_opt  */
  YYSYMBOL_selection_statement = 151,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 152,      /* iteration_statement  */
  YYSYMBOL_forstart = 153,                 /* forstart  */
  YYSYMBOL_whilestart = 154,               /* whilestart  */
  YYSYMBOL_dostart = 155,                  /* dostart  */
  YYSYMBOL_jump_statement = 156,           /* jump_statement  */
  YYSYMBOL_translation_unit = 157,         /* translation_unit  */
  YYSYMBOL_external_declaration = 158,     /* external_declaration  */
  YYSYMBOL_function_definition = 159,      /* function_definition  */
  YYSYMBOL_declaration_list_opt = 160,     /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 161          /* declaration_list  */
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
#define YYFINAL  43
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1261

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  216
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  396

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   342


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
      85,    86,    87
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    87,    87,    94,   101,   110,   118,   123,   131,   140,
     148,   169,   176,   180,   184,   192,   200,   204,   213,   217,
     224,   230,   240,   245,   251,   257,   293,   297,   305,   310,
     315,   320,   325,   330,   339,   344,   354,   372,   386,   400,
     418,   423,   437,   455,   460,   474,   492,   497,   514,   531,
     548,   569,   574,   593,   616,   621,   642,   647,   668,   673,
     694,   699,   714,   719,   734,   739,   762,   768,   776,   781,
     800,   819,   838,   857,   876,   895,   914,   934,   954,   974,
     998,  1003,  1010,  1022,  1030,  1034,  1038,  1042,  1046,  1050,
    1054,  1058,  1067,  1070,  1076,  1080,  1088,  1093,  1106,  1110,
    1114,  1118,  1126,  1131,  1136,  1141,  1146,  1151,  1156,  1161,
    1166,  1171,  1176,  1181,  1190,  1194,  1198,  1202,  1210,  1214,
    1218,  1226,  1234,  1245,  1253,  1262,  1267,  1271,  1298,  1319,
    1323,  1327,  1331,  1345,  1359,  1366,  1379,  1382,  1388,  1391,
    1399,  1404,  1413,  1417,  1425,  1429,  1436,  1440,  1448,  1452,
    1460,  1464,  1472,  1480,  1485,  1489,  1497,  1501,  1507,  1512,
    1519,  1527,  1531,  1539,  1543,  1554,  1558,  1563,  1569,  1574,
    1579,  1586,  1590,  1596,  1601,  1606,  1616,  1620,  1624,  1632,
    1641,  1654,  1658,  1667,  1672,  1682,  1687,  1696,  1704,  1708,
    1717,  1727,  1738,  1746,  1758,  1770,  1781,  1792,  1805,  1818,
    1831,  1847,  1853,  1859,  1866,  1870,  1875,  1880,  1894,  1898,
    1906,  1910,  1918,  1928,  1931,  1939,  1943
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
  "\"end of file\"", "error", "\"invalid token\"", "AUTO", "BREAK",
  "CASE", "CHAR", "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE",
  "EXTERN", "REGISTER", "FLOAT", "FOR", "GOTO", "IF", "INLINE", "INT",
  "LONG", "RESTRICT", "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC",
  "SWITCH", "UNSIGNED", "VOID", "VOLATILE", "WHILE", "BOOL", "COMPLEX",
  "IMAGINARY", "SQUARE_BRACKET_OPEN", "SQUARE_BRACKET_CLOSE",
  "ROUND_BRACKET_OPEN", "ROUND_BRACKET_CLOSE", "CURLY_BRACKET_OPEN",
  "CURLY_BRACKET_CLOSE", "DOT", "IMPLIES", "INCREMENT", "DECREMENT",
  "BITWISE_AND", "MUL", "PLUS", "MINUS", "BITWISE_NOT", "NOT", "DIV",
  "MOD", "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_THAN", "GREATER_THAN",
  "LESS_EQUAL", "GREATER_EQUAL", "EQUAL", "NOT_EQUAL", "BITWISE_XOR",
  "BITWISE_OR", "AND", "OR", "QUESTION", "COLON", "SEMICOLON", "ELLIPSIS",
  "ASSIGN", "MUL_EQUAL", "DIV_EQUAL", "MOD_EQUAL", "PLUS_EQUAL",
  "MINUS_EQUAL", "SHIFT_LEFT_EQUAL", "SHIFT_RIGHT_EQUAL",
  "BITWISE_AND_EQUAL", "BITWISE_XOR_EQUAL", "BITWISE_OR_EQUAL", "COMMA",
  "IDENTIFIER", "INTEGER", "FLOATING_CONSTANT", "CHARACTER_CONSTANT",
  "STRING_LITERAL", "THEN", "$accept", "constant", "primary_expression",
  "postfix_expression", "argument_expression_list_opt",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
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
  "forstart", "whilestart", "dostart", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list_opt", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-345)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-214)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1226,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,   -19,  1226,  1226,  1226,  1226,  1193,  -345,  -345,
     -19,   147,  -345,   -43,   -34,  -345,   973,   145,   -25,  -345,
    -345,  -345,  -345,  -345,  -345,    -1,  -345,    23,   147,  -345,
     -19,  1013,  -345,   -19,    41,  1226,   839,    24,   145,  -345,
    -345,  -345,  -345,    53,  1043,   809,    94,  1092,  1092,  -345,
    -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,   159,   297,  1106,  -345,   127,    -6,    -4,   175,
      42,    65,    72,    97,   126,    87,  -345,  -345,  -345,  -345,
    -345,   147,  -345,   162,   889,  -345,   278,   -16,   809,  -345,
    -345,   -15,   445,  -345,   445,   183,  1106,   129,    26,  1013,
    -345,   -21,  -345,   809,  -345,  -345,  1106,  1106,   154,   155,
    -345,  -345,  1106,  1106,  1106,  1106,  1106,  1106,  1106,  1106,
    1106,  1106,  1106,  -345,  -345,  1106,  1106,  1106,  1106,  1106,
    1106,  1106,  1106,  1106,  1106,  1106,  1106,  1106,  1106,  1106,
    1106,  1106,  1106,   179,   315,  1106,  -345,  1106,   201,  -345,
     209,  -345,   -19,   208,   168,  -345,  -345,   169,   211,  -345,
    1106,  -345,  -345,  1028,  -345,   216,  -345,  -345,   151,  -345,
    -345,  -345,   215,   -17,   218,   174,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,   127,   127,    -6,    -6,    -4,    -4,    -4,
      -4,   175,   175,    42,    65,    72,    97,   126,  -345,   190,
    1106,   192,   195,  -345,  -345,   182,   227,  1106,   229,  -345,
    -345,   202,   191,  -345,  -345,  -345,  -345,   230,   232,  -345,
    -345,   207,  -345,  -345,  -345,   239,   240,  -345,  -345,  -345,
    -345,  1011,  -345,   243,  -345,    94,  -345,  -345,  -345,  1013,
     243,  -345,  -345,  1106,  1106,  -345,   213,  -345,   532,   247,
     250,   222,  1106,   228,  1106,   257,  -345,   532,  -345,   399,
    -345,  -345,  -345,  -345,  -345,    90,  -345,  -345,   191,   532,
    -345,  -345,  -345,  -345,  -345,   191,  -345,   -13,  -345,   315,
    -345,  -345,  -345,   172,   234,  -345,  -345,  -345,  -345,   265,
     532,  -345,   269,  -345,  -345,  -345,   728,   483,  -345,  -345,
    -345,  -345,  1106,   315,   282,  -345,  -345,  -345,  -345,  -345,
    -345,   248,   532,  1106,  -345,   274,   313,  1106,  -345,  -345,
       1,   320,  -345,   286,  1106,   344,  -345,   319,  1106,  -345,
     290,  -345,   581,  -345,    38,  1106,  -345,   532,   315,  -345,
    1106,   310,  -345,  1106,  -345,   338,    39,  -345,   341,  -345,
    -345,   314,  -345,   342,  -345,   630,  -345,   315,  -345,   679,
     343,   315,  -345,  -345,   345,  -345
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    99,   103,   118,   113,    98,   100,   107,   121,   105,
     106,   119,   104,   108,   101,   109,   102,   120,   110,   111,
     112,   211,    92,    84,    85,    86,    87,     0,   208,   210,
       0,   136,   124,     0,    93,    94,    96,   123,     0,    88,
      89,    90,    91,     1,   209,     0,   142,   140,   137,    83,
       0,     0,   215,    92,     0,   214,     0,   135,   122,   125,
     141,   143,    95,    96,     0,     0,   159,     0,     0,    28,
      29,    30,    31,    32,    33,     5,     2,     3,     4,     7,
       6,     9,    22,    34,     0,    36,    40,    43,    46,    51,
      54,    56,    58,    60,    62,    64,    68,   153,    97,   135,
     216,   136,   128,     0,   138,   150,     0,     0,     0,    26,
      80,     0,   116,   152,   117,     0,     0,     0,     0,     0,
     158,     0,   161,     0,    23,    24,     0,    18,     0,     0,
      14,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   181,     0,   127,     0,    29,   139,
       0,   133,   149,     0,   144,   146,   134,     0,     0,     8,
       0,   114,   115,     0,    82,     0,   164,   154,   159,   156,
     160,   162,     0,     0,     0,    19,    20,    12,    13,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      37,    38,    39,    41,    42,    44,    45,    47,    48,    49,
      50,    52,    53,    55,    57,    59,    61,    63,    66,     0,
       0,     0,     0,   203,   201,     0,     0,   188,     0,   202,
     180,     5,   189,   185,   186,   165,   166,     0,    66,   183,
     167,     0,   168,   169,   170,     0,     0,   131,   126,   148,
     132,     0,   151,    27,    81,   159,    35,   163,   155,     0,
       0,    10,    11,     0,     0,   206,     0,   205,   188,   180,
       0,     0,     0,     0,     0,     0,   135,   188,   212,   188,
     187,   129,   130,   145,   147,     0,   157,    21,    67,   188,
     178,   180,   135,   180,   204,    67,   207,     0,   180,   181,
     176,   184,    16,   159,     0,   177,   135,    66,   135,     0,
     188,   135,     0,    17,    66,    66,   188,   188,    66,   192,
      66,   179,     0,   181,     0,   171,   172,   173,   174,   175,
      66,     0,   188,     0,    65,     0,     0,   188,    66,    67,
       0,     0,    66,     0,   188,   190,    66,     0,     0,    66,
       0,    66,   188,    66,     0,   188,    66,   188,   181,   193,
       0,     0,    67,   188,   191,     0,     0,   195,     0,    67,
     194,     0,    66,     0,   196,   188,    66,   181,   199,   188,
       0,   181,   197,   200,     0,   198
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -345,  -345,  -345,  -345,  -345,  -345,   -62,  -345,   -73,    16,
      55,    89,    59,   231,   226,   233,   235,   225,  -345,  -113,
    -100,  -183,     5,   -64,   158,     0,     7,  -345,  -345,   340,
    -345,    86,   115,     4,  -345,   -14,   353,   -95,   291,  -345,
     347,   339,  -345,  -345,   150,  -345,   -94,  -110,   170,  -178,
    -345,  -345,   317,  -241,  -344,  -314,  -345,  -146,  -205,  -345,
     152,  -309,  -198,  -212,  -201,  -345,  -345,  -345,  -150,  -345,
     409,  -345,  -345,  -345
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    80,    81,    82,   194,   195,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
     274,   163,   110,   242,   185,   243,    53,    33,    34,    35,
      23,    24,   113,    25,    26,    63,    37,   106,    47,   170,
      38,    48,   173,   174,   175,   107,   115,    98,   118,   119,
     120,   121,   122,   244,   334,   245,   246,   286,   247,   248,
     249,   250,   251,   252,   253,   280,   285,   279,   254,    27,
      28,    29,    54,    55
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,   111,   109,   184,   164,   124,   125,    22,    36,   189,
     269,   144,   335,    30,   178,   116,    45,   336,   369,    30,
     271,   117,   143,   176,   179,    49,   320,    21,    31,   192,
      39,    40,    41,    42,    22,    46,    52,   300,    59,   283,
     356,   388,   148,   149,   111,   392,   310,    50,   335,   190,
     150,   151,    61,   336,   143,   100,    97,    32,   315,   111,
      46,   103,   193,    32,   180,   177,   180,   187,   180,   114,
      31,   335,   210,   211,   212,   335,   336,   371,   381,   329,
     336,    99,   180,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   349,   156,   157,   322,    46,   105,   188,    61,   169,
     266,   158,   114,   172,   337,   314,   114,   184,   114,   180,
     180,   143,   319,    51,    97,   338,   374,   114,   345,   341,
     116,   312,   196,   302,   159,   269,   117,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   289,   353,
     337,   112,   162,   -67,     3,   316,   360,   318,   259,   296,
     160,   338,   321,   375,   213,   214,   355,   372,   143,    11,
     255,   313,   256,   337,   145,   379,   339,   337,    17,   146,
     147,    56,   390,    57,   338,   264,   394,   116,   338,   378,
     161,   309,   268,   117,   112,   126,   383,   127,   112,   166,
     112,   128,   129,   130,   131,   215,   216,   317,   116,   112,
     298,   186,   339,   323,   117,   221,   222,   326,   305,   344,
     307,   325,   183,   327,   332,   333,   330,   181,   342,   182,
     343,   152,   153,   154,   155,   339,   197,   198,   257,   339,
     347,   217,   218,   219,   220,   228,   258,   260,   354,   261,
     263,   262,   358,   267,   270,   273,   362,   272,   275,   365,
     277,   367,   278,   370,   281,   282,   373,   284,   172,   287,
     143,   288,   180,  -182,    97,   290,   291,   292,   297,   350,
     299,     1,   385,   265,     2,     3,   389,   301,   303,     4,
     304,     5,     6,     7,   364,   308,   306,     8,     9,    10,
      11,   324,    12,    13,   328,    14,   376,    15,    16,    17,
     331,    18,    19,    20,   346,   351,   348,   171,     1,   229,
     230,     2,     3,   231,   232,   233,     4,   340,     5,     6,
       7,   234,   235,   236,     8,     9,    10,    11,   237,    12,
      13,    64,    14,   238,    15,    16,    17,   239,    18,    19,
      20,   352,   357,    65,   359,   240,   361,   363,   366,    67,
      68,    69,    70,    71,    72,    73,    74,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   377,   380,
     382,   386,   384,  -188,   393,   224,   395,   227,   276,   223,
      62,    58,   165,   225,    60,   104,   226,   241,    76,    77,
      78,    79,     1,   229,   230,     2,     3,   231,   232,   233,
       4,   294,     5,     6,     7,   234,   235,   236,     8,     9,
      10,    11,   237,    12,    13,    64,    14,   238,    15,    16,
      17,   239,    18,    19,    20,   295,    44,    65,   191,   240,
       0,   311,     0,    67,    68,    69,    70,    71,    72,    73,
      74,     2,     3,     0,     0,     0,     4,     0,     0,     0,
       7,     0,     0,     0,     0,     9,    10,    11,     0,    12,
      13,     0,     0,     0,    15,    16,    17,     0,    18,    19,
      20,   241,    76,    77,    78,    79,     1,     0,     0,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,    11,     0,    12,    13,    64,
      14,     0,    15,    16,    17,     0,    18,    19,    20,     0,
       0,    65,     0,     0,     0,     0,     0,    67,    68,    69,
      70,    71,    72,    73,    74,     0,   229,   230,     0,     0,
     231,   232,   233,     0,     0,     0,     0,     0,   234,   235,
     236,     0,     0,     0,     0,   237,     0,     0,    64,     0,
     238,     0,     0,     0,   239,    75,    76,    77,    78,    79,
      65,     0,   240,     0,     0,     0,    67,    68,    69,    70,
      71,    72,    73,    74,     0,   229,   230,     0,     0,   231,
     232,   233,     0,     0,     0,     0,     0,   234,   235,   236,
       0,     0,     0,     0,   237,     0,     0,    64,     0,   238,
       0,     0,     0,   239,   241,    76,    77,    78,    79,    65,
       0,   368,     0,     0,     0,    67,    68,    69,    70,    71,
      72,    73,    74,     0,   229,   230,     0,     0,   231,   232,
     233,     0,     0,     0,     0,     0,   234,   235,   236,     0,
       0,     0,     0,   237,     0,     0,    64,     0,   238,     0,
       0,     0,   239,   241,    76,    77,    78,    79,    65,     0,
     387,     0,     0,     0,    67,    68,    69,    70,    71,    72,
      73,    74,     0,   229,   230,     0,     0,   231,   232,   233,
       0,     0,     0,     0,     0,   234,   235,   236,     0,     0,
       0,     0,   237,     0,     0,    64,     0,   238,     0,     0,
       0,   239,   241,    76,    77,    78,    79,    65,     0,   391,
       0,     0,     0,    67,    68,    69,    70,    71,    72,    73,
      74,     0,   229,   230,     0,     0,   231,   232,   233,     0,
       0,     0,     0,     0,   234,   235,   236,     0,     0,     0,
       0,   237,     0,     0,    64,     0,   238,     0,     0,     0,
     239,   241,    76,    77,    78,    79,    65,     0,     0,     0,
       0,     0,    67,    68,    69,    70,    71,    72,    73,    74,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     241,    76,    77,    78,    79,     2,     3,     0,     0,     0,
       4,     0,     0,     0,     7,     0,     0,     0,     0,     9,
      10,    11,     0,    12,    13,    64,     0,     0,    15,    16,
      17,     0,    18,    19,    20,     0,     3,    65,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,    72,    73,
      74,    11,     0,     0,     0,    64,   101,     0,     0,     0,
      17,     0,     0,     0,     0,     0,   102,    65,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,     0,     0,     0,    64,   167,     0,     0,     0,
      17,    75,    76,    77,    78,    79,     0,    65,     0,     0,
       0,     0,     0,    67,    68,    69,   168,    71,    72,    73,
      74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,    76,    77,    78,    79,     1,     0,     0,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,    11,     0,    12,    13,     0,
      14,     0,    15,    16,    17,     0,    18,    19,    20,     0,
       0,     0,     0,  -213,     1,     0,     0,     2,     3,     0,
       0,     0,     4,     0,     5,     6,     7,     0,     0,     0,
       8,     9,    10,    11,     0,    12,    13,     0,    14,    64,
      15,    16,    17,    51,    18,    19,    20,     0,     0,     0,
       0,    65,     0,    66,    64,     0,     0,    67,    68,    69,
      70,    71,    72,    73,    74,     0,    65,     0,   265,    64,
       0,     0,    67,    68,    69,    70,    71,    72,    73,    74,
     293,   108,     0,     0,     0,     0,     0,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,     0,     0,     0,    64,     0,
       0,     0,     0,     0,     0,    75,    76,    77,    78,    79,
     123,     0,    64,     0,     0,     0,    67,    68,    69,    70,
      71,    72,    73,    74,    65,     0,     0,     0,     0,     0,
      67,    68,    69,    70,    71,    72,    73,    74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    43,     0,     0,     1,     0,     0,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,    11,     0,    12,    13,     0,
      14,     0,    15,    16,    17,     0,    18,    19,    20,     1,
       0,     0,     2,     3,     0,     0,     0,     4,     0,     5,
       6,     7,     0,     0,     0,     8,     9,    10,    11,     0,
      12,    13,     0,    14,     0,    15,    16,    17,     0,    18,
      19,    20
};

static const yytype_int16 yycheck[] =
{
       0,    65,    64,   116,    99,    67,    68,     0,    22,   119,
     188,    84,   326,    38,   108,    36,    30,   326,   362,    38,
      37,    42,    84,    39,    39,    68,    39,    27,    47,   123,
      23,    24,    25,    26,    27,    31,    36,   278,    39,   237,
      39,   385,    48,    49,   108,   389,   287,    81,   362,    70,
      54,    55,    48,   362,   116,    55,    51,    82,   299,   123,
      56,    56,   126,    82,    81,    81,    81,    41,    81,    65,
      47,   385,   145,   146,   147,   389,   385,    39,    39,   320,
     389,    40,    81,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   342,    60,    61,   309,   101,    82,    81,   104,   104,
     183,    46,   108,   106,   326,   298,   112,   230,   114,    81,
      81,   183,   305,    70,   119,   326,   367,   123,   333,   327,
      36,    41,   127,   279,    62,   313,    42,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   248,   347,
     362,    65,    65,    66,     7,   301,   354,   303,   172,   269,
      63,   362,   308,   368,   148,   149,   349,   365,   230,    22,
     165,    81,   167,   385,    47,   373,   326,   389,    31,    52,
      53,    36,   387,    38,   385,   180,   391,    36,   389,   372,
      64,   286,    41,    42,   108,    36,   379,    38,   112,    37,
     114,    42,    43,    44,    45,   150,   151,   302,    36,   123,
     274,    82,   362,    41,    42,   156,   157,   317,   282,   332,
     284,   316,    39,   318,   324,   325,   321,   112,   328,   114,
     330,    56,    57,    58,    59,   385,    82,    82,    37,   389,
     340,   152,   153,   154,   155,    66,    37,    39,   348,    81,
      39,    82,   352,    37,    39,    81,   356,    39,    68,   359,
      68,   361,    67,   363,    82,    38,   366,    38,   261,    67,
     332,    41,    81,    41,   269,    68,    37,    37,   273,   343,
      67,     3,   382,    40,     6,     7,   386,    40,    38,    11,
      68,    13,    14,    15,   358,    38,    68,    19,    20,    21,
      22,    67,    24,    25,    39,    27,   370,    29,    30,    31,
      41,    33,    34,    35,    32,    41,    68,    39,     3,     4,
       5,     6,     7,     8,     9,    10,    11,   327,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    38,    32,    38,    68,    40,    12,    38,    68,    44,
      45,    46,    47,    48,    49,    50,    51,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    68,    41,
      39,    39,    68,    68,    41,   159,    41,   162,   230,   158,
      50,    38,   101,   160,    47,    56,   161,    82,    83,    84,
      85,    86,     3,     4,     5,     6,     7,     8,     9,    10,
      11,   261,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,   265,    27,    38,   121,    40,
      -1,   289,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,     6,     7,    -1,    -1,    -1,    11,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,    24,
      25,    -1,    -1,    -1,    29,    30,    31,    -1,    33,    34,
      35,    82,    83,    84,    85,    86,     3,    -1,    -1,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    22,    -1,    24,    25,    26,
      27,    -1,    29,    30,    31,    -1,    33,    34,    35,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      47,    48,    49,    50,    51,    -1,     4,     5,    -1,    -1,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    -1,    -1,    -1,    -1,    23,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    32,    82,    83,    84,    85,    86,
      38,    -1,    40,    -1,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    -1,     4,     5,    -1,    -1,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    26,    -1,    28,
      -1,    -1,    -1,    32,    82,    83,    84,    85,    86,    38,
      -1,    40,    -1,    -1,    -1,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,     4,     5,    -1,    -1,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    26,    -1,    28,    -1,
      -1,    -1,    32,    82,    83,    84,    85,    86,    38,    -1,
      40,    -1,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    51,    -1,     4,     5,    -1,    -1,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    18,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    26,    -1,    28,    -1,    -1,
      -1,    32,    82,    83,    84,    85,    86,    38,    -1,    40,
      -1,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,     4,     5,    -1,    -1,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    16,    17,    18,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,
      32,    82,    83,    84,    85,    86,    38,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    83,    84,    85,    86,     6,     7,    -1,    -1,    -1,
      11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    20,
      21,    22,    -1,    24,    25,    26,    -1,    -1,    29,    30,
      31,    -1,    33,    34,    35,    -1,     7,    38,    -1,    -1,
      -1,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,    22,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,
      -1,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,    82,    83,    84,    85,    86,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,
      31,    82,    83,    84,    85,    86,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    83,    84,    85,    86,     3,    -1,    -1,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    22,    -1,    24,    25,    -1,
      27,    -1,    29,    30,    31,    -1,    33,    34,    35,    -1,
      -1,    -1,    -1,    40,     3,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      19,    20,    21,    22,    -1,    24,    25,    -1,    27,    26,
      29,    30,    31,    70,    33,    34,    35,    -1,    -1,    -1,
      -1,    38,    -1,    40,    26,    -1,    -1,    44,    45,    46,
      47,    48,    49,    50,    51,    -1,    38,    -1,    40,    26,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    51,
      69,    38,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      47,    48,    49,    50,    51,    82,    83,    84,    85,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    83,    84,    85,    86,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    83,    84,    85,    86,
      38,    -1,    26,    -1,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    38,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    47,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    83,    84,    85,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      84,    85,    86,     0,    -1,    -1,     3,    -1,    -1,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    22,    -1,    24,    25,    -1,
      27,    -1,    29,    30,    31,    -1,    33,    34,    35,     3,
      -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    21,    22,    -1,
      24,    25,    -1,    27,    -1,    29,    30,    31,    -1,    33,
      34,    35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    22,    24,    25,    27,    29,    30,    31,    33,    34,
      35,   113,   114,   118,   119,   121,   122,   157,   158,   159,
      38,    47,    82,   115,   116,   117,   123,   124,   128,   114,
     114,   114,   114,     0,   158,   123,   121,   126,   129,    68,
      81,    70,   113,   114,   160,   161,    36,    38,   124,    39,
     128,   121,   117,   123,    26,    38,    40,    44,    45,    46,
      47,    48,    49,    50,    51,    82,    83,    84,    85,    86,
      89,    90,    91,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   110,   135,    40,
     113,    27,    37,   110,   129,    82,   125,   133,    38,    94,
     110,   111,   119,   120,   121,   134,    36,    42,   136,   137,
     138,   139,   140,    38,    94,    94,    36,    38,    42,    43,
      44,    45,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    94,    96,    47,    52,    53,    48,    49,
      54,    55,    56,    57,    58,    59,    60,    61,    46,    62,
      63,    64,    65,   109,   125,   126,    37,    27,    47,   110,
     127,    39,   114,   130,   131,   132,    39,    81,   134,    39,
      81,   120,   120,    39,   107,   112,    82,    41,    81,   135,
      70,   140,   134,   111,    92,    93,   110,    82,    82,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
      96,    96,    96,    97,    97,    98,    98,    99,    99,    99,
      99,   100,   100,   101,   102,   103,   104,   105,    66,     4,
       5,     8,     9,    10,    16,    17,    18,    23,    28,    32,
      40,    82,   111,   113,   141,   143,   144,   146,   147,   148,
     149,   150,   151,   152,   156,   110,   110,    37,    37,   123,
      39,    81,    82,    39,   110,    40,    96,    37,    41,   137,
      39,    37,    39,    81,   108,    68,   112,    68,    67,   155,
     153,    82,    38,   150,    38,   154,   145,    67,    41,   108,
      68,    37,    37,    69,   132,   136,   135,   110,   111,    67,
     141,    40,   145,    38,    68,   111,    68,   111,    38,   125,
     141,   148,    41,    81,   109,   141,   145,   125,   145,   109,
      39,   145,   146,    41,    67,   125,   108,   125,    39,   141,
     125,    41,   108,   108,   142,   143,   149,   151,   152,   156,
     113,   150,   108,   108,   107,   146,    32,   108,    68,   141,
     111,    41,    38,   150,   108,   109,    39,    32,   108,    68,
     150,    12,   108,    38,   111,   108,    68,   108,    40,   142,
     108,    39,   150,   108,   141,   146,   111,    68,   109,   150,
      41,    39,    39,   109,    68,   108,    39,    40,   142,   108,
     146,    40,   142,    41,   146,    41
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    89,    89,    90,    90,    90,    90,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    92,    92,
      93,    93,    94,    94,    94,    94,    94,    94,    95,    95,
      95,    95,    95,    95,    96,    96,    97,    97,    97,    97,
      98,    98,    98,    99,    99,    99,   100,   100,   100,   100,
     100,   101,   101,   101,   102,   102,   103,   103,   104,   104,
     105,   105,   106,   106,   107,   107,   108,   109,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     111,   111,   112,   113,   114,   114,   114,   114,   114,   114,
     114,   114,   115,   115,   116,   116,   117,   117,   118,   118,
     118,   118,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   120,   120,   120,   120,   121,   121,
     121,   122,   123,   123,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   125,   126,   126,   127,   127,
     128,   128,   129,   129,   130,   130,   131,   131,   132,   132,
     133,   133,   134,   135,   135,   135,   136,   136,   137,   137,
     138,   139,   139,   140,   140,   141,   141,   141,   141,   141,
     141,   142,   142,   142,   142,   142,   143,   143,   143,   144,
     145,   146,   146,   147,   147,   148,   148,   149,   150,   150,
     151,   151,   151,   152,   152,   152,   152,   152,   152,   152,
     152,   153,   154,   155,   156,   156,   156,   156,   157,   157,
     158,   158,   159,   160,   160,   161,   161
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
       8,    11,     5,    10,    12,    12,    14,    16,    18,    15,
      17,     0,     0,     0,     3,     2,     2,     3,     1,     2,
       1,     1,     7,     0,     1,     1,     2
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
#line 88 "TinyC3_22CS30027_22CS30019.y"
            { 
                (yyval.Express) = new Expression();
                (yyval.Express)->Location = SymbolTable::GenTemp(new SType("int"),itos((yyvsp[0].INTVAL)));
                QuadArray::Emit("=",(yyval.Express)->Location->Name,(yyvsp[0].INTVAL));
                //$$ = createNode("constant",createNode("INTEGER", NULL, NULL),NULL); 
            }
#line 1955 "y.tab.c"
    break;

  case 3: /* constant: FLOATING_CONSTANT  */
#line 95 "TinyC3_22CS30027_22CS30019.y"
            { 
                (yyval.Express) = new Expression();
                (yyval.Express)->Location = SymbolTable::GenTemp(new SType("float"),ftos((yyvsp[0].FLOATVAL)));
                QuadArray::Emit("=",(yyval.Express)->Location->Name,(yyvsp[0].FLOATVAL));
                //$$ = createNode("constant",createNode("FLOATING_CONSTANT", NULL, NULL),NULL); 
            }
#line 1966 "y.tab.c"
    break;

  case 4: /* constant: CHARACTER_CONSTANT  */
#line 102 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Express) = new Expression();
                (yyval.Express)->Location = SymbolTable::GenTemp(new SType("char"),string((yyvsp[0].CHARVAL)));
                QuadArray::Emit("=",(yyval.Express)->Location->Name,(yyvsp[0].CHARVAL));
                //$$ = createNode("constant",createNode("CHARACTER_CONSTANT", NULL, NULL),NULL); 
            }
#line 1977 "y.tab.c"
    break;

  case 5: /* primary_expression: IDENTIFIER  */
#line 111 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        Symbol* Temp = CurrentST->LookUp(Globe);
                        (yyval.Express) = new Expression();
                        (yyval.Express)->Location = Temp;
                        (yyval.Express)->Type = "non_bool";
                        //$$ = createNode("primary_expression",createNode("IDENTIFIER", NULL, NULL),NULL); 
                    }
#line 1989 "y.tab.c"
    break;

  case 6: /* primary_expression: constant  */
#line 119 "TinyC3_22CS30027_22CS30019.y"
                    { 
                       (yyval.Express) = (yyvsp[0].Express);
                        //$$ = createNode("primary_expression",$1,NULL); 
                    }
#line 1998 "y.tab.c"
    break;

  case 7: /* primary_expression: STRING_LITERAL  */
#line 124 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        (yyval.Express) = new Expression();
                        (yyval.Express)->Location = SymbolTable::GenTemp(new SType("ptr"),string((yyvsp[0].CHARVAL)));
                        // QuadArray::Emit("=",$$->LocalST->Name,$1);
                        (yyval.Express)->Location->Type->ArrType = new SType("char");
                        //$$ = createNode("primary_expression",createNode("STRING_LITERAL", NULL, NULL),NULL); 
                    }
#line 2010 "y.tab.c"
    break;

  case 8: /* primary_expression: ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE  */
#line 132 "TinyC3_22CS30027_22CS30019.y"
                    {   
                        (yyval.Express) = (yyvsp[-1].Express);
                        //$$ = createNode("primary_expression", createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$2), createNode("ROUND_BRACKET_CLOSE",NULL,NULL)); 
                    }
#line 2019 "y.tab.c"
    break;

  case 9: /* postfix_expression: primary_expression  */
#line 141 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        (yyval.Array)  = new ArrayType();
                        (yyval.Array)->Location = (yyvsp[0].Express)->Location;
                        (yyval.Array)->Array = (yyvsp[0].Express)->Location;
                        (yyval.Array)->Type = (yyvsp[0].Express)->Location->Type;
                        //$$ = createNode("postfix_expression",$1,NULL); 
                    }
#line 2031 "y.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression SQUARE_BRACKET_OPEN expression SQUARE_BRACKET_CLOSE  */
#line 149 "TinyC3_22CS30027_22CS30019.y"
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
#line 2056 "y.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression ROUND_BRACKET_OPEN argument_expression_list_opt ROUND_BRACKET_CLOSE  */
#line 170 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        (yyval.Array)  = new ArrayType();
                        (yyval.Array)->Array = SymbolTable::GenTemp((yyvsp[-3].Array)->Type);
                        QuadArray::Emit("call",(yyval.Array)->Array->Name,(yyvsp[-3].Array)->Array->Name,itos((yyvsp[-1].Parameter)));
                        //$$ = createNode("postfix_expression", $1, createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$3,createNode("ROUND_BRACKET_OPEN",NULL,NULL)))); 
                    }
#line 2067 "y.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 177 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        //$$ = createNode("postfix_expression", $1,createNode("ignore",createNode("DOT",NULL,NULL),createNode("IDENTIFIER", NULL, NULL))); 
                    }
#line 2075 "y.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression IMPLIES IDENTIFIER  */
#line 181 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        //$$ = createNode("postfix_expression", $1,createNode("ignore",createNode("IMPLIES",NULL,NULL),createNode("IDENTIFIER", NULL, NULL)));
                    }
#line 2083 "y.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression INCREMENT  */
#line 185 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Array)  = new ArrayType();
                        (yyval.Array)->Array = SymbolTable::GenTemp((yyvsp[-1].Array)->Array->Type);
                        QuadArray::Emit("=",(yyval.Array)->Array->Name,(yyvsp[-1].Array)->Array->Name);
                        QuadArray::Emit("+",(yyvsp[-1].Array)->Array->Name,(yyvsp[-1].Array)->Array->Name,"1");
                        // $$ = createNode("postfix_expression", $1, createNode("INCREMENT",NULL,NULL)); 
                    }
#line 2095 "y.tab.c"
    break;

  case 15: /* postfix_expression: postfix_expression DECREMENT  */
#line 193 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        (yyval.Array)  = new ArrayType();
                        (yyval.Array)->Array = SymbolTable::GenTemp((yyvsp[-1].Array)->Array->Type);
                        QuadArray::Emit("=",(yyval.Array)->Array->Name,(yyvsp[-1].Array)->Array->Name);
                        QuadArray::Emit("-",(yyvsp[-1].Array)->Array->Name,(yyvsp[-1].Array)->Array->Name,"1");
                        //$$ = createNode("postfix_expression", $1, createNode("DECREMENT",NULL,NULL)); 
                    }
#line 2107 "y.tab.c"
    break;

  case 16: /* postfix_expression: ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE  */
#line 201 "TinyC3_22CS30027_22CS30019.y"
                    {
                        // $$ = createNode("postfix_expression", createNode("ignore",createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$2),createNode("ROUND_BRACKET_OPEN",NULL,NULL)),createNode("ignore",createNode("ignore",createNode("CURLY_BRACKET_CLOSE",NULL,NULL),$5),createNode("CURLY_BRACKET_CLOSE",NULL,NULL))); 
                    }
#line 2115 "y.tab.c"
    break;

  case 17: /* postfix_expression: ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE  */
#line 205 "TinyC3_22CS30027_22CS30019.y"
                    {
                        // $$ = createNode("postfix_expression", createNode("ignore",createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$2),createNode("ROUND_BRACKET_OPEN",NULL,NULL)),createNode("ignore",createNode("ignore",createNode("CURLY_BRACKET_CLOSE",NULL,NULL),$5),createNode("ignore",createNode("COMMA",NULL,NULL),createNode("CURLY_BRACKET_CLOSE",NULL,NULL)))); 
                    }
#line 2123 "y.tab.c"
    break;

  case 18: /* argument_expression_list_opt: %empty  */
#line 213 "TinyC3_22CS30027_22CS30019.y"
                        {
                            (yyval.Parameter) = 0;
                            //$$ = createNode("argument_expression_list_opt",NULL, NULL);
                        }
#line 2132 "y.tab.c"
    break;

  case 19: /* argument_expression_list_opt: argument_expression_list  */
#line 218 "TinyC3_22CS30027_22CS30019.y"
                        {
                            (yyval.Parameter) = (yyvsp[0].Parameter);
                            //$$ = createNode("argument_expression_list_opt", $1, NULL);
                        }
#line 2141 "y.tab.c"
    break;

  case 20: /* argument_expression_list: assignment_expression  */
#line 225 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            (yyval.Parameter) = 1;
                            QuadArray::Emit("param",(yyvsp[0].Express)->Location->Name);
                            //$$ = createNode("argument_expression_list", $1, NULL); 
                        }
#line 2151 "y.tab.c"
    break;

  case 21: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 231 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            (yyval.Parameter) = (yyvsp[-2].Parameter) + 1;
                            QuadArray::Emit("param",(yyvsp[0].Express)->Location->Name);
                            //$$ = createNode("argument_expression_list", $1, createNode("ignore",createNode("COMMA",NULL,NULL),$3)); 
                        }
#line 2161 "y.tab.c"
    break;

  case 22: /* unary_expression: postfix_expression  */
#line 241 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Array) = (yyvsp[0].Array);
                        // $$ = createNode("unary_expression", $1, NULL); 
                    }
#line 2170 "y.tab.c"
    break;

  case 23: /* unary_expression: INCREMENT unary_expression  */
#line 246 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        QuadArray::Emit("+",(yyvsp[0].Array)->Array->Name,(yyvsp[0].Array)->Array->Name,"1");
                        (yyval.Array) = (yyvsp[0].Array);
                        //$$ = createNode("unary_expression", createNode("INCREMENT",NULL,NULL), $2); 
                    }
#line 2180 "y.tab.c"
    break;

  case 24: /* unary_expression: DECREMENT unary_expression  */
#line 252 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        QuadArray::Emit("-",(yyvsp[0].Array)->Array->Name,(yyvsp[0].Array)->Array->Name,"1");
                        (yyval.Array) = (yyvsp[0].Array);
                        //$$ = createNode("unary_expression", createNode("DECREMENT",NULL,NULL), $2); 
                    }
#line 2190 "y.tab.c"
    break;

  case 25: /* unary_expression: unary_operator cast_expression  */
#line 258 "TinyC3_22CS30027_22CS30019.y"
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
#line 2230 "y.tab.c"
    break;

  case 26: /* unary_expression: SIZEOF unary_expression  */
#line 294 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        //$$ = createNode("unary_expression", createNode("SIZEOF",NULL,NULL), $2); 
                    }
#line 2238 "y.tab.c"
    break;

  case 27: /* unary_expression: SIZEOF ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE  */
#line 298 "TinyC3_22CS30027_22CS30019.y"
                    {  
                        //$$ = createNode("unary_expression", createNode("SIZEOF",NULL,NULL), createNode("ignore",createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3),createNode("ROUND_BRACKET_CLOSE",NULL,NULL))); 
                    }
#line 2246 "y.tab.c"
    break;

  case 28: /* unary_operator: BITWISE_AND  */
#line 306 "TinyC3_22CS30027_22CS30019.y"
                {
                    (yyval.UnaryOper) = '&';
                    // $$ = createNode("BITWISE_AND", NULL, NULL); 
                }
#line 2255 "y.tab.c"
    break;

  case 29: /* unary_operator: MUL  */
#line 311 "TinyC3_22CS30027_22CS30019.y"
                { 
                    (yyval.UnaryOper) = '*';
                    //$$ = createNode("MUL", NULL, NULL); 
                }
#line 2264 "y.tab.c"
    break;

  case 30: /* unary_operator: PLUS  */
#line 316 "TinyC3_22CS30027_22CS30019.y"
                { 
                    (yyval.UnaryOper) = '+';
                    //$$ = createNode('PLUS', NULL, NULL); 
                }
#line 2273 "y.tab.c"
    break;

  case 31: /* unary_operator: MINUS  */
#line 321 "TinyC3_22CS30027_22CS30019.y"
                { 
                    (yyval.UnaryOper) = '-';
                    //$$ = createNode('MINUS', NULL, NULL); 
                }
#line 2282 "y.tab.c"
    break;

  case 32: /* unary_operator: BITWISE_NOT  */
#line 326 "TinyC3_22CS30027_22CS30019.y"
                { 
                    (yyval.UnaryOper) = '~';
                    //$$ = createNode('BITWISE_NOT', NULL, NULL); 
                }
#line 2291 "y.tab.c"
    break;

  case 33: /* unary_operator: NOT  */
#line 331 "TinyC3_22CS30027_22CS30019.y"
                {
                    (yyval.UnaryOper) = '!';
                    // $$ = createNode('NOT', NULL, NULL); 
                }
#line 2300 "y.tab.c"
    break;

  case 34: /* cast_expression: unary_expression  */
#line 340 "TinyC3_22CS30027_22CS30019.y"
                { 
                    (yyval.Array) = (yyvsp[0].Array);
                    //$$ =  createNode("cast_expression", $1, NULL); 
                }
#line 2309 "y.tab.c"
    break;

  case 35: /* cast_expression: ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE cast_expression  */
#line 345 "TinyC3_22CS30027_22CS30019.y"
                { 
                    (yyval.Array) = new ArrayType();
                    (yyval.Array)->Array = TypeConvertor((yyvsp[0].Array)->Array,VarType);
                    //$$ =  createNode("cast_expression", createNode("ROUND_BRACKET_OPEN",NULL,NULL), createNode("ignore",$2,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$4))); 
                }
#line 2319 "y.tab.c"
    break;

  case 36: /* multiplicative_expression: cast_expression  */
#line 355 "TinyC3_22CS30027_22CS30019.y"
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
#line 2341 "y.tab.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression MUL cast_expression  */
#line 373 "TinyC3_22CS30027_22CS30019.y"
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
#line 2359 "y.tab.c"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression DIV cast_expression  */
#line 387 "TinyC3_22CS30027_22CS30019.y"
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
#line 2377 "y.tab.c"
    break;

  case 39: /* multiplicative_expression: multiplicative_expression MOD cast_expression  */
#line 401 "TinyC3_22CS30027_22CS30019.y"
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
#line 2395 "y.tab.c"
    break;

  case 40: /* additive_expression: multiplicative_expression  */
#line 419 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        (yyval.Express) = (yyvsp[0].Express);
                        //$$ =createNode("additive_expression",$1,NULL); 
                    }
#line 2404 "y.tab.c"
    break;

  case 41: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 424 "TinyC3_22CS30027_22CS30019.y"
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
#line 2422 "y.tab.c"
    break;

  case 42: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 438 "TinyC3_22CS30027_22CS30019.y"
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
#line 2440 "y.tab.c"
    break;

  case 43: /* shift_expression: additive_expression  */
#line 456 "TinyC3_22CS30027_22CS30019.y"
                 { 
                    (yyval.Express) = (yyvsp[0].Express);
                    //$$ =createNode("shift_expression",$1,NULL); 
                }
#line 2449 "y.tab.c"
    break;

  case 44: /* shift_expression: shift_expression LEFT_SHIFT additive_expression  */
#line 461 "TinyC3_22CS30027_22CS30019.y"
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
#line 2467 "y.tab.c"
    break;

  case 45: /* shift_expression: shift_expression RIGHT_SHIFT additive_expression  */
#line 475 "TinyC3_22CS30027_22CS30019.y"
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
#line 2485 "y.tab.c"
    break;

  case 46: /* relational_expression: shift_expression  */
#line 493 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Express)=(yyvsp[0].Express);
                        // $$ =createNode("relational_expression",$1,NULL); 
                    }
#line 2494 "y.tab.c"
    break;

  case 47: /* relational_expression: relational_expression LESS_THAN shift_expression  */
#line 498 "TinyC3_22CS30027_22CS30019.y"
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
#line 2515 "y.tab.c"
    break;

  case 48: /* relational_expression: relational_expression GREATER_THAN shift_expression  */
#line 515 "TinyC3_22CS30027_22CS30019.y"
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
#line 2536 "y.tab.c"
    break;

  case 49: /* relational_expression: relational_expression LESS_EQUAL shift_expression  */
#line 532 "TinyC3_22CS30027_22CS30019.y"
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
#line 2557 "y.tab.c"
    break;

  case 50: /* relational_expression: relational_expression GREATER_EQUAL shift_expression  */
#line 549 "TinyC3_22CS30027_22CS30019.y"
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
#line 2578 "y.tab.c"
    break;

  case 51: /* equality_expression: relational_expression  */
#line 570 "TinyC3_22CS30027_22CS30019.y"
                    { 
                        (yyval.Express) = (yyvsp[0].Express);
                        //$$ = createNode("equality_expression",$1,NULL); 
                    }
#line 2587 "y.tab.c"
    break;

  case 52: /* equality_expression: equality_expression EQUAL relational_expression  */
#line 575 "TinyC3_22CS30027_22CS30019.y"
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
#line 2610 "y.tab.c"
    break;

  case 53: /* equality_expression: equality_expression NOT_EQUAL relational_expression  */
#line 594 "TinyC3_22CS30027_22CS30019.y"
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
#line 2633 "y.tab.c"
    break;

  case 54: /* and_expression: equality_expression  */
#line 617 "TinyC3_22CS30027_22CS30019.y"
                { 
                    (yyval.Express) = (yyvsp[0].Express);
                    //$$ = createNode("and_expression",$1,NULL); 
                }
#line 2642 "y.tab.c"
    break;

  case 55: /* and_expression: and_expression BITWISE_AND equality_expression  */
#line 622 "TinyC3_22CS30027_22CS30019.y"
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
#line 2663 "y.tab.c"
    break;

  case 56: /* exclusive_or_expression: and_expression  */
#line 643 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            (yyval.Express) = (yyvsp[0].Express);
                            //$$ = createNode("exclusive_or_expression",$1,NULL); 
                        }
#line 2672 "y.tab.c"
    break;

  case 57: /* exclusive_or_expression: exclusive_or_expression BITWISE_XOR and_expression  */
#line 648 "TinyC3_22CS30027_22CS30019.y"
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
#line 2693 "y.tab.c"
    break;

  case 58: /* inclusive_or_expression: exclusive_or_expression  */
#line 669 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            (yyval.Express) = (yyvsp[0].Express);
                            //$$ = createNode("inclusive_or_expression",$1,NULL); 
                        }
#line 2702 "y.tab.c"
    break;

  case 59: /* inclusive_or_expression: inclusive_or_expression BITWISE_OR exclusive_or_expression  */
#line 674 "TinyC3_22CS30027_22CS30019.y"
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
#line 2723 "y.tab.c"
    break;

  case 60: /* logical_and_expression: inclusive_or_expression  */
#line 695 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            (yyval.Express) = (yyvsp[0].Express);
                            //$$ = createNode("logical_and_expression",$1,NULL); 
                        }
#line 2732 "y.tab.c"
    break;

  case 61: /* logical_and_expression: logical_and_expression AND inclusive_or_expression  */
#line 700 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            (yyval.Express) = new Expression();
                            itob((yyvsp[-2].Express));
                            itob((yyvsp[0].Express));
                            (yyval.Express)->Type = "bool";
                            BackPatch((yyvsp[-2].Express)->TrueList,QuadList.InstructionList.size());
                            (yyval.Express)->TrueList = (yyvsp[0].Express)->TrueList;
                            (yyval.Express)->FalseList = Merge((yyvsp[-2].Express)->FalseList,(yyvsp[0].Express)->FalseList);
                            //$$ = createNode("logical_and_expression",$1,createNode("ignore",createNode("AND", NULL, NULL),$3)); 
                        }
#line 2747 "y.tab.c"
    break;

  case 62: /* logical_or_expression: logical_and_expression  */
#line 715 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            (yyval.Express) = (yyvsp[0].Express);
                            //$$ = createNode("logical_or_expression",$1,NULL); 
                        }
#line 2756 "y.tab.c"
    break;

  case 63: /* logical_or_expression: logical_or_expression OR logical_and_expression  */
#line 720 "TinyC3_22CS30027_22CS30019.y"
                        {
                            (yyval.Express) = new Expression();
                            itob((yyvsp[-2].Express));
                            itob((yyvsp[0].Express));
                            (yyval.Express)->Type = "bool";
                            BackPatch((yyvsp[-2].Express)->FalseList,QuadList.InstructionList.size());
                            (yyval.Express)->FalseList = (yyvsp[0].Express)->FalseList;
                            (yyval.Express)->TrueList = Merge((yyvsp[-2].Express)->TrueList,(yyvsp[0].Express)->TrueList);
                            // $$ = createNode("logical_or_expression",$1,createNode("ignore",createNode("OR", NULL, NULL),$3));  
                        }
#line 2771 "y.tab.c"
    break;

  case 64: /* conditional_expression: logical_or_expression  */
#line 735 "TinyC3_22CS30027_22CS30019.y"
                        {
                            (yyval.Express) = (yyvsp[0].Express);
                            // $$ = createNode("conditional_expression",$1,NULL); 
                        }
#line 2780 "y.tab.c"
    break;

  case 65: /* conditional_expression: logical_or_expression newstatement QUESTION countinst expression newstatement COLON countinst conditional_expression  */
#line 740 "TinyC3_22CS30027_22CS30019.y"
                        { 
                            (yyval.Express) = new Expression();
                            (yyval.Express)->Location = SymbolTable::GenTemp((yyvsp[-4].Express)->Location->Type);
                            (yyval.Express)->Location->Update((yyvsp[-4].Express)->Location->Type);
                            QuadArray::Emit("=",(yyval.Express)->Location->Name,(yyvsp[0].Express)->Location->Name);
                            list<int> ll = MakeList(QuadList.InstructionList.size());
                            QuadArray::Emit("goto","_");
                            BackPatch((yyvsp[-3].Stateme)->NextList,QuadList.InstructionList.size());
                            QuadArray::Emit("=",(yyval.Express)->Location->Name,(yyvsp[-4].Express)->Location->Name);
                            list<int> llp = MakeList(QuadList.InstructionList.size());
                            ll = Merge(ll,llp);
                            QuadArray::Emit("goto","_");
                            BackPatch((yyvsp[-7].Stateme)->NextList,QuadList.InstructionList.size());
                            itob((yyvsp[-8].Express));
                            BackPatch((yyvsp[-8].Express)->TrueList,(yyvsp[-5].InstCount));
                            BackPatch((yyvsp[-8].Express)->FalseList,(yyvsp[-1].InstCount));
                            BackPatch(ll,QuadList.InstructionList.size());
                            //$$ = createNode("conditional_expression",$1,createNode("ignore",createNode("QUESTION", NULL, NULL),createNode("ignore",$3,createNode("ignore",createNode("COLON", NULL, NULL),$5))));
                        }
#line 2804 "y.tab.c"
    break;

  case 66: /* countinst: %empty  */
#line 762 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.InstCount) = QuadList.InstructionList.size();
            }
#line 2812 "y.tab.c"
    break;

  case 67: /* newstatement: %empty  */
#line 768 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Stateme) = new Statement();
                (yyval.Stateme)->NextList = MakeList(QuadList.InstructionList.size());
                QuadArray::Emit("goto","_");
            }
#line 2822 "y.tab.c"
    break;

  case 68: /* assignment_expression: conditional_expression  */
#line 777 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Express) = (yyvsp[0].Express);
                        // $$ = createNode("assignment_expression",$1,NULL); 
                    }
#line 2831 "y.tab.c"
    break;

  case 69: /* assignment_expression: unary_expression ASSIGN assignment_expression  */
#line 782 "TinyC3_22CS30027_22CS30019.y"
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
#line 2854 "y.tab.c"
    break;

  case 70: /* assignment_expression: unary_expression MUL_EQUAL assignment_expression  */
#line 801 "TinyC3_22CS30027_22CS30019.y"
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
#line 2877 "y.tab.c"
    break;

  case 71: /* assignment_expression: unary_expression DIV_EQUAL assignment_expression  */
#line 820 "TinyC3_22CS30027_22CS30019.y"
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
#line 2900 "y.tab.c"
    break;

  case 72: /* assignment_expression: unary_expression MOD_EQUAL assignment_expression  */
#line 839 "TinyC3_22CS30027_22CS30019.y"
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
#line 2923 "y.tab.c"
    break;

  case 73: /* assignment_expression: unary_expression PLUS_EQUAL assignment_expression  */
#line 858 "TinyC3_22CS30027_22CS30019.y"
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
#line 2946 "y.tab.c"
    break;

  case 74: /* assignment_expression: unary_expression MINUS_EQUAL assignment_expression  */
#line 877 "TinyC3_22CS30027_22CS30019.y"
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
#line 2969 "y.tab.c"
    break;

  case 75: /* assignment_expression: unary_expression SHIFT_LEFT_EQUAL assignment_expression  */
#line 896 "TinyC3_22CS30027_22CS30019.y"
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
#line 2992 "y.tab.c"
    break;

  case 76: /* assignment_expression: unary_expression SHIFT_RIGHT_EQUAL assignment_expression  */
#line 915 "TinyC3_22CS30027_22CS30019.y"
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
#line 3015 "y.tab.c"
    break;

  case 77: /* assignment_expression: unary_expression BITWISE_AND_EQUAL assignment_expression  */
#line 935 "TinyC3_22CS30027_22CS30019.y"
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
#line 3038 "y.tab.c"
    break;

  case 78: /* assignment_expression: unary_expression BITWISE_XOR_EQUAL assignment_expression  */
#line 955 "TinyC3_22CS30027_22CS30019.y"
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
#line 3061 "y.tab.c"
    break;

  case 79: /* assignment_expression: unary_expression BITWISE_OR_EQUAL assignment_expression  */
#line 975 "TinyC3_22CS30027_22CS30019.y"
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
#line 3084 "y.tab.c"
    break;

  case 80: /* expression: assignment_expression  */
#line 999 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Express) = (yyvsp[0].Express);
                //$$ = createNode("expression",$1,NULL); 
            }
#line 3093 "y.tab.c"
    break;

  case 81: /* expression: expression COMMA assignment_expression  */
#line 1004 "TinyC3_22CS30027_22CS30019.y"
            { 
                //$$ = createNode("expression",$1,createNode("ignore",createNode("COMMA", NULL, NULL),$3)); 
            }
#line 3101 "y.tab.c"
    break;

  case 82: /* constant_expression: conditional_expression  */
#line 1011 "TinyC3_22CS30027_22CS30019.y"
                    {
                        // $$ = createNode("constant_expression", $1, NULL); 
                    }
#line 3109 "y.tab.c"
    break;

  case 83: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 1023 "TinyC3_22CS30027_22CS30019.y"
            { 
                //$$ = createNode("declaration", $1, createNode("ignore",$2,createNode("SEMICOLON",NULL,NULL))); 
            }
#line 3117 "y.tab.c"
    break;

  case 84: /* declaration_specifiers: storage_class_specifier  */
#line 1031 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifier", $1, NULL);
                        }
#line 3125 "y.tab.c"
    break;

  case 85: /* declaration_specifiers: type_specifier  */
#line 1035 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifier", $1, NULL);
                        }
#line 3133 "y.tab.c"
    break;

  case 86: /* declaration_specifiers: type_qualifier  */
#line 1039 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifier", $1, NULL);
                        }
#line 3141 "y.tab.c"
    break;

  case 87: /* declaration_specifiers: function_specifier  */
#line 1043 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifier", $1, NULL);
                        }
#line 3149 "y.tab.c"
    break;

  case 88: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 1047 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifiers", $1, $2);
                        }
#line 3157 "y.tab.c"
    break;

  case 89: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 1051 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifiers", $1, $2);
                        }
#line 3165 "y.tab.c"
    break;

  case 90: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 1055 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifiers", $1, $2);
                        }
#line 3173 "y.tab.c"
    break;

  case 91: /* declaration_specifiers: function_specifier declaration_specifiers  */
#line 1059 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("declaration_specifiers", $1, $2);
                        }
#line 3181 "y.tab.c"
    break;

  case 92: /* init_declarator_list_opt: %empty  */
#line 1067 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("init_declarator_list_opt",NULL, NULL);
                        }
#line 3189 "y.tab.c"
    break;

  case 93: /* init_declarator_list_opt: init_declarator_list  */
#line 1071 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("init_declarator_list_opt", $1, NULL);
                        }
#line 3197 "y.tab.c"
    break;

  case 94: /* init_declarator_list: init_declarator  */
#line 1077 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("init_declerator_list", $1, NULL);
                        }
#line 3205 "y.tab.c"
    break;

  case 95: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 1081 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("init_declerator_list", $1, createNode("ignore",createNode("COMMA",NULL,NULL),$3));
                        }
#line 3213 "y.tab.c"
    break;

  case 96: /* init_declarator: declarator  */
#line 1089 "TinyC3_22CS30027_22CS30019.y"
                {
                    (yyval.SymbolPointer) = (yyvsp[0].SymbolPointer);
                    //$$ = createNode("init_declerator", $1,NULL);
                }
#line 3222 "y.tab.c"
    break;

  case 97: /* init_declarator: declarator ASSIGN initializer  */
#line 1094 "TinyC3_22CS30027_22CS30019.y"
                {
                    if((yyvsp[0].SymbolPointer)->InitialValue!="")
                    {
                        (yyvsp[-2].SymbolPointer)->InitialValue = (yyvsp[0].SymbolPointer)->InitialValue;
                    }
                    QuadArray::Emit("=",(yyvsp[-2].SymbolPointer)->Name,(yyvsp[0].SymbolPointer)->Name);
                    //$$ = createNode("init_declerator", $1, createNode("ignore",createNode("ASSIGN",NULL,NULL),$3));
                }
#line 3235 "y.tab.c"
    break;

  case 98: /* storage_class_specifier: EXTERN  */
#line 1107 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("storage_class_specifier", createNode("EXTERN",NULL,NULL), NULL);
                        }
#line 3243 "y.tab.c"
    break;

  case 99: /* storage_class_specifier: AUTO  */
#line 1111 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("storage_class_specifier", createNode("AUTO",NULL,NULL), NULL);
                        }
#line 3251 "y.tab.c"
    break;

  case 100: /* storage_class_specifier: REGISTER  */
#line 1115 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("storage_class_specifier", createNode("REGISTER",NULL,NULL), NULL);
                        }
#line 3259 "y.tab.c"
    break;

  case 101: /* storage_class_specifier: STATIC  */
#line 1119 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("storage_class_specifier",createNode("STATIC",NULL,NULL), NULL);
                        }
#line 3267 "y.tab.c"
    break;

  case 102: /* type_specifier: VOID  */
#line 1127 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="void";
                    // $$ = createNode("type_specifier", createNode("VOID",NULL,NULL), NULL); 
                }
#line 3276 "y.tab.c"
    break;

  case 103: /* type_specifier: CHAR  */
#line 1132 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="char";
                    // $$ = createNode("type_specifier", createNode("CHARACTER",NULL,NULL), NULL); 
                }
#line 3285 "y.tab.c"
    break;

  case 104: /* type_specifier: SHORT  */
#line 1137 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="short";
                    // $$ = createNode("type_specifier", createNode("SHORT",NULL,NULL), NULL); 
                }
#line 3294 "y.tab.c"
    break;

  case 105: /* type_specifier: INT  */
#line 1142 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="int";
                    // $$ = createNode("type_specifier", createNode("INTEGER",NULL,NULL), NULL); 
                }
#line 3303 "y.tab.c"
    break;

  case 106: /* type_specifier: LONG  */
#line 1147 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="long";
                    // $$ = createNode("type_specifier", createNode("LONG",NULL,NULL), NULL); 
                }
#line 3312 "y.tab.c"
    break;

  case 107: /* type_specifier: FLOAT  */
#line 1152 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="float";
                    // $$ = createNode("type_specifier", createNode("FLOAT",NULL,NULL), NULL); 
                }
#line 3321 "y.tab.c"
    break;

  case 108: /* type_specifier: SIGNED  */
#line 1157 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="signed";
                    // $$ = createNode("type_specifier", createNode("SIGNED",NULL,NULL), NULL); 
                }
#line 3330 "y.tab.c"
    break;

  case 109: /* type_specifier: UNSIGNED  */
#line 1162 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="unsigned";
                    // $$ = createNode("type_specifier", createNode("UNSIGNED",NULL,NULL), NULL); 
                }
#line 3339 "y.tab.c"
    break;

  case 110: /* type_specifier: BOOL  */
#line 1167 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="bool";
                    // $$ = createNode("type_specifier", createNode("_BOOL",NULL,NULL), NULL); 
                }
#line 3348 "y.tab.c"
    break;

  case 111: /* type_specifier: COMPLEX  */
#line 1172 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="complex";
                    // $$ = createNode("type_specifier", createNode("_COMPLEX",NULL,NULL), NULL); 
                }
#line 3357 "y.tab.c"
    break;

  case 112: /* type_specifier: IMAGINARY  */
#line 1177 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="imaginary";
                    // $$ = createNode("type_specifier", createNode("_IMAGINARY",NULL,NULL), NULL); 
                }
#line 3366 "y.tab.c"
    break;

  case 113: /* type_specifier: DOUBLE  */
#line 1182 "TinyC3_22CS30027_22CS30019.y"
                {
                    VarType="double";
                    // $$ = createNode("type_specifier", createNode("DOUBLE",NULL,NULL), NULL); 
                }
#line 3375 "y.tab.c"
    break;

  case 114: /* specifier_qualifier_list: type_specifier specifier_qualifier_list  */
#line 1191 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("specifier_qualifier_list", $1, $2);
                        }
#line 3383 "y.tab.c"
    break;

  case 115: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list  */
#line 1195 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("specifier_qualifier_list", $1, $2);
                        }
#line 3391 "y.tab.c"
    break;

  case 116: /* specifier_qualifier_list: type_specifier  */
#line 1199 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("specifier_qualifier_list", $1, NULL);
                        }
#line 3399 "y.tab.c"
    break;

  case 117: /* specifier_qualifier_list: type_qualifier  */
#line 1203 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("specifier_qualifier_list", $1, NULL);
                        }
#line 3407 "y.tab.c"
    break;

  case 118: /* type_qualifier: CONST  */
#line 1211 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$ = createNode("type_qualifier", createNode("CONST",NULL,NULL), NULL);
                }
#line 3415 "y.tab.c"
    break;

  case 119: /* type_qualifier: RESTRICT  */
#line 1215 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$ = createNode("type_qualifier", createNode("RESTRICT",NULL,NULL), NULL);
                }
#line 3423 "y.tab.c"
    break;

  case 120: /* type_qualifier: VOLATILE  */
#line 1219 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$ = createNode("type_qualifier", createNode("VOLATILE",NULL,NULL), NULL);
                }
#line 3431 "y.tab.c"
    break;

  case 121: /* function_specifier: INLINE  */
#line 1227 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("function_specifier", createNode("INLINE",NULL,NULL), NULL);
                    }
#line 3439 "y.tab.c"
    break;

  case 122: /* declarator: pointer direct_declarator  */
#line 1235 "TinyC3_22CS30027_22CS30019.y"
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
#line 3454 "y.tab.c"
    break;

  case 123: /* declarator: direct_declarator  */
#line 1246 "TinyC3_22CS30027_22CS30019.y"
            {

            }
#line 3462 "y.tab.c"
    break;

  case 124: /* direct_declarator: IDENTIFIER  */
#line 1254 "TinyC3_22CS30027_22CS30019.y"
                    {
                        Symbol* NewS = new Symbol(Globe);
                        CurrentST->Table.push_back(*NewS);
                        (yyval.SymbolPointer) = &(CurrentST->Table.back());
                        (yyval.SymbolPointer)->Update(new SType(VarType));
                        RecentSymbol = (yyval.SymbolPointer);
                        //$$ = createNode("direct_declarator", createNode("IDENTIFIER",NULL,NULL), NULL);
                    }
#line 3475 "y.tab.c"
    break;

  case 125: /* direct_declarator: ROUND_BRACKET_OPEN declarator ROUND_BRACKET_CLOSE  */
#line 1263 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.SymbolPointer) = (yyvsp[-1].SymbolPointer);
                        //$$ = createNode("direct_declarator",createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$2), createNode("ROUND_BRACKET_CLOSE",NULL,NULL));
                    }
#line 3484 "y.tab.c"
    break;

  case 126: /* direct_declarator: direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list assignment_expression_opt SQUARE_BRACKET_CLOSE  */
#line 1268 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("SQUARE_BRACKET_OPEN",NULL,NULL)), createNode("ignore",$3,createNode("ignore",$4,createNode("SQUARE_BRACKET_CLOSE",NULL,NULL))));
                    }
#line 3492 "y.tab.c"
    break;

  case 127: /* direct_declarator: direct_declarator SQUARE_BRACKET_OPEN assignment_expression SQUARE_BRACKET_CLOSE  */
#line 1272 "TinyC3_22CS30027_22CS30019.y"
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
#line 3523 "y.tab.c"
    break;

  case 128: /* direct_declarator: direct_declarator SQUARE_BRACKET_OPEN SQUARE_BRACKET_CLOSE  */
#line 1299 "TinyC3_22CS30027_22CS30019.y"
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
#line 3548 "y.tab.c"
    break;

  case 129: /* direct_declarator: direct_declarator SQUARE_BRACKET_OPEN STATIC type_qualifier_list_opt assignment_expression SQUARE_BRACKET_CLOSE  */
#line 1320 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("SQUARE_BRACKET_OPEN",NULL,NULL)), createNode("ignore",createNode("ignore",createNode("STATIC",NULL,NULL),$4),createNode("ignore",$5,createNode("SQUARE_BRACKET_CLOSE",NULL,NULL))));
                    }
#line 3556 "y.tab.c"
    break;

  case 130: /* direct_declarator: direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list STATIC assignment_expression SQUARE_BRACKET_CLOSE  */
#line 1324 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("SQUARE_BRACKET_OPEN",NULL,NULL)), createNode("ignore",createNode("ignore",$3,createNode("STATIC",NULL,NULL)),createNode("ignore",$5,createNode("SQUARE_BRACKET_CLOSE",NULL,NULL))));
                    }
#line 3564 "y.tab.c"
    break;

  case 131: /* direct_declarator: direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list MUL SQUARE_BRACKET_CLOSE  */
#line 1328 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("SQUARE_BRACKET_OPEN",NULL,NULL)), createNode("ignore",createNode("ignore",$3,createNode("MUL",NULL,NULL)),createNode("SQUARE_BRACKET_CLOSE",NULL,NULL)));
                    }
#line 3572 "y.tab.c"
    break;

  case 132: /* direct_declarator: direct_declarator ROUND_BRACKET_OPEN switch_table parameter_type_list ROUND_BRACKET_CLOSE  */
#line 1332 "TinyC3_22CS30027_22CS30019.y"
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
#line 3590 "y.tab.c"
    break;

  case 133: /* direct_declarator: direct_declarator ROUND_BRACKET_OPEN switch_table ROUND_BRACKET_CLOSE  */
#line 1346 "TinyC3_22CS30027_22CS30019.y"
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
#line 3608 "y.tab.c"
    break;

  case 134: /* direct_declarator: direct_declarator ROUND_BRACKET_OPEN identifier_list ROUND_BRACKET_CLOSE  */
#line 1360 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("ROUND_BRACKET_OPEN",NULL,NULL)), createNode("ignore",$3,createNode("ROUND_BRACKET_CLOSE",NULL,NULL)));
                    }
#line 3616 "y.tab.c"
    break;

  case 135: /* switch_table: %empty  */
#line 1366 "TinyC3_22CS30027_22CS30019.y"
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
#line 3632 "y.tab.c"
    break;

  case 136: /* type_qualifier_list_opt: %empty  */
#line 1379 "TinyC3_22CS30027_22CS30019.y"
                          {
                            //$$ = createNode("type_qualifier_list_opt",NULL,NULL);
                        }
#line 3640 "y.tab.c"
    break;

  case 137: /* type_qualifier_list_opt: type_qualifier_list  */
#line 1383 "TinyC3_22CS30027_22CS30019.y"
                        {
                            //$$ = createNode("type_qualifier_list_opt",$1,NULL);
                        }
#line 3648 "y.tab.c"
    break;

  case 138: /* assignment_expression_opt: %empty  */
#line 1388 "TinyC3_22CS30027_22CS30019.y"
                             {
                            //$$ = createNode("assignment_expression_opt",NULL,NULL);
                            }
#line 3656 "y.tab.c"
    break;

  case 139: /* assignment_expression_opt: assignment_expression  */
#line 1392 "TinyC3_22CS30027_22CS30019.y"
                            {
                                //$$ = createNode("assignment_expression_opt",$1,NULL);
                            }
#line 3664 "y.tab.c"
    break;

  case 140: /* pointer: MUL type_qualifier_list_opt  */
#line 1400 "TinyC3_22CS30027_22CS30019.y"
        {
            (yyval.Type) = new SType("ptr");
            //$$=createNode("pointer",createNode("MUL",NULL,NULL), $2);
        }
#line 3673 "y.tab.c"
    break;

  case 141: /* pointer: MUL type_qualifier_list_opt pointer  */
#line 1405 "TinyC3_22CS30027_22CS30019.y"
        {
            (yyval.Type) = new SType("ptr",1,(yyvsp[0].Type));
            //$$=createNode("pointer",createNode("MUL",NULL,NULL) ,createNode("ignore",$2, $3));
        }
#line 3682 "y.tab.c"
    break;

  case 142: /* type_qualifier_list: type_qualifier  */
#line 1414 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("type_qualifier_list",$1,NULL);
                    }
#line 3690 "y.tab.c"
    break;

  case 143: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 1418 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("type_qualifier_list", $1, $2);
                    }
#line 3698 "y.tab.c"
    break;

  case 144: /* parameter_type_list: parameter_list  */
#line 1426 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("parameter_type_list",$1,NULL);
                    }
#line 3706 "y.tab.c"
    break;

  case 145: /* parameter_type_list: parameter_list COMMA ELLIPSIS  */
#line 1429 "TinyC3_22CS30027_22CS30019.y"
                                                    {
                        //$$=createNode("parameter_type_list", $1, createNode("ignore",createNode("COMMA",NULL,NULL),createNode("ELLIPSIS",NULL,NULL)));
                    }
#line 3714 "y.tab.c"
    break;

  case 146: /* parameter_list: parameter_declaration  */
#line 1437 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("parameter_list",$1,NULL);
                }
#line 3722 "y.tab.c"
    break;

  case 147: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 1441 "TinyC3_22CS30027_22CS30019.y"
               {
                //$$=createNode("parameter_list", createNode("ignore",$1,createNode("COMMA",NULL,NULL)), $3);
                }
#line 3730 "y.tab.c"
    break;

  case 148: /* parameter_declaration: declaration_specifiers declarator  */
#line 1449 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("parameter_declaration", $1, $2);
                    }
#line 3738 "y.tab.c"
    break;

  case 149: /* parameter_declaration: declaration_specifiers  */
#line 1453 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("parameter_declaration",$1,NULL);
                    }
#line 3746 "y.tab.c"
    break;

  case 150: /* identifier_list: IDENTIFIER  */
#line 1461 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("identifier_list",createNode("IDENTIFIER",NULL,NULL),NULL);
                }
#line 3754 "y.tab.c"
    break;

  case 151: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 1465 "TinyC3_22CS30027_22CS30019.y"
               {
                //$$=createNode("identifier_list", $1, createNode("ignore",createNode("COMMA",NULL,NULL),createNode("IDENTIFIER",NULL,NULL)));
                }
#line 3762 "y.tab.c"
    break;

  case 152: /* type_name: specifier_qualifier_list  */
#line 1473 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("type_name",$1,NULL);
            }
#line 3770 "y.tab.c"
    break;

  case 153: /* initializer: assignment_expression  */
#line 1481 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.SymbolPointer) = (yyvsp[0].Express)->Location;
                //$$=createNode("initializer",$1,NULL);
            }
#line 3779 "y.tab.c"
    break;

  case 154: /* initializer: CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE  */
#line 1486 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("initializer",createNode("ignore",createNode("CURLY_BRACKET_OPEN",NULL,NULL),$2),createNode("CURLY_BRACKET_CLOSE",NULL,NULL));
            }
#line 3787 "y.tab.c"
    break;

  case 155: /* initializer: CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE  */
#line 1490 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("initializer",createNode("ignore",createNode("CURLY_BRACKET_OPEN",NULL,NULL),$2),createNode("ignore",createNode("COMMA",NULL,NULL),createNode("CURLY_BRACKET_CLOSE",NULL,NULL)));
            }
#line 3795 "y.tab.c"
    break;

  case 156: /* initializer_list: designation_opt initializer  */
#line 1498 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("initializer_list",$1,$2);
                }
#line 3803 "y.tab.c"
    break;

  case 157: /* initializer_list: initializer_list COMMA designation_opt initializer  */
#line 1502 "TinyC3_22CS30027_22CS30019.y"
                 {
                    //$$=createNode("initializer_list",createNode("ignore",$1,createNode("COMMA",NULL,NULL)),createNode("ignore",$3,$4));
                }
#line 3811 "y.tab.c"
    break;

  case 158: /* designation_opt: designation  */
#line 1508 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("designation_opt",$1,NULL);
                }
#line 3819 "y.tab.c"
    break;

  case 159: /* designation_opt: %empty  */
#line 1512 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$ = createNode("designation_opt",NULL,NULL);
                }
#line 3827 "y.tab.c"
    break;

  case 160: /* designation: designator_list ASSIGN  */
#line 1520 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("designation",$1,createNode("ASSIGN",NULL,NULL));
            }
#line 3835 "y.tab.c"
    break;

  case 161: /* designator_list: designator  */
#line 1528 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("designator_list",$1,NULL);
                }
#line 3843 "y.tab.c"
    break;

  case 162: /* designator_list: designator_list designator  */
#line 1532 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("designator_list",$1,$2);
                }
#line 3851 "y.tab.c"
    break;

  case 163: /* designator: SQUARE_BRACKET_OPEN constant_expression SQUARE_BRACKET_CLOSE  */
#line 1540 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("designator",createNode("ignore",createNode("SQUARE_BRACKET_OPEN",NULL,NULL),$2),createNode("SQUARE_BRACKET_CLOSE",NULL,NULL));
            }
#line 3859 "y.tab.c"
    break;

  case 164: /* designator: DOT IDENTIFIER  */
#line 1544 "TinyC3_22CS30027_22CS30019.y"
             {
                //$$=createNode("designator",createNode("DOT",NULL,NULL),createNode("IDENTIFIER",NULL,NULL));
            }
#line 3867 "y.tab.c"
    break;

  case 165: /* statement: labeled_statement  */
#line 1555 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("statement",$1,NULL);
            }
#line 3875 "y.tab.c"
    break;

  case 166: /* statement: compound_statement  */
#line 1559 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Stateme) = (yyvsp[0].Stateme);
                //$$=createNode("statement",$1,NULL);
            }
#line 3884 "y.tab.c"
    break;

  case 167: /* statement: expression_statement  */
#line 1564 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Stateme) = new Statement();
                (yyval.Stateme)->NextList = (yyvsp[0].Express)->NextList;
                //$$=createNode("statement",$1,NULL);
            }
#line 3894 "y.tab.c"
    break;

  case 168: /* statement: selection_statement  */
#line 1570 "TinyC3_22CS30027_22CS30019.y"
            {
               (yyval.Stateme) = (yyvsp[0].Stateme);
                //$$=createNode("statement",$1,NULL);
            }
#line 3903 "y.tab.c"
    break;

  case 169: /* statement: iteration_statement  */
#line 1575 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Stateme) = (yyvsp[0].Stateme);
                //$$=createNode("statement",$1,NULL);
            }
#line 3912 "y.tab.c"
    break;

  case 170: /* statement: jump_statement  */
#line 1580 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Stateme) = (yyvsp[0].Stateme);
                //$$=createNode("statement",$1,NULL);
            }
#line 3921 "y.tab.c"
    break;

  case 171: /* loop_block: labeled_statement  */
#line 1587 "TinyC3_22CS30027_22CS30019.y"
            {
                //$$=createNode("statement",$1,NULL);
            }
#line 3929 "y.tab.c"
    break;

  case 172: /* loop_block: expression_statement  */
#line 1591 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Stateme) = new Statement();
                (yyval.Stateme)->NextList = (yyvsp[0].Express)->NextList;
                //$$=createNode("statement",$1,NULL);
            }
#line 3939 "y.tab.c"
    break;

  case 173: /* loop_block: selection_statement  */
#line 1597 "TinyC3_22CS30027_22CS30019.y"
            {
               (yyval.Stateme) = (yyvsp[0].Stateme);
                //$$=createNode("statement",$1,NULL);
            }
#line 3948 "y.tab.c"
    break;

  case 174: /* loop_block: iteration_statement  */
#line 1602 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Stateme) = (yyvsp[0].Stateme);
                //$$=createNode("statement",$1,NULL);
            }
#line 3957 "y.tab.c"
    break;

  case 175: /* loop_block: jump_statement  */
#line 1607 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Stateme) = (yyvsp[0].Stateme);
                //$$=createNode("statement",$1,NULL);
            }
#line 3966 "y.tab.c"
    break;

  case 176: /* labeled_statement: IDENTIFIER COLON statement  */
#line 1617 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=$$=createNode("labeled_statement",createNode("ignore",createNode("IDENTIFIER",NULL,NULL),createNode("COLON",NULL,NULL)),$3);
                    }
#line 3974 "y.tab.c"
    break;

  case 177: /* labeled_statement: CASE constant_expression COLON statement  */
#line 1621 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("labeled_statement",createNode("ignore",createNode("CASE",NULL,NULL),$2),createNode("ignore",createNode("CASE",NULL,NULL),$4));
                    }
#line 3982 "y.tab.c"
    break;

  case 178: /* labeled_statement: DEFAULT COLON statement  */
#line 1625 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("labeled_statement",createNode("ignore",createNode("DEFAULT",NULL,NULL),createNode("COLON",NULL,NULL)),$3);
                    }
#line 3990 "y.tab.c"
    break;

  case 179: /* compound_statement: CURLY_BRACKET_OPEN createST switch_table block_item_list_opt CURLY_BRACKET_CLOSE  */
#line 1633 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Stateme) = (yyvsp[-1].Stateme);
                        CurrentST = CurrentST->PtrToParent;
                        //$$=createNode("compound_statement",createNode("ignore",createNode("CURLY_BRACKET_OPEN",NULL,NULL),$2),createNode("CURLY_BRACKET_CLOSE",NULL,NULL));
                    }
#line 4000 "y.tab.c"
    break;

  case 180: /* createST: %empty  */
#line 1641 "TinyC3_22CS30027_22CS30019.y"
        {
            // cout << "Block Type:" << BlockType<< endl;
            string New_ST = CurrentST->Name+"_"+BlockType+"_"+to_string(SymbolTableCount++);
            Symbol* TempSym = CurrentST->LookUp(New_ST);
            TempSym->NestedTable = new SymbolTable(New_ST);
            TempSym->Name = New_ST;
            TempSym->NestedTable->PtrToParent = CurrentST;
            TempSym->Type = new SType("block");
            RecentSymbol = TempSym;
        }
#line 4015 "y.tab.c"
    break;

  case 181: /* block_item_list_opt: %empty  */
#line 1654 "TinyC3_22CS30027_22CS30019.y"
                    {
                       (yyval.Stateme) = new Statement();
                        //$$ = createNode("block_item_list_opt",NULL,NULL);
                    }
#line 4024 "y.tab.c"
    break;

  case 182: /* block_item_list_opt: block_item_list  */
#line 1659 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Stateme) = (yyvsp[0].Stateme);
                        //$$=createNode("block_item_list_opt",$1,NULL);
                    }
#line 4033 "y.tab.c"
    break;

  case 183: /* block_item_list: block_item  */
#line 1668 "TinyC3_22CS30027_22CS30019.y"
                {
                    (yyval.Stateme) = (yyvsp[0].Stateme);
                    //$$=createNode("block_item_list",$1,NULL);
                }
#line 4042 "y.tab.c"
    break;

  case 184: /* block_item_list: block_item_list countinst block_item  */
#line 1673 "TinyC3_22CS30027_22CS30019.y"
                {
                    (yyval.Stateme) = (yyvsp[0].Stateme);
                    BackPatch((yyvsp[-2].Stateme)->NextList,(yyvsp[-1].InstCount));
                    //$$=createNode("block_item_list",$1,$2);
                }
#line 4052 "y.tab.c"
    break;

  case 185: /* block_item: declaration  */
#line 1683 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Stateme) = new Statement();
                //$$=createNode("block_item",$1,NULL);
            }
#line 4061 "y.tab.c"
    break;

  case 186: /* block_item: statement  */
#line 1688 "TinyC3_22CS30027_22CS30019.y"
            {
                (yyval.Stateme) = (yyvsp[0].Stateme);
                //$$=createNode("block_item",$1,NULL);
            }
#line 4070 "y.tab.c"
    break;

  case 187: /* expression_statement: expression_opt SEMICOLON  */
#line 1697 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Express) = (yyvsp[-1].Express);
                        //$$=createNode("expression_statement",$1,createNode("SEMICOLON",NULL,NULL));
                    }
#line 4079 "y.tab.c"
    break;

  case 188: /* expression_opt: %empty  */
#line 1704 "TinyC3_22CS30027_22CS30019.y"
                {
                    (yyval.Express) = new Expression();
                    //$$ = createNode("expression_opt",NULL,NULL);
                }
#line 4088 "y.tab.c"
    break;

  case 189: /* expression_opt: expression  */
#line 1709 "TinyC3_22CS30027_22CS30019.y"
                {
                    (yyval.Express) = (yyvsp[0].Express);
                    //$$=createNode("expression_opt",$1,NULL);
                }
#line 4097 "y.tab.c"
    break;

  case 190: /* selection_statement: IF ROUND_BRACKET_OPEN expression newstatement ROUND_BRACKET_CLOSE countinst statement newstatement  */
#line 1718 "TinyC3_22CS30027_22CS30019.y"
                    {
                        BackPatch((yyvsp[-4].Stateme)->NextList,QuadList.InstructionList.size());
                        itob((yyvsp[-5].Express));
                        (yyval.Stateme) = new Statement();
                        BackPatch((yyvsp[-5].Express)->TrueList,(yyvsp[-2].InstCount));
                        list<int> ll = Merge((yyvsp[-5].Express)->FalseList,(yyvsp[-1].Stateme)->NextList);
                        (yyval.Stateme)->NextList = Merge(ll,(yyvsp[0].Stateme)->NextList);
                        //$$=createNode("selection_statement",createNode("ignore",createNode("IF",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3)),createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),createNode("ignore",$5,createNode("THEN",NULL,NULL))));
                    }
#line 4111 "y.tab.c"
    break;

  case 191: /* selection_statement: IF ROUND_BRACKET_OPEN expression newstatement ROUND_BRACKET_CLOSE countinst statement newstatement ELSE countinst statement  */
#line 1728 "TinyC3_22CS30027_22CS30019.y"
                    {
                        BackPatch((yyvsp[-7].Stateme)->NextList,QuadList.InstructionList.size());
                        itob((yyvsp[-8].Express));
                        (yyval.Stateme) = new Statement();
                        BackPatch((yyvsp[-8].Express)->TrueList,(yyvsp[-5].InstCount));
                        BackPatch((yyvsp[-8].Express)->FalseList,(yyvsp[-1].InstCount));
                        list<int> ll = Merge((yyvsp[-4].Stateme)->NextList,(yyvsp[-3].Stateme)->NextList);
                        (yyval.Stateme)->NextList = Merge(ll,(yyvsp[0].Stateme)->NextList);
                        //$$=createNode("selection_statement",createNode("ignore",createNode("IF",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3)),createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),createNode("ignore",$5,createNode("ignore",createNode("ELSE",NULL,NULL),$7))));
                    }
#line 4126 "y.tab.c"
    break;

  case 192: /* selection_statement: SWITCH ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement  */
#line 1739 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("selection_statement",createNode("ignore",createNode("SWITCH",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3)),createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$5));
                    }
#line 4134 "y.tab.c"
    break;

  case 193: /* iteration_statement: WHILE whilestart ROUND_BRACKET_OPEN createST switch_table countinst expression ROUND_BRACKET_CLOSE countinst loop_block  */
#line 1747 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Stateme) = new Statement();
                        itob((yyvsp[-3].Express));
                        BackPatch((yyvsp[0].Stateme)->NextList,(yyvsp[-4].InstCount));
                        BackPatch((yyvsp[-3].Express)->TrueList,(yyvsp[-1].InstCount));
                        (yyval.Stateme)->NextList = (yyvsp[-3].Express)->FalseList;
                        QuadArray::Emit("goto",itos((yyvsp[-4].InstCount)));
                        BlockType="";
                        CurrentST = CurrentST->PtrToParent;
                        //$$=createNode("iteration_statement",createNode("ignore",createNode("WHILE",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3)),createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$5));
                    }
#line 4150 "y.tab.c"
    break;

  case 194: /* iteration_statement: WHILE whilestart ROUND_BRACKET_OPEN createST switch_table countinst expression ROUND_BRACKET_CLOSE countinst CURLY_BRACKET_OPEN block_item_list_opt CURLY_BRACKET_CLOSE  */
#line 1759 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Stateme) = new Statement();
                        itob((yyvsp[-5].Express));
                        BackPatch((yyvsp[-1].Stateme)->NextList,(yyvsp[-6].InstCount));
                        BackPatch((yyvsp[-5].Express)->TrueList,(yyvsp[-3].InstCount));
                        (yyval.Stateme)->NextList = (yyvsp[-5].Express)->FalseList;
                        QuadArray::Emit("goto",itos((yyvsp[-6].InstCount)));
                        BlockType="";
                        CurrentST = CurrentST->PtrToParent;
                        //$$=createNode("iteration_statement",createNode("ignore",createNode("WHILE",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3)),createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$5));
                    }
#line 4166 "y.tab.c"
    break;

  case 195: /* iteration_statement: DO dostart createST switch_table countinst loop_block WHILE ROUND_BRACKET_OPEN countinst expression ROUND_BRACKET_CLOSE SEMICOLON  */
#line 1771 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Stateme) = new Statement();
                        itob((yyvsp[-2].Express));
                        BackPatch((yyvsp[-2].Express)->TrueList,(yyvsp[-7].InstCount));
                        BackPatch((yyvsp[-6].Stateme)->NextList,(yyvsp[-3].InstCount));
                        (yyval.Stateme)->NextList = (yyvsp[-2].Express)->FalseList;
                        BlockType="";
                        CurrentST = CurrentST->PtrToParent;
                        //$$=createNode("iteration_statement",createNode("DO",NULL,NULL),createNode("ignore",$2,createNode("ignore",createNode("WHILE",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$5,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),createNode("SEMICOLON",NULL,NULL)))))));
                    }
#line 4181 "y.tab.c"
    break;

  case 196: /* iteration_statement: DO dostart CURLY_BRACKET_OPEN createST switch_table countinst block_item_list_opt CURLY_BRACKET_CLOSE WHILE ROUND_BRACKET_OPEN countinst expression ROUND_BRACKET_CLOSE SEMICOLON  */
#line 1782 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Stateme) = new Statement();
                        itob((yyvsp[-2].Express));
                        BackPatch((yyvsp[-2].Express)->TrueList,(yyvsp[-8].InstCount));
                        BackPatch((yyvsp[-7].Stateme)->NextList,(yyvsp[-3].InstCount));
                        (yyval.Stateme)->NextList = (yyvsp[-2].Express)->FalseList;
                        BlockType="";
                        CurrentST = CurrentST->PtrToParent;
                        //$$=createNode("iteration_statement",createNode("DO",NULL,NULL),createNode("ignore",$2,createNode("ignore",createNode("WHILE",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$5,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),createNode("SEMICOLON",NULL,NULL)))))));
                    }
#line 4196 "y.tab.c"
    break;

  case 197: /* iteration_statement: FOR forstart ROUND_BRACKET_OPEN createST switch_table expression_opt SEMICOLON countinst expression_opt SEMICOLON countinst expression_opt newstatement ROUND_BRACKET_CLOSE countinst loop_block  */
#line 1793 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Stateme) = new Statement();
                        itob((yyvsp[-7].Express));
                        BackPatch((yyvsp[-7].Express)->TrueList,(yyvsp[-1].InstCount));
                        BackPatch((yyvsp[-3].Stateme)->NextList,(yyvsp[-8].InstCount));
                        BackPatch((yyvsp[0].Stateme)->NextList,(yyvsp[-5].InstCount));
                        QuadArray::Emit("goto",itos((yyvsp[-5].InstCount)));
                        (yyval.Stateme)->NextList = (yyvsp[-7].Express)->FalseList;
                        BlockType = "";
                        CurrentST = CurrentST->PtrToParent;
                        //$$=createNode("iteration_statement",createNode("FOR",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$3,createNode("ignore",createNode("SEMICOLON",NULL,NULL),createNode("ignore",$5,createNode("ignore",createNode("SEMICOLON",NULL,NULL),createNode("ignore",$7,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$9))))))));
                    }
#line 4213 "y.tab.c"
    break;

  case 198: /* iteration_statement: FOR forstart ROUND_BRACKET_OPEN createST switch_table expression_opt SEMICOLON countinst expression_opt SEMICOLON countinst expression_opt newstatement ROUND_BRACKET_CLOSE countinst CURLY_BRACKET_OPEN block_item_list_opt CURLY_BRACKET_CLOSE  */
#line 1806 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Stateme) = new Statement();
                        itob((yyvsp[-9].Express));
                        BackPatch((yyvsp[-9].Express)->TrueList,(yyvsp[-3].InstCount));
                        BackPatch((yyvsp[-5].Stateme)->NextList,(yyvsp[-10].InstCount));
                        BackPatch((yyvsp[-1].Stateme)->NextList,(yyvsp[-7].InstCount));
                        QuadArray::Emit("goto",itos((yyvsp[-7].InstCount)));
                        (yyval.Stateme)->NextList = (yyvsp[-9].Express)->FalseList;
                        BlockType = "";
                        CurrentST = CurrentST->PtrToParent;
                        //$$=createNode("iteration_statement",createNode("FOR",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$3,createNode("ignore",createNode("SEMICOLON",NULL,NULL),createNode("ignore",$5,createNode("ignore",createNode("SEMICOLON",NULL,NULL),createNode("ignore",$7,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$9))))))));
                    }
#line 4230 "y.tab.c"
    break;

  case 199: /* iteration_statement: FOR forstart ROUND_BRACKET_OPEN createST switch_table declaration countinst expression_opt SEMICOLON countinst expression_opt newstatement ROUND_BRACKET_CLOSE countinst loop_block  */
#line 1819 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Stateme) = new Statement();
                        itob((yyvsp[-7].Express));
                        BackPatch((yyvsp[-7].Express)->TrueList,(yyvsp[-1].InstCount));
                        BackPatch((yyvsp[-3].Stateme)->NextList,(yyvsp[-8].InstCount));
                        BackPatch((yyvsp[0].Stateme)->NextList,(yyvsp[-5].InstCount));
                        QuadArray::Emit("goto",itos((yyvsp[-5].InstCount)));
                        (yyval.Stateme)->NextList = (yyvsp[-7].Express)->FalseList;
                        BlockType = "";
                        CurrentST = CurrentST->PtrToParent;
                        //$$=createNode("iteration_statement",createNode("FOR",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$3,createNode("ignore",$4,createNode("ignore",createNode("SEMICOLON",NULL,NULL),createNode("ignore",$6,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$8)))))));
                    }
#line 4247 "y.tab.c"
    break;

  case 200: /* iteration_statement: FOR forstart ROUND_BRACKET_OPEN createST switch_table declaration countinst expression_opt SEMICOLON countinst expression_opt newstatement ROUND_BRACKET_CLOSE countinst CURLY_BRACKET_OPEN block_item_list_opt CURLY_BRACKET_CLOSE  */
#line 1832 "TinyC3_22CS30027_22CS30019.y"
                    {
                        (yyval.Stateme) = new Statement();
                        itob((yyvsp[-9].Express));
                        BackPatch((yyvsp[-9].Express)->TrueList,(yyvsp[-3].InstCount));
                        BackPatch((yyvsp[-5].Stateme)->NextList,(yyvsp[-10].InstCount));
                        BackPatch((yyvsp[-1].Stateme)->NextList,(yyvsp[-7].InstCount));
                        QuadArray::Emit("goto",itos((yyvsp[-7].InstCount)));
                        (yyval.Stateme)->NextList = (yyvsp[-9].Express)->FalseList;
                        BlockType = "";
                        CurrentST = CurrentST->PtrToParent;
                        //$$=createNode("iteration_statement",createNode("FOR",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$3,createNode("ignore",$4,createNode("ignore",createNode("SEMICOLON",NULL,NULL),createNode("ignore",$6,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$8)))))));
                    }
#line 4264 "y.tab.c"
    break;

  case 201: /* forstart: %empty  */
#line 1847 "TinyC3_22CS30027_22CS30019.y"
        {
            BlockType="for_loop";
        }
#line 4272 "y.tab.c"
    break;

  case 202: /* whilestart: %empty  */
#line 1853 "TinyC3_22CS30027_22CS30019.y"
         {
            BlockType="while_loop";
        }
#line 4280 "y.tab.c"
    break;

  case 203: /* dostart: %empty  */
#line 1859 "TinyC3_22CS30027_22CS30019.y"
         {
            BlockType="do_while_loop";
        }
#line 4288 "y.tab.c"
    break;

  case 204: /* jump_statement: GOTO IDENTIFIER SEMICOLON  */
#line 1867 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("jump_statement",createNode("GOTO",NULL,NULL),createNode("ignore",createNode("IDENTIFIER",NULL,NULL),createNode("SEMICOLON",NULL,NULL)));
                }
#line 4296 "y.tab.c"
    break;

  case 205: /* jump_statement: CONTINUE SEMICOLON  */
#line 1871 "TinyC3_22CS30027_22CS30019.y"
                {
                    (yyval.Stateme) = new Statement();
                    //$$=createNode("jump_statement",createNode("CONTINUE",NULL,NULL),createNode("SEMICOLON",NULL,NULL));
                }
#line 4305 "y.tab.c"
    break;

  case 206: /* jump_statement: BREAK SEMICOLON  */
#line 1876 "TinyC3_22CS30027_22CS30019.y"
                {
                    (yyval.Stateme) = new Statement();
                    //$$=createNode("jump_statement",createNode("BREAK",NULL,NULL),createNode("SEMICOLON",NULL,NULL));
                }
#line 4314 "y.tab.c"
    break;

  case 207: /* jump_statement: RETURN expression_opt SEMICOLON  */
#line 1881 "TinyC3_22CS30027_22CS30019.y"
                {
                    (yyval.Stateme) = new Statement();
                    QuadArray::Emit("return",(yyvsp[-1].Express)->Location->Name);
                //$$=createNode("jump_statement",createNode("RETURN",NULL,NULL),createNode("ignore",$2,createNode("SEMICOLON",NULL,NULL)));
                }
#line 4324 "y.tab.c"
    break;

  case 208: /* translation_unit: external_declaration  */
#line 1895 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("translation_unit",$1,NULL);
                }
#line 4332 "y.tab.c"
    break;

  case 209: /* translation_unit: translation_unit external_declaration  */
#line 1899 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("translation_unit",$1,$2);
                }
#line 4340 "y.tab.c"
    break;

  case 210: /* external_declaration: function_definition  */
#line 1907 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("external_declaration",$1,NULL);
                    }
#line 4348 "y.tab.c"
    break;

  case 211: /* external_declaration: declaration  */
#line 1911 "TinyC3_22CS30027_22CS30019.y"
                     {
                        //$$=createNode("external_declaration",$1,NULL);
                    }
#line 4356 "y.tab.c"
    break;

  case 212: /* function_definition: declaration_specifiers declarator declaration_list_opt CURLY_BRACKET_OPEN switch_table block_item_list_opt CURLY_BRACKET_CLOSE  */
#line 1919 "TinyC3_22CS30027_22CS30019.y"
                    {
                        CurrentST->PtrToParent = GlobalST;
                        SymbolTableCount=0;
                        CurrentST = GlobalST;
                        //$$=createNode("function_definition",createNode("ignore",$1,$2),createNode("ignore",$3,$4));
                    }
#line 4367 "y.tab.c"
    break;

  case 213: /* declaration_list_opt: %empty  */
#line 1928 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$ = createNode("declaration_list_opt",NULL,NULL);
                    }
#line 4375 "y.tab.c"
    break;

  case 214: /* declaration_list_opt: declaration_list  */
#line 1932 "TinyC3_22CS30027_22CS30019.y"
                    {
                        //$$=createNode("declaration_list_opt",$1,NULL);
                    }
#line 4383 "y.tab.c"
    break;

  case 215: /* declaration_list: declaration  */
#line 1940 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("declaration_list",$1,NULL);
                }
#line 4391 "y.tab.c"
    break;

  case 216: /* declaration_list: declaration_list declaration  */
#line 1944 "TinyC3_22CS30027_22CS30019.y"
                {
                    //$$=createNode("declaration_list",$1,$2);
                }
#line 4399 "y.tab.c"
    break;


#line 4403 "y.tab.c"

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

#line 1951 "TinyC3_22CS30027_22CS30019.y"

void yyerror(string ERRORS) {
    cout << "Error :" << ERRORS << '\n';
}


