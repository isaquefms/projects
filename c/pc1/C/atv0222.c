#include <stdio.h>

main(){
    int ano;
    printf("Insira o ano: ");
    scanf("%d", &ano);
    if(ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)){
        printf("O ano eh bissexto !!");
    }
    else{
        printf("Nao eh ano bissexto !!");
    }
}
