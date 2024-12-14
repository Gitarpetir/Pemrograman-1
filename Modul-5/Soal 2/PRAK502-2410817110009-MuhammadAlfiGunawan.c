#include <stdio.h> 
#include <math.h> 
int hitung(int nilai1, int nilai2){ 
    int mutlakan = nilai1 - nilai2;
    if (mutlakan < 0){
        mutlakan = mutlakan * -1;
    }
    else{
        mutlakan = mutlakan;
    }
    return mutlakan;
} 
int mutlak(int angka){ 
}
int main(){ 
    int a,b,c,d; 
    scanf("%d",&a); 
    scanf("%d",&c); 
    scanf("%d",&b); 
    scanf("%d",&d);

    int Hasil = hitung(a,b) + hitung(c,d); 
    printf("%d",mutlak(Hasil)); 
return 0; 
} 