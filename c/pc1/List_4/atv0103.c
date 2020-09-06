/*
* Implemente um programa que grave um string (seu nome, por exemplo) em um arquivo
* binário.
*/

#include <stdio.h>
#include <stdlib.h>

int quantCarac(char *string){
	int i, quant=0;
	for(i=0; string[i]!='\0'; i++){
		quant++;
	}
	return quant;
}

int main(){
	FILE *arquivo; // Ponteiro do tipo file.
	char nome[100];
	printf("Insira seu nome: ");
	gets(nome);
	arquivo = fopen("atv0103.bin", "wb"); // Abrindo o arquivo para leitura.
	if(arquivo==NULL){ // Se o arquivo estiver vazio mostramos o erro e terminamos o programa.
		printf("Erro ao abrir o programa!!\n");
		return 0;
	}
	// fwrite(local_da_memoria, tamanho_dos_bytes, quantidade_bytes, ponteiro_arquivo);
	fwrite(nome, sizeof(char), quantCarac(nome), arquivo);
	fclose(arquivo);
}