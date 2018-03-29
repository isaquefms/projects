/*
* o maior valor do vetor;
*/

// Esse é o exercicio numero 64 de vetores.

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

// Função para buscar o maior elemento do vetor.
int maiorValorVetor(int vetor[]){
	int cont=0, maior;
	maior=vetor[cont]; // maior será iniciada com o primeiro valor do vetor para comparar-mos.
	for(cont; cont<NUM; cont++){
		if(maior<vetor[cont]){
			maior = vetor[cont];
		}
	}
	return maior;
}

void main(){
	srand(time(0));
	int vetor[NUM];
	preencheVetor(vetor);
	exibeVetor(vetor);
	printf("O maior valor do vetor eh: %d\n", maiorValorVetor(vetor));
}