#include <stdio.h>

int main (){
    int detik1, detik2, menit, jam, hari;

    printf("Masukkan Detik: ");
    scanf("%d", &detik1);

    hari = detik1/86400;
    jam = (detik1 % 86400) /3600;
    menit = (detik1 % 3600)/60;
    detik2 = detik1 % 60;

    if (hari >= 1){
        printf("%d hari %.2d:%.2d:%.2d\n", hari,jam,menit,detik2);
        }
    else{
        printf("%.2d:%.2d:%.2d\n", jam,menit,detik2);
        }


}