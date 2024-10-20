#include <stdio.h>

int main(){
    int HargaA,HargaB,diskonA,diskonB;
    HargaA = 400000;
    HargaB = 350000;
    diskonA = (HargaA * 87)/100;
    diskonB = (HargaB * 79)/100;
    printf ("Harga sepatu A adalah %d\n", HargaA);
    printf ("Harga sepatu B adalah %d\n", HargaB);
    printf ("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", diskonA);
    printf ("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d", diskonB);
     
}