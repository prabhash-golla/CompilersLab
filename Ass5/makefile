run: 
	./icgen < sample.txt > intcode.c
	gcc -o ic intcode.c
	./ic

all:
	yacc -d expr.y 
	lex expr.l
	gcc  -o icgen intcodegen.c

clean:
	rm lex.yy.c y.tab.c y.tab.h ic icgen intcode.c