package capitulo2;

public class ExemploAnotacao {
	public static void main(String[] args) {
		System.out.println("Valor aleatorio: " + Anotacoes.random());
	}
}

class Anotacoes {
	@Deprecated
	public static double random() { return Math.random(); }
	
	@Override
	@SuppressWarnings("unused")
	public String toString() {
		int x;
		return "ExemploAnotação";
	}
}
