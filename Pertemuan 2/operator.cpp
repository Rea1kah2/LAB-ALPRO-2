#include <iostream>
using namespace std;

int main()
{
    int a, b;

    // Asignment Operator => untuk mengisikan nilai ke dalam variabel
    a = 3;
    b = 5;

    // Operator Aritmatika => untuk melakukan operasi matematika
    int tambah = a + b;
    int kurang = a - b;
    int kali = a * b;
    float bagi = float(a) / float(b); // Menggunakan Casting untuk merubah tipe data
    int modulus = a % b;

    cout << "Hasil Penjumlahan : " << tambah << endl;
    cout << "Hasil Pengurangan : " << kurang << endl;
    cout << "Hasil Perkalian   : " << kali << endl;
    cout << "Hasil Pembagian   : " << bagi << endl;
    cout << "Hasil Modulus     : " << modulus << endl;

    // Operator Relasi => untuk membandingkan 2 nilai, yg menghasilkan boolean
    cout << (a == b) << endl; 
    cout << (a < b) << endl; 
    cout << (a <= b) << endl; 
    cout << (a > b) << endl; 
    cout << (a >= b) << endl; 
    cout << (a != b) << endl; 

    // Operator Logika => untuk menggabungkan 2 atau lebih kondisi logika, yg menghasilkan boolean
    cout << (true && true) << endl; // AND
    cout << (true && false) << endl;
    cout << (false && true) << endl;
    cout << (false && false) << endl << endl;

    cout << (true || true) << endl; // OR
    cout << (true || false) << endl;
    cout << (false || true) << endl;
    cout << (false || false) << endl << endl;

    cout << !true << endl; // Negasi
    cout << !false << endl << endl;

    // Operator Bitwise (&, |, ^, >>, <<, ~) => Biner => untuk operasi bit-level
    cout << (5 & 7) << endl;
    cout << (5 | 7) << endl;
    cout << (5 ^ 7) << endl;
    cout << (~7) << endl;
    cout << (7 << 2) << endl;
    cout << (7 >> 2) << endl;

    // shorthand
    a += 7; // a = a + 7;
    cout << a << endl;

    a -= 7; // a = a - 7;
    cout << a << endl;

    a *= 7; // a = a * 7;
    cout << a << endl;

    a /= 7; // a = a / 7;
    cout << a << endl;

    a %= 7; // a = a % 7;
    cout << a << endl;

    // Increment, Decrement

    // Pre-Increment => menambah nilai variabel sebelum ditampilkan
    a = 3;
    b = 5;

    cout << a << endl;
    cout << ++a << endl << endl;

    cout << b << endl;
    cout << ++b << endl << endl;

    // // post-Increment => menambah nilai variabel saat ditampilkan 
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl << endl;

    cout << b << endl;
    cout << b++ << endl;
    cout << b << endl << endl;

    // Pre-Decrement => mengurangkan nilai variabel sebelum ditampilkan
    cout << a << endl;
    cout << --a << endl << endl;

    cout << b << endl;
    cout << --b << endl << endl;

    // Post-Decrement => mengurangkan nilai variabel saat ditampilkan
    cout << a << endl;
    cout << a-- << endl;
    cout << a << endl << endl;

    cout << b << endl;
    cout << b-- << endl;
    cout << b << endl << endl;


    return 0;
}
