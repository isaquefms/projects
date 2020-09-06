#include <stdio.h>

main(){
    int n1, n12, n2, n22, soma = 0;
    printf("Insira dois numeros inteiros: ");
    scanf("%d%d", &n1, &n2);
    // Obtendo numeros exatamente fora do intervalo
    n12 = n1 + 1;
    n22 = n2 - 1;
    while(n12 <= n22){
        if(n12 % 2 == 1){
            soma = soma + n12;
        }
        n12++;
    }
    printf("A soma dos numeros entre o intervalo de [%d,....,%d] e igual a: %d", n1, n2, soma);
}
