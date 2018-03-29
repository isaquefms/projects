/**
 *  Escreva um programa que efetue a leitura de um valor inteiro N deter-
 *  minando o valor total da soma dos termos: 1 - 1/2 + 1/3 - 1/4 + ... até 1/N.
 */

package execcap2;

import java.util.Scanner;

public class Exercicio14 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in); // Preparando o console para leitura
		System.out.print("Digite um numero inteiro : ");
		double n = sc.nextInt();
		double soma = 1;
		double i = 2;
		while(i<=n) { // Laço para contagem
			if ((i%2) == 0) { // Testa de i eh par
				soma = soma - (1/i);
			} else { // Se for impar
				soma = (soma + (1 / i));
			}
			i++;
		}
		System.out.println("O valor da soma total dos termos eh : " + soma);
		sc.close(); // Fechando o console para leitura
	}
}
