/*
* Implemente o procedimento void copia (char origem [ ], char destino [ ]) que faz uma
* cópia do vetor origem no vetor destino.
*/

// Esse é o exercício numero 73 de strings.

#include <stdio.h>

#define TAM 100

// Função para copiar uma string para outra.
void copia(char origem[], char destino[]){
	int indice;
	for(indice=0; origem[indice]!='\0'; indice++){
		destino[indice]=origem[indice];
	}
	destino[indice]='\0'; 
}

// Função principal.
void main(){
	char origem[TAM], destino[TAM];
	printf("Insira uma string: ");
	gets(origem);
	copia(origem, destino);
	printf("String Original: %s\n", origem);
	printf("String Copia: %s\n", destino);
}