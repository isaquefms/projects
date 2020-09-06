#include <stdio.h>

main(){
    int mult = 0, num, cont = 1, quant;
    char op;
    printf("Insira uma multiplicacao: ");
    scanf("%d%c%d", &num, &op, &quant);
    while(cont <= quant){
        mult = mult + num;
        cont++;
    }
    printf("Resulta da multiplicacao: %d", mult);
}
