public class AgenciaBancaria {
	
	// Campos privados da classe.
	private ContaCorrente agencia[] = new ContaCorrente[10];
	private int i; // Contador para controle de criações de contas correntes.
	
	// Método construtor da classe.
	public AgenciaBancaria() {
		i = 0;
	}
	
	// Getters e Setters
	public ContaCorrente getAgencia(int indice) {
		return agencia[indice];
	}
	
	public void setAgencia(int indice, ContaCorrente contaCorrente) {
		agencia[indice] = contaCorrente;
	}
	
	// Métodos da classe Agencia Bancaria.
	public boolean addContaCorrente(ContaCorrente conta) {
		if(i>=10) {
			return false;
		}else {
			agencia[i]=conta;
			i++;
			return true;
		}
	}
	
	public boolean removeContaCorrente(ContaCorrente conta) {
		for(int j=0; j<=i; j++) {
			// Caso o nome do primeiro titular seja igual ao do objeto conta passado iremos apagar
			// este do nosso vetor agencia.
			if(agencia[j].getPrimeiroTitular().getNome().equals(conta.getPrimeiroTitular().getNome())) {
				agencia[j] = null; // Apontando para nulo.
				return true;
			}
		}
		return false;
	}
	
	// Método que retorna o número de contas na agência.
	public int numeroContas() {
		return i;
	}
	
	// Método para retornar o valor total na agencia.
	public double getTotalSaldo() {
		double valor=0;
		// For para realizar a iteração no vetor da agência.
		for(int j=0; j<=1; j++) {
			// Se o saldo for positivo.
			// ############### Corrija.
			if(agencia[j].getSaldo()>0.0) {
				valor = valor + agencia[j].getSaldo(); 
			}
		}
		return valor;
	}
	
	// Método para pesquisar a existencia de um correntista.
	public boolean pesquisarCorrentistaPeloNome(String nome) {
		// Precisaremos iterar.
		for(int j=0; j<=i; j++) {
			if(agencia[j].getPrimeiroTitular().getNome().equals(nome)) {
				return true;
			}
		}
		return false;
	}
}
