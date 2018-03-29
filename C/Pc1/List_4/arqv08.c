//Escreve um vetor de inteiros em um arquivo binario

#include <stdio.h>

main(int argc, char*argv[])
{
    FILE *arquivo;
    int vet[10]={10,20,30,40,50,60,70,80,90,100},
        aux;
    //Abrir arquivo
    arquivo = fopen("arquivo.bin","wb");
    if (arquivo==NULL){
        printf("Impossivel abrir o arquivo\n");
        return 1;
    }

    //Grava vetor de inteiros no arquivo
    for (aux=0;aux<10;aux++)
        fwrite(&vet[aux],sizeof(int),1,arquivo);

    //Outra maneira de gravar o vetor de inteiros no arquivo
    //fwrite(vet,sizeof(int),10,arquivo);


    //fwrite retorna o numero total de elementos escritos
    //no arquivo
//    if (fwrite(vet,sizeof(int),10,arquivo)!=10)
//        printf("Erro ao gravar no arquivo\n");

    fclose(arquivo);

}


