//Escrita de arquivo com fprintf ("%c")

#include <stdio.h>
#include <string.h>

main(int argc, char*argv[])
{
    FILE *arquivo;
// char   vet[30]={"Programacao de Computadores"};
  char   vet[1000];
  int      aux;
	printf("Digite um texto: ");
	gets(vet);
  //Abrir arquivo no modo de escrita.
  arquivo = fopen("arquivo2.txt","w");
  if (arquivo==NULL){
      printf("Impossivel abrir o arquivo\n");
      return 1;
  }
  //Gravar o vetor no arquivo
  for (aux=0;aux<strlen(vet);aux++)
      fprintf(arquivo,"%c",vet[aux]);
  fclose(arquivo);

}


