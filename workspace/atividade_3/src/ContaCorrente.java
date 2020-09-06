public class ContaCorrente {

	// Campos privados necessários.
	private Pessoa primeiroTitular;
	private Pessoa segundoTitular;
	private double saldo;
	
	// Construtor
	public ContaCorrente(Pessoa primeiroTitular, Pessoa segundoTitular, double saldo) {
		this.primeiroTitular = primeiroTitular;
		this.segundoTitular = segundoTitular;
		this.saldo = saldo;
	}
	
	// Getters e Setters
	public Pessoa getPrimeiroTitular() {
		return primeiroTitular;
	}
	
	public void setPrimeiroTitular(Pessoa primeiroTitular) {
		this.primeiroTitular = primeiroTitular;
	}
	
	public Pessoa getSegundoTitular() {
		return segundoTitular;
	}
	
	public void setSegundoTitular(Pessoa segundoTitular) {
		this.segundoTitular = segundoTitular;
	}
	
	public double getSaldo() {
		return saldo;
	}
	
	public void setSaldo(double saldo) {
		this.saldo = saldo;
	}
	
	// Métodos Públicos
	public boolean sacar(double valor) {
		if(valor < saldo) {
			saldo = saldo - valor;
			return true;
		}else {
			return false;
		}
	}
	
	public boolean depositar(double valor) {
		if(valor > 0.0) {
			saldo = saldo + valor;
			return true;
		}else {
			return false;
		}
	}
}
