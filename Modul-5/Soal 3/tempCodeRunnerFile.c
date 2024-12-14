#include <stdio.h> 
int maksimal(int a, int b){
    int terbesar;
    if (a < b){
        terbesar = b;
    } 
    else if (a > b){
        terbesar = a;
    }
    else if (a = b){
        terbesar = a;
    }
    return terbesar;
    
} 
int minimal(int a, int b){ 
    int terkecil;
    if (a > b){
        terkecil = b;
    }
    else if (a < b){
        terkecil = a;
    }
} 
int main(){ 
    int batas = 0; 
    int maks = -100000; 
    int minim = 100000; 
    int bilangan; 
    scanf("%d", &bilangan);

    while(batas < bilangan){ 
        int nilai; 
        scanf("%d", &nilai); 
        maks = maksimal(maks, nilai); 
        minim = minimal(minim, nilai); 
        batas++; 
    } 
    printf("%d %d",maks,minim); 
} 
