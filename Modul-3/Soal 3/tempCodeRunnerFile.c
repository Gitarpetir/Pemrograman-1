#include <stdio.h>

int main(){
    int angka;
    printf("Masukkan Bilangan Bulat: ");
    scanf("%d", &angka);

    if(angka > 0){printf("Positif");}
    else if(angka < 0){printf("Negatif");}
    else if (angka==0){printf("Nol");}
}