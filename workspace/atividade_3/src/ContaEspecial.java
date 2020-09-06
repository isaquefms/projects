public class ContaEspecial extends ContaCorrente{
	
	// Campos privados da classe ContaEspecial.
	private double limiteEspecial;
	
	// M�todo construtor da classe.
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
	
	// M�todos da classe.
	public boolean sacar(double valor) {
		// Compara��o b�sica para permiss�o do saque.
		// Vamos comparar se o valor � menor que o saldo primeiramente.
		// A segunda compara��o ser� chamada se o saldo for igual a zero
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
