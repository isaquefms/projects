import java.util.HashMap;
import java.util.Set;

public class NovaAgenda{
    // Campos da classe.
    private HashMap<String, Contato> contatos;

    // Construtor default.
    public NovaAgenda(){
        contatos = new HashMap<String, Contato>();
    }

    // Getters and Setters.
    public HashMap<String, Contato> getContatos(){
        return contatos;
    }

    public void setContatos(HashMap<String, Contato> contatos){
        this.contatos = contatos;
    }

    // Metodos da Classe.
    // Adicionar uma objeto.
    public void addContato(String nome, Contato c){
        contatos.put(nome, c);
    }

    // Exibir o numero de objetos.
    public int quantContatos(){
        return contatos.size();
    }

    // Exibir um contato.
    public void exibirContato(String nome){
        Contato aux = contatos.get(nome);
        System.out.println(aux.getNome());
        System.out.println(aux.getTelefone());
        System.out.println(aux.getEmail());
    }

    // Excluir um contato.
    public void excluirContato(String nome){
        contatos.remove(nome);
    }

    // Exibir todos os contatos da agenda.
    public void exibirContatos(){
    	Contato aux;
    	Set<String> chaves = contatos.keySet();
    	System.out.println("Exibindo Contatos !!");
    	for(String chave : chaves) {
    		if(chave != null) {
    			aux = contatos.get(chave);
    			System.out.println("");
    			System.out.println();
    			System.out.println("=========");
    			System.out.println(aux.getNome());
    			System.out.println(aux.getTelefone());
    			System.out.println(aux.getEmail());
    		}
    	}
    }
}

