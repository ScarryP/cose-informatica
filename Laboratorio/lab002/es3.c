#include<stdio.h>

#define N 4

int main(){
    int a[N][N], at[N][N];
    int i, j;

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("inserisci valore in posizione:[%d] [%d] ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n ----------------- \n");

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf(" %d \t", a[i][j] );
        }
        printf("\n");
    }

    printf("\n ----------------- \n");

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            at[j][i] = a[i][j];
        }
    }

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf(" %d \t", at[i][j] );
        }
        printf("\n");
    }
}