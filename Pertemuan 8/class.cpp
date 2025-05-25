#include <iostream>
using namespace std;

// Struktur dari Class
// class nama_class{
//     private:
//         anggota_private;
//     protected:
//         anggota_protected;
//     public:
//         anggota_public;
// };

class contoh_akses {
    private: // anggota yang hanya bisa diakses oleh class itu sendiri
        int privateVar; 
    protected: // anggota yang bisa diakses oleh parent dan child class
        int protectedVar;
    public: // anggotanya bisa diakses dari luar class
        int publicVar; 
        string nama;

    // Constructor => fungsi khusus yang akan otomatis dipanggil saat objek dibuat
    contoh_akses(){  // ini constructor
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    // Method => fungsi-fungsi di dalam class
    void tampilkanSemua(){ // merupakan method
        cout << "Akses dari dalam data : " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
    void tampilkanNama(string namaku){ // merupakan method
        string nama = namaku;
        cout << "Nama saya adalah " << nama << endl;
    }
};

// kelas turunan (child class)
class turunan : public contoh_akses { // class turunan bisa mewarisi semua atribut milik class 'contoh_akses'
    public:
        void aksesProtected(){ // membuat method
            cout << "Akses publicVar : " << publicVar << endl;
            cout << "Akses protectedVar : " << protectedVar << endl;
            // cout << "Akses privateVar : " << privateVar << endl; Akan error, karena hanya bisa diakses oleh class parent
        }
};

int main(){
    contoh_akses objek; // deklarasi variabel bertipe 'contoh_akses'
    objek.tampilkanSemua(); // memanggil method
    objek.tampilkanNama("Ariel"); // memanggil method dengan parameter aktual berupa string

    cout << "\nAkses dari luar class : " << endl;
    // cout << objek.privateVar << endl; // Akan error
    // cout << objek.protectedVar << endl; // Akan error
    cout << objek.publicVar << endl; 

    turunan tur;
    tur.aksesProtected();
}