#include <stdio.h>

int main(){
    int i,j;
    char k;

    printf("Masukkan Angka Kelipatan: ");
    scanf("%d", &j);
    printf("Masukkan Simbol: ");
    scanf(" %c", &k);

    for (i=1; i<=50; i++){
        if(i % j == 0){
            printf("%c ", k);
        }
        else{
            printf("%d ", i);
        }
        }
}