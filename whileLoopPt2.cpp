#include <iostream>
using namespace std;

int main()
{
	//Count digits of a number
	int number;
	cout << "Number: ";
	cin >> number;
	
	if (number == 0){
		cout << "You have entered 0." <<endl;
	}
	else{
		if(number<0){
			number*=-1;
		}
		int counter = 0;
		while (number > 0){
			number /= 10; //number = number / 10
			counter++;
		}
		
		cout<<"Number contains "<<counter<<" digits"<<endl;
	}
}
