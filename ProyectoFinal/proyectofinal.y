%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex(void);
void yyerror (char const *message);
char * rmposition(char * s);
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
		{printf("<h1>%s</h1>\n", $1+2);}
	| H2 nombre
		{printf("<h2>%s</h2>\n", $1+3);}
	| H3 nombre
		{printf("<h3>%s</h3>\n", $1+4);}
	| H4 nombre
		{printf("<h4>%s</h4>\n", $1+5);}
	| H5 nombre
		{printf("<h5>%s</h5>\n", $1+6);}
	| H6 nombre
		{printf("<h6>%s</h6>\n", $1+7);}
	| H1 enfasis
		{printf("<h1>%s</h1>\n", $1+2);}
	| H2 enfasis
		{printf("<h2>%s</h2>\n", $1+3);}
	| H3 enfasis
		{printf("<h3>%s</h3>\n", $1+4);}
	| H4 enfasis
		{printf("<h4>%s</h4>\n", $1+5);}
	| H5 enfasis
		{printf("<h5>%s</h5>\n", $1+6);}
	| H6 enfasis
		{printf("<h6>%s</h6>\n", $1+7);}
	| H1 cursiva
		{printf("<h1>%s</h1>\n", $1+2);}
	| H2 cursiva
		{printf("<h2>%s</h2>\n", $1+3);}
	| H3 cursiva
		{printf("<h3>%s</h3>\n", $1+4);}
	| H4 cursiva
		{printf("<h4>%s</h4>\n", $1+5);}
	| H5 cursiva
		{printf("<h5>%s</h5>\n", $1+6);}
	| H6 cursiva
		{printf("<h6>%s</h6>\n", $1+7);}
	| H1 scratch
		{printf("<h1>%s</h1>\n", $1+2);}
	| H2 scratch
		{printf("<h2>%s</h2>\n", $1+3);}
	| H3 scratch
		{printf("<h3>%s</h3>\n", $1+4);}
	| H4 scratch
		{printf("<h4>%s</h4>\n", $1+5);}
	| H5 scratch
		{printf("<h5>%s</h5>\n", $1+6);}
	| H6 scratch
		{printf("<h6>%s</h6>\n", $1+7);}
	| H1 listas
		{printf("<h1>%s</h1>\n", $1+2);}
	| H2 listas
		{printf("<h2>%s</h2>\n", $1+3);}
	| H3 listas
		{printf("<h3>%s</h3>\n", $1+4);}
	| H4 listas
		{printf("<h4>%s</h4>\n", $1+5);}
	| H5 listas
		{printf("<h5>%s</h5>\n", $1+6);}
	| H6 listas
		{printf("<h6>%s</h6>\n", $1+7);}
;;

nombre: NOMBRE {printf("<p>%s</p>\n", $1);}
	| NOMBRE titulo {printf("<p>%s</p>\n", $1);}
;

enfasis: ENFASIS 
		{   rmposition($1);
			printf("<b>%s</b>\n", $1);}
		  | ENFASIS titulo
		{	rmposition($1);
			printf("<b>%s</b>\n", $1);}
          | ENFASIS enfasis
		{	rmposition($1);
			printf("<b>%s</b>\n", $1);}
          | ENFASIS cursiva
		{	rmposition($1);
			printf("<b>%s</b>\n", $1);}
          | ENFASIS scratch
		{	rmposition($1);
			printf("<b>%s</b>\n", $1);}
          | ENFASIS nombre
		{	rmposition($1);
			printf("<b>%s</b>\n", $1);}
;          
     
cursiva: CURSIVA
		{	rmposition($1);
			printf("<em>%s</em>\n", $1);}
		 | CURSIVA titulo
		{	rmposition($1);
			printf("<em>%s</em>\n", $1);}
         | CURSIVA enfasis
		{	rmposition($1);
			printf("<em>%s</em>\n", $1);}
         | CURSIVA cursiva
		{	rmposition($1);
			printf("<em>%s</em>\n", $1);}
         | CURSIVA scratch
		{	rmposition($1);
			printf("<em>%s</em>\n", $1);}
         | CURSIVA nombre    
		{	rmposition($1);
			printf("<em>%s</em>\n", $1);}    
;

scratch: SCRATCH
		{	rmposition($1);
			printf("<del>%s</del>\n", $1);}    
		 |SCRATCH titulo
		{	rmposition($1);
			printf("<del>%s</del>\n", $1);}    
         |SCRATCH scratch
		{	rmposition($1);
			printf("<del>%s</del>\n", $1);}    
         |SCRATCH cursiva
		{	rmposition($1);
			printf("<del>%s</del>\n", $1);}    
         |SCRATCH enfasis
		{	rmposition($1);
			printf("<del>%s</del>\n", $1);}    
         |SCRATCH nombre   
		{	rmposition($1);
			printf("<del>%s</del>\n", $1);}      
;

listas: LISTAORD 
	{printf("<ol>%s</ol>\n", $1+3);}
	| LISTAORD listas
	{printf("<ol>%s</ol>\n", $1+3);}
	| LISTAORD titulo
	{printf("<ol>%s</ol>\n", $1+3);}
	| LISTAORD scratch
	{printf("<ol>%s</ol>\n", $1+3);}
	| LISTAORD cursiva
	{printf("<ol>%s</ol>\n", $1+3);}
	| LISTAORD enfasis
	{printf("<ol>%s</ol>\n", $1+3);}
	| LISTAORD nombre
	{printf("<ol>%s</ol>\n", $1+3);}
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

char *rmposition (char *s)
{
    int asterisco = 0,                      
        write = 0; 
    
    for (int i = 0; s[i]; i++) {        
        if (s[i] == '*' || s[i] == '_' || s[i] == '~')                
            asterisco = 1;
        else                            
            s[write++] = s[i];          
    }
    s[write] = 0;                       
    
    return s;                           
}