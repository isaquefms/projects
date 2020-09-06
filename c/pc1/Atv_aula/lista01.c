#include <stdio.h>
#include <stdlib.h>

typedef struct CONTATO{
	char Nome[100];
	char Tel[15];
	struct CONTATO *prox;
}Contato;

void mostrar(Contato *l){
	if(l==NULL){
		printf("\nLista Vazia\n");
	}else{
		while(l!=NULL){
			printf("\n%s %s", (*l).Nome, (*l).Tel);
			printf("\n");
			l=((*l).prox);
		}
	}
}

Contato* criarContato(){
	Contato *elemento=malloc(sizeof(Contato));
	printf("Insira um nome: ");
	gets((*elemento).Nome);
	printf("Insira um telefone: ");
	gets((*elemento).Tel);
	(*elemento).prox=NULL;
	return elemento;
}

void main(){
	Contato *lista=NULL, *elemento=NULL;
	elemento=criarContato();
	if(lista==NULL){
		lista=elemento;	
	}
	elemento=criarContato();
	// Insere no inicio
	(*elemento).prox=lista;
	lista=elemento;
	mostrar(lista);
	// Insere no fim
	elemento=criarContato();
	Contato *aux=lista;
	while((*aux).prox!=NULL){
		aux=(*aux).prox;
	}
	(*aux).prox=elemento;
	mostrar(lista);
}