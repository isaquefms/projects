package capitulo3;

import java.util.Scanner;

public class UsaHora {
	public static void main(String[] args) {
		Hora hora = new Hora(); // Declara e instancia objeto tipo hora
		hora.setHorario(15, 30, 10); // Ajusts o objeto com valores válidos
		System.out.println("Hora : " + hora.toString()); // Exibe hora
		Scanner sc = new Scanner(System.in); // Prepara console para leitura
		// Lê valores de hora, minuto e segundo em variáveis auxiliares
		System.out.print("Horas ? "); int h = sc.nextInt();
		System.out.print("Minutos ? "); int m = sc.nextInt();
		System.out.print("Segundos ? "); int s = sc.nextInt();
		sc.close();
		hora.setHorario(h, m, s); // Ajusta objeto com valores dados
		System.out.println("Hora : " + hora.toString()); // Exibe hora
		if (hora.getHoras() >= 18 || hora.getHoras() < 6)
			System.out.println("E noite!");
		else
			System.out.println("E dia");
	}
}
