%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex(void);
void yyerror (char const *message);
void cabecera(int cabecera, char* nombre);
%}

%union{
	char* string;
}

%token <string> H
%token <string> CURSIVA
%token <string> ENFASIS
%token <string> SCRATCH
%token <string> LISTAORD
%token <string> LISTADESORD
%token <string> LINK
%token <string> CODE
%token <string> NOMBRE

%start S

%%

S: /*vacio*/
	| H NOMBRE {cabecera(strlen($1), $2);}
	| H NOMBRE titulo {cabecera(strlen($1), $2);}
	| H  NOMBRE nombre {cabecera(strlen($1), $2);}
	| NOMBRE H NOMBRE titulo {cabecera(strlen($2), $3);}
	| NOMBRE H NOMBRE nombre {cabecera(strlen($2), $3);}
;;

titulo: H TITULO {cabecera(strlen($1), $2);}
	| H TITULO titulo {cabecera(strlen($1), $2);}
;;


%%

int main(int argc, char *argv[]) {
	extern FILE *yyin;
	switch (argc) {
		case 1:	yyin=stdin;
			yyparse();
			break;
		case 2: yyin = fopen(argv[1], "r");
			if (yyin == NULL) {
				printf("ERROR: No se ha podido abrir el fichero.\n");
			}
			else {
				yyparse();
				fclose(yyin);
			}
			break;
		default: printf("ERROR: Demasiados argumentos.\nSintaxis: %s [fichero_entrada]\n\n", argv[0]);
	}
	return 0;
}

void cabecera(int cabecera, char* nombre){
	switch(cabecera){
		case 2:
			 printf("<h1>%s</h1>\n", nombre); 
			break;
		case 3:
			printf("<h2>%s</h2>\n", nombre);
			break;
		case 4: 
			printf("<h3>%s</h3>\n", nombre);
			break;
		case 5:
			printf("<h4>%s</h4>\n", nombre);
			break;
		case 6:
			printf("<h5>%s</h5>\n", nombre);
			break;
		case 7: 
			printf("<h6>%s</h6>\n", nombre);
			break;
		default: printf("Error");
	}
}

