%{
#include <stdlib.h>
#include "proyectofinal.tab.h"
int contador = 0;
%}
ws                  [ \n\t]+
titulo              [ 0-9a-zA-Z:/.\-,'¿?¡!"]+
nombre              [ a-zA-Z:/.\-,'¿?¡!"]+
digito              [0-9]*
link                ["\["{nombre}"\]\("{nombre}"\)"]+
code                ["``"{nombre}"``"]+
%%
{ws}                              {}
("# "{titulo}*)+                   {yylval.string = strdup(yytext); return H1;}
("## "{titulo}*)+                  {yylval.string = strdup(yytext); return H2;}
("### "{titulo}*)+                 {yylval.string = strdup(yytext); return H3;}
("#### "{titulo}*)+                {yylval.string = strdup(yytext); return H4;}
("##### "{titulo}*)+               {yylval.string = strdup(yytext); return H5;}
("###### "{titulo}*)+              {yylval.string = strdup(yytext); return H6;}
({digito}". "{nombre}*)+           { contador++; yylval.string = strdup(yytext); return LISTAORD;}
({nombre}"\n")+                          {yylval.string = strdup(yytext); return NOMBRE;}
("*"{nombre}+"*"|"_"{nombre}+"_")+  {yylval.string = strdup(yytext); return CURSIVA;}
("**"{nombre}+"**"|"__"{nombre}+"__")+         {yylval.string = strdup(yytext); return ENFASIS;}
("~~"{nombre}+"~~")+                           {yylval.string = strdup(yytext); return SCRATCH;}
("\-"|"\+"|{nombre}*)+    {yylval.string = strdup(yytext); return LISTADESORD;}
{link}                              {yylval.string = strdup(yytext); return LINK;}
{code}                              {yylval.string = strdup(yytext); return CODE;}
%%