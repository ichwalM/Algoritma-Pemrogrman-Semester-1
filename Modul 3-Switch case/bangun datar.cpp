#include <iostream>
using namespace std;

int main() {
	int ichwal, hitungPersegi,pilihanPersegiP, pilihanLingkaran;
	float sisiPersegi, luasPersegi,kelilingPersegi;
	float panjnagPersegiP, lebarPersegiP, lpj, kpj;
	float jari, phi=3.14, luasL, kelilingL;
	
	
	cout << "Hitung Luas dan Keliling Bangun Datar \n";
	cout << "===================================== \n" << endl;
	cout << "1. Persegi \n" << "2. Persegi Panjnag \n" << "3. Lingkaran \n";
	cout << "Masukkan pilihan [1..3 : ";cin >> ichwal;
	
	switch(ichwal) {
		case 1:
			cout << "\nBangun Datar persegi \n";
			cout << "\nMasukkan ukuran sisi: ";cin >> sisiPersegi;
			cout << "\n1. Hitung Luas \n2. Hitung Keliling \n3. Hitung Luas dan Keliling\n";
			cout << "Masukkan pilihan[1..3] : ";cin >> hitungPersegi;
			luasPersegi = sisiPersegi*sisiPersegi;
			kelilingPersegi = sisiPersegi*4;
			switch(hitungPersegi) {
				case 1:
					cout << "Luas	 = " << luasPersegi;break;
				case 2:
					cout << "Keliling= " << kelilingPersegi;break;
				case 3:
					cout << "Luas	= " << luasPersegi;
					cout << "\nKeliling= " << kelilingPersegi;
			}break;
		case 2:
			cout << "\nBangun Datar Persegi Panjang \n";
			cout << "\nMasukkan ukuran Panjang: ";cin >> panjnagPersegiP;
			cout << "\nMasukkan ukuran lebar : ";cin >> lebarPersegiP;
			cout << "\n1. Hitung Luas \n2. Hitung Keliling \n3. Hitung Luas dan Keliling\n";
			cout << "Masukkan pilihan[1..3] : ";cin >> pilihanPersegiP;
			lpj= panjnagPersegiP*lebarPersegiP;
			kpj=(2*panjnagPersegiP)+(2*lebarPersegiP);
			switch (pilihanPersegiP){
				case 1:
					cout << "luas	= " << lpj;break;
				case 2:
					cout << "Keliling= " << kpj;break;
				case 3:
					cout << "Luas	= " << lpj;
					cout << "\nKeliling= " << kpj;
			}break;
		case 3:
			cout << "\nBangun Datar Lingkaran \n";
			cout << "\nMasukkan ukuran jari-jari: ";cin >> jari;
			cout << "\n1. Hitung Luas \n2. Hitung Keliling \n3. Hitung Luas dan Keliling\n";
			cout << "Masukkan pilihan[1..3] : ";cin >> pilihanLingkaran;
			luasL= phi*jari*jari;
			kelilingL=2*phi*jari;
			switch (pilihanLingkaran){
				case 1:
					cout << "luas	= " << luasL;break;
				case 2:
					cout << "Keliling= " << kelilingL;break;
				case 3:
					cout << "Luas	= " << luasL;
					cout << "\nKeliling= " << kelilingL;
			}break;			
	}
	return 0;
}
