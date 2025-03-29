#include <iostream>
using namespace std;

int main(){
    string kalimat;

    cout << "Masukkan kalimat : ";
    getline(cin, kalimat);

    for (int i = 0; i < kalimat.length();i++){
        kalimat[i] = toupper(kalimat[i]);
    }
    cout << "Kalimat dalam Kapital : " << kalimat << endl;
}