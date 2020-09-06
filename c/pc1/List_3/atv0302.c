#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHA 4
#define COLUNA 5

// Preenchendo minha mariz com numeros de 0 a 30.
void preencherMatriz(int matriz[LINHA][COLUNA]){
	int i, j;
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			matriz[i][j]=rand()%31;
		}
	}
}

// Exibindo a matriz.
void exibirMatriz(int matriz[LINHA][COLUNA]){
	int i, j;
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			printf("%02d\t", matriz[i][j]);
		}
		printf("\n");
	}
}

// Função para detectar a quantidade de numeros pares na matriz.
int numElementosPares(int matriz[LINHA][COLUNA]){
	int i, j, cont=0;
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			if(matriz[i][j]%2==0){
				cont++;
			}
		}
	}
	return cont;
}

void main(){
	// Numeros randomicos a cada execução.
	srand(time(0));
	int matriz[LINHA][COLUNA];

	// Preenchendo a matriz.
	preencherMatriz(matriz);
	// Exibindo.
	exibirMatriz(matriz);
	// Quant numeros pares.
	printf("Sua Matriz possui %d numeros pares !!\n", numElementosPares(matriz));
}