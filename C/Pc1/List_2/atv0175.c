/*
* Implemente uma função que conta e retorna a quantidade de caracteres existente em um
* string passado como parâmetro.
*/

// Esse é o exercício numero 71 de strings.

#include <stdio.h>

#define TAM 100

// Função que retorna a quantidade de caracteres;
int quantidadeCaracteres(char string[]){
	int cont, quant=0;
	// Em laços com strings precisamos buscar pelo delimitador na string.
	for(cont=0; string[cont]!='\0'; cont++){ // O laço rodará enquanto o delimitador não for encontrado.
		quant++; // Adicionando 1 em cada loop.
	}
	return quant;
}

void main(){
	char string[TAM];
	printf("Insira uma frase: ");
	// fgets(string, TAM, stdin); // Metodo novo e seguro; Eu notei que fgets está pegando o enter. Não vou usa-ló por enquanto.
	gets(string); // Metodo antigo ainda aceito;
	printf("Sua string possui %d caracteres!!\n", quantidadeCaracteres(string));
}