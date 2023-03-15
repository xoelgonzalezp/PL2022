%{
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "stdbool.h"
int yylex(void);
void yyerror(char const *message); 
char *rmposition (char *s);
char writeBuffer[6000];
FILE* outputFile;
void writeLinetoFile(char*);
bool isHeader=true;
bool isHTML=true;
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
%token <string> ITALIC
%token <string> COMB
%token <string> COMB2
%token <string> EMPHASIS
%token <string> SCRATCH
%token <string> CODE
%token <string> ORDLIST
%token <string> DESORDLIST
%token <string> LINK
%token <string> TEXTWORD
%token <string> TITLE
%token <string> LINKNAME
%token <string> IMAGE
%token <string> SPAN
%token <string> SPAN2
%token <string> BR
%type <string> title content textword file

%start S

%%
//SECCION DE REGLAS

S: file
  { 
    sprintf(writeBuffer,"%s",$1);writeLinetoFile(writeBuffer);
    free($1);
  }
;

file: content { $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"%s\n</body>\n</html>", $1);}


content: title { $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"%s", $1);}
| title content  
    { $$=malloc(sizeof(char)*(strlen($1)+strlen($2)+50));
    sprintf($$,"%s%s", $1,$2);}
| textword     
    {$$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<p>%s</p>", $1);}  
| textword { isHeader=false; } content
    {$$=malloc(sizeof(char)*(strlen($1)+strlen($3)+50));
    sprintf($$,"%s%s", $1,$3);
    }
;

textword: TEXTWORD 
    {if(isHTML){ 
    $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<html>\n<body>\n<p>%s</p>", $1);
    isHTML=false;
    }else{$$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<p>%s</p>", $1);}  
}
    | LINKNAME 
    {if(isHTML){ 
    $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<html>\n<body>\n<p>%s</p>", $1);
    isHTML=false;
    }else{$$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<p>%s</p>", $1);} 
    }
    | TEXTWORD LINK 
    {if(isHTML){ 
    $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<html>\n<body>\n<p>%s%s</p>", $1,$2);
    isHTML=false;
    }else{$$=malloc(sizeof(char)*(strlen($1)+strlen($2)+50));
    sprintf($$,"<p>%s%s</p>", $1,$2);}
    } 
    | EMPHASIS
    {if(isHTML){ 
    rmposition($1);
    $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<html>\n<body>\n<b>%s</b><br>", $1);
    isHTML=false;
    }else{rmposition($1);
        $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<b>%s</b><br>", $1);} 
    }
    | ITALIC
    {if(isHTML){ 
    rmposition($1);
    $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<html>\n<body>\n<em>%s</em><br>", $1);
    isHTML=false;
    }else{rmposition($1);
        $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<em>%s</em><br>", $1);} 
    }
    | SCRATCH
    {if(isHTML){ 
    rmposition($1);
    $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<html>\n<body>\n<del>%s</del><br>", $1);
    isHTML=false;
    }else{rmposition($1);
        $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<del>%s</del><br>", $1);} 
    }
    | COMB
    {if(isHTML){ 
    rmposition($1);
    $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<html>\n<body>\n<strong><em>%s</em></strong><br>", $1);
    isHTML=false;
    }else{rmposition($1);
        $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<strong><em>%s</em></strong><br>", $1);} 
    }
    | COMB2
    {if(isHTML){ 
    rmposition($1);
    $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<html>\n<body>\n<del><em>%s</em></del><br>", $1);
    isHTML=false;
    }else{rmposition($1);
        $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<del><em>%s</em></del><br>", $1);} 
    }
    |SPAN
    {if(isHTML){ 
    $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<html>\n<body>\n%s<br>", $1);
    isHTML=false;
    }else{$$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"%s<br>",$1);} 
    }
    |SPAN2
    {if(isHTML){ 
    $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<html>\n<body>\n%s<br>", $1);
    isHTML=false;
    }else{$$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"%s<br>",$1);} 
    }
    | ORDLIST { if(isHTML){ 
    $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<html>\n<body>\n<li>%s</li>", $1+3); 
    isHTML=false;
    }else{
    $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<li>%s</li>", $1+3);}
        }
    |DESORDLIST {if(isHTML){ 
    $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<html>\n<body>\n<li>%s</li>", $1+2); 
    isHTML=false;
    }else{
        $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<li>%s</li>", $1+2);}
        }
    | CODE { if(isHTML){ 
     rmposition($1);
     $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<html>\n<body>\n<code>%s</code><br>", $1);
    isHTML=false;
    }else{
     rmposition($1);
     $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<code>%s</code><br>", $1);}
}
    | IMAGE LINK {
    if(isHTML){ 
     rmposition($1);
     rmposition($2);
    $$=malloc(sizeof(char)*(strlen($1)+strlen($2)+50));
    sprintf($$,"<html>\n<body>\n<img src=\"%s\" alt=\"%s\"><br>", $2,$1);
    isHTML=false;
    }else{
     rmposition($1);
     rmposition($2);
    $$=malloc(sizeof(char)*(strlen($1)+strlen($2)+50));
    sprintf($$,"<img src=\"%s\" alt=\"%s\"><br>", $2,$1);}
}
| LINKNAME LINK {
    if(isHTML){ 
     rmposition($1);
     rmposition($2);
      $$=malloc(sizeof(char)*(strlen($1)+strlen($2)+50));
    sprintf($$,"<html>\n<body>\n<a href=%s>%s</a><br>", $2,$1);
    isHTML=false;
    }else{
     rmposition($1);
     rmposition($2);
      $$=malloc(sizeof(char)*(strlen($1)+strlen($2)+50));
    sprintf($$,"<a href=%s>%s</a><br>", $2,$1);}
}
|BR {if(isHTML){ 
    $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<html>\n<body>\n");
    isHTML=false;
    }else{
     $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"\n");}
}
;

title: H1
    { if(isHeader){
         $$=malloc(sizeof(char)*(strlen($1)+50));
        sprintf($$,"<html>\n<head>\n<title>%s</title>\n</head>\n\n<body>", $1+2);
        isHTML=false;
    }else{
        $$=malloc(sizeof(char)*(strlen($1)+50));
        sprintf($$,"<h1>%s</h1>", $1+2);
    }
    isHeader=false;
    }
  | H2 
    { if(isHeader){
         $$=malloc(sizeof(char)*(strlen($1)+50));
        sprintf($$,"<html>\n<head>\n<title>%s</title>\n</head>\n<body>\n", $1+3);
        isHTML=false;
    }else{
         $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<h2>%s</h2>", $1+3);
    }
    isHeader=false;
    }
  |H3 
    {if(isHeader){
         $$=malloc(sizeof(char)*(strlen($1)+50));
        sprintf($$,"<html>\n<head>\n<title>%s</title>\n</head>\n<body>\n", $1+4);
        isHTML=false;
    }else{
         $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<h3>%s</h3>", $1+4);
    }
    isHeader=false;
    }
  |H4 
    {if(isHeader){
         $$=malloc(sizeof(char)*(strlen($1)+50));
        sprintf($$,"<html>\n<head>\n<title>%s</title>\n</head>\n<body>\n", $1+5);
        isHTML=false;
    }else{
         $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<h4>%s</h4>", $1+5);
    }
    isHeader=false;
    } 	
  |H5 
    {if(isHeader){
         $$=malloc(sizeof(char)*(strlen($1)+50));
        sprintf($$,"<html>\n<head>\n<title>%s</title>\n</head>\n<body>\n", $1+6);
        isHTML=false;
    }else{
         $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<h5>%s</h5>", $1+6);
    }
    isHeader=false;
    }
  |H6 
    {if(isHeader){
         $$=malloc(sizeof(char)*(strlen($1)+50));
        sprintf($$,"<html>\n<head>\n<title>%s</title>\n</head>\n<body>\n", $1+7);
        isHTML=false;
    }else{
         $$=malloc(sizeof(char)*(strlen($1)+50));
    sprintf($$,"<h6>%s</h6>", $1+7);
    }
    isHeader=false;
}  
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


int openFile(char* fileName){
    outputFile=fopen(fileName,"w");
  if (fileName == NULL) {
		printf("ERROR: No se ha podido crear el fichero.\n");
        return -1;
  }
  return 0;
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
char *extension = strrchr(argv[1], '.');
	switch (argc) {
		case 1:	
            if (strcmp(extension, ".md") == 0) { 
                    yyin=stdin;
                    yyparse();
                }else{
                    printf("ERROR: No es un fichero con extensión Markdown\n");
                }
			break;
		case 2: yyin = fopen(argv[1], "r");
			if (yyin == NULL) {
				printf("ERROR: No se ha podido abrir el fichero.\n");
			}
			else {
                if (strcmp(extension, ".md") == 0) { 
                    yyparse();
				    fclose(yyin);
                }else{
                    printf("ERROR: No es un fichero con extensión Markdown\n");
                }
            }
			break;
		default: printf("ERROR: Demasiados argumentos.\nSintaxis: %s [fichero_entrada]\n\n", argv[0]);
	}
  closeFile();
	return 0;
}
