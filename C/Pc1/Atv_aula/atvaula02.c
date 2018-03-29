#include <stdio.h>

#define TAM 100

int tamanhoString(char *string){
	int indice, quant=0;
	for(indice=0; string[indice]!='\0'; indice++){
		quant++;
	}
	return quant;
}

char *posicaoInicioUltimoNome(char *string){
	int indice, termino, posicao;
	// Endereço de onde inicia o final da string;
	termino=tamanhoString(string);
	for(termino-1; string[termino]!=' '; termino--){
		// Termino está com a posição de onde está o espaço;
	}
	termino++; // Do indice do espaço mais um para pegarmos o caracter.
	return &string[termino];
}

void main(){
	char string[TAM];
	printf("Insira um nome: ");
	gets(string);
	printf("%s\n", posicaoInicioUltimoNome(string));
}