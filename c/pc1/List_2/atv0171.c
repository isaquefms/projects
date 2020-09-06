/*
* exibir o 3o. maior elemento do vetor. Por exemplo: v={2,4,4,1,3,6,5,6} → 3o. Maior= 4.
*/

// Esse é o exercicio numero 67 de vetores.

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

// Função para calcular o maior elemento do vetor.
int maiorElementoVetor(int vetor[]){
	int cont=0, maior;
	maior=vetor[cont];
	for(cont; cont<NUM; cont++){
		if(vetor[cont]>maior){
			maior=vetor[cont];
		}
	}
	return maior;
}

// Função para calcular o segundo maior elemeno do vetor.
int segundoMaiorElementoVetor(int vetor[]){
	int cont=0, segundoMaior, primeiroMaior; // Variáveis para guardar o maior e o segundo maior.
	primeiroMaior = maiorElementoVetor(vetor);
	if(primeiroMaior==vetor[cont]){ // Caso o maior elemento estejá na primeira posição pegaremos a próxima.
		segundoMaior=vetor[cont+1];
	}
	else{ // Caso contrário pegaremos a primeira mesmo.
		segundoMaior=vetor[cont];
	}
	for(cont; cont<NUM; cont++){
		if(vetor[cont]>segundoMaior && vetor[cont]<primeiroMaior){ // O elemento que buscamos será o segudo maior elemento portanto menor que o primeiro maior valor.
			segundoMaior=vetor[cont];
		}
	}
	return segundoMaior;
}

// Função para calcular o terceiro maior elemento do vetor.
int terceiroMaiorElementoVetor(int vetor[]){
	int cont=0, terceiroMaior, segundoMaior, primeiroMaior;
	primeiroMaior = maiorElementoVetor(vetor);
	segundoMaior = segundoMaiorElementoVetor(vetor);
	terceiroMaior=vetor[cont];
	while(terceiroMaior==primeiroMaior || terceiroMaior==segundoMaior){ // While para garantirmos que não pegaremos o primeiro e segundo maior valor.
		cont++;
		terceiroMaior=vetor[cont];
	}
	// Depois de garantido que o valor é diferente vamos comparar.
	cont=0; // Reiniciamos cont.
	for(cont; cont<NUM; cont++){
		if(vetor[cont]>terceiroMaior && vetor[cont]<segundoMaior){ // O valor que queremos é maior que todos os elementos do vetor exceto o maior e o segundo maior.
			terceiroMaior=vetor[cont];
		}
	}
	return terceiroMaior;
}

void main(){
	srand(time(0));
	int vetor[NUM];
	preencheVetor(vetor);
	exibeVetor(vetor);
	printf("O maior elemento do vetor eh %d\n", maiorElementoVetor(vetor));
	printf("O segundo maior elemento do vetor eh %d\n", segundoMaiorElementoVetor(vetor));
	printf("O terceito maior elemento do vetor eh %d\n", terceiroMaiorElementoVetor(vetor));	
}