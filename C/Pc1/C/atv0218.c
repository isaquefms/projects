#include <stdio.h>

main(){
    int num;
    printf("Insira um valor: ");
    scanf("%d", &num);
    if(num == 1){
        printf("O numero eh igual a 1 !!");
    }
    else if(num == 5){
        printf("O numero eh igual a 5 !!");
    }
    else if(num == 10){
        printf("O numero eh igual a 10 !!");
    }
    else{
        printf("Valor Invalido !!");
    }
}
