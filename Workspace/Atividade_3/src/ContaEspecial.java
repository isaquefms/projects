public class ContaEspecial extends ContaCorrente{
	
	// Campos privados da classe ContaEspecial.
	private double limiteEspecial;
	
	// Método construtor da classe.
	public ContaEspecial(Pessoa primeiroTitular, Pessoa segundoTitular, double saldo, double limiteEspecial) {
		super(primeiroTitular, segundoTitular, saldo);
		this.limiteEspecial = limiteEspecial;
	}
	
	// Getters e Setters.
	public double getLimiteEspecial() {
		return limiteEspecial;
	}
	
	public void setLimiteEspecial(double limiteEspecial) {
		this.limiteEspecial = limiteEspecial;
	}
	
	// Métodos da classe.
	public boolean sacar(double valor) {
		// Comparação básica para permissão do saque.
		// Vamos comparar se o valor é menor que o saldo primeiramente.
		// A segunda comparação será chamada se o saldo for igual a zero
		if(valor < getSaldo()) {
			setSaldo(getSaldo()-valor);
			return true;
		}else if(getSaldo() <= valor && valor <= limiteEspecial) {
			limiteEspecial = limiteEspecial - valor;
			return true;
		}else {
			return false;
		}
	}
}
