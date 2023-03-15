%{

#include <stdlib.h>
#include "proyecto.tab.h"
%}

ig       [ \t]+
ws       [ \n]+
textword [ ÁÉÍÓÚáéíóú0-9a-zA-Z:=/.\-,;'#¿?"]+
digit    [0-9]+[0.9]*
title    [ 0-9a-zA-Z:/.\-,'¿?!¡"]+
br       [\n\n]+
%%
{ig}                                                {}
{ws}                                                { yylval.string = strdup(yytext); return BR; }
("# "{title})+                                      { yylval.string = strdup(yytext); return H1; }
("## "{title})+                                     { yylval.string = strdup(yytext); return H2; }
("### "{title})+                                    { yylval.string = strdup(yytext); return H3; }
("#### "{title})+                                   { yylval.string = strdup(yytext); return H4; }
("##### "{title})+                                  { yylval.string = strdup(yytext); return H5 ;}
("###### "{title})+                                 { yylval.string = strdup(yytext); return H6;}
({digit}". "{textword})+                            { yylval.string=strdup(yytext); return ORDLIST;}
("\- "{textword}|"\+ "{textword})+                  { yylval.string=strdup(yytext); return DESORDLIST;}
{textword}                                          { yylval.string = strdup(yytext); return TEXTWORD;}
("<span style=\""{textword}": "{textword}";"{textword}": "{textword}";"\"">"{textword}"</span>")+   { yylval.string=strdup(yytext); return SPAN2;}
("<span style=\""{textword}": "{textword}";"\"">"{textword}"</span>")+   { yylval.string=strdup(yytext); return SPAN;}
("*"{textword}"*"|"_"{textword}"_")+                { yylval.string = strdup(yytext); return ITALIC;}
("**_"{textword}"_**"|"__*"{textword}"*__")+        { yylval.string = strdup(yytext); return COMB;}
("~~_"{textword}"_~~"|"~~__"{textword}"__~~")+      { yylval.string = strdup(yytext); return COMB2;}
("``"{textword}"``"|"`"{textword}"`")+              { yylval.string = strdup(yytext); return CODE;}
("**"{textword}"**"|"__"{textword}"__")+            { yylval.string = strdup(yytext); return EMPHASIS;}
("~~"{textword}"~~")+                               { yylval.string = strdup(yytext); return SCRATCH;}
("["{textword}"]")+                                 { yylval.string=strdup(yytext); return LINKNAME;}
("("{textword}")")+                                 { yylval.string=strdup(yytext); return LINK;}
("!["{textword}"]")+                                { yylval.string=strdup(yytext); return IMAGE;}
%%																								
