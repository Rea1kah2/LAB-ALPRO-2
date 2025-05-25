#include <iostream>
using namespace std;

int main(){
    float luas, volume, jari2;
    const float pi = 3.14;

    cout << "Masukkan Jari-jari : ";
    cin >> jari2;

    luas = 4 * pi * (jari2 * jari2); // menghitung luas lingkaran
    cout << "Luas   : " << luas << " cm" << endl; // menampilkan luas lingkaran

    volume = (float(4)/3) * pi * (jari2 * jari2 * jari2); menghitung volume lingkaran
    cout << "Volume : " << volume << " cm" << endl; menampilkan volume lingkaran

    return 0;
}
