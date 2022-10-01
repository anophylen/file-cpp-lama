#include <iostream>
using namespace std;

int main()
{
	//program for swapping values of two variables without third variable
	
	int a;
	int b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	a = a+b;
	b = a-b;
	a = a-b;
	
	cout << "a = "<< a << ", b = "<< b <<endl;
	
	system("pause>0");
}



