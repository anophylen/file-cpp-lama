#include <bits/stdc++. h>
using namespace std;

int main(){
	string b, a, c;
	
	cout<<"bole kenalan?"<<endl;
	cin>>b;
	
	if (b == "ya"){
		cout << "baiklah, siapa nama panggilanmu?"<<endl;
		
		cin.ignore();
		getline(cin,a);
		
		cout<<"hi "<<a<<" bagaimana kabarmu?"<<endl;
		cin>>c;
		
		if(c == "baik"){
			cout<<"ok sep"<<endl;
		}
		else{
			cout<<"mampus"<<endl;
		}
		
	}
	
	else if (b == "tidak"){
		cout<<"yodah";
	}
	
	
	system("pause>0");
}
