#include <iostream>
using namespace std;

int main(){
    // Menjumlahkan matriks 2 x 2
    int matriks[2][2];
    int matriks2[2][2];
    int hasil[2][2];

    cout << "\nMatriks 1" << endl;
    cout << "=========" << endl;
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            cout << "A[" << i+1 << "," << j+1 <<"] = ";
            cin >> matriks[i][j];
        }
    }
    cout << "\nMatriks 2" << endl;
    cout << "=========" << endl;
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            cout << "B[" << i+1 << "," << j+1 <<"] = ";
            cin >> matriks2[i][j];
        }
    }

    cout << "\nHasil Penjumlahan" << endl;
    cout << "=================" << endl;
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            hasil[i][j] = matriks[i][j] + matriks2[i][j];
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }





    return 0;
}