#include<stdio.h>
#define DIM  5

void stampaQuadrato(int);

int main(){
    int lati[DIM];
    int i;

    for(i = 0; i < DIM; i++){
        printf("ciao bello inserisci elemento %d ", i);
        scanf("%d", &lati[i]);
    }

    for(i = 0; i < DIM; i++){
        stampaQuadrato(lati[i]);
    }

    return 0;

}

void stampaQuadrato(int n){
    int i, j;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("*_");
        }
        printf("\n");
    }
    printf("\n");
}