#include<stdio.h>

int main(){
    int ordo;
    scanf("%d", &ordo);
    int matriksA[ordo][ordo], matriksB[ordo][ordo], matriksC[ordo][ordo];
    
    printf("Matriks A\n");
    for (int i = 0; i < ordo; i++){
        for (int j = 0; j < ordo; j++){
            scanf("%d", &matriksA[i][j]);
        }
    }
    printf("MatriksB\n");
    for (int i = 0; i < ordo; i++){
        for (int j = 0; j < ordo; j++){
            scanf("%d", &matriksB[i][j]);
        }
    }
    

    printf("Matriks AXB\n");
    // Perkalian matriks
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            matriksC[i][j] = 0;
            for (int k = 0; k < ordo; k++) {
                matriksC[i][j] += matriksA[i][k] * matriksB[k][j];
            }
        }
    }

    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            printf("%d ", matriksC[i][j]);
        }
        printf("\n");
    }
}

