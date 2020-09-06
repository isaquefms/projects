/*
*O número 2520 é divisível (resto zero) por todos números inteiros de 1 a 10. Faça um programa, em
*linguagem C, que encontre o menor número inteiro positivo divisível por todos os inteiros de 1 a 20.
*Resposta: 232792560
*/
#include <stdio.h>

main(){
    int i, num = 1, cont = 1, controle = 0;
    while(controle == 0){
        num ++;
        for(i=1; i<=20; i++){
            if(num % i == 0){
                printf("%d\n", num);
                if(i == 20){
                    controle = 1;
                }
                printf("%d\t", controle);
            }
            else{
                break;
            }
        }
    }
    printf("O Numero que e divisivel por 1 a 20 eh : %d", num);
}
