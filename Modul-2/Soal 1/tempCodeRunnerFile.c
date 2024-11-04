#include <stdio.h>

int main(){ 
    char nama[50],nim[30],kelas[10],ttl[30],alamat[40],hobi[20],no[15];

    printf("Nama                    :");
    scanf("%[^\n]", &nama);
    getchar();

    printf("NIM                     :");
    scanf("%[^\n]", &nim);
    getchar();

    printf("Kelas Paralel           :");
    scanf("%[^\n]", &kelas);
    getchar();

    printf("Tempat/Tanggal Lahir    :");
    scanf("%[^\n]", &ttl);
    getchar();

    printf("Alamat                  :");
    scanf("%[^\n]", &alamat);
    getchar();

    printf("Hobby                   :");
    scanf("%[^\n]", &hobi);
    getchar();

    printf("No. HP                  :");
    scanf("%[^\n]", &no);

    printf("=====BIODATA=====\n");
    printf("Nama                    : %s\n", nama);
    printf("NIM                     : %s\n", nim);
    printf("Kelas Paralel           : %s\n", kelas);
    printf("Tempat/Tanggal Lahir    : %s\n", ttl);
    printf("Alamat                  : %s\n", alamat);
    printf("Hobby                   : %s\n", hobi);
    printf("No. HP                  : %s\n", no);


    
}