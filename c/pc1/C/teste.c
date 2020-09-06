/*
* Implemente um programa solicita ao usuário a hora de inicio e a hora de término de um
* jogo, ambas subdivididas em 2 valores distintos: horas e minutos. O programa deve calcular
* e exibir a duração do jogo em minutos. Considere que o tempo máximo de duração de um
* jogo é de 24 horas e que o jogo pode começar em um dia e terminar no outro.
*/

#include <stdio.h>

main(){
	int h = 0, m = 0, horas, minutos, horasIniciais, minutosInuciais;
	printf("Insira as horas e os minutos do inicio do jogo: ");
	scanf("%d %d", &horas, &minutos);
	horasIniciais = horas;
	minutosInuciais = minutos;
	// Vamos executar um loop para adicionar as exatas 24 horas ou os 1440 minutos no tempo atual
	// Vamos simular um relogio
	while(h<=24){
		// Se horas forem iguais a 24 reiniciamos o relógio.
		if(horas == 24){
			horas = 0;
		}
		// A cada loop de horas reiniciamos a váriavel do "mini-relogio" que conta os minutos.
		m = 1;
		while(m<=59){
			// Se a variável de entrada do usuário que recebe os minutos for igual a 60, reiniciamos os minutos e horas recebe mais uma hora.
			if(minutos == 59){
				minutos = 0;
				horas++;
				m++;
				printf("%d:%d\n", horas, minutos);
			}
			else{
				minutos++;
				m++;
				printf("%d:%d\n", horas, minutos);
			}
		}
		h++;
	}
	// Printando o resultado
	printf("O jogo iniciou as %d:%d e terminou as %d:%d\n", horasIniciais, minutosInuciais, horas, minutos);
}
