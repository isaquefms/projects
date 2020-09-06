//Escrita de arquivo com fprintf

#include <stdio.h>

main(int argc, char*argv[])
{
    FILE *arquivo;
    //Vetor que sera' gravado no arquivo
    int   vet[10]={1,2,3,4,5,6,7,8,9,10},
    aux;

    //Abre arquivo no modo de escrita "w"
    arquivo = fopen("arquivo1.txt","w");
    if (arquivo==NULL){
        printf("Impossivel abrir o arquivo\n");
        return 1;
    }
    //Grava vetor no arquivo
    for (aux=0;aux<10;aux++)
        fprintf(arquivo,"%d ",vet[aux]);
    fclose(arquivo);

}


