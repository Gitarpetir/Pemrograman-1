#include <stdio.h>
int main(){
    int a;
    float bil1,bil2;

while(a){
    printf("Pilih program\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Exit\n");
    printf("Masukkan Pilihan: ");
    scanf("%d", &a);

    if (a == 1){
        printf("Masukkan Nilai Pertama: ");
        scanf("%f", &bil1);
        printf("Masukkan Nilai Kedua: ");
        scanf("%f", &bil2);
        printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", bil1,bil2,bil1 + bil2);
    }
    else if (a == 2){
        printf("Masukkan Nilai Pertama: ");
        scanf("%f", &bil1);
        printf("Masukkan Nilai Kedua: ");
        scanf("%f", &bil2);
        printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", bil1,bil2,bil1 - bil2);
    }
    else if (a == 3){
        printf("Masukkan Nilai Pertama: ");
        scanf("%f", &bil1);
        printf("Masukkan Nilai Kedua: ");
        scanf("%f", &bil2);
        printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", bil1,bil2,bil1 * bil2);
    }
    else if (a == 4){
        printf("Masukkan Nilai Pertama: ");
        scanf("%f", &bil1);
        printf("Masukkan Nilai Kedua: ");
        scanf("%f", &bil2);
        printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", bil1,bil2,bil1 / bil2);
    }
    else if (a == 5){
        printf("Terimakasih, telah menggunakan kalkulator Alfi");
        break;
    }
    else{
        printf("Input anda salah, silahkan coba lagi\n");
    }
}
}