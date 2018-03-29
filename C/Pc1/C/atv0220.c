#include <stdio.h>

main(){
    int num;
    printf("Entre com um valor inteiro: ");
    scanf("%d", &num);
    if(num < 0){
        printf("Numero negativo !!");
    }
    else if(num > 0){
        printf("Numero positivo !!");
    }
    else{
        printf("Numero igual a zero !!");
    }
}
