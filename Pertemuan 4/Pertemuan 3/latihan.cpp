#include <iostream>
using namespace std;

int main(){
    cout << "Kelipatan 5 dan 10\n";
    cout << "------------------\n";

    int angka;
    cout << "Masukkan Angka : ";
    cin >> angka;

    if(angka%5 == 0){
        cout << angka << " Merupakan Kelipatan 5" << endl;
    }else if(angka%10 == 0){
        cout << angka << " Merupakan kelipatan 10" << endl;
    }else if (angka%5==0 && angka%10 == 0) {
        cout << angka << " Merupakan kelipatan dari 5 dan 10\n";
    }else {
        cout << angka << " Bukan Kelipatan dari keduanya!\n";
    }

    return 0;
}