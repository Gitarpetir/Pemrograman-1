#include<stdio.h>

int main(){
    float a,b,i,j,x,y,total;
    scanf ("%f", &a);
    scanf ("%f", &b);
    scanf ("%f", &i);
    scanf ("%f", &j);
    scanf ("%f", &x);
    scanf ("%f", &y);
    
    total = (a - b) * (i / j) - (x + y);
    printf ("%.3f", total);

}