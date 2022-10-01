#include <iostream>
using namespace std;

int main(){
	int a;
	int error = 0;
	
	do{
		cout<<"PIN: ";
		cin>>a;
		if(a != 123456){
			error++;
		}
	}while(error<3 && a != 123456);
	if(error<3){
		cout<<"yeyy";
	}
	else {
		cout<<"yahh";
	}
}
