/*
* Implemente uma função que recebe um número “n” como parâmetro e retorna o menor
* número inteiro positivo múltiplo de “n” que contém apenas dígitos menores ou iguais a 2.
* Exemplos de retorno da função
* f(n): f(2)=2, f(3)=12, f(7)=21, f(42)=210,
* f(89)=1121222. Implemente o programa principal para testar sua função.
*/

#include <stdio.h>

// Essa função executará até encontrar o valor.
int menorMultiplo(int n){
	int cont=1, multiplo, resto, controle=0;
	while(1){ // Laço eterno que irá calcular cada multiplo.
		multiplo = cont*n; // Calculo do numero multiplo.
		while(multiplo!=0){ // Laço que testará se o multiplo é realmente composto por digitos menores que 2.
			resto = multiplo%10; // Proximo valor de analise.
			if(resto>2){ // Caso o ultimo numero em comparação seja menor que 2 paramos o laço e vamos pro próximo multiplo.
				controle=1; // Se acharmos a diferença a variavel controle receberá 1.
				break;
			}
			else{ // Caso não seja analisaremos o próximo caso.
				multiplo = multiplo/10; // Multiplo dentro dese laço receberá outro valor.
				controle=0; // Enquanto controle for igual a 0 o numero testado estará correto.
			}
		}
		if(controle==0){ // Se o multiplo passou no teste acima então é o valor que precisamos.
			return cont*n; // Retornaremos o valor.
		}
		cont++; // Buscaremos pelo próximo multiplo.
	}
}


void main(){
	int n;
	printf("Insira o numero: ");
	scanf("%d", &n);
	printf("f(%d)= %d\n", n, menorMultiplo(n));
}