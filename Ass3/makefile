run: 
	./a.out < 22CS30027.txt

all:
	yacc -d 22CS30027.y 
	lex 22CS30027.l
	gcc -g 22CS30027.c lex.yy.c y.tab.c

clean:
	rm lex.yy.c y.tab.c y.tab.h *.out