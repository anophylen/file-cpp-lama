#include <bits/stdc++.h>
using namespace std;

struct tanggalLahir {
	int tanggal, bulan, tahun;
};
struct alamat {
	string NamaJalan;
	int nomorRumah;
	string kota;
	string provinsi;
};

struct siswa {
	char nama[30];
	struct alamat alamat;
	struct tanggalLahir tanggalLahir;
};

struct siswa mhs;

int main() {
	strcpy(mhs.nama, "AKHDAN ARIF");
	mhs.alamat.NamaJalan = "jl dewi sartika";
	mhs.alamat.nomorRumah = 6;
	mhs.alamat.kota = "metro";
	mhs.alamat.provinsi = "lampung";

	mhs.tanggalLahir.tanggal = 15;
	mhs.tanggalLahir.bulan = 7;
	mhs.tanggalLahir.tahun = 2004;

	cout <<"Nama: "<< mhs.nama<<endl;
	cout <<"Nama Jalan: "<< mhs.alamat.NamaJalan<<endl;
	cout <<"Nomor Rumah: "<< mhs.alamat.nomorRumah << endl;
	cout <<"Kota: "<< mhs.alamat.kota << endl;
	cout <<"Provinsi: "<< mhs.alamat.provinsi << endl<<endl;
	cout <<"Tanggal Lahir: "<< mhs.tanggalLahir.tanggal << endl;
	cout <<"Bulan: "<< mhs.tanggalLahir.bulan << endl;
	cout <<"Tahun: "<< mhs.tanggalLahir.tahun << endl;
}
