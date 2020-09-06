/**
 *  Escreva um programa que efetue a leitura de um valor inteiro e outro real,
 *   exibindo-os no console. 
 */

package execcap2;

import java.util.Scanner;

public class Exercicio3 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in); // Prepara o console para leitura
		System.out.print("Digite um numero inteiro : ");
		int i = sc.nextInt();
		System.out.print("Digite um numero real : ");
		double r = sc.nextDouble();
		System.out.printf("Seu numero inteiro eh : %d . Seu numero real eh : %f", i, r);
		sc.close(); // Fechado o console.
	}
}
