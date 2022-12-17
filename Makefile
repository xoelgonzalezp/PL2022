FUENTE = proyecto
PRUEBA = prueba.md
LIB = lfl

all: compile run

compile : 
	flex proyecto.l
	bison -d proyecto.y
	gcc -o $@ proyecto.tab.c lex.yy.c -ll


run:
	./$(FUENTE) < $(PRUEBA)

run2:
	./$(FUENTE) $(PRUEBA)

clean:
	rm $(FUENTE) lex.yy.c $(FUENTE).tab.c $(FUENTE).tab.h
