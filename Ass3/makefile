run:  22CS30027.out
	./22CS30027.out < 22CS30027.txt

22CS30027.out: all

all:
	yacc -d 22CS30027.y 
	lex 22CS30027.l
	gcc  -g -o 22CS30027.out 22CS30027.c

valgrind: 22CS30027.out
	valgrind ./22CS30027.out < 22CS30027.txt

clean:
	rm lex.yy.c y.tab.c y.tab.h *.out