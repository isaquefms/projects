/*
* “char * strchar (char *s, char ch)” que retorna o endereço da primeira ocorrência de “ch” em
* “s”; caso não exista, retorna NULL (NULL é uma constante simbólica que indica que o ponteiro não
* aponta para nenhuma variável). Implemente a função principal (“main”) para testar a função
* strchar.
*/

#include <stdio.h>

#define TAM 100

// A principio parece ser uma função simples. Vou retornar o endereço da primeira ocorrencia de ch.
char *strchar(char *s, char ch){
	int i;
	for(i=0; s[i]!='\0'; i++){
		if(s[i]==ch){
			return &s[i];
		}
	}
	return NULL;
}

// Vou criar uma função para printar a string e o endereço de cada caracter.
void exibeEnderecoString(char *string){
	int i;
	for(i=0; string[i]!='\0'; i++){
		printf("Caracter: %c , Endereço: %ld \n", string[i], &string[i]);
	}
}

// main
void main(){
	char string[TAM], ch;
	printf("Insira uma string: ");
	gets(string);
	printf("Insira um caracter: ");
	scanf("%c", &ch);
	exibeEnderecoString(string);
	printf("O caracter %c tem a primeira ocorrencia no endereço %ld \n", ch, strchar(string, ch));
}