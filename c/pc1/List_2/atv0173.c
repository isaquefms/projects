/*
* Implelmente a função float max(float v [ ], int n) que retorna o maior número entre os n
* primeiros elementos de um vetor.
*/

// Esse é o exercicio numero 69 de vetores.

#include <stdio.h> // Biblioteca padrão para entrada e saida.
#include <stdlib.h> // Necessária para usarmos a rand() e srand().
#include <time.h> // Necessária para utilizarmos a time().

#define NUM 15

// Função para preencher o vetor.
void preencherVetor(float vetor[]){
	int cont;
	for(cont=0; cont<NUM; cont++){
		vetor[cont]=1+rand()%100; // Numeros aleatorios de 1 até 100.
	}
}

// Função para exibir o vetor.
void exibirVetor(float vetor[]){
	int cont;
	for(cont=0; cont<NUM; cont++){
		printf("O Valor do vetor[%d] = %.2f\n", cont, vetor[cont]);
	}
}

float max(float vetor[], int n){
	int cont=0; // Variáveis para contarmos os indices e guardarmos o maior valor.
	float maior;
	maior = vetor[cont];
	for(cont; cont<n; cont++){ // cont, diferente do que fizemos antes, irá até n-1.
		if(vetor[cont]>maior){ // Se o valor atual for maior trocamos guardamos o valor na variavel maior.
			maior=vetor[cont];
		}
	}
	return maior;
}

void main(){
	srand(time(0));
	int n;
	float vetor[NUM];
	printf("Insira o valor de n: ");
	scanf("%d", &n);
	preencherVetor(vetor);
	exibirVetor(vetor);
	printf("O maior elemento dentre os %d peimeiros elementos eh %.2f\n", n, max(vetor, n));
}