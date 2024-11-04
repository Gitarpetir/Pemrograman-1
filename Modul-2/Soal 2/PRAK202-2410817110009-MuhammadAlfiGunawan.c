#include <stdio.h>

int main(){
    float bil1,bil2,hasil;

    printf ("Masukkan Nilai Pertama: ");
    scanf ("%g", &bil1);

    printf ("Masukkan Nilai Kedua: ");
    scanf ("%g", &bil2);

    hasil = bil1 + bil2;

    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah %.2f", bil1,bil2,hasil);
}