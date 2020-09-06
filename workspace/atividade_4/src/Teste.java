import java.util.Random;

public class Teste {
	public static void main(String[] args) {
		// Preenchendo meu vetor de notas.
		Enquete e = new Enquete();
		Random r = new Random();
		for(int i=0; i<10; i++) {
			e.inserirNotas(r.nextInt(10)+1);
		}
		// Mostrar minhas notas.
		System.out.println("Mostrando meu Vetor Notas ...");
		for(int j=0; j<10; j++) {
			System.out.printf("%d ,", e.getNotas(j));
		}
		System.out.printf("Media das notas: %f", e.calcularMedia());
		// Frequência das notas.
		int y =1;
		for(int numeros : e.calcularFrequencia()) {
			System.out.printf("O valor %d apareceu %d vez(es)", y, numeros);
			y++;
		}
		// Número de clientes entrevistados.
		System.out.printf("Numero de clentes entrevistados: %d", e.clientesEntrevistados());
	}
}
