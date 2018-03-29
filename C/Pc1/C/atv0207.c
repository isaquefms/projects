#include <stdio.h>

main(){
    float salMin, aguaMes, valorConta;
    printf("Insira o valor do salario minimo: ");
    scanf("%f", &salMin);
    printf("Insira o Consumo de Agua em litros este mes: ");
    scanf("%f", &aguaMes);
    valorConta = ((aguaMes / 1000) * (salMin * 0.02));
    printf("O Valor da Sua conta eh: %.2f\n", valorConta);
    printf("Valor com 15%% de desconto: %.2f", valorConta - (valorConta * 0.15));
}
