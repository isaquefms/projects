#include <stdio.h>

main(){
    char a, b, c, d;
    printf("Insira um valor inteiro com 4 digitos: ");
    scanf("%c%c%c%c", &a, &b, &c, &d);
    printf("Invertendo... %c%c%c%c", d, c, b, a);
}
