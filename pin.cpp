#include<iostream>
using namespace std;

int main(){
	int pinUser=4321, pin, pinEror=0;
	
	do {
		cout <<"Pin: ";
		cin >> pin;
		if (pin != pinUser){
			pinEror++;
		}
	}while (pinEror < 3 && pin !=pinUser);
	if (pinEror < 3){
		cout<<"Loading...";
	}
	else{
		cout<<"Blocked...";
	}
}
