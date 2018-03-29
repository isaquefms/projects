#include <stdio.h>

main(){
    int a, b, tmp;
    printf("Insira um valor para A: ");
    scanf("%d", &a);
    printf("Insira um valor para B: ");
    scanf("%d", &b);
    tmp = a;
    a = b;
    b = tmp;
    printf("Invertendo... A: %d  B: %d", a, b);
}
