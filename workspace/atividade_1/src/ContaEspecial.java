public class ContaEspecial extends Conta{
	
	private double limite;
	
	public ContaEspecial(Pessoa p, double limite) {
		super(p);
		setTitular(p);
		this.limite = limite;
	}
	
	public double getLimite() {
		return limite;
	}
	
	public void setLimite(double limite) {
		this.limite = limite;
	}
	
	public boolean sacar(double valor) {
		valor = Math.abs(valor);
		double saldo = getSaldo();
		if(saldo==0 && valor <= limite) {
			saldo = saldo - valor;
			setSaldo(saldo);
			return true;
		}else {
			return false;
		}
	}
}
