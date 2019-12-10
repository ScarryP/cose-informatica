#include<stdio.h>

#define DIM 4

int main(){
    float a[DIM][DIM];
    int i, j;

    for(i = 0; i < DIM; i++){
        for(j = 0; j < DIM; j++){
            printf("inserisci valore in posizione:[%d] [%d] ", i, j);
            scanf("%f", &a[i][j]);
        }
    }

    printf("\n ----------------- \n");

    for(i = 0; i < DIM; i++){
        for(j = 0; j < DIM; j++){
            printf("valore in posizione:[%d] [%d]: %f \n", i, j, a[i][j] );
        }
    }

    printf("\n ----------------- \n");

    for(i = 0; i < DIM; i++){
        printf("%f \n", a[i][i]);
    }
}