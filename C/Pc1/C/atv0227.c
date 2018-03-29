#include <stdio.h>

main(){
    int cont = 1, quant, soma = 0, num;
    printf("Quantos numeros deseja informar: ");
    scanf("%d", &quant);
    while(cont <= quant){
        printf("Insira um numero inteiro: ");
        scanf("%d", &num);
        soma = soma + num;
        cont++;
    }
    printf("A soma dos numeros: %d\n", soma);
    printf("A media dos numeros: %d", soma/quant);
}
