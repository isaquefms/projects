#include <stdio.h>

main(){
    int num, numOri, fat = 1;
    printf("Deseja o fatorial de qual numero: ");
    scanf("%d", &num);
    numOri = num;
    if(num < 0){
        printf("Valor Invalido %d", num);
    }
    else if(num == 0 || num == 1){
        printf("Fatorial de %d e 1", num);
    }
    else{
        while(num >= 1){
            fat = fat * num;
            num--;
        }
        printf("O fatorial de %d e: %d",numOri ,fat);
    }
}
