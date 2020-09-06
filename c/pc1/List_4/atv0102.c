/*
* Implemente um programa que abra o arquivo texto criado no exercício anterior e
* conte quantas vezes a letra “a” aparece no nome.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arquivo; // Ponteiro do tipo arquivo.
	char ch, cont=0; // Variavel para fazer comparações.
	arquivo = fopen("atv0101.txt", "r"); // Abrindo meu arquivo em modo de leitura.
	if(arquivo==NULL){ // Se o ponteiro for igual a nulo.
		printf("Erro ao abrir o arquivo!!\n");
		return 0;
	}
	ch=fgetc(arquivo);
	while(ch!=EOF){ // Enquanto ch não achar o final do arquivo.
		if(ch=='a'){
			cont++;
		}
		ch=fgetc(arquivo);
	}
	fclose(arquivo);
	printf("Seu arquivo possui %d a(s)!!\n", cont);
}