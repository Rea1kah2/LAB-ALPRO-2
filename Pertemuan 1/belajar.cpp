#include <iostream>
#include <conio.h> // Header untuk getch() dan getche()
using namespace std;

int main(){
    cout << "Hello World!\n";
    string nama;
    char kom, jenis_kelamin;
    string nim;
    float ip;

    cout << "Masukkan Nama : ";
    getline(cin, nama); // Untuk dua kata atau lebih
    cout << "Masukkan NIM  : ";
    cin >> nim;
    cout << "Masukkan KOM  : ";
    cin >> kom;
    cout << "Masukkan IP   : ";
    cin >> ip;
    cout << "Masukkan Gender (L/P): ";
    jenis_kelamin = getche(); // minta inputan Karakter tanpa harus menekan enter
    jenis_kelamin = toupper(jenis_kelamin); // membuat nilai yg diisi menjadi huruf kapital
    cout << endl;

    cout << endl << nama << endl;
    cout << nim << endl;
    cout << kom << endl;
    cout << ip << endl;
    putchar(jenis_kelamin); // Untuk menangkap fungsi dari getchar()
    cout << endl;

    getch(); // Karakter yang diketik tidak tampil di layar
}