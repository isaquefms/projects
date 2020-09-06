/**
 *  Dados os valores de um depósito fixo mensal e um montante desejado,
 *  determine quantos meses serão necessários para acomular o montante
 *  desejado, considerando os juros mensais de 0,5%.
 */

package execcap2;

import java.util.Scanner;

public class Exercicio8 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in); // Prepara o console para leitura.
		int meses = 0;
		System.out.print("Qual é o valor do deposito : ");
		double dep = sc.nextDouble();
		System.out.print("Qual é o capital desejado : ");
		double cap = sc.nextDouble();
		while (dep < cap) {
			dep = dep * 1.005;
			++meses;
		}
		System.out.printf("Serao necessario %d meses para atingir o valor %f.", meses, cap);
		sc.close(); // Fechando o console para leitura.
	}
}
