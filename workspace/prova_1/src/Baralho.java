// Import necessario.
import java.util.Random;

public class Baralho {
	// Campos da classe.
	private Carta[] baralho = new Carta[52];
	private int contador; // Contador para controle de cartas distribuidas. Controle interno.

	// Construtor da classe;
	public Baralho(){
		// Iniciando contador.
		contador = -1;
		// Vetor de cartas.
		baralho = new Carta[52];
		// Variavel de indice do vetor;
		int ind=0;
		// Variavel para controle do naipe.
		String[] naipes = {"Copas", "Ouros", "Paus", "Espadas"};
		// Laco para preenchimento do baralho.
		for(int i=0; i<4; i++){
			for(int j=0; j<13; j++){
				baralho[ind] = new Carta(); // Preciso instanciar um objeto no meu vetor.
				baralho[ind].setNaipe(naipes[i]);
				baralho[ind].setValor(j+1);
				ind++;
			}
		}
	}

	// Getters and Setters.
	public Carta[] getBaralho(){
		return baralho;
	}

	public void setBaralho(Carta[] baralho){
		this.baralho = baralho;
	}

	// Metodos da classe.
	public void embaralhar(){
		Carta aux = new Carta(); // Elemento para troca.
		Random gerador = new Random();
		int ind1=0, ind2=0; // Dois indice iguais.
		for(int i=0; i<100; i++){ // Vou misturar 100 vezes.
			while(ind1==ind2){ // Enquanto ind1 for ind2 temos que buscar outros valores.
				ind1 = gerador.nextInt(53); // Ate 53.
				ind2 = gerador.nextInt(53); // Ate 53.
			} // Caso os indices sejam diferentes;
			// Troca de elementos.
			aux = baralho[ind1];
			baralho[ind1] = baralho[ind2];
			baralho[ind2] = aux;
		}
	}

	public Carta distribuirCarta(){
		// Vou distribuir em sequencia levando em conta que o baralho esteja como usuario quer.
		contador++; // Na primeira vez que o codigo for executado o contador sera igual a 0; Comecei ele com -1;
		return baralho[contador];
	}
}
