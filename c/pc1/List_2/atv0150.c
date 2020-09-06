/*
* Faça um programa que solicita ao usuário dois números inteiros diferentes “n1” e “n2” e chama uma
* função que calcula e retorna a soma de todos os números ímpares dentro do intervalo definidor por
* [n1,...,n2]. Antes de chamar a função, o programa principal deve testar se n1 é menor do que n2.
*/

#include <stdio.h>

int somaImparesIntervalo(int n1, int n2){
	int soma=0;
	for(++n1; n1<n2; n1++){ // O loop iniciará com o numero maior que n1 e irá até um numero menor que n2.
		if(n1%2!=0){ // Se o resto da divisão de n1 por dois for diferente de 0 o numero é impar.
			soma = soma + n1;
		}
	}
	return soma;
}

void main(){
	int num1, num2, soma;
	printf("Insira dois numeros: ");
	scanf("%d %d", &num1, &num2);
	if(num1<num2){ // Comparação dos valores de n1 e n2.
		soma = (somaImparesIntervalo(num1, num2));
		printf("A soma dos elementos impares no intervalo de [%d...%d] eh %d\n", num1, num2, soma);
	}
	else{ // Caso o n2 sejá menor que n1 só presisaremos trocar o sequencia da entrada de somaImparesIntervalo.
		soma = (somaImparesIntervalo(num2, num1));
		printf("A soma dos elementos impares no intervalo de [%d...%d] eh %d\n", num2, num1, soma);
	}
}