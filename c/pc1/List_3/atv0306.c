// O segundo maior valor da matriz.

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

// Função para calcular o maior valor da matriz;
int maiorValorMatriz(int matriz[LINHA][COLUNA]){
	int i, j, maior;
	maior=matriz[0][0]; // Obtendo o primeiro valor para comparar.
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			if(matriz[i][j]>maior){ // Se o valor atual for maior.
				maior=matriz[i][j]; // GUardamos ele.
			}
		}
	}
	return maior;	
}

// Função para calcular o segundo maior valor da matriz.
int segundoMaiorValorMatriz(int matriz[LINHA][COLUNA]){
	int i, j, maior, segundoMaior, indice=0;
	maior=maiorValorMatriz(matriz); // Guardando o maior valor.
	// Precisamos nos garantir que segundo maior não vai começar com o valor de maior.
	segundoMaior=matriz[0][0]; // Iniciando segundo maior valor.
	while(segundoMaior==maior){
		indice++;
		segundoMaior=matriz[indice][0];
	}
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			// Este if irá conferir se o valor é maior que o iniciado e manor que o maior.
			if(matriz[i][j]>segundoMaior && matriz[i][j]<maior){
				segundoMaior=matriz[i][j];
			}
		}
	}
	return segundoMaior;
}

void main(){
	srand(time(0));
	int matriz[LINHA][COLUNA];
	preencherMatriz(matriz);
	exibirMatriz(matriz);
	printf("\nO maior valor eh %d \n", maiorValorMatriz(matriz));
	printf("O segundo maior valor eh %d \n", segundoMaiorValorMatriz(matriz));
}