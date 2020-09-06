#include <stdio.h>

main(){
    float soma = 0;
    int cont = 1;
    while(cont<=10){
        if(cont % 2 == 0){
            soma = soma - ((float)cont/(cont*cont));
        }
        else{
            soma = soma + ((float)cont/(cont*cont));
        }
        cont++;
    }
    printf("A soma eh: %f ", soma);
}
