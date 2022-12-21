%{
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
int yylex(void);
void yyerror(char const *message); 
char *rmposition (char *s);
char writeBuffer[65536];
FILE* outputFile;
void writeLinetoFile(char*);
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
%token <string> IMAGE

%type <string> title textword cursiva comb comb2 listas scratch code link image emphasis

%start S

%%
//SECCION DE REGLAS

S: title 
  {
    sprintf(writeBuffer,"%s",$1);writeLinetoFile(writeBuffer);
    free($1);
  }
  | textword
    {
    sprintf(writeBuffer,"%s",$1);writeLinetoFile(writeBuffer);
    free($1);
  }
  | cursiva
    {
    sprintf(writeBuffer,"%s",$1);writeLinetoFile(writeBuffer);
    free($1);
  }
  | emphasis
    {
    sprintf(writeBuffer,"%s",$1);writeLinetoFile(writeBuffer);
    free($1);
  }
  | comb
    {
    sprintf(writeBuffer,"%s",$1);writeLinetoFile(writeBuffer);
    free($1);
  }
  | comb2
    {
    sprintf(writeBuffer,"%s",$1);writeLinetoFile(writeBuffer);
    free($1);
  }
  | listas
    {
    sprintf(writeBuffer,"%s",$1);writeLinetoFile(writeBuffer);
    free($1);
  }
  | scratch
    {
    sprintf(writeBuffer,"%s",$1);writeLinetoFile(writeBuffer);
    free($1);
  }
  | code
    {
    sprintf(writeBuffer,"%s",$1);writeLinetoFile(writeBuffer);
    free($1);
  }
  | link
    {
    sprintf(writeBuffer,"%s",$1);writeLinetoFile(writeBuffer);
    free($1);
  }
  | image
    {
    sprintf(writeBuffer,"%s",$1);writeLinetoFile(writeBuffer);
    free($1);
  }
;

title: H1
    {
    $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h1>%s</h1>", $1+2);
    }
  | H2 
    { $$=malloc(sizeof(char)*(strlen($1)+5000));
      sprintf($$,"<h2>%s</h2>", $1+3);}
  |H3 
    {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h3>%s</h3>", $1+4);}
  |H4 
    {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h4>%s</h4>", $1+5);} 	
  |H5 
    {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h5>%s</h5>", $1+6);
    }
  |H6 
    {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h6>%s</h6>", $1+2);}  
	| H1 title
    	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h1>%s</h1>\n%s", $1+2,$2);
       }
	| H2 title
    	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h2>%s</h2>\n%s", $1+3,$2);}  
	| H3 title
    	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h3>%s</h3>\n%s", $1+4,$2);}  
	| H4 title
    {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h4>%s</h4>\n%s", $1+5,$2);} 	
	| H5 title
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h5>%s</h5>\n%s", $1+6,$2);} 
	| H6 title
    	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h6>%s</h6>\n%s", $1+7,$2);
    }
	| H1 textword
   { $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h1>%s</h1>\n%s", $1+2,$2);}
	| H2 textword
    	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h2>%s</h2>\n%s", $1+3,$2);}  
	| H3 textword
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h3>%s</h3>\n%s", $1+3,$2);}
	| H4 textword
    {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h4>%s</h4>\n%s", $1+5,$2);} 	
	| H5 textword
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h5>%s</h5>\n%s", $1+6,$2);} 
	| H6 textword
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h6>%s</h6>\n%s", $1+7,$2);} 
	| H1 emphasis
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h1>%s</h1>\n%s", $1+2,$2);} 
	| H2 emphasis
    	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h2>%s</h2>\n%s", $1+3,$2);}  
	| H3 emphasis
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h1>%s</h1>", $1+2);} 
	| H4 emphasis
    {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h4>%s</h4>\n%s", $1+5,$2);} 	
	| H5 emphasis
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h5>%s</h5>\n%s", $1+6,$2);} 
	| H6 emphasis
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h6>%s</h6>\n%s", $1+7,$2);} 
	| H1 cursiva
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h1>%s</h1>\n%s", $1+2,$2);} 
	| H2 cursiva
    	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h2>%s</h2>\n%s", $1+3,$2);}  
	| H3 cursiva
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h1>%s</h1>", $1+2);} 
	| H4 cursiva
    {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h4>%s</h4>\n%s", $1+5,$2);} 	
	| H5 cursiva
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h5>%s</h5>\n%s", $1+6,$2);} 
	| H6 cursiva
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h6>%s</h6>\n%s", $1+7,$2);} 
	| H1 scratch
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h1>%s</h1>\n%s", $1+2,$2);} 
	| H2 scratch
    	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h2>%s</h2>\n%s", $1+3,$2);}  
	| H3 scratch
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h1>%s</h1>", $1+2);} 
	| H4 scratch
    {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h4>%s</h4>\n%s", $1+5,$2);} 	
	| H5 scratch
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h5>%s</h5>\n%s", $1+6,$2);} 
	| H6 scratch
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h6>%s</h6>\n%s", $1+7,$2);} 
	| H1 listas
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h1>%s</h1>\n%s", $1+2,$2);} 
	| H2 listas
    	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h2>%s</h2>\n%s", $1+3,$2);}  
	| H3 listas
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h1>%s</h1>", $1+2);} 
	| H4 listas
    {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h4>%s</h4>\n%s", $1+5,$2);} 	
	| H5 listas
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h5>%s</h5>\n%s", $1+6,$2);} 
	|H6 listas
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h6>%s</h6>\n%s", $1+7,$2);} 
	| H1 comb
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h1>%s</h1>\n%s", $1+2,$2);} 
	| H2 comb
    	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h2>%s</h2>\n%s", $1+3,$2);}  
	| H3 comb
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h1>%s</h1>", $1+2);} 
	| H4 comb
    {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h4>%s</h4>\n%s", $1+5,$2);} 	
	| H5 comb
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h5>%s</h5>\n%s", $1+6,$2);} 
	| H6 comb
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h6>%s</h6>\n%s", $1+7,$2);} 
	| H1 comb2
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h1>%s</h1>\n%s", $1+2,$2);} 
	| H2 comb2
    	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h2>%s</h2>\n%s", $1+3,$2);}  
	| H3 comb2
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h1>%s</h1>", $1+2);} 
	| H4 comb2
    {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h4>%s</h4>\n%s", $1+5,$2);} 	
	| H5 comb2
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h5>%s</h5>\n%s", $1+6,$2);} 
	| H6 comb2
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h6>%s</h6>\n%s", $1+7,$2);} 
	| H1 code
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h1>%s</h1>\n%s", $1+2,$2);} 
	| H2 code
    	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h2>%s</h2>\n%s", $1+3,$2);}  
	| H3 code
	{printf("<h3>%s</h3>", $1+4);} 
	| H4 code
    {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h4>%s</h4>\n%s", $1+5,$2);} 	
	| H5 code
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h5>%s</h5>\n%s", $1+6,$2);} 
	| H6 code
    {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h6>%s</h6>", $1+2);}  
	| H1 link
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h1>%s</h1>\n%s", $1+2,$2);} 
	| H2 link
    	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h2>%s</h2>\n%s", $1+3,$2);}  
	| H3 link
	{printf("<h3>%s</h3>", $1+4);} 
	| H4 link
    {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h4>%s</h4>\n%s", $1+5,$2);} 	
	| H5 link
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h5>%s</h5>\n%s", $1+6,$2);} 
	| H6 link
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h6>%s</h6>\n%s", $1+7,$2);}
	| H1 image
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h1>%s</h1>\n%s", $1+2,$2);} 
	| H2 image
    	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h2>%s</h2>\n%s", $1+3,$2);}  
	| H3 image
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h3>%s</h3>\n%s", $1+4,$2);} 
	| H4 image
    {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h4>%s</h4>\n%s", $1+5,$2);} 	
  | H5 image
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h5>%s</h5>\n%s", $1+6,$2);} 
	| H6 image
	{$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<h6>%s</h6>\n%s", $1+7,$2);}
;


textword:TEXTWORD     
    {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s</p>", $1);}  
    | TEXTWORD  title 
    {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s</p>\n%s", $1,$2);}        
    | TEXTWORD cursiva    
      {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>", $1,$2);} 
    
    | TEXTWORD listas     
      {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s</p>\n%s", $1,$2);}    
    | TEXTWORD scratch 
      {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>", $1,$2);}   
    
    | TEXTWORD comb 
      {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>", $1,$2);}   
    | TEXTWORD comb2 
      {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>", $1,$2);}   
    | TEXTWORD emphasis 
      {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>", $1,$2);}   
    | TEXTWORD code   
    {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s</p>\n%s", $1,$2);}   
    | TEXTWORD textword 
      {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s</p>\n%s", $1,$2);}   
    | TEXTWORD link 
      {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s</p>\n%s", $1,$2);}   
    | TEXTWORD image 
      {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s</p>\n%s", $1,$2);}   
    | LINKNAME  
     {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s</p>", $1);}   
    | TEXTWORD LINKNAME title 
      {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>\n%s", $1,$2,$3);}   
    | TEXTWORD LINKNAME cursiva 
          {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>\n%s", $1,$2,$3);}   
    | TEXTWORD LINKNAME listas       
    {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>\n%s", $1,$2,$3);}   
    | TEXTWORD LINKNAME scratch 
          {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>\n%s", $1,$2,$3);}   
    | TEXTWORD LINKNAME comb
          {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>\n%s", $1,$2,$3);}   
    | TEXTWORD LINKNAME comb2
          {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>\n%s", $1,$2,$3);}   
    | TEXTWORD LINKNAME emphasis 
          {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>\n%s", $1,$2,$3);}   
    | TEXTWORD LINKNAME code 
          {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>\n%s", $1,$2,$3);}   
    | TEXTWORD LINKNAME textword 
          {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>\n%s", $1,$2,$3);}   
    | TEXTWORD LINKNAME link 
          {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>\n%s", $1,$2,$3);}   
    | TEXTWORD LINKNAME image 
          {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>\n%s", $1,$2,$3);}   
    | TEXTWORD LINK
          {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>", $1,$2);}   
    | TEXTWORD LINK title       
    {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>\n%s", $1,$2,$3);}   
    | TEXTWORD LINK cursiva 
      {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>\n%s", $1,$2,$3);}   
    | TEXTWORD LINK listas 
      {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>\n%s", $1,$2,$3);}   
    | TEXTWORD LINK scratch 
      {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>\n%s", $1,$2,$3);}   
    | TEXTWORD LINK comb 
        {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>\n%s", $1,$2,$3);}   
    | TEXTWORD LINK comb2      
     {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>\n%s", $1,$2,$3);}   
    | TEXTWORD LINK emphasis 
          {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>\n%s", $1,$2,$3);}   
    | TEXTWORD LINK code 
        {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>\n%s", $1,$2,$3);}   
    | TEXTWORD LINK textword 
        {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>\n%s", $1,$2,$3);}   
    | TEXTWORD LINK link 
          {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>\n%s", $1,$2,$3);}   
    | TEXTWORD LINK image 
          {$$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<p>%s%s</p>\n%s", $1,$2,$3);}   
;


emphasis: EMPHASIS
          { rmposition($1);
          $$=malloc(sizeof(char)*(strlen($1)+5000));
          sprintf($$,"<b>%s</b>", $1);}
          | EMPHASIS title
          {rmposition($1);
          $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<b>%s</b>\n%s", $1,$2); }
          | EMPHASIS emphasis
          {rmposition($1);
          $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<b>%s</b>\n%s", $1,$2); }
          | EMPHASIS cursiva
          {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<b>%s</b>\n%s", $1,$2);}
          | EMPHASIS scratch
          {rmposition($1);
          $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<b>%s</b>\n%s", $1,$2);}
          | EMPHASIS textword
          {rmposition($1);
          $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<b>%s</b>\n%s", $1,$2);}
          |EMPHASIS comb
          {rmposition($1);
          $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<b>%s</b>\n%s", $1,$2);}
          |EMPHASIS comb2
          {rmposition($1);
          $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<b>%s</b>\n%s", $1,$2);}
          |EMPHASIS code
          {rmposition($1);
          $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<b>%s</b>\n%s", $1,$2);}
          |EMPHASIS link
          {rmposition($1);
          $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<b>%s</b>\n%s", $1,$2);}
          |EMPHASIS image
          {rmposition($1);
          $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<b>%s</b>\n%s", $1,$2);}            
;          
     
cursiva: CURSIVA  {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<em>%s</em>", $1);}
         | CURSIVA title
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<em>%s</em>\n%s", $1,$2);}
         | CURSIVA emphasis
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<em>%s</em>\n%s", $1,$2);}
         | CURSIVA cursiva
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<em>%s</em>\n%s", $1,$2); }
         | CURSIVA scratch
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<em>%s</em>\n%s", $1,$2);}
         | CURSIVA textword   
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<em>%s</em>\n%s", $1,$2);} 
         |CURSIVA comb
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<em>%s</em>\n%s", $1,$2);}
         |CURSIVA comb2
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<em>%s</em>\n%s", $1,$2);}
         |CURSIVA code
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<em>%s</em>\n%s", $1,$2);}
         |CURSIVA link
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<em>%s</em>\n%s", $1,$2);}
        |CURSIVA image
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<em>%s</em>\n%s", $1,$2);}
    
      |CURSIVA listas
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<em>%s</em>\n%s", $1,$2);}
;


comb:    COMB  {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<strong><em>%s</em></strong>", $1);}
        
         | COMB title
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<strong><em>%s</em></strong>\n%s", $1,$2); }
         | COMB emphasis
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<strong><em>%s</em></strong>\n%s", $1,$2);  }
         | COMB cursiva
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<strong><em>%s</em></strong>\n%s", $1,$2); }
         | COMB scratch
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<strong><em>%s</em></strong>\n%s", $1,$2); }
         | COMB textword   
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<strong><em>%s</em></strong>\n%s", $1,$2); }   
         | COMB comb2  
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<strong><em>%s</em></strong>\n%s", $1,$2); }    
         | COMB comb
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<strong><em>%s</em></strong>\n%s", $1,$2); }  
         | COMB listas
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<strong><em>%s</em></strong>\n%s", $1,$2); }          
         | COMB code
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<strong><em>%s</em></strong>\n%s", $1,$2); }          
         | COMB link
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<strong><em>%s</em></strong>\n%s", $1,$2);} 
         | COMB image
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<strong><em>%s</em></strong>\n%s", $1,$2); } 
;


comb2:    COMB2  {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<del><em>%s</em></del>", $1); }
         | COMB2 title
         {rmposition($1);
        $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<del><em>%s</em></del>\n%s", $1,$2); }
         | COMB2 emphasis
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<del><em>%s</em></del>\n%s", $1,$2); }
         | COMB2 cursiva
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<del><em>%s</em></del>\n%s", $1,$2); }
         | COMB2 scratch
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<del><em>%s</em></del>\n%s", $1,$2);}
         | COMB2 textword   
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<del><em>%s</em></del>\n%s", $1,$2); }   
         | COMB2 comb   
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<del><em>%s</em></del>\n%s", $1,$2); }  
         | COMB2 comb2  
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<del><em>%s</em></del>\n%s", $1,$2);}  
         | COMB2 listas  
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<del><em>%s</em></del>\n%s", $1,$2); }  
         
         | COMB2 code  
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<del><em>%s</em></del>\n%s", $1,$2);}  
         
         
         | COMB2 link  
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<del><em>%s</em></del>\n%s", $1,$2); } 
         | COMB2 image  
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<del><em>%s</em></del>\n%s", $1,$2);} 
;






scratch: SCRATCH {rmposition($1);
    $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<del>%s</del>", $1); } 
         |SCRATCH listas
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<del>%s</del>\n%s", $1,$2); } 
         |SCRATCH title
         {rmposition($1);
        $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<del>%s</del>\n%s", $1,$2);  } 
         |SCRATCH scratch
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<del>%s</del>\n%s", $1,$2);} 
         |SCRATCH cursiva
         {rmposition($1);
          $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<del>%s</del>\n%s", $1,$2); } 
         |SCRATCH emphasis
         {rmposition($1);
          $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<del>%s</del>\n%s", $1,$2);} 
         |SCRATCH textword    
         {rmposition($1);
          $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<del>%s</del>\n%s", $1,$2); }  
         |SCRATCH comb
         {rmposition($1);
          $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<del>%s</del>\n%s", $1,$2);}
         |SCRATCH comb2
         {rmposition($1);
          $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<del>%s</del>\n%s", $1,$2); }
         |SCRATCH code
         {rmposition($1);
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<del>%s</del>\n%s", $1,$2); }
         |SCRATCH link
         {rmposition($1);
          $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<del>%s</del>\n%s", $1,$2); }
        |SCRATCH image
         {rmposition($1);
          $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<del>%s</del>\n%s", $1,$2); }
;


listas: LISTAORD {
         $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<li>%s</li>", $1+3);
        }
        |LISTAORD listas {
        $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<li>%s</li>\n%s", $1+3,$2);
        }
        |LISTAORD title {
        $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<li>%s</li>\n%s", $1+3,$2);
        }
        |LISTAORD scratch {
       $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<li>%s</li>\n%s", $1+3,$2);
        }
        |LISTAORD cursiva {
        $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<li>%s</li>\n%s", $1+3,$2);
        }
        |LISTAORD emphasis {
    $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<li>%s</li>\n%s", $1+3,$2);
        }
        |LISTAORD textword {
        $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<li>%s</li>\n%s", $1+3,$2);
        }
        |LISTAORD comb {
        $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<li>%s</li>\n%s", $1+3,$2);
        }
        
        |LISTAORD comb2 {
        $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<li>%s</li>\n%s", $1+3,$2);
        }
        
         |LISTAORD code {
        $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<li>%s</li>\n%s", $1+3,$2);
        }
        
         |LISTAORD link {
        $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<li>%s</li>\n%s", $1+3,$2);
        }
        
        |LISTADESORD {
        $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<li>%s</li>", $1+2);
        }

        |LISTADESORD listas {
        $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<li>%s</li>\n%s", $1+2,$2);
        }

        |LISTADESORD title {
        $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<li>%s</li>\n%s", $1+2,$2);
        }
        
        |LISTADESORD scratch {
        $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<li>%s</li>\n%s", $1+2,$2);
        }
        
        |LISTADESORD cursiva {
        $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<li>%s</li>\n%s", $1+2,$2);
        }
        
        |LISTADESORD emphasis {
        $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<li>%s</li>\n%s", $1+2,$2);
        }
        
        |LISTADESORD textword {
        $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<li>%s</li>\n%s", $1+2,$2);
        }
        
        |LISTADESORD comb {
        $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<li>%s</li>\n%s", $1+2,$2);
        }
        
        |LISTADESORD comb2 {
        $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<li>%s</li>\n%s", $1+2,$2);
        }
        
        
        |LISTADESORD code {
       $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<li>%s</li>\n%s", $1+2,$2);
        }
        
        |LISTADESORD image {
        $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<li>%s</li>\n%s", $1+2,$2);
        }
                
        |LISTAORD image {
        $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<li>%s</li>\n%s", $1+2,$2);
        }
     
;




code: CODE {
     rmposition($1);
     $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<code>%s</code>", $1);}


     |CODE title {
     rmposition($1);
     $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<code>%s</code>\n%s", $1,$2);}

     |CODE scratch {
     rmposition($1);
     $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<code>%s</code>\n%s", $1,$2);}
     
     
     |CODE cursiva {
     rmposition($1);
     $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<code>%s</code>\n%s", $1,$2);}
     
     
     |CODE textword {
     rmposition($1);
     $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<code>%s</code>\n%s", $1,$2);}
     
     
     |CODE emphasis {
     rmposition($1);
     $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<code>%s</code>\n%s", $1,$2);}
     
     
     |CODE comb {
     rmposition($1);
     $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<code>%s</code>\n%s", $1,$2);}
     
     
     |CODE comb2 {
     rmposition($1);
     $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<code>%s</code>\n%s", $1,$2);}
     
     
     |CODE code {
     rmposition($1);
     $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<code>%s</code>\n%s", $1,$2);}
     
     
     |CODE listas {
     rmposition($1);
     $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<code>%s</code>\n%s", $1,$2);}
     
     |CODE link {
     rmposition($1);
     $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<code>%s</code>\n%s", $1,$2);}
    |CODE image {
     rmposition($1);
     $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<code>%s</code>\n%s", $1,$2);}
 
;

link: 

     LINKNAME LINK {
     rmposition($1);
     rmposition($2);
      $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<a href=%s>%s</a>", $2,$1);}
     |LINKNAME LINK link{
     rmposition($1);
     rmposition($2);
     $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<a href=%s>%s</a>\n%s", $2,$1,$3);}
     

     |LINKNAME LINK title {
  
     rmposition($1);
     rmposition($2);
     $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<a href=%s>%s</a>\n%s", $2,$1,$3);}

     |LINKNAME LINK scratch {
    
     rmposition($1);
     rmposition($2);
    
     $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<a href=%s>%s</a>\n%s", $2,$1,$3);}
     
     
     |LINKNAME LINK cursiva {
     
     rmposition($1);
     rmposition($2);
  
     $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<a href=%s>%s</a>\n%s", $2,$1,$3);}
     
     
     |LINKNAME LINK textword {
  
     rmposition($1);
     rmposition($2);
     
    $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<a href=%s>%s</a>\n%s", $2,$1,$3);}
     
     
     |LINKNAME LINK emphasis {
   
     rmposition($1);
     rmposition($2);
     
    $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<a href=%s>%s</a>\n%s", $2,$1,$3);}
     
     
     |LINKNAME LINK comb {
    
     rmposition($1);
     rmposition($2);
     
     $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<a href=%s>%s</a>\n%s", $2,$1,$3);}
     
     
     |LINKNAME LINK comb2 {
    
     rmposition($1);
     rmposition($2);
  $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<a href=%s>%s</a>\n%s", $2,$1,$3);}
     
     
     |LINKNAME LINK code {
    
     rmposition($1);
     rmposition($2);
     $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<a href=%s>%s</a>\n%s", $2,$1,$3);}
     
     
     |LINKNAME LINK listas {
    
     rmposition($1);
     rmposition($2);
     $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<a href=%s>%s</a>\n%s", $2,$1,$3);}
     |LINKNAME LINK image {
     rmposition($1);
     rmposition($2);
     $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<a href=%s>%s</a>\n%s", $2,$1,$3);}
;

image: IMAGE LINK {
     rmposition($1);
     rmposition($2);
    $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<img src=\"%s\" alt=\"%s\">", $2,$1);}
     |IMAGE LINK title {
     rmposition($1);
     rmposition($2);
   $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<img src=\"%s\" alt=\"%s\">\n%s", $2,$1,$3);}

     |IMAGE LINK scratch {
     rmposition($1);
     rmposition($2);
    $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<img src=\"%s\" alt=\"%s\">\n%s", $2,$1,$3);}
     
     
     |IMAGE LINK cursiva {
     rmposition($1);
     rmposition($2);
    $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<img src=\"%s\" alt=\"%s\">\n%s", $2,$1,$3);}
     
     
     |IMAGE LINK textword {
     rmposition($1);
     rmposition($2);
    $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<img src=\"%s\" alt=\"%s\">\n%s", $2,$1,$3);}
     
     
     |IMAGE LINK emphasis {
     rmposition($1);
     rmposition($2);
   $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<img src=\"%s\" alt=\"%s\">\n%s", $2,$1,$3);}
     
     
     |IMAGE LINK comb {
     rmposition($1);
     rmposition($2);
    $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<img src=\"%s\" alt=\"%s\">\n%s", $2,$1,$3);}
     
     
     |IMAGE LINK comb2 {
     rmposition($1);
     rmposition($2);
   $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<img src=\"%s\" alt=\"%s\">\n%s", $2,$1,$3);}
     
     
     |IMAGE LINK code {
     rmposition($1);
     rmposition($2);
   $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<img src=\"%s\" alt=\"%s\">\n%s", $2,$1,$3);}
     
     
     |IMAGE LINK listas {
     rmposition($1);
     rmposition($2);
    $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<img src=\"%s\" alt=\"%s\">\n%s", $2,$1,$3);}
     
     |IMAGE LINK link {
     rmposition($1);
     rmposition($2);
   $$=malloc(sizeof(char)*(strlen($1)+5000));
    sprintf($$,"<img src=\"%s\" alt=\"%s\">\n%s", $2,$1,$3);}
;

%%



char *rmposition (char *s) //Function to remove symbols
{
    int ast = 0,                     
        write = 0;                     
    
    for (int i = 0; s[i]; i++) {       
        if (s[i] == '*' || s[i] == '_'|| s[i] == '~' ||
         s[i] == '`'  || s[i] == ')' ||  s[i] == '('  || s[i] == ']' ||  s[i] == '[' || s[i] == '!')                
            ast = 1;  
                  
        else                           
            s[write++] = s[i];         
    }
    
    s[write] = 0;   
    return s;                          
}


void openFile(char* fileName){
  if (fileName == NULL) {
				printf("ERROR: No se ha podido crear el fichero.\n");
    }else{
        outputFile=fopen(fileName,"w");
    }
}

void writeLinetoFile(char* str){
  fprintf(outputFile,"%s",str);
}
void closeFile(){
  fclose(outputFile);
}


int main(int argc, char *argv[]) {
  openFile("salida.html");
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
	
  closeFile();
	return 0;
}
