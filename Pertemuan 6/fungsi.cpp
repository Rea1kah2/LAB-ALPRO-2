#include <iostream>
#include <string>
using namespace std;

// Bentuk umum fungsi
// tipe_fungsi nama_fungsi (parameter){
//     // Statement
//     // Statement
//     ...
// }

// Fungsi tanpa nilai kembalian
void sapa(string nama){ // nama = parameter formal
    cout << "Halo " << nama << "! Selamat Datang di AP 2!" << endl;
}

void tampilkanPesan(){
    cout << "==== Selamat Datang di AP 2 ====" << endl;
}

// Fungsi dengan Kembalian
int tambah(int x,int y){
    int hasil = x+y;
    return hasil; // mengembalikan nilai 'hasil'
}

// Fungsi Overload
// => Fungsi yang namanya sama tapi parameternya berbeda
// => Gunanya untuk mempermudah pemanggilan fungsi dengan input berbeda, yang otomatis menyesuaikan dengan tipe argumen
int kali(int x, int y){
    return x*y;
}

double kali(double a, double b, int c){
    return a*b + c;
}

// Fungsi Rekursi
// => Fungsi yang memanggil dirinya sendiri
int faktorial(int n){
    if((n = 0) || (n == 1)){
        return 1;
    }else{
        return n * faktorial(n-1); // fungsi 'faktorial' memanggil dirinya sendiri
    }
}

int main(){
    sapa("Ariel");

    string nama = "Wahyu";
    sapa(nama); // parameter aktual

    cout << endl;
    tampilkanPesan();

    // Fungsi Kembalian
    int hasil_tambah = tambah(5,7);
    cout << "Hasil Penjumlahan : " << hasil_tambah << endl;


    // Fungsi overload
    int hasil_kali = kali(5,6);
    double hasil_kali_double = kali(5.5,1.3,5);

    cout << "Hasil kali (int) : " << hasil_kali << endl;
    cout << "Hasil kali (double) : " << hasil_kali_double << endl;

    // Memanggil fungsi rekursif
    int hasil_faktorial = faktorial(5);
    cout << "\n5! = " << hasil_faktorial << endl;
}