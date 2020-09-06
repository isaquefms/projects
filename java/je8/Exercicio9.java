/**
 *  Escreva um programa que efetue a leitura de três valores reais R, S e T,
 *  imprimindo qual deles é o maior.
 */

package execcap2;

import java.util.Scanner;

public class Exercicio9 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in); // Preparando o cosole para leitura
		System.out.print("Insira o 1o valor real : ");
		double r = sc.nextDouble();
		System.out.print("Insira o 2o valor real : ");
		double s = sc.nextDouble();
		System.out.print("Insira o 3o valor real : ");
		double t = sc.nextDouble();
		if (s > r && s > t) {
			System.out.println("O maior valor eh " + s);
		} else if (r > s && r > t) {
			System.out.println("O maior valor eh " + r);
		} else {
			System.out.println("O maior valor eh " + t);
		}
		sc.close(); // Fechando o console
	}
}
