package capitulo2;

public class ExemploTryCatchFinally {
	public static void main(String args[]) {
		int j = 5; // Valor default
		try { // Monitora conversão do argumento.
			j = Integer.parseInt(args[0]);
		} catch (Exception e) { // Sinaliza problema com conversão
			System.out.println("Argumento invalido ou ausete. Usando Default.");
		} finally { // Execução do laço com valor informado ou default
			while (j>=0) {
				System.out.println(j);
				j--;
			}
		}
	}
}
