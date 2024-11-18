#include <stdio.h>

int main(){
    int angka;
    printf("Masukkan Sebuah Angka: ");
    scanf("%d", &angka);

    if      (angka == 0){printf("Nol");}
    else if (angka < 0 || angka >= 100){printf("Anda Menginput Melebihi Bilangan");}
    else if (angka <= 9){printf("Satuan");}
    else if (angka == 10){printf("Puluhan");}
    else if (angka <= 19){printf("Belasan");}
    else if (angka <= 99){printf("Puluhan");}
}