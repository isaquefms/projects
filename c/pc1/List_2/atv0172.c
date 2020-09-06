/*
* eliminar números repetidos do vetor. Os números repetidos devem ser substituídos por
* novos números. Este procedimento deverá exibir na tela todos os elementos do vetor, antes e depois
* de eliminar os números repetidos.
*/

// Esse é o exercicio numero 68 de vetores.

#include <stdio.h> // Biblioteca padrão
#include <stdlib.h> // Biblioteca necessária para utilizar o rand() e srand().
#include <time.h> // Biblioteca necessária para utilizar o time().

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

// Função para verificar se existe elementos repetidos. Se existir um elemento repetido retornaremos o indice.
int existeElementosRepetidos(int vetor[]){
	int cont, contInt; // Precisaremos de dois laços for para comparar cada elemento com todos do vetor.
	for(cont=0; cont<NUM; cont++){ // Loop externo que comparará cada elemento com todos os outros.
		for(contInt=0; contInt<NUM; contInt++){ // A condicional deste for retornará verdadeiro se o valor for iguak e os indices diferentes.
			if(vetor[cont]==vetor[contInt] && cont!=contInt){
				return contInt; // Se existir elementos repetidos
			}
		}
	}
	return -1; // Caso não possua elementos diferentes;
}

// Função para eleminar elementos repetidos.
void eleminaElementosRepetidos(int vetor[]){
	int indice; // Variavel que armazenará o indice repetido.
	while(existeElementosRepetidos(vetor)!=-1){ // Enquanto houver elementos repetidos.
		indice = existeElementosRepetidos(vetor);
		vetor[indice]=1+rand()%100;
	}
}

void main(){
	srand(time(0));
	int vetor[NUM];
	preencheVetor(vetor);
	exibeVetor(vetor);
	eleminaElementosRepetidos(vetor);
	printf("\nNovo Vetor\n\n");
	exibeVetor(vetor);
}