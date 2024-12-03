#include <stdio.h>
int main(){
    int i,j;

    printf("Masukkan Batas Maksimal Angka: ");
    scanf("%d", &j);

    for(i=1; i<=j; i += 2){
        printf("%d ", i);
    }
    printf("\n");

    for(j; j>=2; j--){
        if(j % 2 == 0){
            printf("%d ", j);
        }
        else{}
    }

}