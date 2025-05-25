#include <iostream>
#include <string>
using namespace std;

int main(){
    string kalimat;

    cout << "Masukkan kalimat : ";
    getline(cin, kalimat);

    for (int i = 0; i < kalimat.length(); i++)
    {
        // saat menemukan huruf vokal, maka diubah menjadi kapital
        if(kalimat[i] == 'a' || kalimat[i] == 'e' || kalimat[i] == 'i' || kalimat[i] == 'o' || kalimat[i] == 'u'){
            kalimat[i] = toupper(kalimat[i]);
        }
    }
    cout << "Kalimat dalam Kapital : " << kalimat << endl;
}