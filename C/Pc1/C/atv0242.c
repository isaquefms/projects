#include <stdio.h>

main(){
    int dado1, dado2, dado3, valor, cont = 0;
    printf("Insira um numero de 3 a 18: ");
    scanf("%d", &valor);
    for(dado1=1; dado1<=6; dado1++){
        for(dado2=1; dado2<=6; dado2++){
            for(dado3=1; dado3<=6; dado3++){
                if((dado1+dado2+dado3) == valor){
                    printf("%d,%d,%d eh igual a %d\n", dado1, dado2, dado3, valor);
                    cont++;
                }
            }
        }
    }
    if(cont == 1){
        printf("Existe apenas uma combinacao para os dados!!\n");
    }else{
        printf("Existem %d combinacoes diferentes para os dados!!\n", cont);
    }
}
