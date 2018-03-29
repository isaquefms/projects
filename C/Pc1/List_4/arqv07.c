//Abre arquivo em modo binario e copia seu conteudo
//para outro arquivo.

#include <stdio.h>

main(int argc, char*argv[])
{
    FILE *f_origem, *f_destino;
    char orig[20],dest[20];
    char ch;

    printf("Entre com o nome do arquivo de origem: ");
    scanf("%s",orig);

    printf("Entre com o nome do arquivo de destino: ");
    scanf("%s",dest);

    f_origem  = fopen(orig,"rb");
    f_destino = fopen(dest,"wb");

    //Copia conteudo do arquivo origem para o destino
    while ((ch=fgetc(f_origem))!=EOF)
        fputc(ch,f_destino);

    fclose(f_origem);
    fclose(f_destino);
}


