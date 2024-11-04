#include<stdio.h>

int main(){
    float jari,tinggi,volume,luas,keliling;

    
    scanf("%f", &jari);
    scanf("%f", &tinggi);

    volume = 22.0/7.0 * (jari*jari) * tinggi;
    printf("Volume     = %.2f\n", volume);

    luas = 2 * 22.0/7.0 * jari *(jari + tinggi);
    printf("Luas      = %.2f\n", luas);

    keliling = 2 * 22.0/7.0 * jari;
    printf("Keliling  = %.2f", keliling);

}