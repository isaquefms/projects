/*
Dado o valor de E, calcular S=1 + 1/2 + 1/4 +1/6 + ... até que um termo da série seja menor do que
E. O valor de E deverá ser digitado pelo usuário.
*/

#include <stdio.h>

main(){
    float e, soma=1, cont=2;
    printf("Insira um numero : ");
    scanf("%f", &e);
    while((1/cont) >= e){
        soma = soma + (1/cont);
        cont+=2;
    }
    printf("A soma dos valores ate %f eh igual: %f", e, soma);
}
