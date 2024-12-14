#include <stdio.h>
void Biodata(int tahunLahir2,char Namaku2[],char Asal2[]){
    int tahun_sekarang = 2020;
    printf("Perkenalkan Nama Saya : %s\n", Namaku2);
    printf("Umur Saya : %d\n", tahun_sekarang - tahunLahir2);
    printf("Saya Adalah Angkatan : %d\n", tahun_sekarang);
    printf("Asal Saya Dari %s\n", Asal2);
}

int main() {
    int tahunLahir;
    char A[20], B[15];
    scanf(" %d",&tahunLahir);
    scanf(" %[^\n]%*c",&A);
    scanf(" %[^\n]%*c",&B);
    Biodata(tahunLahir, A, B);
return 0;
}