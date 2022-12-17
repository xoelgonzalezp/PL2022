%{

#include <stdlib.h>
#include "proyecto.tab.h"
%}

ws [ \t]+
newline [\n]+
textword [ a-zA-Z:/.\-,'¿?!¡"]+
digit    [0-9]+
title    [ 0-9a-zA-Z:/.\-,'¿?!¡"]+
           

%%

{ws}                        {}
{newline}                   {}
("# "{title})+   { yylval.string = strdup(yytext); return H1 ;}
("## "{title})+    {  yylval.string = strdup(yytext); return H2 ;}
("### "{title})+     {  yylval.string = strdup(yytext); return H3 ;}
("#### "{title})+   {  yylval.string = strdup(yytext); return H4; }
("##### "{title})+   {  yylval.string = strdup(yytext); return H5 ;}
("###### "{title})+ {  yylval.string = strdup(yytext); return H6;}
({digit}". "{textword})+ {yylval.string=strdup(yytext); return LISTAORD;}
("\-"|"\+"{textword})+ {yylval.string=strdup(yytext); return LISTADESORD;}
{textword}           { yylval.string = strdup(yytext); return TEXTWORD;}
("*"{textword}"*"|"_"{textword}"_")+            { yylval.string = strdup(yytext); return CURSIVA;}
("**_"{textword}"_**"|"__*"{textword}"*__")+            { yylval.string = strdup(yytext); return COMB;}
("~~_"{textword}"_~~")+            { yylval.string = strdup(yytext); return COMB2;}
("\`\`"{textword}"\`\`")+     { yylval.string = strdup(yytext); return CODE;}
("**"{textword}"**"|"__"{textword}"__")+         {yylval.string = strdup(yytext); return EMPHASIS;}
("~~"{textword}"~~")+                    {yylval.string = strdup(yytext); return SCRATCH;}

("\["{textword}"\]")+  {yylval.string=strdup(yytext); return LINKNAME;}

("\("{textword}"\)")+                      {yylval.string=strdup(yytext); return LINK;}

%%																								