%{
#include <stdlib.h>
#include "proyectofinal.tab.h"
%}
ws                  [ \n\t]+
titulo              [ 0-9a-zA-Z:/.\-,'¿?¡!"]+
nombre              [ \n0-9a-zA-Z:/.\-,'¿?¡!"]+
cursiva             ["\*"{nombre}"\*"|"\_"{nombre}"\_"]+
scratch             ["\~\~"{nombre}"\~\~"]+
digito              [0-9]{1}[0-9]{1}|[0-9]+
listaOrdenada       [{digito}"\."{nombre}"\n"]+
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
{nombre}                          {yylval.string = strdup(yytext); return NOMBRE;}
{cursiva}                           {yylval.string = strdup(yytext); return CURSIVA;}
("\*\*"{nombre}"\*\*"|"\_\_"{nombre}"\_\_")+         {yylval.string = strdup(yytext); return ENFASIS;}
{scratch}                           {yylval.string = strdup(yytext); return SCRATCH;}
{listaOrdenada}                     {yylval.string = strdup(yytext); return LISTAORD;}
{listaDesordenada}                  {yylval.string = strdup(yytext); return LISTADESORD;}
{link}                              {yylval.string = strdup(yytext); return LINK;}
{code}                              {yylval.string = strdup(yytext); return CODE;}
%%