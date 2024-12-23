#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    int baris1[a], baris2[b];

    if (a!=b){
        printf("Jumlah tidak sama");
    }

    else{
        for(int i = 0; i<a; i++){
            scanf("%d", &baris1[i]);
        }
        for(int i = 0; i<b; i++){
            scanf("%d", &baris2[i]);
        }
        for(int i = 0; i<a; i++){
            int hasil = baris1[i] * baris2[i];
            printf("%d ", hasil);
        }
    }
}