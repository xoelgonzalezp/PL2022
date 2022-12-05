%{
#include <stdlib.h>
#include "proyectofinal.tab.h"
%}
ws                  [ \n\t]+
titulo              [ 0-9a-zA-Z:/.\-,'¿?¡!"]+
nombre              [ \na-zA-Z:/.\-,'¿?¡!"]+
digito              [0-9]{1}[0-9]{1}|[0-9]+
listaDesordenada    ["\-"|"\-"|"\+"|{nombre}+|"\-"|"\-"|"\+"]+
link                ["\["{nombre}"\]\("{nombre}"\)"]+
code                ["``"{nombre}"``"]+
%%
{ws}                              {}
("# "{titulo})+                   {yylval.string = strdup(yytext); return H1;}
("## "{titulo})+                  {yylval.string = strdup(yytext); return H2;}
("### "{titulo})+                 {yylval.string = strdup(yytext); return H3;}
("#### "{titulo})+                {yylval.string = strdup(yytext); return H4;}
("##### "{titulo})+               {yylval.string = strdup(yytext); return H5;}
("###### "{titulo})+              {yylval.string = strdup(yytext); return H6;}
({digito}". "{nombre})+                     {yylval.string = strdup(yytext); return LISTAORD;}
{nombre}                          {yylval.string = strdup(yytext); return NOMBRE;}
("*"{nombre}"*"|"_"{nombre}"_")+  {yylval.string = strdup(yytext); return CURSIVA;}
("**"{nombre}"**"|"__"{nombre}"__")+         {yylval.string = strdup(yytext); return ENFASIS;}
("~~"{nombre}"~~")+                           {yylval.string = strdup(yytext); return SCRATCH;}
{listaDesordenada}                  {yylval.string = strdup(yytext); return LISTADESORD;}
{link}                              {yylval.string = strdup(yytext); return LINK;}
{code}                              {yylval.string = strdup(yytext); return CODE;}
%%