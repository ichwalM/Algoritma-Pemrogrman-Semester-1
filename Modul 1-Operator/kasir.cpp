#include <iostream>
using namespace std;

int main() {
    int pensil, pulpen, buku, hargaPulpen, hargaPensil,
    hargaBuku, hargaTotal, setelahDiskon,setelahPajak, hargaFinish, HTSD;
    float diskon=0.15, pajak= 0.1;
    cout << "Masukkan jumlah pembelian:" << endl;
    cout << "Pulpen      : "; cin >> pulpen;
    cout << "Pensil      : "; cin >> pensil;
    cout << "buku        : "; cin >> buku;
    cout << endl << "Detail pembelian:" << endl;
    hargaPulpen= pulpen * 5000;
    hargaPensil = pensil * 3000;
    hargaBuku = buku * 15000;
    cout << pulpen << " Pulpen    : Rp" << hargaPulpen << endl;
    cout << pensil << " Pensil    : Rp" << hargaPensil << endl;
    cout << buku << " Buku      : Rp" << hargaBuku << endl;
    cout << "---------------------" << endl;
    hargaTotal = hargaPensil + hargaPulpen + hargaBuku;
    cout << "Total       : Rp" << hargaTotal << endl;
    cout << "---------------------" << endl;
    setelahDiskon = hargaTotal * diskon;
    HTSD = hargaTotal - setelahDiskon;
    setelahPajak = HTSD * pajak;
    cout << "Diskon      : Rp" << setelahDiskon << endl;
    cout << "Pajak       : Rp" << setelahPajak << endl;
    cout << "---------------------" << endl;
    hargaFinish = hargaTotal + setelahPajak - setelahDiskon;
    cout << "Grand Total : Rp" << hargaFinish << endl;
    cout << "---------------------" << endl;
    return 0;
} 
