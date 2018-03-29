#include <stdio.h>

main(){
    int a, b;
    printf("Insira um numero inteiro: ");
    scanf("%d", &a);
    printf("Insira outro numero inteiro: ");
    scanf("%d", &b);
    if(a > b){
        printf("O maior valor e: %d\n", a);
        printf("o menor valor e: %d\n", b);
    }
    else if(a < b){
        printf("O maior valor e: %d\n", b);
        printf("o menor valor e: %d\n", a);
    }
    else{
        printf("Os valores são iguais. Insira Numeros Diferentes !!");
    }
}
