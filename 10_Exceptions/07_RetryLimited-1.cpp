// Retrying at most three times

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

#define TIMEOUT (rand() % 10 != 0)
#define MAX_ATTEMPTS	3

class SendError {};


void send(string s) {
	// open the network connection
	// try to send s over the network
	if (TIMEOUT)
		throw SendError();
	// close the network connection
}

int main() {
	//...
	long seed = time(0);
	cout << "random seed = " << seed << endl;
	srand(seed);
	
	int attempts = 0;
	while (attempts < MAX_ATTEMPTS)
		try {
			send("Hello");
			cout << "message sent successfully\n";
			break;
		} catch(SendError ex) {
			cerr << "could not send the message";
			attempts++;
			if (attempts < MAX_ATTEMPTS)
				cerr << ", retrying...";
			cerr << endl;
		}

	//...
}
