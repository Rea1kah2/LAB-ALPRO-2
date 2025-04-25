#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    // Elemen dalam vektor bisa ditambah atau dihapus

    // Deklarasi Vektor
    vector<string> nama_karyawan = {"Ariel","Atok","Wahyu","Ismi"};
    for(int i = 0;i < nama_karyawan.size();i++){
        cout << nama_karyawan[i] << endl;
    }
    cout << "\n\n";
    for(string karyawan : nama_karyawan){
        cout << karyawan << endl;
    }

    cout << endl;
    // Menambah elemen ke vektor
    nama_karyawan.push_back("Farid");
    for(string karyawan : nama_karyawan){
        cout << karyawan << endl;
    }

    cout << endl;
    // Menghapus elemen vektor //
    nama_karyawan.pop_back(); // Menghapus elemen pada indeks terakhir
    for(string karyawan : nama_karyawan){
        cout << karyawan << endl;
    }
    cout << endl;

    nama_karyawan.erase(nama_karyawan.begin() + 3); // menghapus elemen pada indeks (0 + 3) => menghapus indeks ketigas
    for(string karyawan : nama_karyawan){
        cout << karyawan << endl;
    }

}
