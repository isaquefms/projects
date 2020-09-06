/* 
* Declare uma estrutura em C para armazenar informações de um poduto de uma loja. Os campos da estrutura são:
* nome, preço e quant esto. O programa deve solicitar ao usuario que digite os valores para os campos e em seguida 
* deve exibi-los na tela.
*/

#include <stdio.h>

typedef struct Produto{
	char Nome[100];
	float Preco;
	int Quant;
}Produto;

void preencher(Produto *p){
	printf("Nome do Produto    : ");
	gets((*p).Nome);
	printf("Preco do Produto   : ");
	scanf("%f", &(*p).Preco);
	printf("Quant do Produto   : ");
	scanf("%d", &(*p).Quant);
}

void exibir(Produto *p){
	printf("Nome: %s\n", (*p).Nome);
	printf("Preco: %.2f\n", (*p).Preco);
	printf("Quantidade: %d\n", (*p).Quant);
}

void main(){
	Produto p;
	preencher(&p);
	exibir(&p);
}