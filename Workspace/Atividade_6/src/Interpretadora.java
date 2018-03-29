import java.util.HashSet;
import java.util.Iterator;

public class Interpretadora {
	// Campos da classe.
	// HashSet é um tipo de elemento que armazena os dados
	// não repetindo estes caso um igual seja adicionado.
	private HashSet<String> palavraChave;
	private Iterator<String> it;
	
	// Construtores da classe.
	public Interpretadora(String problema) {
		palavraChave = new HashSet<String>();
		// palavrasChave irá receber um vetor de strings
		// cada uma separada atravez do método split.
		// O criterio de separação e o espaco.
		String[] palavras = problema.split(" ");
		// Preenchendo o HashSet com as strings.
		for(int i=0; i<palavras.length; i++) {
			palavraChave.add(palavras[i]);
		}
		// Depois de preenchido instancio o iterator.
		it = palavraChave.iterator();
	}
	
	// Esse método quando for chamado irá retornar um elemento do HashSet.
	public String proximaPalavraChave() {
		while(it.hasNext()) {
			return it.next();
		}
		// Quando acabar...
		return "Fim";
	}	
}
