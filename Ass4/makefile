.SUFFIXES:

run:  poly.out
	./poly.out < sample.txt > output.txt

poly.out: all

all:
	yacc -d poly.y 
	lex poly.l
	gcc -g -o poly.out polyutils.c

clean:
	rm lex.yy.c y.tab.c y.tab.h *.out 
	
cleanall:	
	rm lex.yy.c y.tab.c y.tab.h *.out output.txt