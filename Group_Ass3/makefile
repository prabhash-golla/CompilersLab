.SUFFIXES:

run:  TinyC3_22CS30027_22CS30019.out
	./TinyC3_22CS30027_22CS30019.out < input_22CS30027_22CS30019.c > output_22CS30027_22CS30019.txt

TinyC3_22CS30027_22CS30019.out: all

all:
	yacc -d TinyC3_22CS30027_22CS30019.y 
	lex TinyC3_22CS30027_22CS30019.l
	g++ -g -o TinyC3_22CS30027_22CS30019.out TinyC3_22CS30027_22CS30019_translator.cpp

couterexamples:
	yacc -d -Wcounterexamples TinyC3_22CS30027_22CS30019.y 	

clean:
	rm lex.yy.c y.tab.c y.tab.h *.out