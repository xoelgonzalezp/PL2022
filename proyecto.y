%{

#include "stdlib.h"
#include "stdio.h"
#include "string.h"
int yylex(void);
void yyerror(char const *message); 
char *rmposition (char *s);

%}



%union{
   
     char* string;

}

//TOKENS
%token <string> H1
%token <string> H2
%token <string> H3
%token <string> H4
%token <string> H5
%token <string> H6
%token <string> CURSIVA
%token <string> EMPHASIS
%token <string> SCRATCH
%token <string> CODE
%token <string> LISTAORD
%token <string> LISTADESORD
%token <string> LINK
%token <string> TEXTWORD
%token <string> TITLE

%start S

%%
//SECCION DE REGLAS

S: title
;

title: H1
          
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
	| H1 title
    	{printf("<h1>%s</h1>\n", $1+2);}  
	| H2 title
    	{printf("<h2>%s</h2>\n", $1+3);}  
	| H3 title
    	{printf("<h3>%s</h3>\n", $1+4);}  
	| H4 title
    	{printf("<h4>%s</h4>\n", $1+5);}  
	| H5 title
    	{printf("<h5>%s</h5>\n", $1+6);}  
	| H6 title
    	{printf("<h6>%s</h6>\n", $1+7);}
	| H1 textword
	{printf("<h1>%s</h1>\n", $1+2);} 
	| H2 textword
	{printf("<h2>%s</h2>\n", $1+2);} 
	| H3 textword
	{printf("<h3>%s</h3>\n", $1+2);} 
	| H4 textword
	{printf("<h4>%s</h4>\n", $1+2);} 
	| H5 textword
	{printf("<h5>%s</h5>\n", $1+2);} 
	| H6 textword
	{printf("<h6>%s</h6>\n", $1+2);} 
	| H1 emphasis
	{printf("<h1>%s</h1>\n", $1+2);} 
	| H2 emphasis
	{printf("<h2>%s</h2>\n", $1+3);} 
	| H3 emphasis
	{printf("<h3>%s</h3>\n", $1+4);} 
	| H4 emphasis
	{printf("<h4>%s</h4>\n", $1+5);} 
	| H5 emphasis
	{printf("<h5>%s</h5>\n", $1+6);} 
	| H6 emphasis
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





textword:TEXTWORD {printf("<p>%s</p>\n", $1); }
        | TEXTWORD S {printf("<p>%s</p>\n",$1);}              
;


emphasis: EMPHASIS    
         
          { rmposition($1);
          
          printf("<b>%s</b>\n", $1);}
          
          
          | EMPHASIS title
          
          {rmposition($1);
          printf("<b>%s</b>\n", $1); }
          
     
          | EMPHASIS emphasis
          
          {rmposition($1);
          printf("<b>%s</b>\n", $1); }
          
          | EMPHASIS cursiva
          
          {rmposition($1);
          printf("<b>%s</b>\n", $1); }
          
          | EMPHASIS scratch
          
          {rmposition($1);
          printf("<b>%s</b>\n", $1); }
          
          | EMPHASIS textword
          
          {rmposition($1);
          printf("<b>%s</b>\n", $1); }
          
;          
     
cursiva: CURSIVA  {rmposition($1);
         printf("<em>%s</em>\n", $1); }
        
         | CURSIVA title
         {rmposition($1);
         printf("<em>%s</em>\n", $1); }
         | CURSIVA emphasis
         {rmposition($1);
         printf("<em>%s</em>\n", $1); }
         | CURSIVA cursiva
         {rmposition($1);
         printf("<em>%s</em>\n", $1); }
         | CURSIVA scratch
         {rmposition($1);
         printf("<em>%s</em>\n", $1); }
         | CURSIVA textword   
         {rmposition($1);
         printf("<em>%s</em>\n", $1); }     
;

scratch: SCRATCH {rmposition($1);

         printf("<del>%s</del>\n", $1); } 

         |SCRATCH title
         {rmposition($1);
         printf("<del>%s</del>\n", $1); } 
         |SCRATCH scratch
         {rmposition($1);
         printf("<del>%s</del>\n", $1); } 
         |SCRATCH cursiva
         {rmposition($1);
         printf("<del>%s</del>\n", $1); } 
         |SCRATCH emphasis
         {rmposition($1);
         printf("<del>%s</del>\n", $1); } 
         |SCRATCH textword    
         {rmposition($1);
         printf("<del>%s</del>\n", $1); }  
;











listas: LISTAORD {printf("<li>%s</li>\n",$1+3);}

        |LISTAORD listas {printf("<li>%s</li>\n",$1+3);}

        |LISTAORD title {printf("<li>%s</li>\n",$1+3);}
        
        |LISTAORD scratch {printf("<li>%s</li>\n",$1+3);}
        
        |LISTAORD cursiva {printf("<li>%s</li>\n",$1+3);}
        
        |LISTAORD emphasis {printf("<li>%s</li>\n",$1+3);}
        
        |LISTAORD textword {printf("<li>%s</li>\n", $1+3);}
        
        |LISTADESORD {printf("<li>%s</li>\n",$1+2);}

        |LISTADESORD listas {printf("<li>%s</li>\n",$1+2);}

        |LISTADESORD title {printf("<li>%s</li>\n",$1+2);}
        
        |LISTADESORD scratch {printf("<li>%s</li>\n",$1+2);}
        
        |LISTADESORD cursiva {printf("<li>%s</li>\n",$1+2);}
        
        |LISTADESORD emphasis {printf("<li>%s</li>\n",$1+2);}
        
        |LISTADESORD textword {printf("<li>%s</li>\n", $1+2);}
     
;
         


%%



char *rmposition (char *s) //Function to remove symbols
{
    int ast = 0,                     
        write = 0;                     
    
    for (int i = 0; s[i]; i++) {       
        if (s[i] == '*' || s[i] == '_'|| s[i] == '~' )                
            ast = 1;                 
        else                           
            s[write++] = s[i];         
    }
    s[write] = 0;                       
    
    return s;                          
}






int main(int argc, char *argv[]) {
	extern FILE *yyin;
	yyin = fopen(argv[1], "r");
	yyparse();
	return 0;
}






