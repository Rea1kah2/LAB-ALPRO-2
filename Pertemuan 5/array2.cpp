#include <iostream>
#include <string>
#include <array>
using namespace std;

int main(){
    string nama[5];

    nama[0] = "Ariel";
    nama[1] = "Atok";
    nama[2] = "Wahyu";
    nama[3] = "Ismi";
    nama[4] = "Rahmat tahalu";

    // Menampilkan secara Ascending
    cout << nama[0] << endl;
    cout << nama[1] << endl;
    cout << nama[2] << endl;
    cout << nama[3] << endl;
    cout << nama[4] << endl;

    for(int i = 0;i < 5;i++){
        cout << nama[i] << " ";
    }
    cout << endl;
    for(int i = 4;i >= 0;i--){
        cout << nama[i] << " ";
    }
    cout << "\n\n";

    // Matriks Multidimensi
    int matriks[2][3] = {{1,3,5},{2,4,6}};
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 3;j++){
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
    
    int matrix[4][6] = {{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24}};
    for(int i = 0;i < 4;i++){
        for(int j = 0;j < 6;j++){
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    string name = "Ariel";
    cout << name[0] << endl;
    cout << name[2] << endl << endl;

    for(int i = 0; i < name.length();i++){
        cout << name[i] << " ";
    }

    string s1 = "Hello";
    string s2 = "World";
    
    // s1 = s2
    cout << endl << s1 << endl;
    s1 = s2;
    cout << s1 << endl;
    
    // s1 = s1 + s2
    s1 = "Hello";
    s1 = s1 + " " + s2;
    cout << s1 << endl;
    
    // s.length()
    int panjang = s1.length();
    int panjang2 = s2.length();
    int jumlah_panjang = panjang+panjang2;
    cout << panjang << endl;
    
    // substr(n, m) => n indeks nya, m merupakan banyak karakter yang mau diambil
    s1 = "Hello";
    s2 = "World";
    string jumlah_str = s1 + s2;
    cout << s1.substr(2,4) << endl;
    cout << s2.substr(1,3) << endl;
    cout << jumlah_str << endl;
    cout << jumlah_str.substr(4,2) << endl;

    // sizeof => untuk mengetahui ukuran dari variabel, array, dll
    int angka = 10;
    cout << endl << sizeof(angka); // Mengembalikan ukuran byte dari tipe data variabelnya;

    int nilai[5] = {10,20,30,40,50};
    cout << sizeof(nilai[5]);

    string s = "Ariel";
    cout << endl << sizeof(s) << endl;

    // Array Library
    array<float, 5> nilai_array = {87.5,98,100,95.7,78.3};
    cout << "Nilai : ";
    for(int i = 0;i < nilai_array.size(); i++){
        cout << nilai_array[i] << " ";
    }
    cout << endl;
    for(float n : nilai_array){
        cout << n << " ";
    }
}