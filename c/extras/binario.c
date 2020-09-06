#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	// Variáveis.
	int num, resto, *resultado, cont=0;

	// Entrada de dados.
	printf("Insira um numero inteiro: ");
	scanf("%d", &num);

	// Processo.
	if (num == 0 || num == 1){
		cont++;
		resultado = (int *) realloc(resultado, cont*sizeof(int));
		resultado[cont-1] = num;
		printf("Valor binario: %d\n", resultado[cont-1]);
		return 0;
	}
	while(num != 1){
		// Aumentando meu vetor.
		cont++;
		resultado = (int *) realloc(resultado, cont*sizeof(int));
		resto = num%2; // Resto da divisão.
		num = num/2; // Divisão por 2.
		resultado[cont-1] = resto; // Armazenando o valor.
	}
	// Guardando o bit mais significativo.
	cont++;
	resultado = (int *) realloc(resultado, cont*sizeof(int));
	resultado[cont-1] = num;

	// Exibindo o resultado.
	printf("Valor binario: ");
	for (cont; cont>0; cont--){
		printf("%d", resultado[cont-1]);
	}
	printf("\n");
	return 0;
}