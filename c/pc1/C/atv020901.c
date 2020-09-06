#include <stdio.h>
#include <math.h>

main(){
    float a, a2, b, c;
    printf("Insira o valor dos catetos: ");
    scanf("%f%f", &b, &c);
    a2 = (b*b) + (c*c);
    a = sqrt(a2);
    printf("O valor da hipotenusa: %f", a);
}
