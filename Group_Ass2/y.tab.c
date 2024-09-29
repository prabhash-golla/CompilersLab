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
#line 1 "tinyC2_22CS30027_22CS30019.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    int yylex();
    void yyerror(char *ERRORS);

    // Node structure for the parse tree
    typedef struct _Node {
        char *value;
        struct _Node *left;
        struct _Node *right;
    } Node;

    Node* createNode(char *value, Node *left, Node *right) {
        Node *node = (Node *)malloc(sizeof(Node));
        node->value = strdup(value);
        node->left = left;
        node->right = right;
        return node;
    }

    void printTree(Node *node, int level) {
        if (node == NULL) return;
        if(strcmp(node->value,"ignore"))
        {
            for (int i = 0; i < level-1; i++) printf("\t");
            if(level>0) printf("%d-->",level);
            printf("%s\n", node->value);
            printTree(node->left, level + 1);
            printTree(node->right, level + 1);
        }
        else
        {
            printTree(node->left, level);
            printTree(node->right, level);
        }
    }

#line 112 "y.tab.c"

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
#line 42 "tinyC2_22CS30027_22CS30019.y"

    int INTVAL;
    struct _Node *node;

#line 358 "y.tab.c"

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
  YYSYMBOL_argument_expression_list = 99,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 100,         /* unary_expression  */
  YYSYMBOL_unary_operator = 101,           /* unary_operator  */
  YYSYMBOL_cast_expression = 102,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 103, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 104,      /* additive_expression  */
  YYSYMBOL_shift_expression = 105,         /* shift_expression  */
  YYSYMBOL_relational_expression = 106,    /* relational_expression  */
  YYSYMBOL_equality_expression = 107,      /* equality_expression  */
  YYSYMBOL_and_expression = 108,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 109,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 110,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 111,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 112,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 113,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 114,    /* assignment_expression  */
  YYSYMBOL_expression = 115,               /* expression  */
  YYSYMBOL_constant_expression = 116,      /* constant_expression  */
  YYSYMBOL_declaration = 117,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 118,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 119,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 120,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 121,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 122,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 123, /* specifier_qualifier_list  */
  YYSYMBOL_type_qualifier = 124,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 125,       /* function_specifier  */
  YYSYMBOL_declarator = 126,               /* declarator  */
  YYSYMBOL_direct_declarator = 127,        /* direct_declarator  */
  YYSYMBOL_type_qualifier_list_opt = 128,  /* type_qualifier_list_opt  */
  YYSYMBOL_assignment_expression_opt = 129, /* assignment_expression_opt  */
  YYSYMBOL_identifier_list_opt = 130,      /* identifier_list_opt  */
  YYSYMBOL_pointer = 131,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 132,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 133,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 134,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 135,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 136,          /* identifier_list  */
  YYSYMBOL_type_name = 137,                /* type_name  */
  YYSYMBOL_initializer = 138,              /* initializer  */
  YYSYMBOL_initializer_list = 139,         /* initializer_list  */
  YYSYMBOL_designation_opt = 140,          /* designation_opt  */
  YYSYMBOL_designation = 141,              /* designation  */
  YYSYMBOL_designator_list = 142,          /* designator_list  */
  YYSYMBOL_designator = 143,               /* designator  */
  YYSYMBOL_statement = 144,                /* statement  */
  YYSYMBOL_labeled_statement = 145,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 146,       /* compound_statement  */
  YYSYMBOL_block_item_list_opt = 147,      /* block_item_list_opt  */
  YYSYMBOL_block_item_list = 148,          /* block_item_list  */
  YYSYMBOL_block_item = 149,               /* block_item  */
  YYSYMBOL_expression_statement = 150,     /* expression_statement  */
  YYSYMBOL_expression_opt = 151,           /* expression_opt  */
  YYSYMBOL_selection_statement = 152,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 153,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 154,           /* jump_statement  */
  YYSYMBOL_start_symbol = 155,             /* start_symbol  */
  YYSYMBOL_translation_unit = 156,         /* translation_unit  */
  YYSYMBOL_external_declaration = 157,     /* external_declaration  */
  YYSYMBOL_function_definition = 158,      /* function_definition  */
  YYSYMBOL_declaration_list_opt = 159,     /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 160          /* declaration_list  */
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
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   749

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  191
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  326

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
       0,   168,   168,   169,   170,   173,   174,   175,   176,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   195,
     196,   201,   202,   203,   204,   205,   206,   211,   212,   213,
     214,   215,   216,   221,   222,   227,   228,   229,   230,   235,
     236,   237,   242,   243,   244,   249,   250,   251,   252,   253,
     258,   259,   260,   265,   266,   271,   272,   277,   278,   283,
     284,   289,   290,   295,   296,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   317,   318,   322,
     330,   331,   335,   336,   337,   338,   339,   340,   341,   342,
     346,   347,   351,   352,   356,   356,   360,   360,   360,   360,
     360,   360,   360,   364,   364,   365,   365,   369,   369,   369,
     373,   377,   378,   382,   383,   384,   385,   386,   387,   388,
     389,   391,   392,   394,   395,   397,   398,   402,   403,   407,
     408,   412,   413,   417,   418,   422,   423,   427,   428,   432,
     436,   437,   438,   442,   443,   445,   446,   450,   454,   455,
     459,   460,   469,   470,   471,   472,   473,   474,   478,   479,
     480,   484,   486,   486,   490,   490,   494,   494,   498,   500,
     500,   504,   505,   506,   510,   511,   512,   513,   517,   518,
     519,   520,   528,   530,   531,   535,   536,   540,   542,   543,
     547,   548
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
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "specifier_qualifier_list", "type_qualifier",
  "function_specifier", "declarator", "direct_declarator",
  "type_qualifier_list_opt", "assignment_expression_opt",
  "identifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
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

