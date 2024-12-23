#include <stdio.h>
    

int main(){
    int baris,kolom;
    scanf("%d %d", &baris,&kolom);
    int array[baris][kolom];


    for(int i=0; i < baris; i++){
        for(int j=0; j < kolom; j++){
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}