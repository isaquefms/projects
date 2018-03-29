/*
* Implemente a função int compara (int vetor1 [ ], int vetor2 [ ]) que retorna 1 caso os
* vetores sejam iguais e 0 caso contrário. A quantidade de elementos em cada vetor pode ser
* diferente. Se julgar necessário, passe outros parâmetros para a função.
*/

// Esse é o exercício numero 70 de vetores.

#include <stdio.h>

// Função que compara vetores e define se são iguais.
int vetoresIguais(int vetor1[], int quant1, int vetor2[], int quant2){
	int cont;
	if(quant1!=quant2){
		return 0;
	}
	for(cont=0; cont<quant1; cont++){
		if(vetor1[cont]!=vetor2[cont]){ // Caso haja algum valor diferente retornamos 0.
			return 0;
		}
	}
	return 1; // Caso os vetores passem pelo teste acima.
}

void main(){
	// Caso os vetores estejam desordenados podemos utilizar outras funções para definir se eles são iguais.
	// Podemos fazer uma cópia dos vetores originais, ordenalos e depois usar a função acima.
}

