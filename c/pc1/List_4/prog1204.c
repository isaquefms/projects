#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct sPessoa{
	int Idade;
	char Nome[20+1];
	struct sPessoa *Prox;
}PESSOA;

typedef PESSOA *FILA;

// Iniciando uma fila
void Inic(Fila* Fila){
	*Fila=NULL;
}

// Inserindo um novo registro no fim da Fila.
void Inserir(FILA* Fila, int Idade, char* Nome){
	if(*Fila==NULL){
		*Fila = (FILA) malloc(sizeof(PESSOA));
		if(*Fila==NULL){
			return;
		}
		(*Fila)->Idade = Idade;
		strcpy((*Fila)->Nome, Nome);
		(**Fila).Prox=NULL;
	}else{
		Inserir(&(**Fila).Prox, Idade, Nome);
	}
}

// Apaga o primeiro elemento da Fila (se existir)
void Apagar(Fila* Fila){
	Pessoa *Tmp = *Fila;

	if(*Fila==NULL){ // Não existem elementos.
		return;
	}

	*Fila = (*Fila)->Prox;
	free(Tmp);
}

// Listar todos os elementos da fila recursivamente.
void Listar(Fila Fila){
	if(Fila==NULL){
		return; // Não existem elementos.
	}
	printf("%d %s\n", Fila->Idade, Fila->Nome);
	Listar(Fila->Prox); // Listando os outros.
}

void main(){
	FILA F;
	Inic(&F);
	puts("Iniciar:");
	Listar(F);
	puts("Inserir:");
	Inserir(&F, 10, "Tiago");
	Inserir(&F, 20, "Luiza");
	Inserir(&F, 30, "Ana");
	puts("Listar 3");
	Listar(F);
	Apagar(&F);
	puts("Listar 2");
	Listar(F);
	Apagar(&F);
	puts("Listar 1");
	Listar(F);
	Apagar(&F);
	puts("Listar Nada");
	Listar(F);
	Apagar(&F);
	puts("Listar Nada");
	Listar(F);
}