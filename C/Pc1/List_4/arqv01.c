//Programa que imprime na tela o conteúdo de um arquivo texto.

#include <stdio.h>

main(){
	FILE *arquivo; //Ponteiro para estrutura do tipo FILE
	char ch;
	char nome_arquivo[40];
	printf("Digite o nome do arquivo: ");
	gets(nome_arquivo);
	arquivo = fopen(nome_arquivo,"r"); //Abre arquivo para leitura
	if (arquivo==NULL){ //Se der erro ao abrir o arquivo
		printf("Impossivel abrir o arquivo\n");
		return 1; //Termina o programa
	}
	ch=fgetc(arquivo);//Faz a leitura de 1 byte do arquivo
	while (ch!=EOF){ //Verifica se e' final de arquivo (End Of File)
		  putchar(ch); //Imprime caracter
		  ch=fgetc(arquivo);//Realiza a leitura do proximo caracter
	}
	/* //Outra maneira de ler do arquivo.
	while ((ch=fgetc(fp))!=EOF)
		putchar(ch);
	*/
	fclose(arquivo);
}
