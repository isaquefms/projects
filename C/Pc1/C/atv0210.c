#include <stdio.h>

main(){
    int d, m, a;
    printf("Informe uma data no formato aaaa-mm-dd: ");
    scanf("%d-%d-%d", &a, &m, &d);
    printf("Data no novo formato: %d/%d/%d", d, m, a);
}
