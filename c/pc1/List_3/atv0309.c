/*
* Implemente um programa que preenche com valores aleatórios uma matriz MxN e:
* 1. armazena em um vetor v1 o maior elemento cadastrado em cada coluna da matriz;
* 2. armazena em um vetor v2 o menor elemento cadastrado em cada coluna da matriz;Ao final, o programa deve exibir: a matriz original,
* o vetor dos maiores elementos e o vetor dos
* menores elementos.
* Obs.:
­* Os valores de M e N devem ser definidos por meio da diretiva “#define”
­* Você pode utilizar no máximo dois comandos “for” para encontrar os menores e maiores
* elementos das colunas.
* A solução deve ser implementada no programa principal (“main”), sem utilizar funções.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 5 
#define N 5

void main(){
	int i, j, maior, menor, v1[M], v2[M], matriz[M][N];
	srand(time(0));

	// Preenchendo a matriz.
	for(i=0; i<M; i++){
		for(j=0; j<N; j++){
			matriz[i][j]=rand()%31;
		}
	}

	// Procurando o menor e o maior elemento da matriz.
	for(i=0; i<M; i++){
		// O que irá variar será nossa coluna.
		maior=menor=matriz[0][i]; // Carga inicial em maior e menor.
		for(j=0; j<N; j++){
			if(matriz[j][i]>maior){
				maior=matriz[j][i];
			}
			if(matriz[j][i]<menor){
				menor=matriz[j][i];
			}
		}
		v1[i]=maior;
		v2[i]=menor;
		maior=menor=0;
	}

	// Exibindo a matriz original.
	for(i=0; i<M; i++){
		for(j=0; j<N; j++){
			printf("%02d\t", matriz[i][j]);
		}
		printf("\n");
	}

	// Exibindo o vetor v1.
	for(i=0; i<M; i++){
		printf("v1[%d]= %d\t", i, v1[i]);
	}
	printf("\n");

	//Exibindo o vetor v2.
	for(i=0; i<M; i++){
		printf("v2[%d]= %d\t", i, v2[i]);
	}
	printf("\n");
}