#include <iostream>
using namespace std;

int main(){
	int panjang,lebar;
	cout << "Masukkan ukuran Panjang	: ";cin>>panjang;
	cout << "Masukkan ukuran Lebar	: ";cin>>lebar;
	for(int i=1; i<=panjang;i++){
		for (int j=1;j<=i;j++){
			cout << " ";
		}
		for (int j=1;j<=lebar;j++){
			cout << "*";
		}
	cout << endl;
	}
}
