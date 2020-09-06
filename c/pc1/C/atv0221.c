#include <stdio.h>

main(){
    int x, y;
    printf("Entre com as coordenadas do seu ponto: ");
    scanf("%d%d", &x, &y);
    if(x == 0 && y == 0){
        printf("O seu ponto esta na origem !!\n");
        printf("(%d, %d)", x, y);
    }
    else if(x == 0 || y == 0){
        if(x == 0){
            printf("O seu ponto esta sobre o eixo Y !!\n");
            printf("(%d, %d)", x, y);
        }
        else{
            printf("O seu ponto esta sobre o eixo X !!\n");
            printf("(%d, %d)", x, y);
        }
    }
    else if(x > 0 && y > 0){
        printf("O seu ponto esta no primeiro quadrante !!\n");
        printf("(%d, %d)", x, y);
    }
    else if(x > 0 && y < 0){
        printf("O seu ponto esta no segundo quadrante !!\n");
        printf("(%d, %d)", x, y);
    }
    else if(x < 0 && y < 0){
        printf("O seu ponto esta no terceiro quandrante !!\n");
        printf("(%d, %d)", x, y);
    }
    else{
        printf("O seu ponto esta no quarto quadrante !!\n");
        printf("(%d, %d)", x, y);
    }
}
