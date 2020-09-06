/*
* Implemente o procedimento void copia (char origem [ ], char destino [ ], int n) que
* copia os primeiros n caracteres do vetor origem para o vetor destino.
*/

// Esse é o exercício numero 74 de strings.

#include <stdio.h>

#define TAM 100 // Definindo o tamanho padrão das stings.

// Função que cópia os n primeiros elementos da string origem.
void copia(char origem[], char destino[], int n){
	int indice;
	for(indice=0; indice<n; indice++){ // Agora não buscaremos pelo carac. delimitador mas sim pelo indice menor que o numero de elementos.
		destino[indice]=origem[indice];
	}
	destino[indice]='\0'; // Quando chegarmos no indice n colocaremos o delimitador.
}

void main(){
	char origem[TAM], destino[TAM];
	int n;
	printf("Insira uma string: ");
	gets(origem);
	printf("Insira o numero de caracteres que deseja copiar: ");
	scanf("%d", &n);
	copia(origem, destino, n);
	printf("String Original: %s\n", origem);
	printf("String Copia : %s\n", destino);
}