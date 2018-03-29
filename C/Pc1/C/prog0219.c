#include <stdio.h>

main(){
    float x;
    printf("Introduza um No real : ");
    scanf("%f", &x);
    printf("Parte inteira     : %d\n", (int) x);
    printf("Parte Fracionada  : %f\n", x - ((int) x));
}
