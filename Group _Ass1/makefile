run: lexer.out
	./list.out < Test.c
lexer.out: lex.yy.c
	g++ -o list.out Main.c
lex.yy.c:
	flex list.l
clean:
	rm lex.yy.c list.out
