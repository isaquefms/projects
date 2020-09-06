#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHA 15
#define COLUNA 6

// Preencher minha matriz 
void preencherMatriz(int matriz[LINHA][COLUNA]){
	int i,j;
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			// Se o indice for igual a zero inserimos a matricula.
			if(j==0){
				matriz[i][j]=1+rand()%15;
			}
			else if(j==1 || j==2 || j==3 || j==4){
				matriz[i][j]=rand()%26;
			}
			else{
				matriz[i][j]=0;
			}
		}
	}
}

// Somar as notas.
void somarNotas(int matriz[LINHA][COLUNA]){
	int i,j, soma=0;
	for(i=0; i<LINHA; i++){
		soma = 0; // Reiniciando soma a cada loop.
		for(j=0; j<COLUNA; j++){
			if(j!=0 && j!=5){ // Se j for diferente de 0 e diferente de 5 quer dizer que o campo é nota.
				soma=soma+matriz[i][j];
			}
			else if(j==5){ // Se o j for igual a 5 temos o campo da nota.
				matriz[i][j]=soma;
			}
		}
	}
}

// Exibir matriz
void exibirMatriz(int matriz[LINHA][COLUNA]){
	int i,j;
	for(i=0; i<LINHA; i++){
		for (j=0; j<COLUNA; j++){
			printf("%02d\t", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
}

// Busca por elementos repetidos e retira o indice que está igual.
void retirarElementosRepetidos(int matriz[LINHA][COLUNA]){
	int i,j, iaux=0, jaux=0;
	for(i=0; i<LINHA; i++){
		for(j=i+1; j<LINHA; j++){ 
			if(matriz[i][0]==matriz[j][0]){
				matriz[j][0]=1+rand()%15;
				i=-1; // Caso o elemento seja repetido reiniciamos i e paramos o laço interno.
				break;
			}
		}
	}
}

// Ordenar as por qualquer coluna.
void ordenarLinhasCrescente(int matriz[LINHA][COLUNA], int parametro){
	int i, j, k, aux;
	for(i=0; i<LINHA; i++){
		for(j=i+1; j<LINHA; j++){
			if(matriz[i][parametro]>matriz[j][parametro]){
				for(k=0; k<COLUNA; k++){
					aux=matriz[i][k];
					matriz[i][k]=matriz[j][k];
					matriz[j][k]=aux;
				}
			}
		}
	}
} 

void main(){
	srand(time(0));
	int matriz[LINHA][COLUNA], parametro;
	preencherMatriz(matriz);
	printf("Matriz Preenchida !!\n\n");
	exibirMatriz(matriz);
	somarNotas(matriz);
	printf("Notas Somadas !!\n\n");
	exibirMatriz(matriz);
	retirarElementosRepetidos(matriz);
	printf("Inconsistencias Retiradas !!\n\n");
	exibirMatriz(matriz);
	printf("Deseja Oerdenar Sua Matriz Por Qual Parametro ? \n");
	printf("Matricula = 0\n");
	printf("Primeira Nota = 1\n");
	printf("Segunda Nota = 2\n");
	printf("Terceira Nota = 3\n");
	printf("Quarta Nota = 4\n");
	printf("Soma = 5\n");
	scanf("%d", &parametro);
	ordenarLinhasCrescente(matriz, parametro);
	printf("Ordenar Matriz !!\n\n");
	exibirMatriz(matriz);
}
