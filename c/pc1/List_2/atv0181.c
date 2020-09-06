/*
* Implemente o void eliminar(char v [ ], char ch) que elimina todas as ocorrências do
* caractere“ch” no vetor de caracteres “v”. Ao eliminar um caractere, os outros elementos do vetor
* devem ser movidos para esquerda. Por exemplo: v = “programacao de computadores” e ch = 'a'. Ao
* final do procedimento o conteúdo de “v” deverá ser “progrmco de computadores”. Você não pode
* utilizar um vetor auxiliar para implementar o procedimento.
*/

// Esse é o exercício numero 77 de strings.

#include <stdio.h>

#define TAM 100

// Irei usar o método ensinado no livro para eliminar. Achei muito inteligente.
void eliminar(char string[], char ch){
	int indice, indiceNovaString=0;
	for(indice=0; string[indice]!='\0'; indice++){
		if(string[indice]!=ch){
			string[indiceNovaString]=string[indice];
			indiceNovaString++;
		}
	}
	string[indiceNovaString]='\0'; // O ultimo indice da nova string recebe o delimitador.
}

void main(){
	char string[TAM], ch;
	printf("Insira sua string: ");
	gets(string);
	printf("Qual caracter deseja eliminar: ");
	scanf("%c", &ch);
	eliminar(string, ch);
	printf("Nova String: %s\n", string);
}