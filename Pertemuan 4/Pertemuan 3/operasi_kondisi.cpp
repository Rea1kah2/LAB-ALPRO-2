#include <iostream>
using namespace std;

int main(){
    cout << "Operator Kondisi\n";
    cout << "----------------\n";

    int nilai;
    cout << "Masukkan Nilai : ";
    cin >> nilai;

    // if (nilai <= 65){
    //     cout << "Anda Tidak Lulus!\n";
    // }else {
    //     cout << "Anda Lulus!\n";
    // }

    // if else if statement
    // if(nilai == 100){
    //     cout << "Anda Ketje!\n";
    // }else if(nilai <= 65){
    //     cout << "Anda Tidak Lulus!\n";
    // }else {
    //     cout << "Anda Lulus!\n";
    // }

    // nested if
    // if (nilai <= 65){
    //     cout << "Anda Tidak Lulus!\n";
    // }else {
    //     if(nilai == 100){
    //         cout << "Anda Lulus dan Ketjeh!\n";
    //     }else{
    //         cout << "Anda Lulus Doang!\n";
    //     }
    // }

    // Switch Case
    // switch(nilai){
    //     case 1:
    //         cout << "Senin\n";
    //         break;
    //     case 2:
    //         cout << "Selasa\n";
    //         break;
    //     case 3:
    //         cout << "Rabu\n";
    //         break;
    //     case 4:
    //         cout << "Kamis\n";
    //         break;
    //     case 5:
    //         cout << "Jumat\n";
    //         break;
    //     case 6:
    //         cout << "Sabtu\n";
    //         break;
    //     case 7:
    //         cout << "Minggu\n";
    //         break;
    //     default:
    //         cout << "Hari Tidak Ada!\n";
    //         break;
    // }

    // switch range
    // switch (nilai) {
    //     case 85 ... 100:
    //         cout << "A\n";
    //         break;
    //     case 80 ... 84:
    //         cout << "B+\n";
    //         break;
    //     case 75 ... 79:
    //         cout << "B\n";
    //         break;
    //     case 70 ... 74:
    //         cout << "C+\n";
    //         break;
    //     case 65 ... 69:
    //         cout << "C\n";
    //         break;
    //     case 60 ... 64:
    //         cout << "D\n";
    //         break;
    //     default:
    //         cout << "E\n";
    //         break;
    //     }

    // // Ternary Operator
    // string cek_angka = (nilai % 2 == 0) ? "Genap" : "Ganjil";
    // cout << nilai << " Adalah bilangan " << cek_angka << endl;

    return 0;
}