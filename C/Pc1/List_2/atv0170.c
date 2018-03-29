/*
* colocar em ordem crescente os elementos do vetor. No programa principal, exiba o vetor
* antes e depois de ordená­lo.
*/

// Esse é o exercicio numero 66 de vetores.

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

// Função para ordenar o vetor.
// O código está buscando analisando qual é o menor elemento na posição 1 depois ele compara a posição 2 com todos os indices. Se achar algum valor
// menor ele realiza a troca e continua analisando a partir do ponto de parada agora com o novo valor.
void ordenarVetorCrescente(int vetor[]){
	int cont, contInt, aux; // Variáveis para o for exterior, interior e para trocar o valor;
	for(cont=0; cont<NUM; cont++){
		for(contInt=0; contInt<NUM; contInt++){
			if(vetor[cont]<vetor[contInt]){ // Caso o elemento que eu estou comparando sejá maior trocamos os valores.
				aux=vetor[contInt];
				vetor[contInt]=vetor[cont];
				vetor[cont]=aux;
			}
		}
	}
}

void main(){
	srand(time(0));
	int vetor[NUM];
	preencheVetor(vetor); // Preenche.
	exibeVetor(vetor); // Exibe desordenado.
	ordenarVetorCrescente(vetor); // Ordena.
	printf("\nExibição Ordenada\n"); // Um espaço.
	exibeVetor(vetor); // Exibe ordenado.
}