// A soma dos numeros impares da matriz.

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

// Calculando o numero de numeros impares.
int somaNumerosImpares(int matriz[LINHA][COLUNA]){
	int i,j, soma=0;
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			if(matriz[i][j]%2!=0){ // Caso o numero seja impar.
				soma+=matriz[i][j];
			}
		}
	}
	return soma;
}

void main(){
	srand(time(0));
	int matriz[LINHA][COLUNA];
	preencherMatriz(matriz);
	exibirMatriz(matriz);
	printf("A soma dos numeros impares eh igual %d\n", somaNumerosImpares(matriz));
}