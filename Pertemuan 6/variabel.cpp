#include <iostream>
#include <string>
using namespace std;

string namaGlobal = "Ilmu"; // variabel global => bisa diakses di seluruh program

void namaVariabel(){
    string namaLokal = "Komputer"; // variabel lokal => hanya bisa diakses di dalam fungsi

    // panggil variabel
    cout << namaLokal << endl;

    cout << namaGlobal << endl;
};

int main(){
    // variabel lokal dan global
    namaVariabel();

    // panggil variabel
    cout << endl << namaGlobal << endl;
}