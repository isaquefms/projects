/*
* Implemente um programa que solicite um nome de arquivo ao usuário e conte a quantidade
* de bytes do arquivo informado. Teste seu programa com os arquivos criados nos exercícios
* anteriores.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arquivo; // Ponteiro do tipo arquivo.
	int quant=0;
	char nome[100];
	void *ptr;

	ptr = malloc(sizeof(char)); // Alocando um bity em ptr.

	printf("Qual arquivo deseja abrir :");
	gets(nome);
	arquivo = fopen(nome, "rb");
	if(arquivo==NULL){
		printf("Erro ao abrir o arquivo !!\n");
		return 0;
	}
	while(fread(ptr, sizeof(char), 1, arquivo)){ // Enquanto a operação de leitura for verdadeira.
		quant++; // Quant recebe mais 1 que é referente ao byte inserido.
	}
	fclose(arquivo);
	printf("Seu arquivo possui %d bytes!!\n", quant);
}