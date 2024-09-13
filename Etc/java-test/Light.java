public class Light {
	private boolean on = false;

	public void toggle() {
		on = !on;
	}

	public boolean isOn() {
		return on;
	}
}