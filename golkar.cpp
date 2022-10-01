#include<iostream>
using namespace std;

void golongankaryawan(){
	int gol_karyawan, gajipokok;
	char nama_karyawan[50];
	
	cout<<"Masukkan nama karyawan \t\t: "; cin>>nama_karyawan;
	cout<<"Masukkan golongan karyawan \t: "; cin>>gol_karyawan;
	
	if(gol_karyawan == 1){
		gajipokok = 1200;
		cout<<"Gaji pokok Rp " <<gajipokok<< endl;
	} else if(gol_karyawan == 2){
		gajipokok = 1700;
		cout<<"Gaji pokok Rp " <<gajipokok<< endl;
	} else if(gol_karyawan == 3){
		gajipokok = 2000;
		cout<<"Gaji pokok Rp" <<gajipokok<< endl;
	} else{
		cout<<"tidak ada golongan tersebut"<<endl;
		cout<<endl;
	}
	cout << "=================================="<<endl;
	cout<< "keterangan karyawan"<<endl;
	cout<< "nama \t\t\t\t: "<< nama_karyawan<<endl;
	cout<<"golongan \t\t\t: "<<gol_karyawan<<endl;
	cout<<"gaji pokok \t\t\t: "<<gajipokok<<endl;
}

int main(){
	golongankaryawan();
}
