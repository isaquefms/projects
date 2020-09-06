#include <stdio.h>

typedef struct CONTATO{
	char Nome[100];
	char Telefone[10];
}Contato;

void preencherStrutura(Contato p[]){
	int i;
	for(i=0; i<7; i++){
		printf("Nome: ");
		gets(p[i].Nome);
		printf("Telefone: ");
		gets(p[i].Telefone);
	}
}

int stringRepetida(char str1[], char str2[]){
	int i;
	for(i=0; str1[i]!='\0'; i++){
		if(str1[i]!=str2[i]){
			return -1;
		}
	}
	return 1;
}

void main(){
	Contato p[]={"Felipe", "123", "Julio", "234", "Eduarda", "345", "Eduardo", "456", "Juliana", "5678", "Julio", "6789", "Raquel", "789"};
	char nome[20], resp;
	int i, j, cont=0, indice;
	printf("Insira um nome: ");
	gets(nome);
	for(i=0; i<7; i++){
		if(stringRepetida(p[i].Nome, nome)==1){
			cont++;
			indice=i;
		}
	}

	// Trocando o Nome
	if(cont>=2){
		printf("O nome está duplicado. Insira outro Nome: ");
		gets(p[indice].Nome);
	}else{
		printf("Deseja alterar o telefone do contato: ");
		scanf("%c", &resp);
		getchar();
		if(resp=='s'){
			printf("Novo Telefone: ");
			gets(p[indice].Telefone);
		}
	}

	// Exibindo a estrutura
	for(i=0; i<7; i++){
		printf("%s\n", p[i].Nome);
		printf("%s\n", p[i].Telefone);
		printf("\n");
	}
}