/*Cada novo termo da sequência de Fibonacci é gerado pela adição dos 2 termos anteriores. Ao iniciar
*a sequência com 1 e 2, os dez primeiros termos são: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ... Faça um
*programa que encontre a soma dos números pares da sequência de Fibonacci cujo termo não exceda
*4 milhões.
*Resposta: 4613732
*/
#include <stdio.h>

main(){
    int soma = 0, num1 = 1, num2 = 2;
    while(num1 <= 4000000 || num2 <= 4000000){
        if(num1 % 2 == 0){
            soma = soma + num1;
        }
        if(num2 % 2 == 0){
            soma = soma + num2;
        }
        num1 = num1 + num2;
        num2 = num2 + num1;
    }
    printf("A soma da sequencia ate 4000000 eh %d !!", soma);
}
