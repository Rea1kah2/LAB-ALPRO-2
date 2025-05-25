#include <iostream>
using namespace std;

int main(){
    // Menjumlahkan matriks 2 x 2
    int matriks1[2][2];
    int matriks2[2][2];
    int hasil[2][2];

    cout << "\nMatriks 1" << endl;
    cout << "=========" << endl;
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            cout << "A[" << i+1 << "," << j+1 <<"] = ";
            cin >> matriks1[i][j]; // mengisikan nilai untuk tiap elemen sesuai baris dan kolom pada matriks 1
        }
    }
    cout << "\nMatriks 2" << endl;
    cout << "=========" << endl;
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            cout << "B[" << i+1 << "," << j+1 <<"] = ";
            cin >> matriks2[i][j]; // mengisikan nilai untuk tiap elemen sesuai baris dan kolom pada matriks 2
        }
    }

    cout << "\nHasil Penjumlahan" << endl;
    cout << "=================" << endl;
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            hasil[i][j] = matriks1[i][j] + matriks2[i][j]; // menjumlahkan nilai sesuai baris dan kolomnya
            cout << hasil[i][j] << " "; // menampilkan hasil penjumlahannya
        }
        cout << endl;
    }

    return 0;
}