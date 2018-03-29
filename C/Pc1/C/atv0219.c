#include <stdio.h>

main(){
    int num;
    printf("Insira um valor inteiro: ");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("Seu Numero eh Par !!");
    }
    else{
        printf("Seu Numero eh Impar !!");
    }
}
