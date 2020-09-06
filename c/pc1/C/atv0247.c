/*
* Implemente um programa solicita ao usuário a hora de inicio e a hora de término de um
* jogo, ambas subdivididas em 2 valores distintos: horas e minutos. O programa deve calcular
* e exibir a duração do jogo em minutos. Considere que o tempo máximo de duração de um
* jogo é de 24 horas e que o jogo pode começar em um dia e terminar no outro.
*/

#include <stdio.h>

main(){
	int horaFinal, minutoFinal, horas, minutos, tempoTotal, contTempo=0;
	printf("Insira as horas e os minutos do inicio do jogo: ");
	scanf("%d %d", &horas, &minutos);
	tempoTotal = minutos + (horas*60);
	// Podemos pensar que 24 horas são exatamente 1440 minutos. Se transformarmos o horário de entrada em minutos podemos
	// adicionar o tempo pedido e depois calcular o horário novamente para exibir.

	// Enquanto contTempo que contará os 1440 minutos for menor que 1440 adicionaremos os minutos.
	while(contTempo<1439){
		// Vamos analisar de o tempo não execeu um dia. Caso exeda vamos "zerar" o dia.
		if(tempoTotal==1440){
			tempoTotal = 0;
		}
		// A cada loop adicionamos 1 minuto em tempoTotal e um minuto na contTempo;
		tempoTotal++;
		contTempo++;
	}

	// Recalculando o tempo horas e minutos
	horaFinal = tempoTotal/60;
	minutoFinal = tempoTotal%60;

	// Printando o resultado
	printf("O jogo iniciou as %d:%d e terminou as %d:%d\n", horas, minutos, horaFinal, minutoFinal);
}