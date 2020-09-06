#include <stdio.h>

main(){
    int numero;
    int contador = 0;
    int maior = 0;
    int menor;
    do{
        contador = contador + 1;
        printf("Digite o %do numero: ", contador);
        scanf("%d", &numero);
        if(contador == 1){
            menor = numero;
        }
        if(numero > maior){
            maior = numero;
        }
        if(numero < menor){
            menor = numero;
        }
    }while(contador<10);
    printf("O Maior valor dentre os digitados eh: %d\n", maior);
    printf("O Menor valor dentre os digitados eh: %d\n", menor);
}
