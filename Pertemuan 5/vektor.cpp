#include <iostream>
#include <vector> // header vector untuk bisa menggunakan vector
#include <string> // berisi fungsi fungsi untuk operasi string
using namespace std;

int main(){
    // Vector merupkan array dinamis yang bisa berubah ukuran otomatis saat elemen ditambah atau dihapus
    // Elemen dalam vektor bisa ditambah atau dihapus

    // Deklarasi Vektor bertipe string
    vector<string> nama_karyawan = {"Ariel","Atok","Wahyu","Ismi"};
    for(int i = 0;i < nama_karyawan.size();i++){
        cout << nama_karyawan[i] << endl;
    }
    cout << "\n\n";

    // menggunakan range-based for loop untuk menampilkan setiap elemen
    for(string karyawan : nama_karyawan){
        cout << karyawan << endl;
    }
    cout << endl;

    // Menambah elemen ke vektor //

    // menggunakan push_back()
    nama_karyawan.push_back("Farid"); // memasukkan elemen pada indeks terakhir
    for(string karyawan : nama_karyawan){
        cout << karyawan << endl;
    }
    cout << endl;

    // menggunakan insert() untuk menambah elemen pada indeks tertentu
    nama_karyawan.insert(nama_karyawan.begin() + 2, "Raja Iblis"); // memasukkan string 'Raja Iblis' pada indeks ke-2
    for(string karyawan : nama_karyawan){
        cout << karyawan << endl;
    }
    cout << endl;

    // Menghapus elemen vektor //

    // Menggunakan pop_back()
    nama_karyawan.pop_back(); // Menghapus elemen pada indeks terakhir
    for(string karyawan : nama_karyawan){
        cout << karyawan << endl;
    }
    cout << endl;

    // menggunakan erase() untuk menghapus elemen dengan lebih spesifik
    nama_karyawan.erase(nama_karyawan.begin() + 3); // menghapus elemen pada indeks (0 + 3) => menghapus indeks ketiga
    for(string karyawan : nama_karyawan){
        cout << karyawan << endl;
    }

}
