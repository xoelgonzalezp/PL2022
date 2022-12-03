%{
#include <stdlib.h>
#include "proyectofinal.tab.h"
%}
ws                  [ \t\r\n]+
hashtag             ["# "|"## "|"### "|"#### "|"##### "]+
nombre              [0-9a-zA-Z:/.\-,'¿?¡!"]+
cursiva             ["\*"{nombre}"\*"|"\_"{nombre}"\_"]+
scratch             ["\~\~"{nombre}"\~\~"]+
digito              [0-9]{1}[0-9]{1}|[0-9]+
listaOrdenada       [{digito}"\."{nombre}"\n"]+
listaDesordenada    ["\-"|"\-"|"\+"|{nombre}+|"\-"|"\-"|"\+"]+
link                ["\["{nombre}"\]\("{nombre}"\)"]+
code                ["``"{nombre}"``"]+
%%
{ws}                              {}
{hashtag}                         {yylval.string = strdup(yytext); return H;}
{nombre}                          {yylval.string = strdup(yytext); return NOMBRE;}
{cursiva}                           {yylval.string = strdup(yytext); return CURSIVA;}
("\*\*"{nombre}"\*\*"|"\_\_"{nombre}"\_\_")+         {yylval.string = strdup(yytext); return ENFASIS;}
{scratch}                           {yylval.string = strdup(yytext); return SCRATCH;}
{listaOrdenada}                     {yylval.string = strdup(yytext); return LISTAORD;}
{listaDesordenada}                  {yylval.string = strdup(yytext); return LISTADESORD;}
{link}                              {yylval.string = strdup(yytext); return LINK;}
{code}                              {yylval.string = strdup(yytext); return CODE;}
%%
