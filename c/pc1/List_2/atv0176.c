/*
* Implemente o procedimento “void concatenar (char s1[], char s2[])” que copia o string
* s2 a partir do final de s1. Exemplo: s1 = “abc”, s2= “def”, após o procedimento concatenar s1 terá
* o conteúdo s1= “abcdef”.
*/

// Esse é o exercício numero 72 de strigs.

#include <stdio.h>

#define TAM 100

// Função que define o tamanho de caracteres.
int quantCaracteres(char string[]){
	int cont, quant=0;
	for(cont=0; string[cont]!='\0'; cont++){
		quant++;
	}
	return quant;
}

// Função para concatenar strings
void concatenar(char s1[], char s2[]){
	int tams1, tams2, indice, indice2, tamNovaString; // Variáveis de tamanho da 1 e da 2 string, indices para percorer as duas strings e uma para gurdar o novo tamanho de s1.
	tams1=quantCaracteres(s1); // quantidade de caracteres de s1.
	tams2=quantCaracteres(s2); // quantidade de caracteres de s2.
	tamNovaString=tams1+tams2; // quantidade de caracteres e tamanho da nova string.
	for(indice=tams1, indice2=0; indice<tamNovaString; indice++, indice2++){
		s1[indice]=s2[indice2];
	}
	s1[tamNovaString]='\0'; // Inserindo o caractere delimitador.
}

void main(){
	char string1[TAM], string2[TAM];
	printf("Insira a primeira string: ");
	gets(string1);
	printf("Insira a segunda string: ");
	gets(string2);
	concatenar(string1, string2);
	printf("Nova string : %s\n", string1);
}