#define YYPACT_NINF (-176)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-189)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     692,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,   -33,   692,   692,   692,   692,
      60,   692,  -176,  -176,   -37,   127,  -176,  -176,    11,  -176,
     455,    98,   -35,  -176,  -176,  -176,  -176,  -176,  -176,   -12,
    -176,    26,   127,  -176,   -37,   488,  -176,   -33,    37,   692,
     114,   194,    98,  -176,  -176,  -176,  -176,    27,   562,   405,
     -34,   576,   576,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,   137,   594,   592,  -176,
     119,     9,     7,    63,    33,    82,    73,    76,    91,    77,
    -176,  -176,  -176,   249,  -176,  -176,   127,   606,   129,  -176,
     -37,   123,   128,    93,  -176,   103,   405,  -176,  -176,   -28,
     712,  -176,   712,   152,   592,   111,   -32,   488,  -176,    -2,
    -176,   405,  -176,  -176,   592,   504,   115,   117,  -176,  -176,
     592,   592,   592,   592,   592,   592,   592,   592,   592,   592,
     592,  -176,  -176,   592,   592,   592,   592,   592,   592,   592,
     592,   592,   592,   592,   592,   592,   592,   592,   592,   592,
     592,   592,   135,   592,   141,   138,   305,   176,   133,   179,
     592,   189,   190,   162,   150,  -176,  -176,  -176,  -176,   192,
     249,  -176,  -176,   169,  -176,  -176,  -176,   592,   201,  -176,
     202,   592,  -176,  -176,  -176,   491,   157,   204,  -176,   592,
    -176,  -176,   518,  -176,   207,  -176,  -176,     1,  -176,  -176,
    -176,   206,   -30,  -176,   -21,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,   119,   119,     9,     9,     7,     7,     7,     7,
      63,    63,    33,    82,    73,    76,    91,   -29,  -176,   174,
    -176,   305,   215,   355,   203,   592,   208,   592,   592,   305,
    -176,  -176,  -176,   221,  -176,  -176,   223,  -176,  -176,  -176,
     234,  -176,   -34,  -176,  -176,  -176,   488,   234,  -176,  -176,
     592,   592,   305,  -176,   240,   592,   214,  -176,   -11,  -176,
     -10,    -9,  -176,  -176,  -176,    -5,  -176,  -176,  -176,  -176,
     592,   216,   592,   305,   305,   305,  -176,   166,    -7,   592,
     217,   275,  -176,  -176,  -176,   218,   251,   592,   305,  -176,
     305,   252,  -176,  -176,   305,  -176
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    97,   107,   102,    94,   101,   110,    99,   100,   108,
      98,    95,    96,   109,   186,     0,    82,    83,    84,    85,
       0,   182,   183,   185,     0,   121,    80,   113,     0,    90,
      92,   112,     0,    86,    87,    88,    89,     1,   184,     0,
     129,   127,   122,    81,     0,     0,   190,     0,     0,   189,
     121,   125,   111,   114,   128,   130,    91,    92,     0,     0,
     146,     0,     0,    27,    28,    29,    30,    31,    32,     5,
       2,     3,     4,     7,     6,     9,    21,    33,     0,    35,
      39,    42,    45,    50,    53,    55,    57,    59,    61,    63,
      65,   140,    93,   162,   187,   191,   121,   123,   122,   137,
     136,     0,     0,   131,   133,   126,     0,    25,    77,     0,
     105,   139,   106,     0,     0,     0,     0,     0,   145,     0,
     148,     0,    22,    23,     0,     0,     0,     0,    15,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   169,     0,     0,     0,
     169,     0,     0,     5,   170,   166,   167,   152,   153,     0,
     163,   164,   154,     0,   155,   156,   157,     0,    28,   124,
       0,     0,   135,   120,   119,     0,     0,     0,     8,     0,
     103,   104,     0,    79,     0,   151,   141,   146,   143,   147,
     149,     0,     0,    11,     0,    19,    13,    14,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    36,
      37,    38,    40,    41,    43,    44,    46,    47,    48,    49,
      51,    52,    54,    56,    58,    60,    62,     0,   180,     0,
     179,   169,     0,   169,     0,     0,     0,     0,     0,   169,
     161,   165,   168,     0,   118,   115,     0,   132,   134,   138,
      26,    78,   146,    34,   150,   142,     0,     0,    10,    12,
       0,     0,   169,   160,     0,   169,     0,   178,     0,   181,
       0,     0,   158,   116,   117,     0,   144,    20,    64,   159,
       0,     0,   169,   169,   169,   169,    17,   146,     0,   169,
       0,   171,   173,   174,    18,     0,     0,   169,   169,   175,
     169,     0,   172,   177,   169,   176
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -176,  -176,  -176,  -176,  -176,   -39,  -176,   -73,    24,    34,
      75,    39,   151,   153,   136,   139,   148,  -176,  -112,   -44,
     -59,   146,   -24,    10,  -176,   269,  -176,    25,    48,   142,
    -176,    -3,   282,   -46,  -176,  -176,   277,   270,  -176,  -176,
     124,  -176,   -76,  -114,    49,  -175,  -176,  -176,   209,  -129,
    -176,   274,  -176,  -176,   147,  -176,  -152,  -176,  -176,  -176,
    -176,  -176,   308,  -176,  -176,  -176
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    74,    75,    76,   214,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,   108,
     174,   204,    14,    47,    28,    29,    16,    17,   111,    18,
      19,    57,    31,    41,   190,   101,    32,    42,   102,   103,
     104,   105,   113,    92,   116,   117,   118,   119,   120,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
      20,    21,    22,    23,    48,    49
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     109,    91,   203,   208,    97,   142,    46,    24,   114,    24,
      15,    24,    30,   278,   115,   206,    25,   198,   256,   107,
      25,    39,   122,   123,   279,    95,    33,    34,    35,    36,
     197,    15,   276,    53,   303,   304,   305,   252,   315,   141,
     114,    26,   306,   114,   281,   211,   115,   109,   275,   115,
     187,   203,    27,   189,    27,   207,    27,   199,   199,   199,
      37,   100,   109,   146,   147,   212,   280,   148,   149,   175,
     229,   230,   231,    91,   209,   141,   199,   199,   199,    25,
     199,   215,   307,    93,   110,    43,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   192,    44,   154,
     155,   286,   247,    45,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   283,     2,   141,   150,   151,   152,   153,   273,
     292,   110,   276,   301,   156,   110,     2,   110,     2,     9,
      50,   157,    51,   263,    96,   158,   110,   266,   160,   161,
     310,    13,     9,   299,     9,   271,   175,   316,   200,   191,
     201,   159,   296,   141,    13,   321,    13,    40,   193,   298,
     232,   233,   143,   194,   311,   312,   313,   144,   145,   124,
     195,   125,   234,   235,    55,   126,   127,   128,   129,   322,
     196,   323,    40,   240,   241,   325,   288,   202,   290,   291,
     205,   112,     1,     2,   216,   100,   217,     3,   114,   248,
       4,   251,     5,   314,   115,   250,     6,     7,     8,     9,
     253,    10,   254,   255,    11,   236,   237,   238,   239,   285,
      12,    13,    91,   257,   258,   259,   297,   199,    40,   260,
      55,   308,   141,   262,   264,   265,   269,   282,   112,   270,
     274,   277,   112,   284,   112,   162,   163,     1,     2,   164,
     165,   166,     3,   112,   293,     4,   294,     5,   167,   168,
     169,     6,     7,     8,     9,   170,    10,   287,    58,    11,
     272,   171,   289,    99,   300,    12,    13,   172,   302,   318,
     309,   317,   319,    59,   244,    93,   320,   324,   245,    61,
      62,    63,    64,    65,    66,    67,    68,   242,   246,   249,
     243,   162,   163,    56,    52,   164,   165,   166,    54,   268,
      98,   295,    94,  -169,   167,   168,   169,   261,   210,    38,
       0,   170,     0,     0,    58,     0,     0,   171,   173,    70,
      71,    72,    73,   172,     0,     0,     0,     0,     0,    59,
       0,    93,     0,     0,     0,    61,    62,    63,    64,    65,
      66,    67,    68,     1,     2,     0,     0,     0,     3,     0,
       0,     4,     0,     5,     0,     0,     0,     6,     7,     8,
       9,     0,    10,     0,    58,    11,     0,     0,     0,     0,
       0,    12,    13,     0,   173,    70,    71,    72,    73,    59,
       0,     0,     0,     0,     0,    61,    62,    63,    64,    65,
      66,    67,    68,     1,     2,     0,     0,     0,     3,     0,
       0,     0,     0,     5,     0,     0,     0,     0,     7,     8,
       9,     0,    10,     0,    58,     0,     0,     0,     0,     0,
       0,    12,    13,     0,    69,    70,    71,    72,    73,    59,
       0,     0,     0,     0,     0,    61,    62,    63,    64,    65,
      66,    67,    68,     1,     2,     0,     0,     0,     3,     0,
       0,     4,     0,     5,     0,     0,     0,     6,     7,     8,
       9,     0,    10,     0,     0,    11,     0,     0,     0,     0,
       0,    12,    13,     0,    69,    70,    71,    72,    73,     1,
       2,  -188,     0,     0,     3,     0,     0,     4,     0,     5,
       0,     0,     0,     6,     7,     8,     9,    58,    10,     0,
       0,    11,     0,     0,     0,     0,     0,    12,    13,     0,
       0,    45,    59,    58,    60,     0,     0,     0,    61,    62,
      63,    64,    65,    66,    67,    68,     0,    58,    59,   213,
       0,     0,     0,     0,    61,    62,    63,    64,    65,    66,
      67,    68,    59,     0,   272,     0,   267,     0,    61,    62,
      63,    64,    65,    66,    67,    68,     0,    69,    70,    71,
      72,    73,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,    69,    70,    71,    72,    73,     0,     0,
       0,     0,     0,     0,     0,    58,   106,    69,    70,    71,
      72,    73,    61,    62,    63,    64,    65,    66,    67,    68,
     121,    58,     0,     0,     0,     0,    61,    62,    63,    64,
      65,    66,    67,    68,     0,    58,    59,     0,     0,     0,
       0,     0,    61,    62,    63,    64,    65,    66,    67,    68,
      59,    69,    70,    71,    72,    73,    61,    62,    63,   188,
      65,    66,    67,    68,     0,    69,    70,    71,    72,    73,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,    69,    70,    71,    72,    73,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    69,    70,    71,    72,    73,
       1,     2,     0,     0,     0,     3,     0,     0,     4,     0,
       5,     0,     0,     0,     6,     7,     8,     9,     0,    10,
       1,     2,    11,     0,     0,     3,     0,     0,    12,    13,
       5,     0,     0,     0,     0,     7,     8,     9,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13
};

