#include <stdio.h>

main(){
    int numero;
    int contador = 0;
    int maior = 0;
    do{
        contador = contador + 1;
        printf("Digite o %do numero: ", contador);
        scanf("%d", &numero);
        if(numero > maior){
            maior = numero;
        }
    }while(contador<10);
    printf("O Maior valor dentre os digitados eh: %d", maior);
}
