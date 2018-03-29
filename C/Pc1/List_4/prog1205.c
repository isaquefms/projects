#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct sNo{
    int N; // Número.
    struct sNo *Prox;
} NO;

// Iniciar uma pilha
void Inic(NO **Pilha){
    *Pilha=NULL;
}

// Insere um novo registro no topo da pilha
void Push(NO **Pilha, int Num){
    NO *Tmp;
    Tmp = (NO*) malloc(sizeof(NO));
    if(Tmp==NULL){
        return;
    }
    Tmp->N = Num;
    Tmp->Prox=*Pilha;
    *Pilha=Tmp;
}

int Empty(NO *Pilha){
    return (PILHA==NULL);
}

// Apaga o elemento do topo da pilha (se existir).
void Pop(NO** Pilha){
    NO *Tmp = *Pilha;
    if(Empty(*Pilha)){ // Não existem elementos.
        return;
    }
    
    *Pilha = (*Pilha)->Prox;
    free(Tmp);
}

// Listar todos os elementos da pilha reursivamente.
void Print(NO *Pilha){
    if(Empty(Pilha)){
        return; // Não existem elementos.
    }
    printf("%d \n",Pilha->N);
    Print(Pilha->Prox); // Lista os outros.
}

// Devolve o elemento do topo da pilha. Supoe-se todos positivos.
int Top(No *Pilha){
    if(Empty(Pilha)){
        return -1; // Não existem elementos.
    }
    return Pilha->N;
}

void main(){
    NO *P;
    Inic(&P);
    printf("%d esta vazia\n", Empty(P)?"":"Nao");
    Print(P);
    puts("Push: 10");
    Push(&P, 10);
    puts("Push: 20");
    Push(&P, 20);
    puts("Push: 30");
    Push(&P, 30);
    printf("%s esta vazia\n", Empty(P)?"":"Nao");
    Print(P);
    puts("Pop: ");
    Pop(&P);
    Print(P);
    puts("Pop: ");
    Pop(&P);
    Print(P);
    puts("Pop: ");
    Pop(&P);
    Print(P);
    printf("%s esta vazia\n", Empty(P)?"":"Nao");
}