all: tinyC

tinyC: tinyC2_22CS30027_22CS30019.l tinyC2_22CS30027_22CS30019.y tinyC2_22CS30027_22CS30019.c    
	yacc -d tinyC2_22CS30027_22CS30019.y    
	flex tinyC2_22CS30027_22CS30019.l    
	gcc -o tinyC  y.tab.c tinyC2_22CS30027_22CS30019.c
	
clean:    
	rm -f tinyC lex.yy.c y.tab.c y.tab.h