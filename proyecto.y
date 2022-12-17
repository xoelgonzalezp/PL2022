%{

#include "stdlib.h"
#include "stdio.h"
#include "string.h"
int yylex(void);
void yyerror(char  *s); 
char *rmposition (char *s);
void *detectlist(char *s);
FILE *HTML;
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
%token <string> COMB
%token <string> COMB2
%token <string> EMPHASIS
%token <string> SCRATCH
%token <string> CODE
%token <string> LISTAORD
%token <string> LISTADESORD
%token <string> LINK
%token <string> TEXTWORD
%token <string> TITLE
%token <string> LINKNAME


%start S

%%
//SECCION DE REGLAS

S: title
;

title: H1
          
   {fprintf(HTML,"<h1>%s</h1>\n", $1+2);}
   
  
  | H2 
    {fprintf(HTML,"<h2>%s</h2>\n", $1+3);}
  |H3 
    {fprintf(HTML,"<h3>%s</h3>\n", $1+4);}
  |H4 
    {fprintf(HTML,"<h4> %s </h4>\n", $1+5);}
  |H5 
    {fprintf(HTML,"<h5>%s</h5>\n", $1+6);}
  |H6 
    {fprintf(HTML,"<h6>%s</h6>\n", $1+7);}  
	| H1 title
    	{fprintf(HTML,"<h1>%s</h1>\n", $1+2);}  
	| H2 title
    	{fprintf(HTML,"<h2>%s</h2>\n", $1+3);}  
	| H3 title
    	{fprintf(HTML,"<h3>%s</h3>\n", $1+4);}  
	| H4 title
    	{fprintf(HTML,"<h4>%s</h4>\n", $1+5);}  
	| H5 title
    	{fprintf(HTML,"<h5>%s</h5>\n", $1+6);}  
	| H6 title
    	{fprintf(HTML,"<h6>%s</h6>\n", $1+7);}
	| H1 textword
	{fprintf(HTML,"<h1>%s</h1>\n", $1+2);} 
	| H2 textword
	{fprintf(HTML,"<h2>%s</h2>\n", $1+2);} 
	| H3 textword
	{fprintf(HTML,"<h3>%s</h3>\n", $1+2);} 
	| H4 textword
	{fprintf(HTML,"<h4>%s</h4>\n", $1+2);} 
	| H5 textword
	{fprintf(HTML,"<h5>%s</h5>\n", $1+2);} 
	| H6 textword
	{fprintf(HTML,"<h6>%s</h6>\n", $1+2);} 
	| H1 emphasis
	{fprintf(HTML,"<h1>%s</h1>\n", $1+2);} 
	| H2 emphasis
	{fprintf(HTML,"<h2>%s</h2>\n", $1+3);} 
	| H3 emphasis
	{fprintf(HTML,"<h3>%s</h3>\n", $1+4);} 
	| H4 emphasis
	{fprintf(HTML,"<h4>%s</h4>\n", $1+5);} 
	| H5 emphasis
	{fprintf(HTML,"<h5>%s</h5>\n", $1+6);} 
	| H6 emphasis
	{fprintf(HTML,"<h6>%s</h6>\n", $1+7);} 
	| H1 cursiva
	{fprintf(HTML,"<h1>%s</h1>\n", $1+2);} 
	| H2 cursiva
	{fprintf(HTML,"<h2>%s</h2>\n", $1+3);} 
	| H3 cursiva
	{fprintf(HTML,"<h3>%s</h3>\n", $1+4);} 
	| H4 cursiva
	{fprintf(HTML,"<h4>%s</h4>\n", $1+5);} 
	| H5 cursiva
	{fprintf(HTML,"<h5>%s</h5>\n", $1+6);} 
	| H6 cursiva
	{fprintf(HTML,"<h6>%s</h6>\n", $1+7);} 
	| H1 scratch
	{fprintf(HTML,"<h1>%s</h1>\n", $1+2);} 
	| H2 scratch
	{fprintf(HTML,"<h2>%s</h2>\n", $1+3);} 
	| H3 scratch
	{fprintf(HTML,"<h3>%s</h3>\n", $1+4);} 
	| H4 scratch
	{fprintf(HTML,"<h4>%s</h4>\n", $1+5);} 
	| H5 scratch
	{fprintf(HTML,"<h5>%s</h5>\n", $1+6);} 
	| H6 scratch
	{fprintf(HTML,"<h6>%s</h6>\n", $1+7);} 
	| H1 listas
	{fprintf(HTML,"<h1>%s</h1>\n", $1+2);} 
	| H2 listas
	{fprintf(HTML,"<h2>%s</h2>\n", $1+3);} 
	| H3 listas
	{fprintf(HTML,"<h3>%s</h3>\n", $1+4);} 
	| H4 listas
	{fprintf(HTML,"<h4>%s</h4>\n", $1+5);} 
	| H5 listas
	{fprintf(HTML,"<h5>%s</h5>\n", $1+6);} 
	|H6 listas
	{fprintf(HTML,"<h6>%s</h6>\n", $1+7);} 
	| H1 comb
	{fprintf(HTML,"<h1>%s</h1>\n", $1+2);} 
	| H2 comb
	{fprintf(HTML,"<h2>%s</h2>\n", $1+3);} 
	| H3 comb
	{fprintf(HTML,"<h3>%s</h3>\n", $1+4);} 
	| H4 comb
	{fprintf(HTML,"<h4>%s</h4>\n", $1+5);} 
	| H5 comb
	{fprintf(HTML,"<h5>%s</h5>\n", $1+6);} 
	| H6 comb
	{fprintf(HTML,"<h6>%s</h6>\n", $1+7);} 
	| H1 comb2
	{fprintf(HTML,"<h1>%s</h1>\n", $1+2);} 
	| H2 comb2
	{fprintf(HTML,"<h2>%s</h2>\n", $1+3);} 
	| H3 comb2
	{fprintf(HTML,"<h3>%s</h3>\n", $1+4);} 
	| H4 comb2
	{fprintf(HTML,"<h4>%s</h4>\n", $1+5);} 
	| H5 comb2
	{fprintf(HTML,"<h5>%s</h5>\n", $1+6);} 
	| H6 comb2
	{fprintf(HTML,"<h6>%s</h6>\n", $1+7);} 
	| H1 code
	{fprintf(HTML,"<h1>%s</h1>\n", $1+2);} 
	| H2 code
	{fprintf(HTML,"<h2>%s</h2>\n", $1+3);} 
	| H3 code
	{fprintf(HTML,"<h3>%s</h3>\n", $1+4);} 
	| H4 code
	{fprintf(HTML,"<h4>%s</h4>\n", $1+5);} 
	| H5 code
	{fprintf(HTML,"<h5>%s</h5>\n", $1+6);} 
	| H6 code
	{fprintf(HTML,"<h6>%s</h6>\n", $1+7);} 
	
	| H1 link
	{fprintf(HTML,"<h1>%s</h1>\n", $1+2);} 
	| H2 link
	{fprintf(HTML,"<h2>%s</h2>\n", $1+3);} 
	| H3 link
	{fprintf(HTML,"<h3>%s</h3>\n", $1+4);} 
	| H4 link
	{fprintf(HTML,"<h4>%s</h4>\n", $1+5);} 
	| H5 link
	{fprintf(HTML,"<h5>%s</h5>\n", $1+6);} 
	| H6 link
	{fprintf(HTML,"<h6>%s</h6>\n", $1+7);} 
	
	
	
		
	
;





textword:TEXTWORD {printf("<p>%s</p>\n", $1); }
        |TEXTWORD title {printf("<p>%s</p>\n",$1);}      
        |TEXTWORD cursiva
        |TEXTWORD listas
        |TEXTWORD scratch
        |TEXTWORD comb
        |TEXTWORD comb2
        |TEXTWORD emphasis
        |TEXTWORD code
        |TEXTWORD textword
        |TEXTWORD link
            
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
          
          |EMPHASIS comb
          {rmposition($1);
          printf("<b>%s</b>\n", $1); }
          
          |EMPHASIS comb2
          {rmposition($1);
          printf("<b>%s</b>\n", $1); }
          
          
          |EMPHASIS code
          {rmposition($1);
          printf("<b>%s</b>\n", $1); }
          
          
          |EMPHASIS link
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
         
         |CURSIVA comb
         {rmposition($1);
         printf("<em>%s</em>\n", $1); }
         
         |CURSIVA comb2
         {rmposition($1);
         printf("<em>%s</em>\n", $1); }
         
         |CURSIVA code
         {rmposition($1);
         printf("<em>%s</em>\n", $1); }
         
         
         |CURSIVA link
         {rmposition($1);
         printf("<em>%s</em>\n", $1); }
         
         
             
;



comb:    COMB  {rmposition($1);
         printf("<strong><em>%s</em></strong>\n", $1); }
        
         | COMB title
         {rmposition($1);
         printf("<strong><em>%s</em></strong>\n", $1); }
         | COMB emphasis
         {rmposition($1);
         printf("<strong><em>%s</em></strong>\n", $1); }
         | COMB cursiva
         {rmposition($1);
         printf("<strong><em>%s</em></strong>\n", $1); }
         | COMB scratch
         {rmposition($1);
         printf("<strong><em>%s</em></strong>\n", $1); }
         | COMB textword   
         {rmposition($1);
         printf("<strong><em>%s</em></strong>\n", $1); }   
         | COMB comb2  
         {rmposition($1);
         printf("<strong><em>%s</em></strong>\n", $1); }    
         | COMB comb
         {rmposition($1);
         printf("<strong><em>%s</em></strong>\n", $1); }  
         
         | COMB listas
         {rmposition($1);
         printf("<strong><em>%s</em></strong>\n", $1); } 
         
         
         | COMB code
         {rmposition($1);
         printf("<strong><em>%s</em></strong>\n", $1); } 
         
         
         | COMB link
         {rmposition($1);
         printf("<strong><em>%s</em></strong>\n", $1); } 
         
         
;


comb2:    COMB2  {rmposition($1);
         printf("<del><em>%s</em></del>\n", $1); }
        
         | COMB2 title
         {rmposition($1);
         printf("<del><em>%s</em></del>\n", $1); }
         | COMB2 emphasis
         {rmposition($1);
         printf("<del><em>%s</em></del>\n", $1); }
         | COMB2 cursiva
         {rmposition($1);
         printf("<del><em>%s</em></del>\n", $1); }
         | COMB2 scratch
         {rmposition($1);
         printf("<del><em>%s</em></del>\n", $1); }
         | COMB2 textword   
         {rmposition($1);
         printf("<del><em>%s</em></del>\n", $1); }   
         | COMB2 comb   
         {rmposition($1);
         printf("<del><em>%s</em></del>\n", $1); }  
         
         | COMB2 comb2  
         {rmposition($1);
         printf("<del><em>%s</em></del>\n", $1); }  
         
         | COMB2 listas  
         {rmposition($1);
         printf("<del><em>%s</em></del>\n", $1); }  
         
         | COMB2 code  
         {rmposition($1);
         printf("<del><em>%s</em></del>\n", $1); }  
         
         
         | COMB2 link  
         {rmposition($1);
         printf("<del><em>%s</em></del>\n", $1); } 
         
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
         |SCRATCH comb
         {rmposition($1);
         printf("<del>%s</del>\n", $1); }
         |SCRATCH comb2
         {rmposition($1);
         printf("<del>%s</del>\n", $1); }
         
         |SCRATCH code
         {rmposition($1);
         printf("<del>%s</del>\n", $1); }
         
         |SCRATCH link
         {rmposition($1);
         printf("<del>%s</del>\n", $1); }
             
;











listas: LISTAORD {

        printf("<li>%s</li>\n",$1+3);
        detectlist($1);
        }

        |LISTAORD listas {
        printf("<li>%s</li>\n",$1+3);
        detectlist($1);
        }
        

        |LISTAORD title {
       
        printf("<li>%s</li>\n",$1+3);
        detectlist($1);
        }
        
        |LISTAORD scratch {
        
        printf("<li>%s</li>\n",$1+3);
        detectlist($1);
        
        }
        
        |LISTAORD cursiva {
        
        printf("<li>%s</li>\n",$1+3);
        detectlist($1);
        
        }
        
        |LISTAORD emphasis {
    
        printf("<li>%s</li>\n",$1+3);
        detectlist($1);
        }
        
        |LISTAORD textword {
        printf("<li>%s</li>\n", $1+3);
        detectlist($1);
        }
        
        |LISTAORD comb {
        printf("<li>%s</li>\n", $1+3);
        detectlist($1);
        }
        
        |LISTAORD comb2 {
        printf("<li>%s</li>\n", $1+3);
        detectlist($1);
        }
        
         |LISTAORD code {
        printf("<li>%s</li>\n", $1+3);
        detectlist($1);
        }
        
         |LISTAORD link {
        printf("<li>%s</li>\n", $1+3);
        detectlist($1);
        }
        
        |LISTADESORD {
        printf("<li>%s</li>\n",$1+2);
        detectlist($1);
        }

        |LISTADESORD listas {
        printf("<li>%s</li>\n",$1+2);
        detectlist($1);
        }

        |LISTADESORD title {
        printf("<li>%s</li>\n",$1+2);
        detectlist($1);
        }
        
        |LISTADESORD scratch {
        printf("<li>%s</li>\n",$1+2);
        detectlist($1);
        }
        
        |LISTADESORD cursiva {
        printf("<li>%s</li>\n",$1+2);
        detectlist($1);
        }
        
        |LISTADESORD emphasis {
        printf("<li>%s</li>\n",$1+2);
        detectlist($1);
        }
        
        |LISTADESORD textword {
        printf("<li>%s</li>\n", $1+2);
        detectlist($1);
        }
        
        |LISTADESORD comb {
        printf("<li>%s</li>\n", $1+2);
        detectlist($1);
        }
        
        |LISTADESORD comb2 {
        printf("<li>%s</li>\n", $1+2);
        detectlist($1);
        }
        
        
        |LISTADESORD code {
        printf("<li>%s</li>\n", $1+2);
        detectlist($1);
        }
        
        |LISTADESORD link {
        printf("<li>%s</li>\n", $1+2);
        detectlist($1);
        }
     
;




code: CODE {
     rmposition($1);
     printf("<code>%s</code>\n", $1);}


     |CODE title {
     rmposition($1);
     printf("<code>%s</code>\n", $1);}

     |CODE scratch {
     rmposition($1);
     printf("<code>%s</code>\n", $1);}
     
     
     |CODE cursiva {
     rmposition($1);
     printf("<code>%s</code>\n", $1);}
     
     
     |CODE textword {
     rmposition($1);
     printf("<code>%s</code>\n", $1);}
     
     
     |CODE emphasis {
     rmposition($1);
     printf("<code>%s</code>\n", $1);}
     
     
     |CODE comb {
     rmposition($1);
     printf("<code>%s</code>\n", $1);}
     
     
     |CODE comb2 {
     rmposition($1);
     printf("<code>%s</code>\n", $1);}
     
     
     |CODE code {
     rmposition($1);
     printf("<code>%s</code>\n", $1);}
     
     
     |CODE listas {
     rmposition($1);
     printf("<code>%s</code>\n", $1);}
     
     |CODE link {
     rmposition($1);
     printf("<code>%s</code>\n", $1);}

 
;

link: 

     LINKNAME LINK {
     
   
     rmposition($1);
     rmposition($2);
     printf("<a href=%s>",$2);
     printf("%s</a>\n", $1);}
     
     |LINKNAME LINK link{
    
     rmposition($1);
     rmposition($2);
     printf("<a href=%s>",$2);
     printf("%s</a>\n", $1);}
     

     |LINKNAME LINK title {
  
     rmposition($1);
     rmposition($2);
     
     printf("<a href=%s>",$2);
     printf("%s</a>\n", $1);}

     |LINKNAME LINK scratch {
    
     rmposition($1);
     rmposition($2);
    
     printf("<a href=%s>",$2);
     printf("%s</a>\n", $1);}
     
     
     |LINKNAME LINK cursiva {
     
     rmposition($1);
     rmposition($2);
  
     printf("<a href=%s>",$2);
     printf("%s</a>\n", $1);}
     
     
     |LINKNAME LINK textword {
  
     rmposition($1);
     rmposition($2);
     
     printf("<a href=%s>",$2);
     printf("%s</a>\n", $1);}
     
     
     |LINKNAME LINK emphasis {
   
     rmposition($1);
     rmposition($2);
     
    printf("<a href=%s>",$2);
     printf("%s</a>\n", $1);}
     
     
     |LINKNAME LINK comb {
    
     rmposition($1);
     rmposition($2);
     
     printf("<a href=%s>",$2);
     printf("%s</a>\n", $1);}
     
     
     |LINKNAME LINK comb2 {
    
     rmposition($1);
     rmposition($2);
  
     printf("<a href=%s>",$2);
     printf("%s</a>\n", $1);}
     
     
     |LINKNAME LINK code {
    
     rmposition($1);
     rmposition($2);
     printf("<a href=%s>",$2);
     printf("%s</a>\n", $1);}
     
     
     |LINKNAME LINK listas {
    
     rmposition($1);
     rmposition($2);
     printf("<a href=%s>",$2);
     printf("%s</a>\n", $1);}
   

%%



char *rmposition (char *s) //Function to remove symbols
{
    int ast = 0,                     
        write = 0;                     
    
    for (int i = 0; s[i]; i++) {       
        if (s[i] == '*' || s[i] == '_'|| s[i] == '~' ||
         s[i] == '`'  || s[i] == ')' ||  s[i] == '('  || s[i] == ']' ||  s[i] == '['    )                
            ast = 1;  
                  
        else                           
            s[write++] = s[i];         
    }
    
    s[write] = 0;   
    

    return s;                          
}




void *detectlist(char *s){


   for (int i = 0; s[i]; i++) {       
        if (s[i] == '1' && s[i+1] == '.' && s[i+2] == ' ')                
          printf("Inicio de lista ordenada\n");  
          
        if (s[i] == '+' && s[i+1] == ' ' || s[i] == '-' && s[i+1] == ' '    )
          printf("Inicio de lista desordenada\n");
          
    }
   
}


int main(int argc, char *argv[]) {

        HTML = fopen("exit.md","w");
	yyparse();
	
	return 0;
}


void yyerror(char *s){

fprintf(stderr, "error: %s \n",s);

}


