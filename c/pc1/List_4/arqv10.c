#include <stdio.h>
#include <stdlib.h>

main(int argc, char*argv[])
{
  FILE *arquivo;
  int  aux;
  //Abrir arquivo
   arquivo = fopen("arquivo.bin","rb");
   int k;
   //Movimenta o ponteiro do arquivo a partir da posicao inicial - SEEK_SET
   printf("\nMovimentacao do ponteiro a partir do inicio\n");
   while (scanf("%d",&k)){ //sai do loop quando o usuario digitar algo diferente de um numero (ex. letra)
      fseek(arquivo,k*sizeof(int),SEEK_SET); //Movimenta k inteiros
      fread(&aux,sizeof(int),1,arquivo);
      printf("\n%d\n",aux);
   }
   getchar(); //limpa buffer

   //Movimenta o ponteiro do arquivo a partir da posicao atual - SEEK_CUR
   printf("\nMovimentacao do ponteiro a partir da posicao atual\n");
   while (scanf("%d",&k)){
      fseek(arquivo,k*sizeof(int),SEEK_CUR);  //Movimenta k inteiros
      if(fread(&aux,sizeof(int),1,arquivo)!=0)
         printf("\n%d\n",aux);
      else
         printf("  Final de arquivo.\n");

/*
      fread(&aux,sizeof(int),1,arquivo);
      //Verifica se e' o final do arquivo
      if (!(feof(arquivo)))
         printf("\n%d\n",aux);
      else
        printf("  Final de arquivo.\n");
*/
   }
   getchar(); //limpa buffer
   //Movimenta o ponteiro do arquivo a partir da posicao final - SEEK_END
   printf("\nMovimentacao do ponteiro a partir do fim do arquivo\n");
   while (scanf("%d",&k)){
      fseek(arquivo,-k*sizeof(int),SEEK_END);
      fread(&aux,sizeof(int),1,arquivo);
      printf("\n%d\n",aux);
   }



   fclose(arquivo);

}


