#include <stdio.h>

main(){
    int i, n, somatorio = 0;
    printf("Insira o valor de n: ");
    scanf("%d", &n);
    // De i igual a 3 até i menor igual a n.
    for(i=3; i<=n; i++){
    	// Acumulo de somatório com a expressão pedida.
        somatorio = somatorio + (5*i+2);
    }
    printf("O valor do somatorio eh %d", somatorio);
}
