#include <stdio.h>
#include <string.h>

void main(){
    char s[200], outra[200]; // 200 posições - seguro morreu de velho.

    printf("Qual a sua string: ");
    gets(s);

    // Colocar na string outra uma copia da string s
    strcpy(outra,s);
    printf("String Original: %s\nCopia: %s\n",s, outra);
}

