# Variables for input files
LEX_FILE := cobol_proc.l
YACC_FILE := cobol_proc.y

# Define targets
all: lex.c y.tab.c a.out

a.out: y.tab.c lex.c
	gcc lex.c y.tab.c

lex.c: $(LEX_FILE)
	lex -o lex.c $(LEX_FILE)

y.tab.c: $(YACC_FILE)
	yacc -d $(YACC_FILE)

clean:
	rm -f a.out lex.c y.tab.c y.tab.h

.PHONY: clean

