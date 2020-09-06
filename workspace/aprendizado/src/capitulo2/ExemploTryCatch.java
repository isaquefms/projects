package capitulo2;

public class ExemploTryCatch {
	public static void main(String args[]) {
		try { // Monitora eventuais problemas
			// Converte o 1o argumento em inteiro
			int j = Integer.parseInt(args[0]);
			while (j >= 0) {
				System.out.println(j);
				j--;
			}
		} catch (Exception e) { // Sinaliza que problemas foram encontrados
			System.out.println("Argumento não foi dado ou nao e inteiro.");
		}
	}
}
