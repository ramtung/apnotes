// Refactoring send function

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

#define TIMEOUT (rand() % 10 != 0)
#define MAX_ATTEMPTS	3

class SEND_ERROR {};

void open_connection() {}
void close_connection() {}

void send_data(string s) {
	// try to send s over the network
	if (TIMEOUT)
		throw SEND_ERROR();
}

void send(string s) {
	open_connection();
	int attempts = 0;
	while (attempts < MAX_ATTEMPTS)
		try {
			send_data(s);
			cout << "message sent successfully\n";
			break;
		} catch(SEND_ERROR ex) {
			cerr << "could not send the message";
			attempts++;
			if (attempts < MAX_ATTEMPTS)
				cerr << ", retrying...";
			else {
				close_connection();
				throw;
			}
			cerr << endl;
		}
	close_connection();
}

int main() {
	//...
	long seed = time(0);
	cout << "random seed = " << seed << endl;
	srand(seed);
	
	send("Hello");

	//...
}
