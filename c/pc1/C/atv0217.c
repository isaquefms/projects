#include <stdio.h>

main(){
    int a, b, c;
    printf("Insira tres valores: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a == b && b == c){
        printf("Todos os valores sao iguais!!");
    }
    else if(a == b || a == c || b == c){
        printf("Dois valores sao iguais!!");
    }
    else{
        printf("Nenhum Valor e igual!!");
    }
}
