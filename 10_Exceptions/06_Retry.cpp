// Retrying in case of exception

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

#define TIMEOUT (rand() % 10 != 0)

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
	
	bool not_sent = true;
	while (not_sent)
		try {
			send("Hello");
			not_sent = false;
		} catch(SendError ex) {
			cerr << "could not send the message, retrying...\n";
		}

	//...
}
