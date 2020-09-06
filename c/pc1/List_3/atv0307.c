// Eliminar os numeros repetidos da matriz.

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
			matriz[i][j]=rand()%20;
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

// Retirando numeros repetidos.
void retirarElementosRepetidos(int matriz[LINHA][COLUNA]){
	int i,j, iaux=0, jaux=0;
	for(iaux=0; iaux<LINHA; iaux++){
		for(jaux=0; jaux<COLUNA; jaux++){
			for(i=0; i<LINHA; i++){
				for(j=0; j<COLUNA; j++){
					if(matriz[iaux][jaux]==matriz[i][j] && (iaux!=i || jaux!=j)){
						matriz[i][j]=rand()%20;
						iaux=0, jaux=0; // Reiniciando.
						i=-1; // Caso o elemento seja repetido reiniciamos i e paramos o laço interno.
						break;
					}
				}
			}
		}
	}
}

void main(){
	srand(time(0));
	int matriz[LINHA][COLUNA];
	preencherMatriz(matriz);
	exibirMatriz(matriz);
	printf("\nRetirando Elementos Repetidos !!\n\n");
	retirarElementosRepetidos(matriz);
	exibirMatriz(matriz);
}