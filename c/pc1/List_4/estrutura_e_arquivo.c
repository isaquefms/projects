#include<stdio.h>

typedef struct pessoa
{
	char  nome[100];
	float saldo;
} Pessoa;

int quantidade=0; //Quantidade de elementos no vetor.

/*Exibe o vetor de estrturas ate' a posicao pos*/
void exibir(Pessoa p[]){
   int i=0;
   for(i=0;i<quantidade;i++){
      printf("\nNome: %s",p[i].nome);
      printf("\nSaldo: %.2f\n",p[i].saldo);
	}
}
/*Inserir no vetor "p" a partir da posicao "i"*/
void inserir(Pessoa *p){
	int opcao=1;
	while(opcao==1){
		system("clear");
		getchar();
		printf("\nDigite o nome: ");
		gets(p[quantidade].nome);
		printf("\nDigite o saldo: ");
		scanf("%f",&p[quantidade].saldo);
		printf("\nDigite (1) para continuar inserindo: ");
		scanf("%d",&opcao);
		quantidade++;
	}
}

void salvar(Pessoa p[]){
   int i=0;
	 FILE *f;
	 f=fopen("banco.txt","w");
   for(i=0;i<quantidade;i++){
      fprintf(f,"%s %.2f\n",p[i].nome ,p[i].saldo);
	}
	fclose(f);
}

/*Inserir no vetor "p" a partir da posicao "i"*/
void carregar(Pessoa *p){
	int opcao=1;
	FILE *f;
	f = fopen("banco.txt","r");
	while(fscanf(f,"%s %f",p[quantidade].nome, &p[quantidade].saldo)!=EOF)
		quantidade++;
	fclose(f);
}


main(){

	Pessoa vetor[20];
	int opcao=1;
	while(opcao!=0){

		printf("(0) Sair\n");
		printf("(1) Exibir\n");
		printf("(2) Inserir\n");
		printf("(3) Salvar\n");
		printf("(4) Ler do arquivo\n");
		scanf("%d",&opcao);
		if(opcao==1)
			exibir(vetor);
		else if (opcao==2)
			inserir(vetor);
		else if(opcao==3)
			salvar(vetor);
		else if(opcao==4)
			carregar(vetor);

	}
}


