public class Conta {
	
	private double saldo;
	private Pessoa titular;
	private int numero;
	
	public Conta(Pessoa p) {
		titular = p;
		saldo=0;
		numero= (int) (Math.random()*100);
	}
	
	public boolean sacar(double valor) {
		valor = Math.abs(valor);
		if(saldo > valor) {
			saldo = saldo - valor;
			return true;
		}else {
			return false;
		}
	}
	
	public void depositar(double valor) {
		saldo = saldo + valor;
	}
	
	public double getSaldo() {
		return saldo;
	}
	
	public void setSaldo(double saldo) {
		this.saldo = saldo;
	}
	
	public int getNumero() {
		return numero;
	}
	
	public void setNumero(int numero) {
		this.numero = numero;
	}
	
	public Pessoa getTitular() {
		return titular;
	}
	
	public void setTitular(Pessoa p) {
		this.titular = p;
	}
}
