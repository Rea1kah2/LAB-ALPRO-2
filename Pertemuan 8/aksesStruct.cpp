#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa{
    string nama;
    int umur;
    float ipk;
};

int main(){
    Mahasiswa mhs1;

    // Mengisikan data struct
    mhs1.nama = "Ariel";
    mhs1.umur = 20;
    mhs1.ipk = 4.01;

    // Mengakses value dengan titik (.)
    cout << "Nama : " << mhs1.nama << endl;
    cout << "Umur : " << mhs1.umur << endl;
    cout << "IPK  : " << mhs1.ipk << endl;

    // Mengakses value(nilai) dengan tanda panah (->) dalam pointer
    Mahasiswa *ptrmhs = &mhs1;
    cout << "\nNama : " << ptrmhs->nama << endl;
    cout << "Umur : " << ptrmhs->umur << endl;
    cout << "IPK  : " << ptrmhs->ipk << endl;
}
