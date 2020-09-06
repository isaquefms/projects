/*
* Implemente um programa para calculcar a soma dos N primeiros números primos, sendo N definido
* pelo usuário na função principal “main()”. O programa deverá ter as funções “Soma_Primos” e
* “Primo”, sendo que a primeira será responsável pela soma dos números que forem primos e a
* segunda será responsável por verificar se o número em questão é primo ou não
*/

#include <stdio.h>

// Função para verificar se o numero é primo
int numPrimo(int num){
	int cont=2, controle=0;
	if(num == 2){ // Dois é um numero primo.
		return 1;
	}
	else if(num%2==0){ // Se o numero for par maior que 2 não é primo.
		return 0;
	}
	else{
		while(cont<num){ // Enquanto cont for menor que num o loop irá rodar.
			if(num%cont==0){
				controle=1; // Caso o numero possua algum divisor alem de 1 e ele mesmo;
				break;
			}
			cont++; // Incrementar cont a cada loop.
		}
		if(controle==1){ // Se o numero possuir algum divisor.
			return 0; // Não é primo.
		}
		else{
			return 1; // Caso não possua é primo.
		}	
	}
}

// Função para somar os n primeiros numeros primos.
int somaPrimos(int n){
	int cont=2, soma=0, controle=1; // Variavel que será usada para rodar o loop até o numero n.
	while(controle<=n){ // controle irá contabilizar cada numero primo achado.
		if(numPrimo(cont)==1){
			soma=soma+cont; // Caso o numero sejá primo a soma irá receber o valor.
			controle++;
			cont++;
		}
		else{ // Para que a cont não seja adicionada duas vezes.
			cont++; // Independete se o numero for primo ou não cont irá rodar.
		}
	}
	return soma;
}

void main(){
	int n;
	printf("Insira o valor de n: ");
	scanf("%d", &n);
	printf("A soma dos %d primeiros termos primos eh %d\n", n, somaPrimos(n));
}