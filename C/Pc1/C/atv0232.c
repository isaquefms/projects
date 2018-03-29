#include <stdio.h>

main(){
    int num, cont=2, controle=0;
    printf("Insira um numeo inteiro: ");
    scanf("%d", &num);

    if(num == 2){
        printf("O numero %d eh primo!!", num);
    }
    else if(num % 2 == 0){
        printf("O numero %d nao eh primo!!", num);
    }
    else{
        while(cont < num/2){
            if(num % cont == 0){
                printf("O numero %d nao eh primo!!", num);
                controle = 1;
                break;
            }
            cont++;
        }
    }
    if(num != 2 && (controle ==  0 || num == 1)){
        printf("O numero %d eh primo!!", num);
    }
}
