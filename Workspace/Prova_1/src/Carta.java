public class Carta {
	// Campos da carta
	private String naipe;
	private int valor;
	
	// Construtor da classe.
	public Carta(String naipe, int valor){
		this.naipe = naipe;
		this.valor = valor;
	}
	
	public Carta(){
		// Construtor sem parametros, caso eu precise.
	}
	
	// Getters and Setters
	public String getNaipe(){
		return naipe;
	}
	
	public void setNaipe(String naipe){
		this.naipe = naipe;
	}
	
	public int getValor(){
		return valor;
	}
	
	public void setValor(int valor){
		this.valor = valor;
	}
}
