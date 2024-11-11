.SUFFIXES:

all: codegen.out
	./codegen.out < sample.txt

codegen.out: codegen.cpp lex.yy.c y.tab.c y.tab.h
	g++ -o codegen.out codegen.cpp
	- rm -rf lex.yy.c y.tab.c y.tab.h

y.tab.c: prog.y
	yacc -dv prog.y

y.tab.h: prog.y
	yacc -dv prog.y

lex.yy.c:
	lex prog.l

couterexamples:
	yacc -d -Wcounterexamples prog.y 	

clean:
	- rm -rf lex.yy.c y.tab.c y.tab.h codegen.out y.output TCG.txt intcode.txt