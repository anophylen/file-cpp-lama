#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	cin>>a;
	char s;
	cin>>s;
	
	for(int i=1;i<=a;i++){
		for(int j=a;j>=i;j--){
			cout<<setw(2)<<s;
		}
		cout<<endl;
	}
		cout<<endl<<endl;
		
	for(int i = 1; i<=a;i++){
		for(int j = 1; j<=i;j++){
			cout<<setw(2)<<s;
		}
		cout<<endl;
	}
	
	
	system("pause>0");
}
