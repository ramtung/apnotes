// in timer library code:

void set_timer(int millis, void(*call_back)(void)) {
	...
	call_back();
	...
}

// in my code:

void display_time() {
	...
}

int main() {
	set_timer(1000, display_time);
}