#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // Array 1 Dimensi //
    int angka[5] = {1,2,3,4,5};
    for(int i = 0;i<5;i++){
        cout << angka[i] << " ";
    }
    cout << endl;
    angka[1] = 10;
    cout << angka[1];

    // menjumlahkan isi array
    int arr[5] = {2,4,6,8,10};
    int jumlah = 0;
    for(int i = 0;i < 5;i++){
        jumlah += arr[i];
    }
    cout << "\nJumlah = " << jumlah << endl << endl;

    // Menampilkan bilangan genap saja
    int data[6] = {3,5,8,10,13,20};
    for(int i = 0;i<6;i++){
        if((data[i] % 2) == 0){
            cout << data[i] << " ";
        }
    }

    // Menampilkan nilai min dan max
    int nilai[7] = {75,80,95,60,85,90,70};
    int min = nilai[0], max = nilai[0];

    for(int i = 0;i < 7;i++){
        if(nilai[i] < min){
            min = nilai[i];
        }
        if(nilai[i] > max){
            max = nilai[i];
        }
    }
    cout << "\nNilai Tertinggi : " << max << endl;
    cout << "Nilai Terendah  : " << min << endl;

    // Mencari nilai Rata-rata
    int matriks[6] = {10,20,30,40,50,60};
    jumlah = 0;
    for(int i = 0;i < 6;i++){
        jumlah += matriks[i];
    }
    float rata2 = jumlah / 6.0;
    cout << fixed << setprecision(2) << "Rata-rata = " << rata2 << endl; 

    int ganjil[8] = {12,7,9,20,15,18,3,6};
    jumlah = 0;
    for(int i = 0;i < 8;i++){
        if((ganjil[i] % 2) != 0){
            jumlah++;
        }
    }
    cout << "Jumlah Angka Ganjil : " << jumlah << endl;
}