#include <iostream>
using namespace std;

void looping(int kapasitas[], int input){
	for(int i=0;i<input;i++){
		cout << kapasitas[i]<<" ";
	}
}
int main() {
	int input,total;
	cout << "Masukkan Nailai Kapasitas Array : ";cin>>input;
	int kapasitas[input];
	cout << "\n";
	for(int i=0;i<input;i++){
		cout << "Masukkan Nilai Array ["<<i<<"] : ";cin>>kapasitas[i];
		total=total+kapasitas[i];
	}
	cout << "\n\n";
	looping(kapasitas, input);
	cout <<"\nTotal : "<<total;	
}
