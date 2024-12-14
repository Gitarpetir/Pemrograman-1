#include <stdio.h>
int MaxBilangan(int w, int x, int y, int z){
    int besar;
    if (w > x && w > y && w > z){
        besar = w;
    }
    else if (x > w && x > y && x > z){
        besar = x;
    }
    else if (y > w && y > x && y > z){
        besar = y;
    }
    else {
        besar = z;
    }
    return besar;
}
int main() {

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int hasil = MaxBilangan(a, b, c, d);
    printf("%d", hasil);
return 0;
}
