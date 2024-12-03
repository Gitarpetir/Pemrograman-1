#include <stdio.h>

int main(){
    int a, b;
    printf("Masukkan Angka Pertama: ");
    scanf("%d", &a);
    printf("Masukkan Angka Kedua: ");
    scanf("%d", &b);

    int x = a, y = b;
    while(1){ 
        printf("%d %d", x, y);
        if (x == b && y == a) 
        break; 

        if(a > b){
            x--;
            y++;
        } 
        else{
            x++;
            y--;
        }
        printf(" - ");
    }
}
