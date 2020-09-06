/*
* Implemente a função char *Repete(char *string, int n) que cria dinamicamente uma nova string
* com n "cópias" da string original, separadas por espaço, exceto a última ocorrência.
* Repete("Ola", 4) -> "Ola Ola Ola Ola"
*/

#include <stdio.h>
#include <stdlib.h>

int tamString(char *string){
    int i, quant=0;
    for(i=0; string[i]!='\0'; i++){
        quant++;
    }
    return quant;
}

void copyStringEspacada(char *stringOrigem, char *stringDestino, int n){
    int i, j, s=0; // s será o indice da minha string.
    for(i=0; i<n; i++){
        for(j=0; stringOrigem[j]!='\0'; j++, s++){
            stringDestino[s]=stringOrigem[j];
        }
        stringDestino[s]=' ';
        s++;
    }
    s--; // Retirar o ultimo espaço;
    stringDestino[s]='\0';
}

char *Repete(char *string, int n){
    char *tmp;
    tmp = (char *) malloc(n*(tamString(string)+1)); // Tamanho da nova string com o espaços.
    if(tmp==NULL){ 
        return NULL; // Não alocou memória.
    }
    copyStringEspacada(string, tmp, n);
    return tmp;
}

void main(){
    int n;
    char string[100], *novaString;
    printf("Qual a sua string ? ");
    gets(string);
    printf("Deseja repetir quantas vezes ? ");
    scanf("%d", &n);
    novaString = Repete(string, n);
    printf("Nova String\n%s\n", novaString);
}