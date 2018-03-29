/*
* Implemente um programa para calcular o mínimo múltiplo comum de dois número inteiros
* utilizando o método da decomposição simultânea dos números em fatores primos.
*/
#include <stdio.h>

main(){
	int num1, num2, num1Ori, num2Ori, mmc= 1;
	printf("Insira dois numeros inteiros: ");
	scanf("%d%d", &num1, &num2);
	num1Ori = num1;
	num2Ori = num2;

	// Enquanto os dois valores não forem iguais a 1 o loop se repetirá.
	while(num1 != 1 || num2 != 1){
		// Tentativa básica, divisão por 2.
		// Se algum dos termos forem divisiveis por dois.
		if(num1%2 == 0 || num2%2 == 0){
			// Para exibir a fatoração corretamente a cada inicio de if printaremos o resultado atual com a divisão anterior.
			printf("%d,\t%d\t | 2\n", num1, num2);
			// Se todos os numeros forem divisiveis por dois.
			if(num1%2 == 0 && num2%2 == 0){
				// As variaveis dos numeros passa a guardar os valores da divisão.
				num1 = num1/2;
				num2 = num2/2;
				// A variável do mmc já e calculada.
				mmc = mmc * 2;
			}
			// Se apenas o primero for divisivel por dois.
			else if(num1%2 == 0){
				num1 = num1/2;
				mmc = mmc * 2;
			}
			// Se nenhuma das duas estiver correta então o segundo numero é divisível por 2.
			else{
				num2 = num2/2;
				mmc = mmc * 2;
			}
		}

		// Se algum dos termos forem divisiveis por três.
		else if(num1%3 == 0 || num2%3 == 0){
			// Para exibir a fatoração corretamente a cada inicio de if printaremos o resultado atual com a divisão anterior.
			printf("%d,\t%d\t | 3\n", num1, num2);
			// Se todos os numeros forem divisiveis por três.
			if(num1%3 == 0 && num2%3 == 0){
				// As variaveis dos numeros passa a guardar os valores da dovisão.
				num1 = num1/3;
				num2 = num2/3;
				// A variável do mmc já e calculada.
				mmc = mmc * 3;
			}
			// Se apenas o primero for divisivel por três.
			else if(num1%3 == 0){
				num1 = num1/3;
				mmc = mmc * 3;
			}
			// Se nenhuma das duas estiver correta então o segundo numero é divisível por 3.
			else{
				num2 = num2/3;
				mmc = mmc * 3;
			}
		}

		// Se algum dos termos forem divisiveis por 5
		else if(num1%5 == 0 || num2%5 == 0){
			// Para exibir a fatoração corretamente a cada inicio de if printaremos o resultado atual com a divisão anterior.
			printf("%d,\t%d\t | 5\n", num1, num2);
			// Se todos os numeros forem divisiveis por cinco.
			if(num1%5 == 0 && num2%5 == 0){
				// As variaveis dos numeros passa a guardar os valores da dovisão.
				num1 = num1/5;
				num2 = num2/5;
				// A variável do mmc já e calculada.
				mmc = mmc * 5;
			}
			// Se apenas o primero for divisivel por cinco.
			else if(num1%5 == 0){
				num1 = num1/5;
				mmc = mmc * 5;
			}
			// Se nenhuma das duas estiver correta então o segundo numero é divisível por 5.
			else
				num2 = num2/5;
				mmc = mmc * 5;
			}
		}
		printf("%d\t%d\t | \n", num1, num2);
		printf("O MMC de %d e %d eh: %d\n", num1Ori, num2Ori, mmc);
	}