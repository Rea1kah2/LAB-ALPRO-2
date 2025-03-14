#include <iostream>
using namespace std;

int main(){
    float luas, panjang, lebar;

    cout << "Masukkan Panjang : ";
    cin >> panjang;

    cout << "Masukkan Lebar   : ";
    cin >> lebar;

    luas = panjang * lebar;
    cout << "Luas = " << luas << " cm" << endl;

    return 0;
}