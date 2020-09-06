// A quantidade de numeros com valor maior do que a media dos
// numeros da matriz.

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

// Função para calcular a media.
int media(int matriz[LINHA][COLUNA]){
	int i, j, soma=0;
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			soma+=matriz[i][j];
		}
	}
	return (soma/(LINHA*COLUNA));
}

// Função que retorna a quantidade de numeros acima da media.
int quantNumsAcimaMedia(int matriz[LINHA][COLUNA]){
	int i, j, me, cont=0;
	me=media(matriz);
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			// Se o valor da matriz for maior que a media.
			if(matriz[i][j]>me){
				cont++; // Adicionamos o contador.
			}
		}
	}
	return cont;
}

void main(){
	srand(time(0));
	int matriz[LINHA][COLUNA];
	preencherMatriz(matriz);
	exibirMatriz(matriz);
	printf("\nO valor da media eh: %d", media(matriz));
	printf("\nSua matriz possui %d valores acima da media!!\n", quantNumsAcimaMedia(matriz));
}