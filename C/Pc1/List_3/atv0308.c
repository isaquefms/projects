/* 
* Uma empresa tem registrado em uma tabela os consumos mensais de energia elétrica dos
* anos de 2003 até 2010. Cada linha representa um ano e cada coluna representa um mês.
* Considerando esses dados, faça um algoritmo para processar a tabela e produzir as seguintes
* informações:
* 0.Consumo medio dos anos.
* 1.Consumo médio em cada um dos meses;
* 2.Mês/ano em que houve o maior gasto com energia.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHA 8
#define COLUNA 12

void preencherMatriz(int matriz[LINHA][COLUNA]){
	int i, j;
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			matriz[i][j]=1+rand()%100;
		}
	}
}

void exibirMatriz(int matriz[LINHA][COLUNA]){
	int i, j;
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			printf("%02d\t", matriz[i][j]);;
		}
		printf("\n");
	}
}

// Media comum.
int mediaMeses(int matriz[LINHA][COLUNA]){
	int i, j, soma=0;
	for(i=0; i<LINHA; i++){
		for(j=0; j<LINHA; j++){
			soma+=matriz[i][j];
		}
	}
	return (soma/(LINHA*COLUNA));
}

// A cada final do ciclo do for interno guardamos a soma dos anos e no final dividimos pelo numero de anos.
int mediaAnos(int matriz[LINHA][COLUNA]){
	int i, j, soma=0, somaAnos=0;
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			soma+=matriz[i][j];
			if(j==(COLUNA-1)){ // Ultimo mês.
				somaAnos+=soma; // Guardamos o valor e reiniciamos soma.
				soma=0;
			}
		}
	}
	return (somaAnos/LINHA);
}

// Mes de maior consumo funciona como uma procura de o maior valor da matriz.
int mesMaiorConsumo(int matriz[LINHA][COLUNA]){
	int i, j, maior, meses=0, mes;
	maior=matriz[i][j];
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			meses++;
			if(matriz[i][j]>maior){
				maior=matriz[i][j];
				mes=meses; // Meses vai somar cada mês
			}
		}
	}
	return mes;
}

int anoMaiorConsumo(int matriz[LINHA][COLUNA]){
	int i, j, soma=0, somaAux=0, ano=0;
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			soma+=matriz[i][j];
			if(j==(COLUNA-1)){
				// Caso a soma do ano sejá maior que a somaAux a variavel 
				// somaAux recebe soma e ano recebe o ano de maior consumo.
				if(soma>somaAux){
					somaAux=soma;
					ano=i;
					soma=0; // Reiniciamos soma.
				}
				else{
					soma=0;
				}	
			}
		}
	}
	return (2003+ano); // Retornamos o ano de maior consumo.
}

void main(){
	int matriz[LINHA][COLUNA];
	srand(time(0));
	preencherMatriz(matriz);
	exibirMatriz(matriz);
	printf("A media entre os meses eh %d \n", mediaMeses(matriz));
	printf("A media entre os anos eh %d \n", mediaAnos(matriz));
	printf("Mes de maior consumo %d \n", mesMaiorConsumo(matriz));
	printf("Ano de Maior Consumo %d \n", anoMaiorConsumo(matriz));
}