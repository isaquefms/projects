public class Enquete {
	// Campos da minha classe.
	private int[] notas;
	private int i; // Indice do nosso vetor de notas.
	
	// Método construtor da minha classe enquete.
	public Enquete(){
		notas = new int[10];
		i=0;
	}
	
	// Getters e Setters
	public int getNotas(int indice){
		return notas[indice];
	}
	
	public void setNotas(int nota, int indice){
		this.notas[indice] = nota;
	}
	
	// M�todos da classe Enquete.
	public boolean inserirNotas(int nota){
		if(i>9){
			return false;
		}else{
			notas[i]=nota;
			i++;
			return true;
		}
	}
	
	public double calcularMedia(){
		double soma = 0.0;
		double media = 0.0;
		int contador = 0;
		
		for(int j=0; j<i; j++) {
			if(notas[j]>0) {
				soma = soma + notas[j];
				contador++;
			}
		}
		media = soma / contador;
		return media;
	}
	
	public int[] calcularFrequencia(){
		int frequenciaNotas[] = new int[10];
		// int y=0;
		for(int j=0; j<=i; j++) {
			for(int k=0; k<i; k++) {
				// Arrumar.
				if(true){
					
				}
			}
		}
		return frequenciaNotas;
	}
	
	public int clientesEntrevistados() {
		return i;
	}
}
