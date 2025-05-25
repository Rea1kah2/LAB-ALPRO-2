#include <iostream>
using namespace std;

int main(){
    string kalimat; // deklarasi variabel bertipe string

    cout << "Masukkan kalimat : ";
    getline(cin, kalimat); // mengambil inputan lebih dari 1 kata (termasuk spasi)

    for (int i = 0; i < kalimat.length();i++){
        kalimat[i] = toupper(kalimat[i]); // mengubah nilai variabel menjadi huruf kapital
    }
    cout << "Kalimat dalam Kapital : " << kalimat << endl;
}