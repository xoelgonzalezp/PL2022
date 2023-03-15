%{
unsigned charcounter = 0, wordcounter = 0,capitalwords = 0, minuswords = 0, digitwords= 0, phrasecounter=0;
%}


word [^ \n\t.]+

phrase [.]


%%

[A-Z]+      {wordcounter++,capitalwords++,  charcounter=charcounter+yyleng;     }

[a-z]+       {wordcounter++,minuswords++,  charcounter=charcounter+yyleng;     }

[0-9]+       {wordcounter++,digitwords++,  charcounter=charcounter+yyleng;     }

{phrase} {phrasecounter++,charcounter=charcounter+yyleng;}

{word} {wordcounter++, charcounter=charcounter+yyleng;}




%%



int main(){

yylex();


printf("Chars=%d\nWords=%d\nCapitalwords = %d\nMinuswords=%d\nDigitwords=%d\nPhrases=%d\n",charcounter,wordcounter,capitalwords,minuswords,digitwords,phrasecounter);

return 0;


}
