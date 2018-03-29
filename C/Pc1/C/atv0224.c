// Ordenação em ordem crescente a<b<c
#include <stdio.h>

main(){
    int a, b, c, tmp1, tmp2;
    printf("Insira tres valores aleatorios: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a > b && a > c){
        tmp1 = c;
        c = a;
        if(b > tmp1){
            a = tmp1;
        }
    }
    else if(b > a && b > c){
        tmp1 = c;
        c = b;
        if(a < tmp1){
            b = tmp1;
        }
    }
    else if(c > a && c > b){
        if(b < a){
            tmp1 = a;
            a = b;
            b = tmp1;
        }
    }
    printf("O ordem crescente dos numeros eh a=%d b=%d c=%d", a, b, c);
}
