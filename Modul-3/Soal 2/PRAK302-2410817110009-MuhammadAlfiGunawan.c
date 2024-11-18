#include <stdio.h>

int main(){
    int bilA;

    printf ("Masukkan Nilai: ");
    scanf ("%d", &bilA);

     if (bilA >=80){
        printf ("Nilai Anda A");
     }
     else if (bilA >=70){
        printf ("Nilai Anda B");
     }
     else if (bilA >=60){
        printf ("Nilai Anda C");
     }
     else if (bilA >=50){
        printf ("Nilai Anda D");
     }
     else if (bilA <50 ){
        printf ("Nilai Anda E");
     }
}