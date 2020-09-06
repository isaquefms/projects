#include <stdio.h>

main(){
    float pi = 4, den = 1;
    while((4/den) >= 0.0001){
        den+=2;
        pi = pi - (4/den);
        if((4/den) < 0.0001){
            break;
        }
        den+=2;
        pi = pi + (4/den);
    }
    printf("O valor de PI eh: %f", pi);
}
