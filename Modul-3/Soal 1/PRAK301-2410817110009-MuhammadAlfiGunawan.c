#include <stdio.h>
int main(){
    int a,b,c;

    printf ("Masukkan Angka Pertama: ");
    scanf ("%d", &a);
    printf("Masukkan Angka Kedua: ");
    scanf("%d", &b);
    printf("Masukkan Angka Ketiga: ");
    scanf("%d", &c);

    if (a>c && c>b){
        printf("%d %d %d", b,c,a);
    }
    else if (b>a && a>c){
        printf("%d %d %d", c,a,b);
    }
    else if (c>a && a>b){
        printf("%d %d %d", b,a,c);
    }
    else{
    }
}