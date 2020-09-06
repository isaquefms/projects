#include <stdio.h>

main(){
    int soma = 0, cont = 3;
    while(cont<1000){
        if(cont % 3 == 0 || cont % 5 == 0){
            soma = soma + cont;
        }
        cont++;
    }
    printf("A soma dos numeros multiplos de 3 ou 5 menores que 1000 eh %d\n", soma);
}
