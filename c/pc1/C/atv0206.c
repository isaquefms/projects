#include <stdio.h>

main(){
    int faces = 6, arestas=12, vertices;
    vertices = (arestas + 2) - faces;
    printf("O numero de vertices deste cubo eh: %d", vertices);
}
