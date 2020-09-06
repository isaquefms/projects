/*
* a soma dos números ímpares do vetor;
*/

// Esse exercício é o 62 de vetores.

#include <stdio.h>
#include <stdlib.h> // Será necessário incluir este arquivo de cabeçalho para utilizarmos o srand() e rand();
#include <time.h> // Será necessário incluir este arquivo de cabeçalho para utilizarmos o time(0).

#define NUM 15

// Função para preencher o vetor com valores aleatorios.
void preencheVetor(int vetor[]){
	int cont;
	for(cont=0; cont<NUM; cont++){
		vetor[cont]=1+rand()%100;
	}
}

// Função para exibir os valores armazenados no vetor.
void exibeVetor(int vetor[]){
	int cont;
	for(cont=0; cont<NUM; cont++){
		printf("Seu vetor na posicao [%d] = %d\n", cont, vetor[cont]);
	}
}

// Função que retornará o numero de elementos impares no vetor.
int numeroImparesVetor(int vetor[]){
	int cont, impares=0;
	for(cont=0; cont<NUM; cont++){
		if(vetor[cont]%2!=0){
			impares++;
		}
	}
	return impares;
}

void main(){
	srand(time(0));
	int vetor[NUM];
	preencheVetor(vetor);
	exibeVetor(vetor);
	printf("Existem %d numeros impares no seu vetor !!\n", numeroImparesVetor(vetor));
}