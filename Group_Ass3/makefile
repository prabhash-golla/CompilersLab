.SUFFIXES:

TinyC3_22CS30027_22CS30019.out: TinyC3_22CS30027_22CS30019_translator.cpp lex.yy.c y.tab.c y.tab.h
	g++ -o TinyC3_22CS30027_22CS30019.out TinyC3_22CS30027_22CS30019_translator.cpp

y.tab.c: TinyC3_22CS30027_22CS30019.y
	yacc -dv TinyC3_22CS30027_22CS30019.y

y.tab.h: TinyC3_22CS30027_22CS30019.y
	yacc -dv TinyC3_22CS30027_22CS30019.y

lex.yy.c:
	lex TinyC3_22CS30027_22CS30019.l

couterexamples:
	yacc -d -Wcounterexamples TinyC3_22CS30027_22CS30019.y 	

clean:
	- rm -rf lex.yy.c y.tab.c y.tab.h TinyC3_22CS30027_22CS30019.out y.output Output

test: TinyC3_22CS30027_22CS30019.out
	mkdir -p Output
	./TinyC3_22CS30027_22CS30019.out < ./Input/TinyC3_22CS30027_22CS30019_test1.c > ./Output/TinyC3_22CS30027_22CS30019_quads1.out
	./TinyC3_22CS30027_22CS30019.out < ./Input/TinyC3_22CS30027_22CS30019_test2.c > ./Output/TinyC3_22CS30027_22CS30019_quads2.out
	./TinyC3_22CS30027_22CS30019.out < ./Input/TinyC3_22CS30027_22CS30019_test3.c > ./Output/TinyC3_22CS30027_22CS30019_quads3.out
	./TinyC3_22CS30027_22CS30019.out < ./Input/TinyC3_22CS30027_22CS30019_test4.c > ./Output/TinyC3_22CS30027_22CS30019_quads4.out
	./TinyC3_22CS30027_22CS30019.out < ./Input/TinyC3_22CS30027_22CS30019_test5.c > ./Output/TinyC3_22CS30027_22CS30019_quads5.out