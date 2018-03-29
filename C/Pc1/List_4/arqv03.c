//Outro exemplo de leitura de arquivo com fscanf.

#include <stdio.h>

main(int argc, char*argv[])
{
    FILE *arquivo;
    int   vet[10],
    aux;
    //Ler vetor do arquivo e gravar em vet.
    arquivo = fopen("arquivo1.txt","r");
    if (arquivo==NULL){
        printf("Impossivel abrir o arquivo\n");
        return 1;
    }

    int i=0;
    //Le do arquivo e salva conteudo no vetor.
    while(fscanf(arquivo,"%d",&aux)!=EOF){
        vet[i]=aux;
        i++;
    }
    for (aux=0;aux<10;aux++) //Imprime vetor
        printf(" %d ",vet[aux]);

    fclose(arquivo);

}


