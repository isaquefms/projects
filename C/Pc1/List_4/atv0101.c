/*
* Implemente um programa que grave um string (seu nome, por exemplo) em um arquivo texto.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arquivo; // Ponteiro para arquivo.
	char nome[100];
	int i=0; // Contador.
	printf("Insira seu nome: ");
	gets(nome);
	arquivo = fopen("atv0101.txt", "w"); // Abrindo o arquivo do exercicio.
	if(arquivo==NULL){ // Erro ao abrir o arquivo.
		printf("Erro ao abrir o arquivo.\n");
		return 1;
	}
	fprintf(arquivo, "%s\n", nome);
	fclose(arquivo);
}
