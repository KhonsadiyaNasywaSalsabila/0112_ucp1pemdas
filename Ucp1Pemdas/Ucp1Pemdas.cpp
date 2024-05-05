

#include <iostream>
#include <string>
using namespace std;

struct KualitasUdara {
	string kota;
	string status;
};


int a, b, c, ch, d[2];
string status, NamaKota;

void inputSensor() {
	while (true) {
		cout << "Nama Kota: ";
		cin >> NamaKota;
		cout << "indeks kualitas udara: ";
		cin >> d[2];
		cout << "nilai sensor 1: ";
		cin >> a;
		cout << "nilai sensor 2: ";
		cin >> b;
		cout << "nilai sensor 3: ";
		cin >> c;

	}

	if ((a == 45) && (d[2] == 75)) {
		status = "tidak sehat";
	}

	else {
		status = "sehat";
	}
}

void output() {
		cout << "Nama Kota: " << NamaKota << endl;
		cout << "status: " << status << endl;
	}



int main()
	{
	KualitasUdara KU[2];

	for (int i = 0; i < 2; i++) {
		cout << "Data ke-" << (i + 1) << ":" << endl;
		if ((a == 45) && (d[2] == 75)) {
			KU[2].kota = "Tanggerang";
			KU[2].status = "Tidak sehat";
			output();


		}
		else  {
			KU[2].kota = "Bekasi";
			KU[2].status = "sehat";
		}
	}
	do {
	
		cout << "\nContinue search (y/n): ";
		cin >> ch;


	} while ((ch == 'y') || (ch == 'Y'));
}






// 1. int umur;
//    string nama;
//    float nMat;

// 2. implementasi fungsi:
//  int tambah (int a, int b);
//  ..
//  ..
//  return (a+b);

// implementasi prosedur:
// void nama_prosedur() {
// cout atau cout dan cin
// ..
// ..
// int main() {
// nama_prosedur

// 3. looping
// sintaks:
//  if (nBil % 2 == 1)
//	begin
//      nBil = nBil = 1
//	end
// display 'Bilangan' = +nBil
  
// 4. while 
// sintaks:
// WHILE (kondisi) {
// proses yang diulang
// }
// while () {
// cout << "kondisi perulangan" << endl;
// x=(batasan perulangan)
// }
// cout << "kondisi akhir" << x << endl;
 
// 5. struktur
// struct namaStruktur{
//  deklarasi variabel
// int main 
// 

