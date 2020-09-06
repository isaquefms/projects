/*
* Escreva uma função que recebe como parâmetros 3 números inteiros correspondendo aos valores de
* dia, mês e ano, respectivamente, e retorna o número de dias já transcorridos neste ano. Utilize a
* função implementada no exercício anterior para determinar se o ano é bissexto (no ano bissexto o
* mês de fevereiro tem 29 dias).
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

int diasCorridosAno(int dia, int mes, int ano){
	int diasCorridos=0, controle, cont; // cont irá rodar o loop do mês 2 até o mes atual. Não podemos incluir o mês de janeiro.
	diasCorridos = dia-1; // diasCorridos iniciará com o numero de dias que já passaram - 1. Estamos subtraindo pois o dia atual não conta.
	controle = anoBissexto(ano); // Controle receberá o valor de analise. Caso sejá bissexto será igual a 1.
	for(cont=2; cont<=mes; cont++){ // As condicionais anlisarão se o mês já passou.
		if(cont==3 && controle==1){ // Fevereiro bissexto.
			diasCorridos = diasCorridos + 29;
		}
		else if(cont==5 || cont==7 || cont==10 || cont==12){ // Meses que se passaram foram de 30 dias.
			diasCorridos = diasCorridos + 30; // Meses com 30 dias
		}
		else if(cont==2 || cont==4 || cont==6 || cont==8 || cont==9 || cont==11){ // Meses que se passaram foram de 31 dias.
			diasCorridos = diasCorridos + 31; // Meses com 30 dias.
		}
		else{ // Outros casos que se resume março onde fevereiro nao foi bissexto.
			diasCorridos = diasCorridos + 28;
		}
	}
	return diasCorridos;
}

void main(){
	int dia, mes, ano;
	printf("Insira a data atual no formato dd mm aaaa: ");
	scanf("%d %d %d", &dia, &mes, &ano);
	printf("Dias Corridos ate o momento: %d\n", diasCorridosAno(dia, mes, ano));
} 