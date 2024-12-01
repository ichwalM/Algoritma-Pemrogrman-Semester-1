#include <iostream>
using namespace std;

int main(){
	int lahir,umur;
	string jenis, nic;
	cout << "Masukkan tahun lahir	: ";cin>>lahir;
	cout << "Masukkan nama lengkap	: ";cin>>nic;
	umur = 2023-lahir;
	if(lahir%400==0){
		jenis = "(Kabisat)";
	}else if(lahir%100==0){
		jenis = "(Non-kabisat)";
	}else if(lahir%4==0){
		jenis = "(Kabisat)";
	}else{
		jenis = "(Non-kabisat)";
	}
	cout <<"\n\nRekap Data\n";
	cout << "===========\n";
	cout << "Nama Lengkap	: "<<nic<<"\n";
	cout << "Tahun Lahir	: "<<lahir<< " "<<jenis<<"\n";
	cout << "Umur		: "<<umur;	
}
