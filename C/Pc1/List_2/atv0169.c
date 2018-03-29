/*
* a maior diferença em valor absoluto entre elementos consecutivos do vetor
*/

// Esse é o exercicio numero 65 de vetores.

#include <stdio.h>
#include <stdlib.h> // Será necessário incluir este arquivo de cabeçalho para utilizarmos o srand() e rand();
#include <time.h> // Será necessário incluir este arquivo de cabeçalho para utilizarmos o time(0).
#include <math.h> // Usar o comando gcc arq.c -lm

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

// Função para buscar a maior diferença entre dois elementos.
int maiorDiferencaEntreElementos(int vetor[]){
	int cont=1, contAnt=0, maiorDiferenca; // Usaremos duas variáveis para armazenar analizar.
	maiorDiferenca=abs(vetor[contAnt]-vetor[cont]); // Primeiro valor para analize.
	for(cont; cont<NUM; cont++, contAnt++){
		if(abs(vetor[contAnt]-vetor[cont])>maiorDiferenca){ // Caso o valor atual sejá maior que o anterior, trocaremos.
			maiorDiferenca=abs(vetor[contAnt]-vetor[cont]);
		}
	}
	return maiorDiferenca;
}

void main(){
	srand(time(0));
	int vetor[NUM];
	preencheVetor(vetor);
	exibeVetor(vetor);
	printf("A maior diferenca entre elementos eh %d\n", maiorDiferencaEntreElementos(vetor));
}
