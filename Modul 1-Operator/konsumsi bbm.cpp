#include <iostream>
using namespace std;

int main(){
	float asl,tujuan,asl2,konsumsi;
	cout << "Masukkan nilai odometer di kota asal		: ";cin>>asl;
	cout << "Masukkan nilai odometer di kota tujuan		: ";cin>>tujuan;
	cout << "jumlah liter pengisian BBM di koat tujuan	: ";cin>>asl2;
	cout << "\n\n";
	konsumsi=(tujuan-asl)/asl2;
	cout << "Konsumsi bahan bakar	= "<<konsumsi;
	return false;
}
