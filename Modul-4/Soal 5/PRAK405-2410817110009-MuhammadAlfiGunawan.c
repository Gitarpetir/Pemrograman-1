#include <stdio.h>
int main(){
    int batas, lipat;
    int total = 0, jumlah = 0;

    printf("Masukkan Batas Baris: ");
    scanf("%d", &batas);
    printf("Masukkan Kelipatan: ");
    scanf("%d", &lipat);

    for(int i = 1; i <= batas; i++) {
        jumlah = 0; 

        for(int j = i; j > 0; j--) {
            printf("(%d * %d)", j,lipat); 
            jumlah += j * lipat; 
            
            if (j > 1) {
                printf(" + ");
            }
        }
        printf(" = %d\n", jumlah);
        total += jumlah;
    }
    
    printf("%d", total);
    
}