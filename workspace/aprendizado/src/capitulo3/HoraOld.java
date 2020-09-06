package capitulo3;

public class HoraOld {
	public int hor, min, seg; // Tres atributos do tipo int
	public void setHorario(int h, int m, int s) {
		hor = h; min = m; seg = s;
	}
	
	public String toString() {
		return hor + ":" + min + ":" + seg;
	}
}
