#include <iostream>
using namespace std;
double penjumlahan(float a, float b);
double pengurangan(float a, float b);
int main(){
	string ary[3]={"1. penjumlahan\n","2. Pengurangan\n"};
	int hasil,pilih;
	float a,b;
	cout << "Angka ke-1 : ";cin>>a;
	cout << "Angka ke-2 : ";cin>>b;
		cout <<"Jenis Operasi\n";
		for(int i=0;i<2;i++){
			cout << ary[i];
		}cout <<"Input: ";cin>>pilih;
		switch(pilih){
			case 1:
				cout << "Hasilnya adalah : "<<penjumlahan(a,b);break;
			case 2:
				cout << "Hasilnya adalah : "<<pengurangan(a,b);break;
		}
}
double penjumlahan(float a, float b){
	double hasil = a+b;
	return hasil;
}
double pengurangan(float a, float b){
	double hasil = a-b;
	return hasil;
}
/*
penjelasan ini adalah program kalkulator sederhana dengan memanfaatkan 
array sebagai media penampungan string list, looping for untuk menampilkan sekaligus isi dari array,
swtcih case untuk memilih statement apa yang akan di jalankan, membuat 2 function untuk sebagai operasi program
*/