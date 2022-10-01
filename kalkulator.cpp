#include<iostream>
using namespace std;

int main(){
	float num1, num2;
	char operation;
	int a = 9999999;
	cout<<"KALKULATOR GW"<<endl<<endl;
	cout<<"ingfo: gunakan '+' untuk nambah, '-' untuk ngurang, '*' untuk ngali, '/' untuk bagi, '%' untuk ngitung modulo"<<endl<<endl;
	cout<<"contoh '7%4', ntar hasilnya '7%4=3, gitu xixixi "<<endl<<endl;
	for(int i = 1; i<=a;i++){
		cin>>num1>>operation>>num2;
		switch(operation)
	{
		case '-':cout<<num1<<" - "<<num2<<"="<<num1-num2<<endl<<endl; break;
		case '+':cout<<num1<<" + "<<num2<<"="<<num1+num2<<endl<<endl; break;
		case '*':cout<<num1<<" x "<<num2<<"="<<num1*num2<<endl<<endl; break;
		case '/':cout<<num1<<" : "<<num2<<"="<<num1/num2<<endl<<endl; break;
		case '%':
			bool isNum1int, isNum2int;
			isNum1int = ((int)num1 == num1);
			isNum2int = ((int)num2 == num2);
			
			if(isNum1int && isNum2int){
				cout<<num1<<" mod "<<num2<<"="<<(int)num1%(int)num2<<endl<<endl;
			}
			else{
				cout<<"gabisa di mod njir"<<endl<<endl;
			}
			break;
			default:cout<<"baca lagi ingfo diatas bang"<<endl<<endl;
	}
	}
	
	
	
	
	system("pause>0");
}
