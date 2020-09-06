#include <stdio.h>
#include <stdlib.h>

main(int argc, char*argv[])
{
  FILE *arquivo;
  int aux;
  //Abrir arquivo
   arquivo = fopen("arquivo.bin","rb");
   int k;
   fseek(arquivo,0,SEEK_END);
   //ftell informa a quantidade de bytes a partir do inicio
   //do arquivo ate' a posicao corrente do ponteiro.
   printf("\n%d\n",ftell(arquivo));
   fclose(arquivo);
}


