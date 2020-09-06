public class Mesa {
	public static void main(String[] args){
		Carta aAux, bAux; // Variaveis para comparacao.
		System.out.println("Comecando o jogo...");
		Baralho br = new Baralho();
		Jogador a = new Jogador(5); // Jogador com 5 cartas.
		Jogador b = new Jogador(5); // Vide acima.
		System.out.println("Embaralhando o jogo...");
		br.embaralhar();
		// Recebendo cartas.
		for(int i=0; i<5; i++){
			a.receberCarta(i, br.distribuirCarta());
			b.receberCarta(i, br.distribuirCarta());
		} // Recebi as cartas.
		// Comparacao de valores.
		aAux = a.maiorCarta();
		bAux = b.maiorCarta();
		System.out.printf("%s, %d\n",aAux.getNaipe(), aAux.getValor());
		System.out.printf("%s, %d\n",bAux.getNaipe(), bAux.getValor());
		// O erro está acontecndo na atribuição da maior carta.
		/*if(aAux.getValor()>bAux.getValor()){
			System.out.printf("O jogador A joga a carta de naipe %s e de valor %d", aAux.getNaipe(), aAux.getValor());
		}else if(bAux.getValor()>aAux.getValor()){
			System.out.printf("O jogador B joga a carta de naipe %s e de valor %d", bAux.getNaipe(), bAux.getValor());
		}else{ // Caso a e b tenham cartas do mesmo valor.
			if(aAux.getNaipe().equals("Ouros") && bAux.getNaipe().equals("Ouros")){
				System.out.println("Empate ..");
			}else if(aAux.getNaipe().equals("Ouros")){
				System.out.println("O jogador A ganhou pelo naipe...");
			}else if(bAux.getNaipe().equals("Ouros")){
				System.out.println("O jogador B ganhou pelo naipe...");
			}else{
				System.out.println("Empate ..");
			}
		}*/
	}
}
