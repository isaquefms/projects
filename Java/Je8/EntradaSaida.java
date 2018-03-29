package capitulo2;

import java.util.Scanner; // Importação da classe Scanner do pacote java.util

public class EntradaSaida {
	public static void main(String[] args) {
		System.out.println("Olá !!"); // Mensagem inicial
		System.out.print("Digite um valor inteiro :"); // Exibe mensagem
		Scanner s = new Scanner(System.in); // Prepara a entrada de dados
		int valor = s.nextInt(); // Declara e inicia variavel
		System.out.println("Valor = " + valor); // Exibe valor lido
		s.close(); // Fecha o objeto leitor
	}
}
