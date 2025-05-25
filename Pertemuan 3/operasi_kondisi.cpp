#include <iostream>
using namespace std;

int main(){
    cout << "Operator Kondisi\n";
    cout << "----------------\n";

    int nilai;
    cout << "Masukkan Nilai : ";
    cin >> nilai;

    // struktur if-else statement

    // if(kondisi){ => saat kondisi if = true, maka blok kode if akan dieksekusi, jika false, maka blok kode else akan dieksekusi
    //     statement 1 // blok kode if
    //     statement 2
    //     statement 3
    // }else{
    //     statement 1 // blok kode else
    //     statement 2
    //     statement 3 
    // }

    // if-else statement
    if (nilai <= 65){ 
        cout << "Anda Tidak Lulus!\n";
    }else {
        cout << "Anda Lulus!\n";
    }

    // if else-if statement => if lebih dari 1 kondisi
    if(nilai == 100){
        cout << "Anda Ketje!\n";
    }else if(nilai <= 65){
        cout << "Anda Tidak Lulus!\n";
    }else {
        cout << "Anda Lulus!\n";
    }

    // nested if => terdapat if lagi di dalam blok kode if atau blok kode else
    if (nilai <= 65){
        cout << "Anda Tidak Lulus!\n";
    }else {
        if(nilai == 100){
            cout << "Anda Lulus dan Ketjeh!\n";
        }else{
            cout << "Anda Lulus Doang!\n";
        }
    }

    // Switch Case => percabangan untuk memilih satu dari banyak case berdasarkan nilai variabel yang dipakai
    switch(nilai){
        case 1:
            cout << "Senin\n"; // saat nilai = 1, maka akan menampilkan "senin"
            break; // untuk menghentikan eksekusi setelah satu blok kode case dijalankan, biar gak lanjut ke case dibawahnya
        case 2:
            cout << "Selasa\n";
            break;
        case 3:
            cout << "Rabu\n";
            break;
        case 4:
            cout << "Kamis\n";
            break;
        case 5:
            cout << "Jumat\n";
            break;
        case 6:
            cout << "Sabtu\n";
            break;
        case 7:
            cout << "Minggu\n";
            break;
        default: // blok kode default akan dieksekusi jika nilai dari variabel 'nilai' tidak ada yang cocok dengan case
            cout << "Hari Tidak Ada!\n";
            break;
    }

    // switch range => switch yang memiliki range/jangkauan pada tiap case-nya
    switch (nilai) {
        case 85 ... 100: // saat isi dari variabel 'nilai' berada pada range 85-100, maka blok kodenya akan dieksekusi
            cout << "A\n"; // akan menampilakn nilai A saat nilai berada pada range 85-100
            break;
        case 80 ... 84:
            cout << "B+\n";
            break;
        case 75 ... 79:
            cout << "B\n";
            break;
        case 70 ... 74:
            cout << "C+\n";
            break;
        case 65 ... 69:
            cout << "C\n";
            break;
        case 60 ... 64:
            cout << "D\n";
            break;
        default:
            cout << "E\n";
            break;
        }

    // Ternary Operator => bentuk dari operator kondisional if-else yg ditulis dalam 1 baris
    // saat kondisi bernilai true, maka akan memilih nilai pertama, jika false maka akan memilih nilai kedua
    string cek_angka = (nilai % 2 == 0) ? "Genap" : "Ganjil"; // saat (nilai%2 == 0) bernilai true, maka memilih "Genap", jika false maka memilih "Ganjil"
    cout << nilai << " Adalah bilangan " << cek_angka << endl;

    return 0;
}