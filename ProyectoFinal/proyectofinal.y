%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex(void);
void yyerror (char const *message);

%}

%union{
	char* string;
}

%token <string> H1
%token <string> H2
%token <string> H3
%token <string> H4
%token <string> H5
%token <string> H6
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

S: titulo
;

titulo: H1 
    {printf("<h1>%s</h1>\n", $1+2);}
  | H2 
    {printf("<h2>%s</h2>\n", $1+3);}
  |H3 
    {printf("<h3>%s</h3>\n", $1+4);}
  |H4 
    {printf("<h4> %s </h4>\n", $1+5);}
  |H5 
    {printf("<h5>%s</h5>\n", $1+6);}
  |H6 
    {printf("<h6>%s</h6>\n", $1+7);}  
	| H1 titulo
    	{printf("<h1>%s</h1>\n", $1+2);}  
	| H2 titulo
    	{printf("<h2>%s</h2>\n", $1+3);}  
	| H3 titulo
    	{printf("<h3>%s</h3>\n", $1+4);}  
	| H4 titulo
    	{printf("<h4>%s</h4>\n", $1+5);}  
	| H5 titulo
    	{printf("<h5>%s</h5>\n", $1+6);}  
	| H6 titulo
    	{printf("<h6>%s</h6>\n", $1+7);}
	| H1 nombre
	| H2 nombre
	| H3 nombre
	| H4 nombre
	| H5 nombre
	| H6 nombre
;;

nombre: NOMBRE {printf("<p>%s</p>\n", $1);}
	| NOMBRE titulo {printf("<p>%s</p>\n", $1);}
;

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
