/*
* Implemente um programa que abra o arquivo binário criado no exercício anterior e
* conte quantas vezes a letra “a” aparece no nome.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arquivo; // Ponteiro do tipo arquivo;
	int cont=0, i;
	char *string; // Vetor de chars.
	string = malloc(sizeof(char));

	arquivo = fopen("atv0103.bin", "rb"); // Tentando abrir o arquivo.
	if(arquivo==NULL){ // Se o ponteiro for igual a nulo. Erro.
		printf("Nao foi possivel abrir o arquivo !!\n");
		return 0;
	}
	i=0; // Reiniciando o loop;
	while(fread(&string[i], sizeof(char), 1, arquivo)){ // Enquanto for possível ler.
		i++; // A cada iteração acrecentamos um em i;
		string=realloc(string, i+1);
	}
	// string[i+1]='\0'; // Se precisar;
	i=0; // Reiniciando i.
	while(string[i]!='\0'){ // Enquanto minha string for diferente do delimitador.
		if(string[i]=='a'){ // Caso meu caracter seja igual à a, adicionamos um em cont.
			cont++;
		}
		i++;
	}
	printf("Sua string possui %d a(s) !!\n", cont);
}