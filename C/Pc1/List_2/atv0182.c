/*
* Implemente um procedimento que coloca em ordem crescente os caracteres de um string
* “s” passado como parâmetro.
*/

// Exercício numero 78 de strings.

#include <stdio.h>

#define TAM 100

// Função para ordenar caracter.
void ordenarStringCrescente(char string[]){
	int indice, indiceInt;
	char aux;
	for(indice=0; string[indice]!='\0'; indice++){
		for(indiceInt=0; string[indiceInt]!='\0'; indiceInt++){
			if(string[indice]<string[indiceInt]){ // Caso algum caracter seja menor que o que estamos comparando ele irá para a posição inicial.
				aux=string[indiceInt]; // Troca de valores
				string[indiceInt]=string[indice];
				string[indice]=aux;
			}
		}
	}
}

void main(){
	char string[TAM];
	printf("Insira uma string: ");
	gets(string);
	ordenarStringCrescente(string);
	printf("String ordenada: %s\n", string);
}

