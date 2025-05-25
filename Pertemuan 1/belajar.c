#include <stdio.h> // header untuk C
#include <conio.h>

int main()
{
    char nama[50];
    int nim;
    char kom[2];
    float ip;

    printf("Hello World\n"); // fungsi keluaran pada C

    printf("Masukkan nama : ");
    gets(nama); // get string, untuk dua kata atau lebih

    printf("Masukkan nim : ");
    scanf("%d", &nim); // fungsi masukan pada C

    getchar(); // berfungsi untuk "mengambil" karakter newline dari buffer agar input berikutnya berjalan dengan benar.

    printf("Masukkan kom : ");
    gets(kom);

    printf("Masukkan ip : ");
    scanf("%f", &ip);

    /* Untuk Output */
    printf("Nama : ");
    puts(nama); // put string, digunakan untuk string dalam bentuk array char

    printf("NIM : %d\n", nim);

    printf("KOM : ");
    puts(kom);
    printf("IP : %.2f\n", ip);

    printf("press any button to continue...");
    getch();
}
