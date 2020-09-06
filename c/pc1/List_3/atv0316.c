/*
* Faça um programa semelhante ao implementado no exercicio anterior, porém crie um vetor que
* armazene as informaoes de no maximo 10 produtos. Implemente um procedimento para exibir todos
* os elementos que foram inseridos no vetor. Observe que o vetor pode conter menos do que 10 elementos.
*/

#include <stdio.h>

// Struct Pessoa
typedef struct Produto{
	char Nome[100];
	float Preco;
	int Quantidade;
}Produto;

// Função para preencher um vetor de struct do tipo produto. É necessário informar o indice que iremos inserir.
void preencher(Produto p[], int indice, int *quantidade){
	char ch;
	do{
		getchar();
		printf("Nome do Produto: ");
		gets(p[indice].Nome);
		printf("Preco do Produto: ");
		scanf("%f", &p[indice].Preco);
		printf("Quantidade do Produto: ");
		scanf("%d", &p[indice].Quantidade);
		getchar();
		printf("\n\nDeseja continuar: ");
		scanf("%c", &ch);
		indice++;		
	}while(ch=='s' && indice<10);
	*quantidade=indice;
}

// Exibindo um vetor
void exibir(Produto p[], int quantidade){
	getchar();
	int i;
	printf("\n\nExibindo ...\n\n");
	for(i=0; i<quantidade; i++){
		printf("Nome : %s\n", p[i].Nome);
		printf("Preco : %.2f\n", p[i].Preco);
		printf("Quantidade : %d\n", p[i].Quantidade);
	}
}

void main(){
	int quant=0, opc;
	Produto p[10];
	while(1){
		printf("\n\nVoce possui %d Produto(s) Cadastrado(s) !!\n\n", quant);
		printf("1- Inserir : \n");
		printf("2- Visualizar : \n");
		printf("3- Sair : \n");
		printf("Opcao ~> ");
		scanf("%d", &opc);

		// Opções
		if(opc==3){
			return;
		}
		else if(opc==1){
			if(quant<10){
				preencher(p, quant, &quant);	
			}else{
				printf("Você não pode mais inserir !! \n");
			}
		}else if(opc==2){
			exibir(p, quant);
		}else{
			printf("Opcao Invalida !!\n");
			getchar();
		}
	}
}