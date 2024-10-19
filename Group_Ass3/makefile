run:  tinyC2_22CS30027_22CS30019.out
	./tinyC2_22CS30027_22CS30019.out < input_22CS30027_22CS30019.c > output_22CS30027_22CS30019.txt

tinyC2_22CS30027_22CS30019.out: all

all:
	yacc -d tinyC2_22CS30027_22CS30019.y 
	lex tinyC2_22CS30027_22CS30019.l
	gcc -g -o tinyC2_22CS30027_22CS30019.out tinyC2_22CS30019_22CS30027.c

couterexamples:
	yacc -d -Wcounterexamples tinyC2_22CS30027_22CS30019.y 	

clean:
	rm lex.yy.c y.tab.c y.tab.h *.out