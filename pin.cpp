#include<iostream>
using namespace std;

int main() {
	int pin = 1234, enterpin, pinerror = 0;
	do {
		cout << "Enter Pin: ";
		cin >> enterpin;
		pinerror++;
	} while (pinerror < 3 && enterpin != pin);

	if (pinerror < 3) {
		cout << "Loading..";
	}
	else {
		cout << "Error.";
	}
}

