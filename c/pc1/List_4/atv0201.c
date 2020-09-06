/*
* Vou tentar ler o nome que gravei no arquivo na atividade 0101.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
	FILE *arquivo; // Ponteiro do tipo arquivo.
	char ch;
	arquivo = fopen("atv0101.txt", "r"); // Abrir arquivo no modo leitura.
	if(arquivo==NULL){
		printf("Erro ao abrir arquivo!!\n");
		return 0;
	}
	ch = fgetc(arquivo);
	while(ch!=EOF){
		printf("%c", ch);
		ch = fgetc(arquivo);
	}
	fclose(arquivo);
}