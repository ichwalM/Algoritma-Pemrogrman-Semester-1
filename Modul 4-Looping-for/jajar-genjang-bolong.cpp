#include <iostream>
using namespace std;

int main(){
	int panjang,lebar;
	cout << "Masukkan ukuran tinggi	: ";cin>>panjang;
	cout << "Masukkan ukuran Lebar	: ";cin>>lebar;
	for(int i=1; i<=panjang;i++){
		for (int j=1;j<=i;j++){
			cout << " ";
		}
		for (int j=1;j<=lebar;j++){
			if (j==1||j==lebar||i==1||i==panjang){
			cout << "*";}
			
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
