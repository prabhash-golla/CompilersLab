run: lexer.out
	./lexer.out < A1.tex
lexer.out: lex.yy.c
	g++ -o lexer.out procltx.cpp
lex.yy.c:
	flex lexer.l
clean:
	rm lex.yy.c lexer.out