#include<iostream>
using namespace std;

int main(){
	int pin, error=0;
	float num1, num2;
	char operation;
	
	do {
		cout<<"Welcome Back Akhdan"<<endl;
		cout<<"Enter Your Pin: ";
		cin>>pin;
		
		if(pin != 7624){
			error++;
		}
	}while(error<3 && pin != 7624);
	
	if(error<3){

	
	cout<<"**akalkulatoru**"<<endl;
	cin>>num1>>operation>>num2;
	
	switch(operation)
	{
		case '-':cout<<num1<<operation<<num2<<"="<<num1-num2; break;
		case '+':cout<<num1<<operation<<num2<<"="<<num1+num2; break;
		case '*':cout<<num1<<operation<<num2<<"="<<num1*num2; break;
		case '/':cout<<num1<<operation<<num2<<"="<<num1/num2; break;
		case '%':
			bool isNum1int, isNum2int;
			isNum1int = ((int)num1 == num1);
			isNum2int = ((int)num2 == num2);
			
			if(isNum1int && isNum2int){
				cout<<num1<<operation<<num2<<"="<<(int)num1%(int)num2;
			}
			else{
				cout<<"Not Valid!";
			}
			break;
			default:cout<<"Not valid operation";
	}
	
		
	}
	else{
		cout<<"Yo";
	}
	system("pause>0");
}
