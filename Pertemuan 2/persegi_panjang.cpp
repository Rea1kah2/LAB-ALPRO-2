#include <iostream>
using namespace std;

int main(){
    float luas, panjang, lebar;

    cout << "Masukkan Panjang : ";
    cin >> panjang;

    cout << "Masukkan Lebar   : ";
    cin >> lebar;

    luas = panjang * lebar; // menghitung luas persegi
    cout << "Luas = " << luas << " cm" << endl; // menampilkan luas persegi

    return 0;
}