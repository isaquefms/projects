/*
* Implemente uma função que retorna 1 quando o ano (passado como parâmetro) for bissexto e 0, caso
* contrário.
* Um ano não divisível por 100 e divisível por 4 é bissexto;
* Um ano divisível por 100 e divisível por 400 é bissexto;
* Os demais anos não são bissextos.
*/

#include <stdio.h>

int anoBissexto(int ano){
	if(ano%100!= 0 && ano%4==0){ // Se o ano não for divisivel por 100 e for divisivel por 4
		return 1;
	}
	else if(ano%100==0 && ano%400==0){ // Se o ano for divisivel por 100 e por 400
		return 1;
	}
	else{ // Outros casos
		return 0;
	}
}

void main(){
	int ano;
	printf("Insira o ano que dejesa consultar: ");
	scanf("%d", &ano);
	printf("Legenda: \n");
	printf("Resultado igual a 1, Ano Bissexto!\n");
	printf("Resultado igual a 0, Ano Nao Bissexto!\n");
	printf("Resultado: %d\n", anoBissexto(ano));
}