/*
* a quantidade de números com valor maior do que a média dos números do vetor
*/

// Esse é o exercicio 63 de vetores.

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

// Função para calcular o valor da media.
int valorMediaVetor(int vetor[]){
	int cont, soma=0;
	for(cont=0; cont<NUM; cont++){
		soma=soma+vetor[cont];
	}
	return soma/15;
}

// Função para calcular o numero de elementos acima da media.
int numerosAcimaMedia(int vetor[]){
	int cont, media, quant=0;
	media=valorMediaVetor(vetor); // Para otimizar nosso programa armazenares a media em uma variável.
	for(cont=0; cont<NUM; cont++){
		if(vetor[cont]>media){ // Caso o elemento sejá maior que a media armazenaremos seu valor na variavel.
			quant++;
		}
	}
	return quant;
}

void main(){
	srand(time(0));
	int vetor[NUM];
	preencheVetor(vetor);
	exibeVetor(vetor);
	printf("A media eh %d\n", valorMediaVetor(vetor));
	printf("Existem %d numeros acima da media no seu vetor !!\n", numerosAcimaMedia(vetor));
}