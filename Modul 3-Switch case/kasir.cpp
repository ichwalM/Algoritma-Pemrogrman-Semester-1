#include <iostream>
using namespace std;

int main() {
	int pulpen, pensil, buku,diskon;
	float hargaPulpen, hargaPensil, hargaBuku, total,pajak,hargaDiskon,Gtotal;
	
	cout << "Masukkan jumlah Pembelian: \n";
	cout << "Pulpen	: ";cin >> pulpen;
	cout << "Pensil	: ";cin >> pensil;
	cout << "Buku	: ";cin >> buku;
	
	hargaPulpen = pulpen * 5000;
	hargaPensil = pensil * 3000;
	hargaBuku	= buku * 15000;
	total = hargaPulpen+hargaPensil+hargaBuku;
	
	cout << "\nDetail pembelian: " << endl;
	cout << pulpen << " Pulpen : Rp" << hargaPulpen << endl;
	cout << pensil << " Pensil : Rp" << hargaPensil << endl;
	cout << buku   << " Buku   : Rp" << hargaBuku << endl;
	cout << "------------------" << endl;
	cout << "Total    : Rp" << total << endl;
	cout << "------------------" << endl;
	
	switch (buku) {
		case 0:
			diskon=0.15 * 0;break;
		default:
			diskon=0.15 * total;break;
	};
	
	hargaDiskon = total - diskon;
	pajak = hargaDiskon*0.1;
	cout << "Diskon	 : Rp" << diskon << endl;
	cout << "Pajak	 : Rp" << pajak << endl;
	cout << "------------------" << endl;
	Gtotal=total+pajak-diskon;
	cout << "Grand Total  : Rp" << Gtotal;
	return 0;
}
