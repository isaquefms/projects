package capitulo2;

public class ExemploIf {
	public static void main(String args[]) {
		if (args.length > 0) { // Testa a presença de argumentos
			// Converte o 1o argumento para inteiro
			int max = Integer.parseInt(args[0]);
			for (int j=0; j<max; j++) {
				System.out.print(j + " ");
			}
			System.out.println("\nFim da Contagem");
		}
		System.out.println("Fim do Programa");
	}
}