static const yytype_int16 yycheck[] =
{
      59,    45,   114,   117,    50,    78,    30,    44,    42,    44,
       0,    44,    15,    43,    48,    47,    53,    45,   170,    58,
      53,    24,    61,    62,    45,    49,    16,    17,    18,    19,
     106,    21,   207,    45,    45,    45,    45,   166,    45,    78,
      42,    74,    47,    42,    73,   121,    48,   106,    47,    48,
      96,   163,    89,    97,    89,    87,    89,    87,    87,    87,
       0,    51,   121,    54,    55,   124,    87,    60,    61,    93,
     143,   144,   145,   117,    76,   114,    87,    87,    87,    53,
      87,   125,    87,    46,    59,    74,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   100,    87,    66,
      67,   253,   161,    76,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   251,     9,   163,    62,    63,    64,    65,   202,
     259,   106,   307,   285,    52,   110,     9,   112,     9,    25,
      42,    68,    44,   187,    30,    69,   121,   191,    71,    72,
     302,    37,    25,   282,    25,   199,   180,   309,   110,    30,
     112,    70,   276,   202,    37,   317,    37,    25,    45,   281,
     146,   147,    53,    45,   303,   304,   305,    58,    59,    42,
      87,    44,   148,   149,    42,    48,    49,    50,    51,   318,
      87,   320,    50,   154,   155,   324,   255,    45,   257,   258,
      89,    59,     8,     9,    89,   195,    89,    13,    42,    74,
      16,    73,    18,    47,    48,    74,    22,    23,    24,    25,
      44,    27,    89,    44,    30,   150,   151,   152,   153,   253,
      36,    37,   276,    44,    44,    73,   280,    87,    96,    47,
      98,   300,   281,    74,    43,    43,    89,    73,   106,    45,
      43,    45,   110,    38,   112,     6,     7,     8,     9,    10,
      11,    12,    13,   121,    43,    16,    43,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    74,    29,    30,
      46,    32,    74,    89,    44,    36,    37,    38,    74,    14,
      74,    74,    74,    44,   158,    46,    45,    45,   159,    50,
      51,    52,    53,    54,    55,    56,    57,   156,   160,   163,
     157,     6,     7,    44,    32,    10,    11,    12,    41,   195,
      50,   272,    48,    74,    19,    20,    21,   180,   119,    21,
      -1,    26,    -1,    -1,    29,    -1,    -1,    32,    89,    90,
      91,    92,    93,    38,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    46,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    -1,    29,    30,    -1,    -1,    -1,    -1,
      -1,    36,    37,    -1,    89,    90,    91,    92,    93,    44,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    27,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    37,    -1,    89,    90,    91,    92,    93,    44,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    36,    37,    -1,    89,    90,    91,    92,    93,     8,
       9,    46,    -1,    -1,    13,    -1,    -1,    16,    -1,    18,
      -1,    -1,    -1,    22,    23,    24,    25,    29,    27,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    37,    -1,
      -1,    76,    44,    29,    46,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    29,    44,    45,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    44,    -1,    46,    -1,    75,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    89,    90,    91,
      92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    89,    90,    91,    92,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    44,    89,    90,    91,
      92,    93,    50,    51,    52,    53,    54,    55,    56,    57,
      44,    29,    -1,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    29,    44,    -1,    -1,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      44,    89,    90,    91,    92,    93,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    89,    90,    91,    92,    93,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    89,    90,    91,    92,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    90,    91,    92,    93,
       8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,    -1,
      18,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
       8,     9,    30,    -1,    -1,    13,    -1,    -1,    36,    37,
      18,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,     9,    13,    16,    18,    22,    23,    24,    25,
      27,    30,    36,    37,   117,   118,   121,   122,   124,   125,
     155,   156,   157,   158,    44,    53,    74,    89,   119,   120,
     126,   127,   131,   118,   118,   118,   118,     0,   157,   126,
     124,   128,   132,    74,    87,    76,   117,   118,   159,   160,
      42,    44,   127,    45,   131,   124,   120,   126,    29,    44,
      46,    50,    51,    52,    53,    54,    55,    56,    57,    89,
      90,    91,    92,    93,    96,    97,    98,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   138,    46,   146,   117,    30,   128,   132,    89,
     118,   130,   133,   134,   135,   136,    44,   100,   114,   115,
     122,   123,   124,   137,    42,    48,   139,   140,   141,   142,
     143,    44,   100,   100,    42,    44,    48,    49,    50,    51,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,   100,   102,    53,    58,    59,    54,    55,    60,    61,
      62,    63,    64,    65,    66,    67,    52,    68,    69,    70,
      71,    72,     6,     7,    10,    11,    12,    19,    20,    21,
      26,    32,    38,    89,   115,   117,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   128,    53,   114,
     129,    30,   126,    45,    45,    87,    87,   137,    45,    87,
     123,   123,    45,   113,   116,    89,    47,    87,   138,    76,
     143,   137,   115,    45,    99,   114,    89,    89,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   102,
     102,   102,   103,   103,   104,   104,   105,   105,   105,   105,
     106,   106,   107,   108,   109,   110,   111,   115,    74,   116,
      74,    73,   144,    44,    89,    44,   151,    44,    44,    73,
      47,   149,    74,   114,    43,    43,   114,    75,   135,    89,
      45,   114,    46,   102,    43,    47,   140,    45,    43,    45,
      87,    73,    73,   144,    38,   117,   151,    74,   115,    74,
     115,   115,   144,    43,    43,   139,   138,   114,   113,   144,
      44,   151,    74,    45,    45,    45,    47,    87,   115,    74,
     151,   144,   144,   144,    47,    45,   151,    74,    14,    74,
      45,   151,   144,   144,    45,   144
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    96,    96,    97,    97,    97,    97,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    99,
      99,   100,   100,   100,   100,   100,   100,   101,   101,   101,
     101,   101,   101,   102,   102,   103,   103,   103,   103,   104,
     104,   104,   105,   105,   105,   106,   106,   106,   106,   106,
     107,   107,   107,   108,   108,   109,   109,   110,   110,   111,
     111,   112,   112,   113,   113,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   115,   115,   116,
     117,   117,   118,   118,   118,   118,   118,   118,   118,   118,
     119,   119,   120,   120,   121,   121,   122,   122,   122,   122,
     122,   122,   122,   123,   123,   123,   123,   124,   124,   124,
     125,   126,   126,   127,   127,   127,   127,   127,   127,   127,
     127,   128,   128,   129,   129,   130,   130,   131,   131,   132,
     132,   133,   133,   134,   134,   135,   135,   136,   136,   137,
     138,   138,   138,   139,   139,   140,   140,   141,   142,   142,
     143,   143,   144,   144,   144,   144,   144,   144,   145,   145,
     145,   146,   147,   147,   148,   148,   149,   149,   150,   151,
     151,   152,   152,   152,   153,   153,   153,   153,   154,   154,
     154,   154,   155,   156,   156,   157,   157,   158,   159,   159,
     160,   160
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     3,     4,     3,     3,     2,     2,     6,     7,     1,
       3,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     1,
       2,     3,     1,     1,     1,     1,     2,     2,     2,     2,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     3,     5,     6,     6,     5,     4,
       4,     0,     1,     0,     1,     0,     1,     2,     3,     1,
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
#line 168 "tinyC2_22CS30027_22CS30019.y"
                   { (yyval.node) = createNode("INTEGER", NULL, NULL); }
#line 1843 "y.tab.c"
    break;

  case 3: /* constant: FLOATING_CONSTANT  */
#line 169 "tinyC2_22CS30027_22CS30019.y"
                             { (yyval.node) = createNode("FLOATING_CONSTANT", NULL, NULL); }
#line 1849 "y.tab.c"
    break;

  case 4: /* constant: CHARACTER_CONSTANT  */
#line 170 "tinyC2_22CS30027_22CS30019.y"
                              { (yyval.node) = createNode("CHARACTER_CONSTANT", NULL, NULL); }
#line 1855 "y.tab.c"
    break;

  case 5: /* primary_expression: IDENTIFIER  */
#line 173 "tinyC2_22CS30027_22CS30019.y"
                                { (yyval.node) = createNode("IDENTIFIER", NULL, NULL); }
#line 1861 "y.tab.c"
    break;

  case 6: /* primary_expression: constant  */
#line 174 "tinyC2_22CS30027_22CS30019.y"
                                { (yyval.node) = createNode("constant",(yyvsp[0].node),NULL); }
#line 1867 "y.tab.c"
    break;

  case 7: /* primary_expression: STRING_LITERAL  */
#line 175 "tinyC2_22CS30027_22CS30019.y"
                                    { (yyval.node) = createNode("STRING_LITERAL", NULL, NULL); }
#line 1873 "y.tab.c"
    break;

  case 8: /* primary_expression: ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE  */
#line 176 "tinyC2_22CS30027_22CS30019.y"
                                                                       { (yyval.node) = createNode("primary_expression", (yyvsp[-1].node), NULL); }
#line 1879 "y.tab.c"
    break;

  case 9: /* postfix_expression: primary_expression  */
#line 181 "tinyC2_22CS30027_22CS30019.y"
                                        { (yyval.node) = (yyvsp[0].node); }
#line 1885 "y.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression SQUARE_BRACKET_OPEN expression SQUARE_BRACKET_CLOSE  */
#line 182 "tinyC2_22CS30027_22CS30019.y"
                                                                                            { (yyval.node) = createNode("POSTFIX_EXPRESSION", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1891 "y.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression ROUND_BRACKET_OPEN ROUND_BRACKET_CLOSE  */
#line 183 "tinyC2_22CS30027_22CS30019.y"
                                                                               { (yyval.node) = createNode("POSTFIX_CALL", (yyvsp[-2].node), NULL); }
#line 1897 "y.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression ROUND_BRACKET_OPEN argument_expression_list ROUND_BRACKET_CLOSE  */
#line 184 "tinyC2_22CS30027_22CS30019.y"
                                                                                                        { (yyval.node) = createNode("POSTFIX_CALL_WITH_ARGS", (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1903 "y.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 185 "tinyC2_22CS30027_22CS30019.y"
                                                       { (yyval.node) = createNode("DOT", (yyvsp[-2].node), createNode("IDENTIFIER", NULL, NULL)); }
#line 1909 "y.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression IMPLIES IDENTIFIER  */
#line 186 "tinyC2_22CS30027_22CS30019.y"
                                                           { (yyval.node) = createNode("IMPLIES", (yyvsp[-2].node), createNode("IDENTIFIER", NULL, NULL)); }
#line 1915 "y.tab.c"
    break;

  case 15: /* postfix_expression: postfix_expression INCREMENT  */
#line 187 "tinyC2_22CS30027_22CS30019.y"
                                                  { (yyval.node) = createNode("INCREMENT", (yyvsp[-1].node), NULL); }
#line 1921 "y.tab.c"
    break;

  case 16: /* postfix_expression: postfix_expression DECREMENT  */
#line 188 "tinyC2_22CS30027_22CS30019.y"
                                                  { (yyval.node) = createNode("DECREMENT", (yyvsp[-1].node), NULL); }
#line 1927 "y.tab.c"
    break;

  case 17: /* postfix_expression: ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE  */
#line 189 "tinyC2_22CS30027_22CS30019.y"
                                                                                                                              { (yyval.node) = createNode("POSTFIX_INIT", (yyvsp[-4].node), (yyvsp[-1].node)); }
#line 1933 "y.tab.c"
    break;

  case 18: /* postfix_expression: ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE  */
#line 190 "tinyC2_22CS30027_22CS30019.y"
                                                                                                                                    { (yyval.node) = createNode("POSTFIX_INIT", (yyvsp[-5].node), (yyvsp[-2].node)); }
#line 1939 "y.tab.c"
    break;

  case 19: /* argument_expression_list: assignment_expression  */
#line 195 "tinyC2_22CS30027_22CS30019.y"
                                                 { (yyval.node) = createNode("ARGUMENT_EXPRESSION_LIST", (yyvsp[0].node), NULL); }
#line 1945 "y.tab.c"
    break;

  case 20: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 196 "tinyC2_22CS30027_22CS30019.y"
                                                                               { (yyval.node) = createNode("ARGUMENT_EXPRESSION_LIST", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1951 "y.tab.c"
    break;

  case 21: /* unary_expression: postfix_expression  */
#line 201 "tinyC2_22CS30027_22CS30019.y"
                                      { (yyval.node) = (yyvsp[0].node); }
#line 1957 "y.tab.c"
    break;

  case 22: /* unary_expression: INCREMENT unary_expression  */
#line 202 "tinyC2_22CS30027_22CS30019.y"
                                              { (yyval.node) = createNode("INCREMENT", (yyvsp[0].node), NULL); }
#line 1963 "y.tab.c"
    break;

  case 23: /* unary_expression: DECREMENT unary_expression  */
#line 203 "tinyC2_22CS30027_22CS30019.y"
                                              { (yyval.node) = createNode("DECREMENT", (yyvsp[0].node), NULL); }
#line 1969 "y.tab.c"
    break;

  case 24: /* unary_expression: unary_operator cast_expression  */
#line 204 "tinyC2_22CS30027_22CS30019.y"
                                                  { (yyval.node) = createNode("UNARY_EXPRESSION", (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1975 "y.tab.c"
    break;

  case 25: /* unary_expression: SIZEOF unary_expression  */
#line 205 "tinyC2_22CS30027_22CS30019.y"
                                           { (yyval.node) = createNode("SIZEOF", (yyvsp[0].node), NULL); }
#line 1981 "y.tab.c"
    break;

  case 26: /* unary_expression: SIZEOF ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE  */
#line 206 "tinyC2_22CS30027_22CS30019.y"
                                                                           { (yyval.node) = createNode("SIZEOF_TYPE", (yyvsp[-1].node), NULL); }
#line 1987 "y.tab.c"
    break;

  case 27: /* unary_operator: BITWISE_AND  */
#line 211 "tinyC2_22CS30027_22CS30019.y"
                            { (yyval.node) = createNode("BITWISE_AND", NULL, NULL); }
#line 1993 "y.tab.c"
    break;

  case 28: /* unary_operator: MUL  */
#line 212 "tinyC2_22CS30027_22CS30019.y"
                    { (yyval.node) = createNode("MUL", NULL, NULL); }
#line 1999 "y.tab.c"
    break;

  case 29: /* unary_operator: PLUS  */
#line 213 "tinyC2_22CS30027_22CS30019.y"
                     { (yyval.node) = createNode("PLUS", NULL, NULL); }
#line 2005 "y.tab.c"
    break;

  case 30: /* unary_operator: MINUS  */
#line 214 "tinyC2_22CS30027_22CS30019.y"
                      { (yyval.node) = createNode("MINUS", NULL, NULL); }
#line 2011 "y.tab.c"
    break;

  case 31: /* unary_operator: BITWISE_NOT  */
#line 215 "tinyC2_22CS30027_22CS30019.y"
                            { (yyval.node) = createNode("BITWISE_NOT", NULL, NULL); }
#line 2017 "y.tab.c"
    break;

  case 32: /* unary_operator: NOT  */
#line 216 "tinyC2_22CS30027_22CS30019.y"
                    { (yyval.node) = createNode("NOT", NULL, NULL); }
#line 2023 "y.tab.c"
    break;

  case 33: /* cast_expression: unary_expression  */
#line 221 "tinyC2_22CS30027_22CS30019.y"
                                   { (yyval.node) = (yyvsp[0].node); }
#line 2029 "y.tab.c"
    break;

  case 34: /* cast_expression: ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE cast_expression  */
#line 222 "tinyC2_22CS30027_22CS30019.y"
                                                                                   { (yyval.node) = createNode("CAST", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2035 "y.tab.c"
    break;

  case 35: /* multiplicative_expression: cast_expression  */
#line 227 "tinyC2_22CS30027_22CS30019.y"
                                            { (yyval.node) = (yyvsp[0].node); }
#line 2041 "y.tab.c"
    break;

  case 36: /* multiplicative_expression: multiplicative_expression MUL cast_expression  */
#line 228 "tinyC2_22CS30027_22CS30019.y"
                                                                         { (yyval.node) = createNode("MULTIPLICATIVE_EXPRESSION", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2047 "y.tab.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression DIV cast_expression  */
#line 229 "tinyC2_22CS30027_22CS30019.y"
                                                                         { (yyval.node) = createNode("DIV_EXPRESSION", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2053 "y.tab.c"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression MOD cast_expression  */
#line 230 "tinyC2_22CS30027_22CS30019.y"
                                                                         { (yyval.node) = createNode("MOD_EXPRESSION", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2059 "y.tab.c"
    break;

  case 39: /* additive_expression: multiplicative_expression  */
#line 235 "tinyC2_22CS30027_22CS30019.y"
                                                { (yyval.node) = (yyvsp[0].node); }
#line 2065 "y.tab.c"
    break;

  case 40: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 236 "tinyC2_22CS30027_22CS30019.y"
                                                                        { (yyval.node) = createNode("ADDITIVE_EXPRESSION", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2071 "y.tab.c"
    break;

  case 41: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 237 "tinyC2_22CS30027_22CS30019.y"
                                                                         { (yyval.node) = createNode("SUBTRACTIVE_EXPRESSION", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2077 "y.tab.c"
    break;

  case 42: /* shift_expression: additive_expression  */
#line 242 "tinyC2_22CS30027_22CS30019.y"
                                       { (yyval.node) = (yyvsp[0].node); }
#line 2083 "y.tab.c"
    break;

  case 43: /* shift_expression: shift_expression LEFT_SHIFT additive_expression  */
#line 243 "tinyC2_22CS30027_22CS30019.y"
                                                                   { (yyval.node) = createNode("SHIFT_LEFT_EXPRESSION", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2089 "y.tab.c"
    break;

  case 44: /* shift_expression: shift_expression RIGHT_SHIFT additive_expression  */
#line 244 "tinyC2_22CS30027_22CS30019.y"
                                                                    { (yyval.node) = createNode("SHIFT_RIGHT_EXPRESSION", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2095 "y.tab.c"
    break;

  case 45: /* relational_expression: shift_expression  */
#line 249 "tinyC2_22CS30027_22CS30019.y"
                                         { (yyval.node) = (yyvsp[0].node); }
#line 2101 "y.tab.c"
    break;

  case 46: /* relational_expression: relational_expression LESS_THAN shift_expression  */
#line 250 "tinyC2_22CS30027_22CS30019.y"
                                                                        { (yyval.node) = createNode("LESS_THAN_EXPRESSION", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2107 "y.tab.c"
    break;

  case 47: /* relational_expression: relational_expression GREATER_THAN shift_expression  */
#line 251 "tinyC2_22CS30027_22CS30019.y"
                                                                           { (yyval.node) = createNode("GREATER_THAN_EXPRESSION", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2113 "y.tab.c"
    break;

  case 48: /* relational_expression: relational_expression LESS_EQUAL shift_expression  */
#line 252 "tinyC2_22CS30027_22CS30019.y"
                                                                         { (yyval.node) = createNode("LESS_EQUAL_EXPRESSION", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2119 "y.tab.c"
    break;

  case 49: /* relational_expression: relational_expression GREATER_EQUAL shift_expression  */
#line 253 "tinyC2_22CS30027_22CS30019.y"
                                                                            { (yyval.node) = createNode("GREATER_EQUAL_EXPRESSION", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2125 "y.tab.c"
    break;

  case 50: /* equality_expression: relational_expression  */
#line 258 "tinyC2_22CS30027_22CS30019.y"
                                            { (yyval.node) = (yyvsp[0].node); }
#line 2131 "y.tab.c"
    break;

  case 51: /* equality_expression: equality_expression EQUAL relational_expression  */
#line 259 "tinyC2_22CS30027_22CS30019.y"
                                                                     { (yyval.node) = createNode("EQUAL_EXPRESSION", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2137 "y.tab.c"
    break;

  case 52: /* equality_expression: equality_expression NOT_EQUAL relational_expression  */
#line 260 "tinyC2_22CS30027_22CS30019.y"
                                                                         { (yyval.node) = createNode("NOT_EQUAL_EXPRESSION", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2143 "y.tab.c"
    break;

  case 53: /* and_expression: equality_expression  */
#line 265 "tinyC2_22CS30027_22CS30019.y"
                                     { (yyval.node) = (yyvsp[0].node); }
#line 2149 "y.tab.c"
    break;

  case 54: /* and_expression: and_expression BITWISE_AND equality_expression  */
#line 266 "tinyC2_22CS30027_22CS30019.y"
                                                                { (yyval.node) = createNode("AND_EXPRESSION", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2155 "y.tab.c"
    break;

  case 55: /* exclusive_or_expression: and_expression  */
#line 271 "tinyC2_22CS30027_22CS30019.y"
                                         { (yyval.node) = (yyvsp[0].node); }
#line 2161 "y.tab.c"
    break;

  case 56: /* exclusive_or_expression: exclusive_or_expression BITWISE_XOR and_expression  */
#line 272 "tinyC2_22CS30027_22CS30019.y"
                                                                             { (yyval.node) = createNode("XOR_EXPRESSION", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2167 "y.tab.c"
    break;

  case 57: /* inclusive_or_expression: exclusive_or_expression  */
#line 277 "tinyC2_22CS30027_22CS30019.y"
                                                  { (yyval.node) = (yyvsp[0].node); }
#line 2173 "y.tab.c"
    break;

  case 58: /* inclusive_or_expression: inclusive_or_expression BITWISE_OR exclusive_or_expression  */
#line 278 "tinyC2_22CS30027_22CS30019.y"
                                                                                     { (yyval.node) = createNode("OR_EXPRESSION", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2179 "y.tab.c"
    break;

  case 59: /* logical_and_expression: inclusive_or_expression  */
#line 283 "tinyC2_22CS30027_22CS30019.y"
                                                 { (yyval.node) = (yyvsp[0].node); }
#line 2185 "y.tab.c"
    break;

  case 60: /* logical_and_expression: logical_and_expression AND inclusive_or_expression  */
#line 284 "tinyC2_22CS30027_22CS30019.y"
                                                                            { (yyval.node) = createNode("LOGICAL_AND", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2191 "y.tab.c"
    break;

  case 61: /* logical_or_expression: logical_and_expression  */
#line 289 "tinyC2_22CS30027_22CS30019.y"
                                               { (yyval.node) = (yyvsp[0].node); }
#line 2197 "y.tab.c"
    break;

  case 62: /* logical_or_expression: logical_or_expression OR logical_and_expression  */
#line 290 "tinyC2_22CS30027_22CS30019.y"
                                                                        { (yyval.node) = createNode("LOGICAL_OR", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2203 "y.tab.c"
    break;

  case 63: /* conditional_expression: logical_or_expression  */
#line 295 "tinyC2_22CS30027_22CS30019.y"
                                               { (yyval.node) = (yyvsp[0].node); }
#line 2209 "y.tab.c"
    break;

  case 64: /* conditional_expression: logical_or_expression QUESTION expression COLON conditional_expression  */
#line 296 "tinyC2_22CS30027_22CS30019.y"
                                                                                               { (yyval.node) = createNode("CONDITIONAL", (yyvsp[-4].node), (yyvsp[-2].node)); }
#line 2215 "y.tab.c"
    break;

  case 65: /* assignment_expression: conditional_expression  */
#line 301 "tinyC2_22CS30027_22CS30019.y"
                                               { (yyval.node) = (yyvsp[0].node); }
#line 2221 "y.tab.c"
    break;

  case 66: /* assignment_expression: unary_expression ASSIGN assignment_expression  */
#line 302 "tinyC2_22CS30027_22CS30019.y"
                                                                     { (yyval.node) = createNode("ASSIGNMENT", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2227 "y.tab.c"
    break;

  case 67: /* assignment_expression: unary_expression MUL_EQUAL assignment_expression  */
#line 303 "tinyC2_22CS30027_22CS30019.y"
                                                                        { (yyval.node) = createNode("MUL_ASSIGNMENT", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2233 "y.tab.c"
    break;

  case 68: /* assignment_expression: unary_expression DIV_EQUAL assignment_expression  */
#line 304 "tinyC2_22CS30027_22CS30019.y"
                                                                        { (yyval.node) = createNode("DIV_ASSIGNMENT", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2239 "y.tab.c"
    break;

  case 69: /* assignment_expression: unary_expression MOD_EQUAL assignment_expression  */
#line 305 "tinyC2_22CS30027_22CS30019.y"
                                                                        { (yyval.node) = createNode("MOD_ASSIGNMENT", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2245 "y.tab.c"
    break;

  case 70: /* assignment_expression: unary_expression PLUS_EQUAL assignment_expression  */
#line 306 "tinyC2_22CS30027_22CS30019.y"
                                                                         { (yyval.node) = createNode("PLUS_ASSIGNMENT", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2251 "y.tab.c"
    break;

  case 71: /* assignment_expression: unary_expression MINUS_EQUAL assignment_expression  */
#line 307 "tinyC2_22CS30027_22CS30019.y"
                                                                          { (yyval.node) = createNode("MINUS_ASSIGNMENT", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2257 "y.tab.c"
    break;

  case 72: /* assignment_expression: unary_expression SHIFT_LEFT_EQUAL assignment_expression  */
#line 308 "tinyC2_22CS30027_22CS30019.y"
                                                                               { (yyval.node) = createNode("SHIFT_LEFT_ASSIGNMENT", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2263 "y.tab.c"
    break;

  case 73: /* assignment_expression: unary_expression SHIFT_RIGHT_EQUAL assignment_expression  */
#line 309 "tinyC2_22CS30027_22CS30019.y"
                                                                                { (yyval.node) = createNode("SHIFT_RIGHT_ASSIGNMENT", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2269 "y.tab.c"
    break;

  case 74: /* assignment_expression: unary_expression BITWISE_AND_EQUAL assignment_expression  */
#line 310 "tinyC2_22CS30027_22CS30019.y"
                                                                                { (yyval.node) = createNode("BITWISE_AND_ASSIGNMENT", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2275 "y.tab.c"
    break;

  case 75: /* assignment_expression: unary_expression BITWISE_XOR_EQUAL assignment_expression  */
#line 311 "tinyC2_22CS30027_22CS30019.y"
                                                                                { (yyval.node) = createNode("BITWISE_XOR_ASSIGNMENT", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2281 "y.tab.c"
    break;

  case 76: /* assignment_expression: unary_expression BITWISE_OR_EQUAL assignment_expression  */
#line 312 "tinyC2_22CS30027_22CS30019.y"
                                                                               { (yyval.node) = createNode("BITWISE_OR_ASSIGNMENT", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2287 "y.tab.c"
    break;

  case 77: /* expression: assignment_expression  */
#line 317 "tinyC2_22CS30027_22CS30019.y"
                                   { (yyval.node) = (yyvsp[0].node); }
#line 2293 "y.tab.c"
    break;

  case 78: /* expression: expression COMMA assignment_expression  */
#line 318 "tinyC2_22CS30027_22CS30019.y"
                                                    { (yyval.node) = createNode("EXPRESSION_LIST", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2299 "y.tab.c"
    break;

  case 79: /* constant_expression: conditional_expression  */
#line 322 "tinyC2_22CS30027_22CS30019.y"
                                             { (yyval.node) = createNode("constant_expression", (yyvsp[0].node), NULL); }
#line 2305 "y.tab.c"
    break;

  case 80: /* declaration: declaration_specifiers SEMICOLON  */
#line 330 "tinyC2_22CS30027_22CS30019.y"
                                               { (yyval.node) = createNode("declaration", (yyvsp[-1].node), NULL); }
#line 2311 "y.tab.c"
    break;

  case 81: /* declaration: declaration_specifiers init_declarator_list SEMICOLON  */
#line 331 "tinyC2_22CS30027_22CS30019.y"
                                                                    { (yyval.node) = createNode("declaration", (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 2317 "y.tab.c"
    break;

  case 82: /* declaration_specifiers: storage_class_specifier  */
#line 335 "tinyC2_22CS30027_22CS30019.y"
                                                 {(yyval.node) = createNode("declaration_specifier", (yyvsp[0].node), NULL);}
#line 2323 "y.tab.c"
    break;

  case 83: /* declaration_specifiers: type_specifier  */
#line 336 "tinyC2_22CS30027_22CS30019.y"
                                         {(yyval.node) = createNode("declaration_specifier", (yyvsp[0].node), NULL);}
#line 2329 "y.tab.c"
    break;

  case 84: /* declaration_specifiers: type_qualifier  */
#line 337 "tinyC2_22CS30027_22CS30019.y"
                                         {(yyval.node) = createNode("declaration_specifier", (yyvsp[0].node), NULL);}
#line 2335 "y.tab.c"
    break;

  case 85: /* declaration_specifiers: function_specifier  */
#line 338 "tinyC2_22CS30027_22CS30019.y"
                                             {(yyval.node) = createNode("declaration_specifier", (yyvsp[0].node), NULL);}
#line 2341 "y.tab.c"
    break;

  case 86: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 339 "tinyC2_22CS30027_22CS30019.y"
                                                                        {(yyval.node) = createNode("declaration_specifiers", (yyvsp[-1].node), (yyvsp[0].node));}
#line 2347 "y.tab.c"
    break;

  case 87: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 340 "tinyC2_22CS30027_22CS30019.y"
                                                                {(yyval.node) = createNode("declaration_specifiers", (yyvsp[-1].node), (yyvsp[0].node));}
#line 2353 "y.tab.c"
    break;

  case 88: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 341 "tinyC2_22CS30027_22CS30019.y"
                                                                {(yyval.node) = createNode("declaration_specifiers", (yyvsp[-1].node), (yyvsp[0].node));}
#line 2359 "y.tab.c"
    break;

  case 89: /* declaration_specifiers: function_specifier declaration_specifiers  */
#line 342 "tinyC2_22CS30027_22CS30019.y"
                                                                    {(yyval.node) = createNode("declaration_specifiers", (yyvsp[-1].node), (yyvsp[0].node));}
#line 2365 "y.tab.c"
    break;

  case 90: /* init_declarator_list: init_declarator  */
#line 346 "tinyC2_22CS30027_22CS30019.y"
                                       {(yyval.node) = createNode("init_declerator_list", (yyvsp[0].node), NULL);}
#line 2371 "y.tab.c"
    break;

  case 91: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 347 "tinyC2_22CS30027_22CS30019.y"
                                                                     {(yyval.node) = createNode("init_declerator_list", (yyvsp[-2].node), (yyvsp[0].node));}
#line 2377 "y.tab.c"
    break;

  case 92: /* init_declarator: declarator  */
#line 351 "tinyC2_22CS30027_22CS30019.y"
                             {(yyval.node) = createNode("init_declerator", (yyvsp[0].node),NULL);}
#line 2383 "y.tab.c"
    break;

  case 93: /* init_declarator: declarator ASSIGN initializer  */
#line 352 "tinyC2_22CS30027_22CS30019.y"
                                                {(yyval.node) = createNode("init_declerator", (yyvsp[-2].node), (yyvsp[0].node));}
#line 2389 "y.tab.c"
    break;

  case 94: /* storage_class_specifier: EXTERN  */
#line 356 "tinyC2_22CS30027_22CS30019.y"
                                 {(yyval.node) = createNode("storage_class_specifier", NULL, NULL);}
#line 2395 "y.tab.c"
    break;

  case 95: /* storage_class_specifier: STATIC  */
#line 356 "tinyC2_22CS30027_22CS30019.y"
                                                                                                    {(yyval.node) = createNode("storage_class_specifier", NULL, NULL);}
#line 2401 "y.tab.c"
    break;

  case 96: /* type_specifier: VOID  */
#line 360 "tinyC2_22CS30027_22CS30019.y"
                      { (yyval.node) = createNode("type-specidier", NULL, NULL); }
#line 2407 "y.tab.c"
    break;

  case 97: /* type_specifier: CHAR  */
#line 360 "tinyC2_22CS30027_22CS30019.y"
                                                                               { (yyval.node) = createNode("type-specidier", NULL, NULL); }
#line 2413 "y.tab.c"
    break;

  case 98: /* type_specifier: SHORT  */
#line 360 "tinyC2_22CS30027_22CS30019.y"
                                                                                                                                         { (yyval.node) = createNode("type-specidier", NULL, NULL); }
#line 2419 "y.tab.c"
    break;

  case 99: /* type_specifier: INT  */
#line 360 "tinyC2_22CS30027_22CS30019.y"
                                                                                                                                                                                                 { (yyval.node) = createNode("type-specidier", NULL, NULL); }
#line 2425 "y.tab.c"
    break;

  case 100: /* type_specifier: LONG  */
#line 360 "tinyC2_22CS30027_22CS30019.y"
                                                                                                                                                                                                                                                          { (yyval.node) = createNode("type-specidier", NULL, NULL); }
#line 2431 "y.tab.c"
    break;

  case 101: /* type_specifier: FLOAT  */
#line 360 "tinyC2_22CS30027_22CS30019.y"
                                                                                                                                                                                                                                                                                                                    { (yyval.node) = createNode("type-specidier", NULL, NULL); }
#line 2437 "y.tab.c"
    break;

  case 102: /* type_specifier: DOUBLE  */
#line 360 "tinyC2_22CS30027_22CS30019.y"
                                                                                                                                                                                                                                                                                                                                                                               { (yyval.node) = createNode("type-specidier", NULL, NULL); }
#line 2443 "y.tab.c"
    break;

  case 104: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list  */
#line 364 "tinyC2_22CS30027_22CS30019.y"
                                                                                                              {(yyval.node) = createNode("specifier_qualifier_list", (yyvsp[-1].node), (yyvsp[0].node));}
#line 2449 "y.tab.c"
    break;

  case 106: /* specifier_qualifier_list: type_qualifier  */
#line 365 "tinyC2_22CS30027_22CS30019.y"
                                                          {(yyval.node) = createNode("specifier_qualifier_list", (yyvsp[0].node), NULL);}
#line 2455 "y.tab.c"
    break;

  case 107: /* type_qualifier: CONST  */
#line 369 "tinyC2_22CS30027_22CS30019.y"
                       {(yyval.node) = createNode("type_qualifier", NULL, NULL);}
#line 2461 "y.tab.c"
    break;

  case 108: /* type_qualifier: RESTRICT  */
#line 369 "tinyC2_22CS30027_22CS30019.y"
                                                                                  {(yyval.node) = createNode("type_qualifier", NULL, NULL);}
#line 2467 "y.tab.c"
    break;

  case 109: /* type_qualifier: VOLATILE  */
#line 369 "tinyC2_22CS30027_22CS30019.y"
                                                                                                                                             {(yyval.node) = createNode("type_qualifier", NULL, NULL);}
#line 2473 "y.tab.c"
    break;

  case 110: /* function_specifier: INLINE  */
#line 373 "tinyC2_22CS30027_22CS30019.y"
                            {(yyval.node) = createNode("function_specifier", NULL, NULL);}
#line 2479 "y.tab.c"
    break;

  case 111: /* declarator: pointer direct_declarator  */
#line 377 "tinyC2_22CS30027_22CS30019.y"
                                       {(yyval.node) = createNode("declarator", (yyvsp[-1].node), (yyvsp[0].node));}
#line 2485 "y.tab.c"
    break;

  case 112: /* declarator: direct_declarator  */
#line 378 "tinyC2_22CS30027_22CS30019.y"
                                {(yyval.node) = createNode("declarator", (yyvsp[0].node), NULL);}
#line 2491 "y.tab.c"
    break;

  case 113: /* direct_declarator: IDENTIFIER  */
#line 382 "tinyC2_22CS30027_22CS30019.y"
                               {(yyval.node) = createNode("direct_declarator", NULL, NULL);}
#line 2497 "y.tab.c"
    break;

  case 114: /* direct_declarator: ROUND_BRACKET_OPEN declarator ROUND_BRACKET_CLOSE  */
#line 383 "tinyC2_22CS30027_22CS30019.y"
                                                                        {(yyval.node) = createNode("direct_declarator", (yyvsp[-1].node), NULL);}
#line 2503 "y.tab.c"
    break;

  case 115: /* direct_declarator: direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list_opt assignment_expression_opt SQUARE_BRACKET_CLOSE  */
#line 384 "tinyC2_22CS30027_22CS30019.y"
                                                                                                                                    {(yyval.node) = createNode("direct_declarator", (yyvsp[-4].node), createNode("ignore",(yyvsp[-2].node),(yyvsp[-1].node)));}
#line 2509 "y.tab.c"
    break;

  case 116: /* direct_declarator: direct_declarator SQUARE_BRACKET_OPEN STATIC type_qualifier_list_opt assignment_expression SQUARE_BRACKET_CLOSE  */
#line 385 "tinyC2_22CS30027_22CS30019.y"
                                                                                                                                      {(yyval.node) = createNode("direct_declarator", (yyvsp[-5].node), createNode("ignore",(yyvsp[-2].node),(yyvsp[-1].node)));}
#line 2515 "y.tab.c"
    break;

  case 117: /* direct_declarator: direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list STATIC assignment_expression SQUARE_BRACKET_CLOSE  */
#line 386 "tinyC2_22CS30027_22CS30019.y"
                                                                                                                                  {(yyval.node) = createNode("direct_declarator", (yyvsp[-5].node), createNode("ignore",(yyvsp[-3].node),(yyvsp[-1].node)));}
#line 2521 "y.tab.c"
    break;

  case 118: /* direct_declarator: direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list_opt MUL SQUARE_BRACKET_CLOSE  */
#line 387 "tinyC2_22CS30027_22CS30019.y"
                                                                                                             {(yyval.node) = createNode("direct_declarator", (yyvsp[-4].node), (yyvsp[-2].node));}
#line 2527 "y.tab.c"
    break;

  case 119: /* direct_declarator: direct_declarator ROUND_BRACKET_OPEN parameter_type_list ROUND_BRACKET_CLOSE  */
#line 388 "tinyC2_22CS30027_22CS30019.y"
                                                                                                   {(yyval.node) = createNode("direct_declarator", (yyvsp[-3].node), (yyvsp[-1].node));}
#line 2533 "y.tab.c"
    break;

  case 120: /* direct_declarator: direct_declarator ROUND_BRACKET_OPEN identifier_list_opt ROUND_BRACKET_CLOSE  */
#line 389 "tinyC2_22CS30027_22CS30019.y"
                                                                                                   {(yyval.node) = createNode("direct_declarator", (yyvsp[-3].node), (yyvsp[-1].node));}
#line 2539 "y.tab.c"
    break;

  case 121: /* type_qualifier_list_opt: %empty  */
#line 391 "tinyC2_22CS30027_22CS30019.y"
                          {(yyval.node)=NULL;}
#line 2545 "y.tab.c"
    break;

  case 122: /* type_qualifier_list_opt: type_qualifier_list  */
#line 392 "tinyC2_22CS30027_22CS30019.y"
                                              {(yyval.node) = (yyvsp[0].node);}
#line 2551 "y.tab.c"
    break;

  case 123: /* assignment_expression_opt: %empty  */
#line 394 "tinyC2_22CS30027_22CS30019.y"
                             {(yyval.node)=NULL;}
#line 2557 "y.tab.c"
    break;

  case 124: /* assignment_expression_opt: assignment_expression  */
#line 395 "tinyC2_22CS30027_22CS30019.y"
                                                  {(yyval.node) = (yyvsp[0].node);}
#line 2563 "y.tab.c"
    break;

  case 125: /* identifier_list_opt: %empty  */
#line 397 "tinyC2_22CS30027_22CS30019.y"
                       {(yyval.node)=NULL;}
#line 2569 "y.tab.c"
    break;

  case 126: /* identifier_list_opt: identifier_list  */
#line 398 "tinyC2_22CS30027_22CS30019.y"
                                      {(yyval.node)=(yyvsp[0].node);}
#line 2575 "y.tab.c"
    break;

  case 127: /* pointer: MUL type_qualifier_list_opt  */
#line 402 "tinyC2_22CS30027_22CS30019.y"
                                      {(yyval.node)=createNode("pointer", (yyvsp[0].node), NULL);}
#line 2581 "y.tab.c"
    break;

  case 128: /* pointer: MUL type_qualifier_list_opt pointer  */
#line 403 "tinyC2_22CS30027_22CS30019.y"
                                              {(yyval.node)=createNode("pointer", (yyvsp[-1].node), (yyvsp[0].node));}
#line 2587 "y.tab.c"
    break;

  case 129: /* type_qualifier_list: type_qualifier  */
#line 407 "tinyC2_22CS30027_22CS30019.y"
                                     {(yyval.node)=(yyvsp[0].node);}
#line 2593 "y.tab.c"
    break;

  case 130: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 408 "tinyC2_22CS30027_22CS30019.y"
                                                         {(yyval.node)=createNode("type_qualifier_list", (yyvsp[-1].node), (yyvsp[0].node));}
#line 2599 "y.tab.c"
    break;

  case 131: /* parameter_type_list: parameter_list  */
#line 412 "tinyC2_22CS30027_22CS30019.y"
                                     {(yyval.node)=(yyvsp[0].node);}
#line 2605 "y.tab.c"
    break;

  case 132: /* parameter_type_list: parameter_list COMMA ELLIPSIS  */
#line 413 "tinyC2_22CS30027_22CS30019.y"
                                                    {(yyval.node)=createNode("parameter_type_list", (yyvsp[-2].node), NULL);}
#line 2611 "y.tab.c"
    break;

  case 133: /* parameter_list: parameter_declaration  */
#line 417 "tinyC2_22CS30027_22CS30019.y"
                                       {(yyval.node)=(yyvsp[0].node);}
#line 2617 "y.tab.c"
    break;

  case 134: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 418 "tinyC2_22CS30027_22CS30019.y"
                                                            {(yyval.node)=createNode("parameter_list", (yyvsp[-2].node), (yyvsp[0].node));}
#line 2623 "y.tab.c"
    break;

  case 135: /* parameter_declaration: declaration_specifiers declarator  */
#line 422 "tinyC2_22CS30027_22CS30019.y"
                                                          {(yyval.node)=createNode("parameter_declaration", (yyvsp[-1].node), (yyvsp[0].node));}
#line 2629 "y.tab.c"
    break;

  case 136: /* parameter_declaration: declaration_specifiers  */
#line 423 "tinyC2_22CS30027_22CS30019.y"
                                               {(yyval.node)=(yyvsp[0].node);}
#line 2635 "y.tab.c"
    break;

  case 137: /* identifier_list: IDENTIFIER  */
#line 427 "tinyC2_22CS30027_22CS30019.y"
                            {(yyval.node)=createNode("identifier_list",NULL,NULL);}
#line 2641 "y.tab.c"
    break;

  case 138: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 428 "tinyC2_22CS30027_22CS30019.y"
                                                  {(yyval.node)=createNode("identifier_list", (yyvsp[-2].node), NULL);}
#line 2647 "y.tab.c"
    break;

  case 139: /* type_name: specifier_qualifier_list  */
#line 432 "tinyC2_22CS30027_22CS30019.y"
                                     {(yyval.node)=(yyvsp[0].node);}
#line 2653 "y.tab.c"
    break;

  case 140: /* initializer: assignment_expression  */
#line 436 "tinyC2_22CS30027_22CS30019.y"
                                    {(yyval.node)=(yyvsp[0].node);}
#line 2659 "y.tab.c"
    break;

  case 141: /* initializer: CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE  */
#line 437 "tinyC2_22CS30027_22CS30019.y"
                                                                      {(yyval.node)=createNode("initializer",(yyvsp[-1].node),NULL);}
#line 2665 "y.tab.c"
    break;

  case 142: /* initializer: CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE  */
#line 438 "tinyC2_22CS30027_22CS30019.y"
                                                                            {(yyval.node)=createNode("initializer",(yyvsp[-2].node),NULL);}
#line 2671 "y.tab.c"
    break;

  case 143: /* initializer_list: designation_opt initializer  */
#line 442 "tinyC2_22CS30027_22CS30019.y"
                                               {(yyval.node)=createNode("initializer_list",(yyvsp[-1].node),(yyvsp[0].node));}
#line 2677 "y.tab.c"
    break;

  case 144: /* initializer_list: initializer_list COMMA designation_opt initializer  */
#line 443 "tinyC2_22CS30027_22CS30019.y"
                                                                      {(yyval.node)=createNode("initializer_list",(yyvsp[-3].node),createNode("ignore",(yyvsp[-1].node),(yyvsp[0].node)));}
#line 2683 "y.tab.c"
    break;

  case 145: /* designation_opt: designation  */
#line 445 "tinyC2_22CS30027_22CS30019.y"
                               {(yyval.node)=(yyvsp[0].node);}
#line 2689 "y.tab.c"
    break;

  case 146: /* designation_opt: %empty  */
#line 446 "tinyC2_22CS30027_22CS30019.y"
                  {(yyval.node)=NULL;}
#line 2695 "y.tab.c"
    break;

  case 147: /* designation: designator_list ASSIGN  */
#line 450 "tinyC2_22CS30027_22CS30019.y"
                                     {(yyval.node)=createNode("designation",(yyvsp[-1].node),NULL);}
#line 2701 "y.tab.c"
    break;

  case 148: /* designator_list: designator  */
#line 454 "tinyC2_22CS30027_22CS30019.y"
                             {(yyval.node)=createNode("designator_list",(yyvsp[0].node),NULL);}
#line 2707 "y.tab.c"
    break;

  case 149: /* designator_list: designator_list designator  */
#line 455 "tinyC2_22CS30027_22CS30019.y"
                                             {(yyval.node)=createNode("designator_list",(yyvsp[-1].node),(yyvsp[0].node));}
#line 2713 "y.tab.c"
    break;

  case 150: /* designator: SQUARE_BRACKET_OPEN constant_expression SQUARE_BRACKET_CLOSE  */
#line 459 "tinyC2_22CS30027_22CS30019.y"
                                                                           {(yyval.node)=createNode("designator",(yyvsp[-1].node),NULL);}
#line 2719 "y.tab.c"
    break;

  case 151: /* designator: DOT IDENTIFIER  */
#line 460 "tinyC2_22CS30027_22CS30019.y"
                              {(yyval.node)=createNode("designator",NULL,NULL);}
#line 2725 "y.tab.c"
    break;

  case 152: /* statement: labeled_statement  */
#line 469 "tinyC2_22CS30027_22CS30019.y"
                              {(yyval.node)=(yyvsp[0].node);}
#line 2731 "y.tab.c"
    break;

  case 153: /* statement: compound_statement  */
#line 470 "tinyC2_22CS30027_22CS30019.y"
                                 {(yyval.node)=(yyvsp[0].node);}
#line 2737 "y.tab.c"
    break;

  case 154: /* statement: expression_statement  */
#line 471 "tinyC2_22CS30027_22CS30019.y"
                                   {(yyval.node)=(yyvsp[0].node);}
#line 2743 "y.tab.c"
    break;

  case 155: /* statement: selection_statement  */
#line 472 "tinyC2_22CS30027_22CS30019.y"
                                  {(yyval.node)=(yyvsp[0].node);}
#line 2749 "y.tab.c"
    break;

  case 156: /* statement: iteration_statement  */
#line 473 "tinyC2_22CS30027_22CS30019.y"
                                  {(yyval.node)=(yyvsp[0].node);}
#line 2755 "y.tab.c"
    break;

  case 157: /* statement: jump_statement  */
#line 474 "tinyC2_22CS30027_22CS30019.y"
                             {(yyval.node)=(yyvsp[0].node);}
#line 2761 "y.tab.c"
    break;

  case 158: /* labeled_statement: IDENTIFIER COLON statement  */
#line 478 "tinyC2_22CS30027_22CS30019.y"
                                                {(yyval.node)=(yyval.node)=createNode("labeled_statement",(yyvsp[0].node),NULL);}
#line 2767 "y.tab.c"
    break;

  case 159: /* labeled_statement: CASE constant_expression COLON statement  */
#line 479 "tinyC2_22CS30027_22CS30019.y"
                                                                {(yyval.node)=createNode("labeled_statement",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2773 "y.tab.c"
    break;

  case 160: /* labeled_statement: DEFAULT COLON statement  */
#line 480 "tinyC2_22CS30027_22CS30019.y"
                                              {(yyval.node)=createNode("labeled_statement",(yyvsp[0].node),NULL);}
#line 2779 "y.tab.c"
    break;

  case 161: /* compound_statement: CURLY_BRACKET_OPEN block_item_list_opt CURLY_BRACKET_CLOSE  */
#line 484 "tinyC2_22CS30027_22CS30019.y"
                                                                                {(yyval.node)=(yyvsp[-1].node);}
#line 2785 "y.tab.c"
    break;

  case 162: /* block_item_list_opt: %empty  */
#line 486 "tinyC2_22CS30027_22CS30019.y"
                        {(yyval.node)=NULL;}
#line 2791 "y.tab.c"
    break;

  case 163: /* block_item_list_opt: block_item_list  */
#line 486 "tinyC2_22CS30027_22CS30019.y"
                                                     {(yyval.node)=createNode("block_item_list",(yyvsp[0].node),NULL);}
#line 2797 "y.tab.c"
    break;

  case 164: /* block_item_list: block_item  */
#line 490 "tinyC2_22CS30027_22CS30019.y"
                              {(yyval.node)=(yyvsp[0].node);}
#line 2803 "y.tab.c"
    break;

  case 165: /* block_item_list: block_item_list block_item  */
#line 490 "tinyC2_22CS30027_22CS30019.y"
                                                                   {(yyval.node)=createNode("ignore",(yyvsp[-1].node),(yyvsp[0].node));}
#line 2809 "y.tab.c"
    break;

  case 166: /* block_item: declaration  */
#line 494 "tinyC2_22CS30027_22CS30019.y"
                          {(yyval.node)=(yyvsp[0].node);}
#line 2815 "y.tab.c"
    break;

  case 167: /* block_item: statement  */
#line 494 "tinyC2_22CS30027_22CS30019.y"
                                               {(yyval.node)=(yyvsp[0].node);}
#line 2821 "y.tab.c"
    break;

  case 168: /* expression_statement: expression_opt SEMICOLON  */
#line 498 "tinyC2_22CS30027_22CS30019.y"
                                                {(yyval.node)=(yyvsp[-1].node);}
#line 2827 "y.tab.c"
    break;

  case 169: /* expression_opt: %empty  */
#line 500 "tinyC2_22CS30027_22CS30019.y"
                   {(yyval.node)=NULL;}
#line 2833 "y.tab.c"
    break;

  case 170: /* expression_opt: expression  */
#line 500 "tinyC2_22CS30027_22CS30019.y"
                                            {(yyval.node)=(yyvsp[0].node);}
#line 2839 "y.tab.c"
    break;

  case 171: /* selection_statement: IF ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement  */
#line 504 "tinyC2_22CS30027_22CS30019.y"
                                                                                                {(yyval.node)=createNode("selection_statement",createNode("IF",(yyvsp[-2].node),NULL),createNode("THEN",(yyvsp[0].node),NULL));}
#line 2845 "y.tab.c"
    break;

  case 172: /* selection_statement: IF ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement ELSE statement  */
#line 505 "tinyC2_22CS30027_22CS30019.y"
                                                                                                    {(yyval.node)=createNode("selection_statement",createNode("IF",(yyvsp[-4].node),NULL),createNode("ignore",createNode("THEN",(yyvsp[-2].node),NULL),createNode("ELSE",(yyvsp[0].node),NULL)));}
#line 2851 "y.tab.c"
    break;

  case 173: /* selection_statement: SWITCH ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement  */
#line 506 "tinyC2_22CS30027_22CS30019.y"
                                                                                         {(yyval.node)=createNode("selection_statement",createNode("SWITCH",(yyvsp[-2].node),NULL),createNode("THEN",(yyvsp[0].node),NULL));}
#line 2857 "y.tab.c"
    break;

  case 174: /* iteration_statement: WHILE ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement  */
#line 510 "tinyC2_22CS30027_22CS30019.y"
                                                                                        {(yyval.node)=createNode("iteration_statement",(yyvsp[-2].node),(yyvsp[0].node));}
#line 2863 "y.tab.c"
    break;

  case 175: /* iteration_statement: DO statement WHILE ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE SEMICOLON  */
#line 511 "tinyC2_22CS30027_22CS30019.y"
                                                                                                     {(yyval.node)=createNode("iteration_statement",(yyvsp[-5].node),(yyvsp[-2].node));}
#line 2869 "y.tab.c"
    break;

  case 176: /* iteration_statement: FOR ROUND_BRACKET_OPEN expression_opt SEMICOLON expression_opt SEMICOLON expression_opt ROUND_BRACKET_CLOSE statement  */
#line 512 "tinyC2_22CS30027_22CS30019.y"
                                                                                                                                            {(yyval.node)=createNode("iteration_statement",(yyvsp[-6].node),(yyvsp[-4].node));}
#line 2875 "y.tab.c"
    break;

  case 177: /* iteration_statement: FOR ROUND_BRACKET_OPEN declaration expression_opt SEMICOLON expression_opt ROUND_BRACKET_CLOSE statement  */
#line 513 "tinyC2_22CS30027_22CS30019.y"
                                                                                                                               {(yyval.node)=createNode("iteration_statement",createNode("ignore",(yyvsp[-5].node),(yyvsp[-4].node)),createNode("ignore",(yyvsp[-2].node),(yyvsp[0].node)));}
#line 2881 "y.tab.c"
    break;

  case 178: /* jump_statement: GOTO IDENTIFIER SEMICOLON  */
#line 517 "tinyC2_22CS30027_22CS30019.y"
                                             {(yyval.node)=createNode("jump_statement",NULL,NULL);}
#line 2887 "y.tab.c"
    break;

  case 179: /* jump_statement: CONTINUE SEMICOLON  */
#line 518 "tinyC2_22CS30027_22CS30019.y"
                                      {(yyval.node)=createNode("jump_statement",NULL,NULL);}
#line 2893 "y.tab.c"
    break;

  case 180: /* jump_statement: BREAK SEMICOLON  */
#line 519 "tinyC2_22CS30027_22CS30019.y"
                                  {(yyval.node)=createNode("jump_statement",NULL,NULL);}
#line 2899 "y.tab.c"
    break;

  case 181: /* jump_statement: RETURN expression_opt SEMICOLON  */
#line 520 "tinyC2_22CS30027_22CS30019.y"
                                                 {(yyval.node)=createNode("jump_statement",(yyvsp[-1].node),NULL);}
#line 2905 "y.tab.c"
    break;

  case 182: /* start_symbol: translation_unit  */
#line 528 "tinyC2_22CS30027_22CS30019.y"
                                {printTree((yyvsp[0].node),0);}
#line 2911 "y.tab.c"
    break;

  case 183: /* translation_unit: external_declaration  */
#line 530 "tinyC2_22CS30027_22CS30019.y"
                                        {(yyval.node)=(yyvsp[0].node);}
#line 2917 "y.tab.c"
    break;

  case 184: /* translation_unit: translation_unit external_declaration  */
#line 531 "tinyC2_22CS30027_22CS30019.y"
                                                         {(yyval.node)=createNode("translation_unit",(yyvsp[-1].node),(yyvsp[0].node));}
#line 2923 "y.tab.c"
    break;

  case 185: /* external_declaration: function_definition  */
#line 535 "tinyC2_22CS30027_22CS30019.y"
                                           {(yyval.node)=(yyvsp[0].node);}
#line 2929 "y.tab.c"
    break;

  case 186: /* external_declaration: declaration  */
#line 536 "tinyC2_22CS30027_22CS30019.y"
                                   {(yyval.node)=(yyvsp[0].node);}
#line 2935 "y.tab.c"
    break;

  case 187: /* function_definition: declaration_specifiers declarator declaration_list_opt compound_statement  */
#line 540 "tinyC2_22CS30027_22CS30019.y"
                                                                                                {(yyval.node)=createNode("function_definition",createNode("ignore",(yyvsp[-3].node),(yyvsp[-2].node)),createNode("ignore",(yyvsp[-1].node),(yyvsp[0].node)));}
#line 2941 "y.tab.c"
    break;

  case 188: /* declaration_list_opt: %empty  */
#line 542 "tinyC2_22CS30027_22CS30019.y"
                        {(yyval.node)=NULL;}
#line 2947 "y.tab.c"
    break;

  case 189: /* declaration_list_opt: declaration_list  */
#line 543 "tinyC2_22CS30027_22CS30019.y"
                                        {(yyval.node)=createNode("declaraation_list",(yyvsp[0].node),NULL);}
#line 2953 "y.tab.c"
    break;

  case 190: /* declaration_list: declaration  */
#line 547 "tinyC2_22CS30027_22CS30019.y"
                               {(yyval.node)=(yyvsp[0].node);}
#line 2959 "y.tab.c"
    break;

  case 191: /* declaration_list: declaration_list declaration  */
#line 548 "tinyC2_22CS30027_22CS30019.y"
                                                {(yyval.node)=createNode("ignore",(yyvsp[-1].node),(yyvsp[0].node));}
#line 2965 "y.tab.c"
    break;


#line 2969 "y.tab.c"

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

#line 552 "tinyC2_22CS30027_22CS30019.y"

void yyerror(char *ERRORS) {
    fprintf(stderr, "Error: %s\n", ERRORS);
}


