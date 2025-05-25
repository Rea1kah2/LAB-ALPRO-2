#include <iostream> // Header => berisi fungsi fungsi yang dibuat dari bahasa pemrograman
#include <cmath> // header berisi operasi matematika yg lebih kompleks

#include "buatHeader.h" // header buatan sendiri diapit dengan tanda petik dua

/*
    Informasi lebih detail mengenai perubahan definisi pada 
    setiap sintaksnya bisa dilihat pada file 'buatHeader.h'
*/

gampang;

int jumlah(int a,int b){
    return a+b;
}

int kurang(int a,int b){
    return a-b;
}

int mamaknya{
    // Membuat header sendiri
    system("cls");
    tampilin kiri jumlah(2,3) kiri enter;
    tampilin kiri kurang(2,3) kiri enter;

    double angka = 25.0;
    tampilin kiri "25^2 = " kiri pow(angka, 2) kiri enter;
    tampilin kiri "Akar dari 25 = " kiri sqrt(angka) kiri enter;

    tampilin kiri "Masukkan angka : ";
    masukan ngka;kanan a
    tampilin kiri angka;
}