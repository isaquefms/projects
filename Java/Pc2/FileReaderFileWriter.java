import java.io.FileReader;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.BufferedReader;
import java.io.FileNotFoundException;

public class FileReaderFileWriter{

	public static void main(String[] args) {
		// Objeto do tipo arquivo.
		File file = new File("teste.txt");

		// Criando um arquivo.
		try {
			file.createNewFile();	
		} catch(IOException e) {
			e.printStackTrace();
		}

		// FileWriter object
		try {
			FileWriter fw = new FileWriter(file);
			// Escrevendo nada com nada.
			fw.write("Isaque\n");
			fw.write("123\n");
			fw.write("isaque@isaque.com");
			fw.write("\n");
			fw.write("\\");
			fw.flush();
			fw.close();	
		} catch(IOException e) {
			e.printStackTrace();
		}

		// Lendo o arquivo.
		try { // try para leitura do arquivo.
			FileReader fr = new FileReader(file);
			BufferedReader br = new BufferedReader(fr);
			String s;
			try { // try para caso o BufferedReader retorne algum erro.
				while((s = br.readLine()) != null){
					System.out.println(s);
				}
				fr.close();	
			} catch(IOException e) {
				e.printStackTrace();
			}
			
		} catch(FileNotFoundException e) {
			e.printStackTrace();
		}
	}
}