#include <iostream>
using namespace std;

int main() {
    float width, bmi, height;
    cout << "Masukkan tinggi badan (cm) : "; cin >> height;
    cout << "Masukkan berat badan (kg)  : "; cin >> width;
    height = height/100;
    bmi = width / (height*height);
  
    cout << "Hasil :" << endl;
    cout << "BMI      = " << bmi << endl;
    cout << "Kategori = ";
        
    if (bmi <18.5)
    {
        cout << "Berat badan kurang";
    }
    else if (bmi>=18.5 && bmi<=22.9)
    {
        cout << "Berat badan normal";
    }
    else if (bmi>=23 && bmi<=29.9)
    {
        cout << "Berat badan berlebih";
    }
    else if (bmi >=30)
    {
        cout << "Obesitas"; 
    }
    
    return 0;  
}