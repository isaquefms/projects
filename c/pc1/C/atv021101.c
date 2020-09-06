#include <stdio.h>

main(){
    float a, b, c, d, media;
    printf("Insira o primeiro valor: ");
    scanf("%f", &a);
    printf("Insira o segundo valor: ");
    scanf("%f", &b);
    printf("Insira o terceiro valor: ");
    scanf("%f", &c);
    printf("Insira o quarto valor: ");
    scanf("%f", &d);
    media = (a+b+c+d) / 4;
    printf("A media destes valores eh: %.2f", media);
}
