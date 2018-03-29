package capitulo2;

public class ExemploTeste {
	public static void main(String args[]) {
		if (args.length > 0) { // Testa a presença de argumentos
			// Converte 1o argumento em inteiro
			int j = Integer.parseInt(args[0]);
			while (j >= 0) {
				System.out.println(j);
				j--;
			}
		} else { // Sinaliza o problema
			System.out.println("Falta um argumento inteiro");
		}
	}
}
