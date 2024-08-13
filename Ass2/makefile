run: lexer.out
	./list.out < A2.tex
lexer.out: lex.yy.c
	g++ -o list.out evalexpr.cpp
lex.yy.c:
	flex list.l
clean:
	rm lex.yy.c list.out
