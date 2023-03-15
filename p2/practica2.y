%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex(void);
void yyerror (char const *);
int lines = 0;
%}


%union{
	char* string;
}

%token <string> OPENTAG
%token <string> CLOSETAG
%token <string> COMMENT
%token <string> STATEMENT
%token <string> CONTENT

%start S

%%

S  
	: STATEMENT COMMENT tags {printf("Sintaxis XML correcta.\n");}
	| STATEMENT COMMENT tags COMMENT {printf("Sintaxis XML correcta.\n");}
	| STATEMENT tags COMMENT {printf("Sintaxis XML correcta.\n");}
	| STATEMENT tags {printf("Sintaxis XML correcta.\n");}
	| COMMENT tags COMMENT {
		printf("Sintaxis XML incorrecta. Cabecera no encontrada.\n");
		exit(2);
	}
	| tags COMMENT {
		printf("Sintaxis XML incorrecta. Cabecera no encontrada.\n");
		exit(2);
	}
	| COMMENT tags {
		printf("Sintaxis XML incorrecta. Cabecera no encontrada.\n");
		exit(2);
	}
	| tags {
		printf("Sintaxis XML incorrecta. Cabecera no encontrada.\n");
		exit(2);
	}
;

tags:
	 OPENTAG content CLOSETAG {
		
		if (strcmp($1+1, $3+2) != 0){
	printf("Error cerca de la línea %d.\nEncontrado: '%s' y se esperaba el cierre de un tag '%s'.\n", lines, $3, $1);
		
			exit(2);
		}
	}
	| OPENTAG CLOSETAG {
	
	if (strcmp($1+1, $2+2) != 0){
	
	printf("Error cerca de la línea %d.\nEncontrado: '%s' y se esperaba el cierre de un tag '%s'.\n", lines, $2, $1);
		
	exit(2);
		}
	}
	| OPENTAG CLOSETAG OPENTAG {
		
		
		printf("Error cerca de la línea %d.\nNo existe el tag raíz.\n",  lines);
		exit(2);
	}
	| OPENTAG content CLOSETAG OPENTAG {
		
		printf("Error cerca de la línea %d.\nNo existe el tag raíz.\n",  lines);
		exit(2);
	}
	;

content: data
	| data content
	| OPENTAG content CLOSETAG {
		
		if (strcmp($1+1, $3+2) != 0){
	printf("Error cerca de la línea %d.\nEncontrado: '%s' y se esperaba el cierre de un tag '%s'.\n", lines, $3, $1);
		
		exit(2);
		}
	}
	| OPENTAG content CLOSETAG content {
		
			if (strcmp($1+1, $3+2) != 0){
	printf("Error cerca de la línea %d.\nEncontrado: '%s' y se esperaba el cierre de un tag '%s'.\n", lines, $3, $1);
		
			exit(2);
		}
	}
	;

data: OPENTAG CLOSETAG
	| CONTENT {lines++;}
	| COMMENT{lines++;}
;


%%

int main(int argc, char *argv[]) {
	extern FILE *yyin;
	yyin = fopen(argv[1], "r");
	yyparse();
	return 0;
}
