/*
* Implemente um programa que realiza a cópia de um arquivo. Teste seu programa com um
* arquivo de áudio ou uma imagem.
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

// Pode ser melhorada.
void adicionarExtencao(char *nome_arquivo_origem, char *nome_arquivo_destino){
	int i,j=0, tamString;
	char extensao[6];
	tamString = quantCarac(nome_arquivo_origem);
	for(i=tamString-1; nome_arquivo_origem[i]!='.'; i--){ // Iniciando do final até encontrar o primeiro ponto.
		// Quando esse laço parar i estará com o indice onde inicia o .;
	}
	while(nome_arquivo_origem[i]!='\0'){ // Enquanto não chegarmos no final da string.
		extensao[j]=nome_arquivo_origem[i];
		j++; i++;
	}
	j++;
	extensao[j]='\0'; // Delimitador.
	// printf("%s\n", extensao);
	tamString = quantCarac(nome_arquivo_destino);
	// printf("%s\n", nome_arquivo_destino);
	for(j=0, tamString-1; extensao[j]!='\0'; j++, tamString++){
		nome_arquivo_destino[tamString]=extensao[j];
	}
	nome_arquivo_destino[tamString]='\0';
}

int main(){
	FILE *arq_origem, *arq_destino; // Ponteiros do tipo arquivo.
	void *ptr; // Ponteiro do tipo void.
	char f_origem[100], f_destino[100]; // Vetores de strings para armazenar meus arquivos.
	ptr = malloc(sizeof(char));	 // Meu ponteiro recebe 1 byte.

	// Entradas.
	printf("Qual arquivo deseja copiar: ");
	gets(f_origem);
	printf("Qual o nome que deseja colocar: ");
	gets(f_destino);

	arq_origem = fopen(f_origem, "rb");
	// Como arquivo destino vira sem extenção vou fazer uma função para colocar a extenção do arquivo.
	// Vamos ver se consigo.
	adicionarExtencao(f_origem, f_destino);
	arq_destino = fopen(f_destino, "wb");
	if(arq_destino==NULL || arq_origem==NULL){
		printf("Erro ao abrir ou criar os arquivos!!\n");
		return 0;
	}
	// Copiando o arquivo.
	while(fread(ptr, sizeof(char), 1, arq_origem)){ // Enquanto for possivel ler.
		fwrite(ptr, sizeof(char), 1, arq_destino); // Vamos gravar no destino.
	}
}