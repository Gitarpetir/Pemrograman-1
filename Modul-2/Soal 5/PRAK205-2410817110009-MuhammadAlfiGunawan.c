#include<stdio.h>
#include<math.h>

int main(){
    float tinggi,miring,alas,keliling,luas;

    scanf("%f", &tinggi);
    scanf("%f", &miring);

    alas = sqrt((miring*miring)-(tinggi*tinggi));
    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", tinggi);

    keliling = alas + miring + tinggi;
    printf("Keliling = %.0f cm\n", keliling);

    luas = 1.0/2.0 * alas * tinggi;
    printf("Luas = %.0f cm^2", luas); 

}