package capitulo2;

import java.util.Scanner;

public class Arranjo {
	public static void main(String[] args) {
		int a[] = new int[10]; // Declara e aloca arranjo inteiro
		Scanner sc = new Scanner(System.in); // Prepara o console para leitura
		for (int i=0; i<a.length; i++) { // Lê valores para arranjo
			System.out.print("a[" + i + "]? ");
			a[i] = sc.nextInt();
		}
		int soma = 0; // Exibe arranjo e soma seus elementos
		for (int i=0; i<a.length; i++) {
			System.out.println("a[" + i + "] = " + a[i]);
			soma += a[i];
		}
		System.out.println("Soma = " + soma); // Exibe soma obtida
		sc.close();
	}
}
