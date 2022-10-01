#include<iostream>
using namespace std;

int main()
{
	float weight, height, bmi;
	cout <<"weight(kg), height(m): "<<endl;
	cin >> weight >> height; 
	bmi = weight/(height*height);
	
	if(bmi < 18.5){
		cout<<"Underweight"<<endl;
	}
	else if(bmi > 25){
		cout<<"Overweight"<<endl;
	}
	else{
		cout<<"Normal Weight"<<endl;
	}
	cout<<"Your BMI is "<<bmi;
	
	
	system("pause>0");
}
