%{

#include <stdlib.h>
#include "practica2.tab.h"

%}


name            [A-Z|ÁÉÍÓÚ|0-9|a-z|áéíóú]+
content         ([A-Z|ÁÉÍÓÚ|0-9|a-z|áéíóú]+|[-\/\!\?¿¡\(\)''#\"\$\%\*\-\.,:=])*

%%

[ \n]                             {}                          
"<!--"[^-]*"-->"                { yylval.string=strdup(yytext); return COMMENT;}
"<?"({content}|\=|.|-)*"?>"   { yylval.string=strdup(yytext); return STATEMENT;}
"<"{name}">"                  {  yylval.string=strdup(yytext); return OPENTAG;}
"</"{name}">"                 { yylval.string=strdup(yytext); return CLOSETAG;}
{content}                    { yylval.string=strdup(yytext); return CONTENT;}

%%
