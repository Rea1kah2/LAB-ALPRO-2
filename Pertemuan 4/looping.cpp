#include <iostream>
using namespace std;

int main() {
    // goto label
    //  Acak : Hello World, Fasilkom-TI, Ilmu Komputer, IKLC
    //  Urutan benar : Hello World, IKLC, Ilmu Komputer, Fasilkom-TI

    a:
        cout << "Hello World" << endl;
        goto d; // akan melompat ke label d
    b:
        cout << "Fasilkom-TI" << endl;
        return 0;
    c:
        cout << "Ilmu Komputer" << endl;
        goto b; // akan melompat ke label b
    d:
        cout << "IKLC" << endl;
        goto c; // akan melompat ke label c

    // menampilkan bilangan genap 10 -> 2 dengan goto
    int i = 10;
    genap: // label 'genap'
    if (i % 2 == 0) {
        cout << i << " ";
    } i--;  

    if (i >= 2) {
        goto genap; // melompat ke label 'genap'
    }

    // while loop
    int i = 1;
    while (i <= 10) {
        if (i % 2 == 0) {
            cout << i << " ";
        } i++;
    }

    // do-While
    int i = 1;
    do {
        cout << i << endl;
    } while (i <= 0); // 1 <= 0

    // for loop

    // Struktur for loop
    // for (inisialisasi, kondisi, increment/decrement) {
    //      statement 
    //      statement 
    // }

    for (int i = 1; i <= 10; i+=2) {
        cout << "Hello World" << endl;
    }
    
    // Nested for => terdapat for lagi di dalam blok kode for
    // ***** 5 x 5
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // segitiga siku-siku
    for(int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}