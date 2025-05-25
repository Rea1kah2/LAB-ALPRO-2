#include <iostream>
using namespace std;

void tanpa_pointer(int x){
    x += 1;
}

void dengan_pointer (int* a){
    *a +=2;
}
int main(){
    /* Pointer

    => Merupakan variabel yang menyimpan alamat dari variabel lainnya    
    => Manfaat Pointer : 
        a. bisa merubah data melalui alamat
        b. bisa hemat memori
        c. bisa kirim data ke fungsi secara langsung tanpa meng-copy-nya
        d. wajib dipakai saat menggunakan perintah new (untuk alokasi memori dinamis)

    => Simbol dalam Pointer :
        a. & => untuk ambil alamat dari suatu variabel
        b. * => untuk ambil nilai dari variabel sesuai alamat yang disimpan dalam variabel pointer
    */
    
    // Simbol Pointer
    // int a = 10;
    // int* ptr = &a;
    // cout << ptr << endl;
    // cout << *ptr << endl;
    // cout << *&a << endl << endl;

    // int rumah_hantu = 20;
    // int& rumah_boneka = rumah_hantu;
    // cout << rumah_hantu << endl;
    // cout << rumah_boneka << endl;

    // cout << &rumah_boneka << endl;
    // cout << &rumah_hantu << endl;

    int x = 10;
    int* ptr = &x; // pointer yang menunjuk alamat variabel x
    cout << *ptr << endl; // dengan * menampilkan nilai
    cout << ptr << endl << endl; // tanpa * menampilkan alamat

    // Nama Pointer yang menunjuk alamat variabel yang sama tidak boleh identik
    // Jadi 2 pointer yang berbeda bisa menunjuk ke alamat variabel yang sama
    x = 7;
    int* p = &x;
    cout << *p << endl;
    cout << p << endl;
    cout << *ptr << endl;
    cout << ptr << endl;
    
    // Menggunakan Pointer dalam Fungsi

    x = 5;
    tanpa_pointer(x);
    cout << "(Tanpa Pointer) x : " << x << endl;
    dengan_pointer(&x);
    cout << "(Dengan Pointer) x : " << x << endl;

    // Belajar Referensi 
    int y = 10;
    int& ref = y; // referensi sebagai alias atau nama lain dari variabel y
    cout << endl << "y : " << y << endl;
    cout << "ref : " << ref << endl; 

    // misalnya merubah nilai variabelnya
    y += 5;
    cout << "y : " << y << endl;
    cout << "ref : " << ref <<  endl;
    
    ref += 10;
    cout << "y : " << y << endl;
    cout << "ref : " << ref <<  endl;

    // Deferencing Pointer => Mengakses nilai dari alamat yang disimpan dalam pointer

    int c = 10;
    int* pointer = &c;
    cout << "Nilai Awal : " << *pointer << endl;

    *pointer += 15;

    cout << "Nilai diubah melalui pointer : " << *pointer << endl;

    int a = 10;
    int b = 15;
    int* ptr1 = &a;
    int* ptr2 = &b;

    *ptr1 = *ptr2 + 22;

    cout << "Nilai a : " << a << " Bisa juga " << *ptr1 << endl;
    cout << "Nilai b : " << b << " Bisa juga " << *ptr2 << endl;

    // Pointer Null
    // => Pointer yang tidak merujuk ke alamat manapun
    // => Digunakan untuk menandai kalau pointer belum diinisialisasi atau gak merujuk ke alamat manapun, mencegah deferencing ke alamat yang gak ada atau sudah dibersihkan.

    int* pointer_kosong = nullptr; // inisialisasi pointer Null
    if(pointer_kosong == nullptr){
        cout << "pointer belum menunjuk ke alamat manapun" << endl;
    }else{
        cout << "Alamat : " << pointer_kosong << endl;
    }
    cout << endl;
    a = 10;
    ptr1 = nullptr;
    ptr2 = &a;

    if(ptr1 == nullptr){
        cout << "Pointer NULL!" << endl;
    }else{
        cout << "ALamat : " << ptr1 << endl;
    }
    if(ptr2 == nullptr){
        cout << "pointer NULL!" << endl;
    }else{
        cout << "Alamat : " << ptr2 << endl;
        cout << "Nilai : " << *ptr2 << endl;
    }
}
