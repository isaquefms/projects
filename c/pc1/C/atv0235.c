#include <stdio.h>

main(){
    float soma = 0, num = 1, den = 1;
    while(den<=50){
        soma = soma + (num/den);
        num+=2;
        den++;
    }
    printf("A soma eh: %f", soma);
}
