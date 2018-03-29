public class Jogador {
	// Campos da classe.
	private Carta[] cartas; // Grupo de cartas.
	private int numeroCartas; // Com essa variavel eu sei antes de saber, kkkkk, qual o valor inserido pelo usu�rio.

	// Construtor da classe.
	public Jogador(int quantCartas){ // Defini��o do usu�rio.
		// Evitando problemas
		if(quantCartas > 52 || quantCartas < 0){
			// Numero maximo de cartas.
			cartas = new Carta[52];
			numeroCartas = quantCartas;
		}else{ // Caso esteja normal.
			cartas = new Carta[quantCartas];
		}
	}

	// Getters and Setters.
	public Carta[] getCartas(){
		return cartas;
	}

	public void setCartas(Carta[] cartas){
		this.cartas = cartas;
	}

	// Metodos da classe.
	public Carta maiorCarta(){
		// Variavel para retornar a carta de maior valor.
		int ind=0;
		// Variavel do tipo carta.
		Carta maior = new Carta();
		maior = cartas[0]; // Valor inicial. Carga para comparacao. Carga inicial.
		for(int i=0; i<numeroCartas; i++){ // numeroCartas sera muito util aqui.
			if(cartas[i].getValor()>maior.getValor()){ // Caso o valor atual seja maior que o guardado na vari�vel de compara��o.
				ind = i; // Guardamos o indice.
				maior = cartas[i]; // Precisamos trocar o valor de compara��o.
			}
		}
		return cartas[ind]; // Retornamos cartas no indice de maior valor;
	}

	// M�todo para receber as cartas.
	public void receberCarta(int indice, Carta carta){
		cartas[indice]=carta; // M�todo simples para receber a carta dada.
	}
}
