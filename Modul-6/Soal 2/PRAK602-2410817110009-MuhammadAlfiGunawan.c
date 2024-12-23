#include <stdio.h>

int main(){
    int baris;
    int j = 1;
    scanf("%d", &baris);
    int a[baris];

    for(int i = 0; i < baris; i++){
        scanf ("%d", &a[i]);
        printf ("%d ", a[i] * j);
        j++;
    }
}