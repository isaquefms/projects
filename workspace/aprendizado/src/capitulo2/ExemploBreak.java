package capitulo2;

import java.util.Scanner;

public class ExemploBreak {
	public static void main(String args[]) {
		// Leitura do número máximo de pares desejados
		System.out.print("Máximo no pares ? ");
		Scanner s = new Scanner(System.in);
		int max = s.nextInt(); // Variável para o número máximo de pares
		int pares = 0; // Variável para contar pares encontrados
		for (int i=0; i<1000; i++) {
			if (i%2==0) {
				pares++;
				System.out.printf("i = %4d pares = %4d%n ", i, pares);
			}
			if (pares==max) { break; }
		}
		s.close();
	}
}
