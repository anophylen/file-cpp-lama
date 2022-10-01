#include<iostream>
using namespace std;

int main()
{
	int kandang;//5
	cin >> kandang;
	int totalbebek = 0;

	for (int i = 1; i >= kandang; i++) {
		int bebek;
		cin >> bebek;
		totalbebek = bebek + totalbebek;
	}
	cout << totalbebek;



}