#include <iostream>
#include <vector>

using namespace std;

/*
    Struct merupakan kumpulan variabel dengan tipe data yang berbeda-beda, yang digunakan untuk membuat tipe data baru.
*/

struct alamat { // membuat tipe data baru bernama 'alamat' yang berisi berbagai variabel
    string jalan;
    string kota;
    int kodepos;
};

struct Mahasiswa{
    string nama;
    int umur;
    float ipk;
    // Nested struct
    // => Terdapat struct di dalam struct
    alamat alamat_mahasiswa; // membuat variabel 'alamat_mahasiswa' dengan tipe data 'alamat' 
};

int main(){
    Mahasiswa mhs1; // deklarasi variabel 'mhs1' dengan tipe data 'Mahasiswa'

    mhs1.nama = "Ariel";
    mhs1.umur = 20;
    mhs1.ipk = 4.01;

    mhs1.alamat_mahasiswa.jalan = "Jl.Gagak Hitam No.52";
    mhs1.alamat_mahasiswa.kota = "Medan";
    mhs1.alamat_mahasiswa.kodepos = 20147;

    cout << "Alamat : " << mhs1.alamat_mahasiswa.jalan << " Kota " << mhs1.alamat_mahasiswa.kota << " Kodepos " << mhs1.alamat_mahasiswa.kodepos << endl;

    vector<Mahasiswa> mahasiswa; // deklarasi variabel 'mahasiswa' yang berupa vector dengan tipe data 'Mahasiswa'
    int n;
    cout << "Masukkan banyak mahasiswa : ";cin >> n;
    
    // Membuat inputan biodata dengan for loop
    for(int i = 0;i < n;i++){
        cout << "Mahasiswa ke-" << i+1 << endl;
        cin.get(); // digunakan untuk menyerap buffer/newline setelah inputan
        cout << "Masukkan Nama : ";getline(cin, mhs1.nama);
        cout << "Masukkan Umur : ";cin >> mhs1.umur;
        cout << "Masukkan ipk : ";cin >> mhs1.ipk;
        
        mahasiswa.push_back(mhs1); // memasukkan variabel 'mhs1' kedalam vector 'mahasiswa'
    }
    
    // menampilkan output biodata dengan for loop
    for(int i=0;i<n;i++){
        cout << "Mahasiswa ke-" << i+1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "IPK  : " << mahasiswa[i].ipk << endl;
    }
}