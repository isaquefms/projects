/*
* Escreva um programa que armazena 15 números inteiros aleatórios em um vetor. O vetor
* deverá ser uma variável local dentro da função “main”.
*/

// Está atividade é a numero 60 de vetores.

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

void main(){
	int numeros[NUM], cont=0;
	srand(time(0)); // Gerar numeros aleatorios diferentes a cada execução.
	preencheVetor(numeros);
	exibeVetor(numeros);
}