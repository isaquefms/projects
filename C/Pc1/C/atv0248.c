/* Implemente um programa que solicita ao usuário um valor inteiro correspondente à idade
* de uma pessoa em dias e informe­a em anos, meses e dias.Obs.: apenas para facilitar o cálculo, 
* considere todo ano com 365 dias e todo mês com 30 dias. Nos
* casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou
* 364. Este é apenas um exercício com objetivo de testar raciocínio matemático simples.
*/
#include <stdio.h>

main(){
	int idade, anos, meses, dias;
	printf("Insira a idade em dias :");
	scanf("%d", &idade);
	// Pensando de forma simples o número que o usuário inserir pode ser dividido por 365 para obtermos os anos.
	anos = idade/365;
	// Para obtermos os mesês tomamos o modulo de idade por 365.
	meses = (idade%365)/30;
	// Para dias nós pegamos o restante de tudo.
	dias = (idade%365)%30;

	// Printando o resultado
	printf("%d ano(s), %d mes(es), %d dia(s)\n", anos, meses, dias);
}