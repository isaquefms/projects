/*
* a quantidade de números pares do vetor;
*/

// Esse exercicio é o 61 de vetores.

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

// Função que contará o numero de elementos pares no vetor.
int numeroParesVetor(int vetor[]){
	int cont, pares=0; // Contadora para rodar o vetor e pares para guardar o numero de elementos pares.
	for(cont=0; cont<NUM; cont++){
		if(vetor[cont]%2==0){
			pares++;
		}
	}
	return pares;
}

void main(){
	srand(time(0));
	int vetor[NUM];
	preencheVetor(vetor);
	exibeVetor(vetor);
	printf("Existem %d numeros pares no seu vetor !!\n", numeroParesVetor(vetor));
}