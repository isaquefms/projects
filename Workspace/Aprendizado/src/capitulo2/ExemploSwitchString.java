package capitulo2;

import java.text.DateFormat;
import java.time.LocalDate;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
import java.util.Date;

public class ExemploSwitchString {
	public static void main(String args[]) {
		if (args.length > 0) { // Testa a presença de argumentos
			switch (args[0].toLowerCase()) { // Avalia o texto do 1o argumento
				case "data":
					System.out.println(DateFormat.getDateInstance().format(new Date()));
					break;
				case "hora":
					System.out.println(DateFormat.getTimeInstance().format(new Date()));
					break;
				case "nova-data":
					System.out.println(LocalDate.now().format(DateTimeFormatter.ofPattern("dd/MMMM/yyyy")));
					break;
				case "nova-hora":
					System.out.println(LocalTime.now().format(DateTimeFormatter.ofPattern("hh:mm:ss")));
					break;
				default:
					System.out.println("Comando Invalido !!");
			}
		} else {
			System.out.println("Não foi fornecido argumento.");
		}
	}
}
