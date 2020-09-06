//Escrita de arquivo com fputc

#include <stdio.h>
#include <string.h>

main(int argc, char*argv[])
{
    FILE *arquivo;
    char   vet[30]={"Programacao de Computadores I"};
    int      aux;

    //Abrir arquivo no modo de escrita
    arquivo = fopen("arquivo3.txt","w");
    if (arquivo==NULL){
        printf("Impossivel abrir o arquivo\n");
        return 1;
    }

    //Gravar o vetor no arquivo
    for (aux=0;aux<strlen(vet);aux++)
        fputc(vet[aux],arquivo);

    fclose(arquivo);

}


