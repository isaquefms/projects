#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h> // Usar o comando gcc arq.c -lm

#define TAMANHO 10

void preencherVetor(int vetor[]){
	int indice;
	for(indice = 0; indice<TAMANHO; indice++){
		vetor[indice] = rand()%100;
	}
}

void exibeVetor(int vetor[]){
	int indice;
	for(indice = 0; indice<TAMANHO; indice++){
		printf("%d\t", vetor[indice]);
	}
}

void zerarVetor(int vetor[]){
	int indice;
	for(indice = 0; indice<TAMANHO; indice++){
		vetor[indice]=0;
	}
}

int maiorElementoVetor(int vetor[]){
	int maior = vetor[0];
	int indice = 0;
	for(indice; indice<TAMANHO; indice++){
		if(vetor[indice] >= maior){
			maior = vetor[indice];
		}
	}
	return maior;
}

int posicaoMaiorElemento(int vetor[]){
	int indice = 0;
	int posicao;
	int maior = maiorElementoVetor(vetor);
	for(indice; indice<TAMANHO; indice++){
		if(vetor[indice] == maior){
			posicao = indice;
		}
	}
	return posicao;
}

int maiorDiferencaEntreElementos(int vetor[]){
	int indice = 1;
	int indiceAnt = 0; 
	int exibeIndice, exibeIndiceAnt;
	int maiorDiferenca = abs(vetor[0]- vetor[1]);
	for(indice; indice<TAMANHO; indice++){
		if(abs(vetor[indice] - vetor[indiceAnt]) >= maiorDiferenca){
			maiorDiferenca = abs(vetor[indice] - vetor[indiceAnt]);
			exibeIndice = indice;
			exibeIndiceAnt = indiceAnt;
		}
		indiceAnt++;
	}
	printf("O Intervalo da Diferenca eh: [%d] , [%d]\n", exibeIndiceAnt, exibeIndice);
	return maiorDiferenca;
}

void ordenaVetor(int vetor[]){
	int indice = 0;
	int indiceInt = 0;
	int aux;
	for(indice; indice<TAMANHO; indice++){
		indiceInt = 0;
		for(indiceInt; indiceInt<TAMANHO; indiceInt++){
			if(vetor[indice] < vetor[indiceInt]){
				aux = vetor[indice];
				vetor[indice] = vetor[indiceInt];
				vetor[indiceInt] = aux;
			}
		}
	}
}

void main(){
	srand(time(0));
	int vetor[TAMANHO];
	preencherVetor(vetor);
	exibeVetor(vetor);
	printf("\nO maior elemento eh: %d\n", maiorElementoVetor(vetor));
	printf("A posicao do elemento no vetor eh [%d]\n", posicaoMaiorElemento(vetor));
	printf("A maior diferenca eh: %d\n", maiorDiferencaEntreElementos(vetor));
	ordenaVetor(vetor);
	exibeVetor(vetor);
}
