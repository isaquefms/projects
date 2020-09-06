#include <stdio.h>

#define STRING 100

typedef struct PESSOAS{
	char nome[STRING];
	float saldo;	
}Pessoas;

void inserirPessoa(Pessoas vetor[], int *indice){
	int i, controle;
	i=*indice; // No final teremos que passar o valor de i para o local que indice aponta.
	do{
		if(i>19){ // Analisando se o numero de inserts não passou.
			printf("Voce adicionou o maximo de pessoas !!\n");
			printf("Presione qualquer tecla !!\n");
			getchar();
			return;
		}
		getchar(); // Tira um caracter do buffer.
		printf("Insira o Nome : ");
		gets(vetor[i].nome);
		printf("Insira o Saldo : ");
		scanf("%f", &vetor[i].saldo);
		i++;
		system("clear");
		printf("Deseja Continuar: 1-Sim 2-Não: \n");
		scanf("%d", &controle);		
	}
	while(controle!=2);
	*indice=i; // Meu cont vai receber o numero de inserções;
}

void consultarPessoas(Pessoas vetor[], int indice){
	getchar();
	int i;
	for(i=0; i<indice; i++){
		printf("Nome: %s\n", vetor[i].nome);
		printf("Saldo: %.2f\n", vetor[i].saldo);
		printf("\n");
	}
	printf("Pressione Qualquer Tecla Para Sair !!\n");
	getchar();
	system("clear");
}

void salvar(Pessoas vetor[], int *indice){
	getchar();
	int i, cont;
	cont=*indice;
	FILE *f;
	f=fopen("banco.txt", "w");
	for(i=0; i<cont; i++){
		fprintf(f, "%s %.2f\n", vetor[i].nome, vetor[i].saldo);
	}
	printf("Pressione Qualquer Tecla Para Sair !!\n");
	getchar();
	system("clear");	
	fclose(f);
}

void carregar(Pessoas vetor[], int *indice){
	int i;
	i=*indice;
	FILE *f;
	f=fopen("banco.txt", "r");
	while(fscanf(f, "%s %f", vetor[i].nome, &vetor[i].saldo)!=EOF){
		i++;
	}
	fclose(f);
	*indice=i;
}

void main(){
	// Declarando o meu vetor de estruturas.
	Pessoas vetor[20];
	int controle, cont; // A variavel controle armazenará a opção e cont armazenará o numero de inserts.
	cont = 0; // Iniciando cont.
	while(1){
		//if(cont>19){
		//	printf("Voce Inseriu o Maximo de Pessoa !!\n");
		//	printf("Saindo !!\n");
		//	return;
		//}
		system("clear");
		printf("Bem Vindo ao Bando Do Isaque !!\n\n");
		printf("Voce Possui %d Clientes Cadastrados !!\n", cont);
		printf("O que deseja fazer : \n");
		printf("1 - Inserir :\n");
		printf("2 - Consultar :\n");
		printf("3 - Salvar: \n");
		printf("4 - Carregar :\n");
		printf("5 - Sair: \n");
		printf("~> ");
		scanf("%d", &controle);
		if(controle==1 && cont>19){
			printf("Voce nao pode mais inserir !!\n");
			printf("Pressione Uma Tecla !!\n");
			getchar();
			controle==2;
		}
		// Condições para o meu programa.
		if(controle==5){
			break;
		}
		else if(controle==1){
			//cont++ // Passaremos cont como parametro de indece logo precisaremos diminuir 1 na função;
			inserirPessoa(vetor, &cont);
		}
		else if(controle==2){
			consultarPessoas(vetor, cont);
		}
		else if(controle==3){
			salvar(vetor, &cont);
		}
		else if(controle==4){
			carregar(vetor, &cont);
		}
		else{
			printf("Comando Incorreto !!\n");
			printf("Tente Novamente !!\n\n");
		}
	}
}

