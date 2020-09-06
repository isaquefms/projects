//Faz a leitura de um vetor de inteiros do arquivo binário

#include <stdio.h>

main(int argc, char*argv[])
{
    FILE *arquivo;
    int vet[10],
    aux;
    //Abrir arquivo
    arquivo = fopen("arquivo.bin","rb");
    if (arquivo==NULL){
        printf("Impossivel abrir o arquivo\n");
        return 1;
    }

    //Le do arquivo e grava no vetor
    for (aux=0;aux<10;aux++)
        fread(&vet[aux],sizeof(int),1,arquivo);

    //fread retorna o numero total de elementos lidos
    //do arquivo

    //Outra maneira de ler do arquivo
    //while(fread(&vet[aux],sizeof(int),1,arquivo))
    // aux++;

    //Outra maneira. Le do arquivo sem a necessidade do "loop"
    //fread(vet,sizeof(int),10,arquivo);

    //Exibe conteudo do vetor
    for (aux=0;aux<10;aux++)
        printf("%d ",vet[aux]);


    fclose(arquivo);


}


