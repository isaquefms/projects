#include <stdio.h>

main(){
    int nota1, nota2, nota3, faltas, media;
    printf("Insira as tres notas do aluno: ");
    scanf("%d%d%d", &nota1, &nota2, &nota3);
    printf("Insira o numero de faltas: ");
    scanf("%d", &faltas);
    media = (nota1+nota2+nota3) / 3;
    if(media >= 60 && faltas < 18){
        printf("Aluno Aprovado !!");
    }
    else if(media >= 60 && faltas >= 18){
        printf("Aluno Reprovado Por Falta !!");
    }
    else if(media < 60){
        printf("Aluno Reprovado Por Media !!");
    }
}
