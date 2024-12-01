#include <iostream>
#include <stdio.h>
using namespace std;
void strip_line(){
	cout << "=============================\n";
}
void say_salam(string name){
	strip_line();
	cout << "Assalaamu 'alaykum " << name <<"!\n";
}
void hitungLuasSegitiga(int alas, int tinggi){
	double luas=alas*tinggi/2.0;
	cout << "Luas Segitiga Adalah	:"<<luas<<endl;
}
float bagi(float a, float b){
	float hasil = a/b;
	return hasil;
}
int main(){
	string name;
	float a,b;
	cout << "Masukkan Nama	: ";getline(cin>>ws,name);
	cout <<"\033[2J\033[1;1H";
	system("cls");
	int alas,tinggi;
	say_salam(name);
	strip_line();
	cout << "Hitung luas Segi tiga\n";
	cout << "Input Alas Segitiga	:";cin>>alas;
	cout << "input Tinggi Segitiga	:";cin>>tinggi;
	strip_line();
	cout << "Kalkulator Pembagian\n";
	cout << "Input nilai a: ";cin>>a;
	cout << "Input nilai b: ";cin>>b;
	strip_line();
	hitungLuasSegitiga(alas,tinggi);
	cout << "Hasil dari "<<a<<" / "<<b<<" adalah :"<<bagi(a,b)<<endl;
	strip_line();
	return 0;
}
