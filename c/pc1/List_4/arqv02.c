//Semelhante ao anterior, porém a leitura do arquivo e' feita com fscanf

#include <stdio.h>

main()
{
    FILE *fp;
    char Nome[100];
    int Nota;
    fp = fopen("notas.txt","r");
    if (fp==NULL){
        printf("Impossivel abrir o arquivo\n");
        return 1;
    }
    while (fscanf(fp,"%s %d",Nome,&Nota)!=EOF)
        if (Nota>=5) //Caso queira imprimir apenas as notas >= 5
            printf("%s %d\n",Nome,Nota);
    fclose(fp);
}
