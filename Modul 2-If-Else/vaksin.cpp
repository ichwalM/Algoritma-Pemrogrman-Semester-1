#include <iostream>
using namespace std;

int main() {
    int tahunLahir, dosis;
     string Pfizer, Moderna, Sinovac, AstraZeneca, Novavax, Sinopharm;
    Pfizer= "-Pfizer"; Moderna ="-Moderna"; Sinovac= "-Sinovac"; AstraZeneca = "-AstraZeneca";Novavax="-Novavax";Sinopharm="-Sinopharm";

    cout << "Masukkan tahun lahir: ";cin >> tahunLahir;
    dosis = 2021 - tahunLahir;
    cout << "Hasil:" << endl;
    cout << "Umur anda : " << dosis << " tahun" << endl << "Vaksin yang cocok:" << endl;

    if (dosis>12)
    {
        cout << Pfizer << endl;
    }
    if (dosis >= 18)
    { 
        cout <<Moderna<<endl<<Sinovac<<endl; 
    }
    if(dosis>=18&&dosis<=55){
    	cout << AstraZeneca << endl;
	}
    if (dosis>=18 && dosis<=59)
    {
        cout << Novavax << endl;
    }
    if (dosis>=18 && dosis<=80)
    {
        cout << Sinopharm << endl;
    }
    else if (dosis < 12)
    {
        cout <<"-Tidak ada vaksin yang cocok";
    }
   
    return 0;
}
