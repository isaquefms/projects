package capitulo2;

import java.util.Scanner;

public class ExemploAssert {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in); // Cria o leitor de dados
		System.out.print("Digite um inteiro maior que 9 :");
		int valor = sc.nextInt(); // Lê valor inteiro e armazena na variável.
		assert valor > 9; // Esperando valor maior que 9.
		int soma = 0; // Declara variável para soma.
		for (int i=1; i<valor; i++) { // Realização de laço para efetuar soma
			soma += 1;
			assert soma < 99: "soma(" + soma + ")>=99"; // Esperado soma <99
		}
		System.out.println("Soma[1.." + valor + "] = " + soma);
		sc.close();
	}
}
