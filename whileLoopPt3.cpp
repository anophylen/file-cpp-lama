#include<iostream>
using namespace std;

int main()
{
	//Reversing Number
	
	int number, reversedNumber = 0;
	cout<<"Number: ";
	cin>>number; //725
	
	while(number!=0)
	{
		reversedNumber *= 10;//0 50 520
		reversedNumber += number%10; //0+5=5 50+2=52 520+7=527
		number /=10;//72 7 0
	}
	
}
