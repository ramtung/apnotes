public class LightTest {
	public static void main(String[] args) {
		System.out.println("Hello");
		Light lt = new Light();
		lt.toggle();
		System.out.println(lt.isOn());
	}
}