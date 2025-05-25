#include <iostream>
using namespace std;

// fungsi penjumlahan biasa
void penjumlahan(int a, int b){ 
    cout << a+b << endl;
} 

// fungsi penjumlahan dengan pointer
void penjumlahan_pointer(int *x, int *y){ // parameter formal yg berisi nilai dari variabel yg alamatnya dikirim dari parameter aktual
    *x += *y; // akan memanipulasi nilai variabel yg alamatnya ditunjuk oleh pointer
    cout << *x << endl;
}

int main(){
    // Deklarasi Pointer
    int number = 25;
    int *pointer_number = &number; // 'pointer_number' menunjuk ke alamat dari variabel 'number

    cout << "Isi variabel number : " << number << endl;
    cout << "Alamat dari variabel number : " << &number << endl;
    cout << "Isi variabel pointer_number : " << pointer_number << endl;
    cout << "Isi variabel pointer_number yang ditunjuk oleh pointer_number : " << *pointer_number << endl;
    cout << "Alamat dari pointer_number : " << &pointer_number << endl << endl;

    // Operasi Pointer //
    *pointer_number = 666; // Mengganti nilai pada variabel yang alamatnya ditunjuk oleh 'pointer_number'
    cout << "Isi variabel number : " << number << endl;
    cout << "Alamat dari variabel number : " << &number << endl;
    cout << "Isi variabel pointer_number : " << pointer_number << endl;
    cout << "Isi variabel pointer_number yang ditunjuk oleh pointer_number : " << *pointer_number << endl;
    cout << "Alamat dari pointer_number : " << &pointer_number <<  endl << endl;  
    
    // Pointer di Array
    int angka[] = {1,2,3,4,5};
    int *pointer_angka = angka; // 'pointer_angka' akan menunjuk ke alamat dari array 'angka'
    cout << "Isi variabel angka : " << angka[0] << endl;
    cout << "Alamat dari variabel angka indeks 0 : " << &angka[0] << endl;
    cout << "Alamat dari variabel angka indeks 1: " << &angka[1] << endl;
    cout << "Alamat dari variabel angka indeks 2: " << &angka[2] << endl;
    cout << "Alamat dari variabel angka indeks 3: " << &angka[3] << endl;
    cout << "Alamat dari variabel angka indeks 4: " << &angka[4] << endl;
    cout << "Isi variabel pointer_angka : " << pointer_angka << endl;
    cout << "Isi variabel pointer_angka yang ditunjuk oleh pointer_angka : " << *pointer_angka << endl; // Menunjuk nilai dari indeks ke-0
    cout << "Alamat dari pointer_angka : " << &pointer_angka <<  endl << endl;  
    
    *pointer_angka += 5; // Selalu menujuk ke indeks ke-0, maka akan menambahkan 5 pada nilai di indeks ke-0
    cout << "Isi variabel angka : " << angka[0] << endl;
    cout << "Alamat dari variabel angka indeks 0 : " << &angka[0] << endl;
    cout << "Alamat dari variabel angka indeks 1: " << &angka[1] << endl;
    cout << "Alamat dari variabel angka indeks 2: " << &angka[2] << endl;
    cout << "Alamat dari variabel angka indeks 3: " << &angka[3] << endl;
    cout << "Alamat dari variabel angka indeks 4: " << &angka[4] << endl;
    cout << "Isi variabel pointer_angka : " << pointer_angka << endl;
    cout << "Isi variabel pointer_angka yang ditunjuk oleh pointer_angka : " << *pointer_angka << endl;
    cout << "Alamat dari pointer_angka : " << &pointer_angka <<  endl << endl;  


    // pointer dalam parameter fungsi
    int angka1 = 5;
    int angka2 = 7;

    // penjumlahan tanpa pointer
    // => nilai yang sudah ditambahkan tidak berubah saat dipanggil di program utama
    penjumlahan(angka1,angka2);
    cout << angka1 << endl;
    cout << angka2 << endl;
    
    // penjumlahan menggunakan pointer  
    // => nilai yang sudah ditambahkan akan memanipulasi nilai dari variabel yg ditunjuk oleh pointer
    penjumlahan_pointer(&angka1, &angka2); // mengirimkan parameter aktual berisi alamat variabelnya
    cout << angka1 << endl;
    cout << angka2 << endl;

    // Pointer to Pointer => pointer yang menunjuk alamat pointer lain
    int skor = 90;
    int *pointer_skor = &skor; // 'pointer_skor' menunjuk ke alamat variabel 'skor'
    int **ptr_pointer_skor = &pointer_skor; // 'ptr_pointer_skor' menunjuk ke alamat dari pointer 'pointer_skor'
    cout << "isi variabel skor : " << skor << " dan alamat memori skor : " << &skor << endl;
    cout << "Isi variabel pointer skor : " << pointer_skor << " dan isi variabel yang ditunjuk oleh pointer_skor : " << *pointer_skor << endl << "alamat memori pointer_skor : " << &pointer_skor << endl << endl;
    cout << "Isi variabel ptr_pointer_skor : " << pointer_skor << " dan isi variabel yang ditunjuk oleh ptr_pointer_skor : " << **ptr_pointer_skor << " alamat memori ptr_pointer_skor : " << &ptr_pointer_skor << endl;

    // Pointer Dinamis => pointer yang menunjuk ke alamat memori yang akan dialokasikan saat program berjalan
    int *ptr = new int; // pointer 'ptr' akan menunjuk ke sebuah 'int' yang dipinjam pada area memori dinamis 
    *ptr = 30; // mengisikan angka 30 pada alamat yg ditunjuk 'ptr'
    cout << "isi variabel ptr : " << *ptr << " dan alamat ptr : " << &ptr << endl;
    
    delete ptr; // pembebasan memori yang dipinjam
    cout << "isi variabel ptr : " << *ptr << " dan alamat ptr : " << &ptr << endl;
}