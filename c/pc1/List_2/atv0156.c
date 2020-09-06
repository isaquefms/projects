/*
* Implemente uma função que recebe um número inteiro como parâmetro e retorna o fatorial desse
* número. Se o número for menor do que zero, então a função deve retornar o valor -1. Implemente o
* programa principal para testar a função. Se o valor de retorno da função for “-1”, o programa
* principal deve informar que o número digitado está incorreto.
*/

#include <stdio.h>

int fatorial(int num){
	int fat=1; // fat irá iniciar com o fator neutro da multiplicação(1).
	if(num<0){ // Se o numero for menor que zero será retornado -1;
		return -1;
	}
	else if(num==0 || num==1){ // Caso o numero sejá igual a 0 ou 1 o fatorial é igual a 1.
		return 1;
	}
	else{ // Demais casos, numeros positivos maiores que 1.
		for(num; num>=1; num--){ // Iniciando pelo valor de num, até que sejá igual a 1.
			fat=fat*num;
		}
		return fat;
	}
}

void main(){
	int num, fat;
	printf("Insira um numero: ");
	scanf("%d", &num);
	fat=fatorial(num);
	if(fat==-1){
		printf("Valor Incorreto!!\n");
	}
	else{
		printf("O fatorial de %d eh: %d\n", num, fat);
	}
}