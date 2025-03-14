#include <iostream>
using namespace std;

int main(){
    float luas, volume, jari2;
    const float pi = 3.14;

    cout << "Masukkan Jari-jari : ";
    cin >> jari2;

    luas = 4 * pi * (jari2 * jari2);
    cout << "Luas   : " << luas << " cm" << endl;

    volume = (float(4)/3) * pi * (jari2 * jari2 * jari2);
    cout << "Volume : " << volume << " cm" << endl;

    return 0;
}
