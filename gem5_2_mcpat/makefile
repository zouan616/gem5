# This makefile allows to compile and run the parser
# Uncommenting flex and bison will cause all changes to the parser.tab.c file to be undone so leave it

COMP=g++
BIN=gem5-mcpat-parser
FLAGS=-lfl -ly -std=c++11 -O3
PARS=parser
.PHONY: compile clean

compile: parser.l parser.y
	#flex $(PARS).l
	#bison -o $(PARS).tab.c $(PARS).y -yd
	$(COMP) -o $(BIN) lex.yy.c $(PARS).tab.c $(FLAGS)

clean:
	-rm $(OUTPUT) $(BIN)
