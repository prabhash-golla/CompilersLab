run: lexer.out
	./ass3_22CS30027_22CS30018.out < ass3_22CS30027_22CS30018_test.c
lexer.out: lex.yy.c
	g++ -o ass3_22CS30027_22CS30018.out ass3_22CS30027_22CS30018.c
lex.yy.c:
	flex ass3_22CS30027_22CS30018.l
clean:
	rm lex.yy.c ass3_22CS30027_22CS30018.out
