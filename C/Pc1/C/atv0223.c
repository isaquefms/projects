#include <stdio.h>

main(){
    float num1, num2;
    char operador;
    printf("Insira sua operacao: ");
    scanf("%f%c%f", &num1, &operador, &num2);
    if(operador == '+'){
        printf("O Resultado da adicao eh: %.2f", num1+num2);
    }
    else if(operador == '-'){
        printf("O Resultado da subtracao eh: %.2f", num1-num2);
    }
    else if(operador == '*' || operador == 'x'){
        printf("O Resultado da multiplicacao eh: %.2f", num1*num2);
    }
    else if(operador == '/'){
        printf("O Resultado da divisao eh: %.2f", num1/num2);
    }
    else{
        printf("Operador Invalido !!");
    }
}
