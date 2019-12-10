#include<stdio.h>

#define N 4

int main(){
    int a[N][N], b[N][N];
    int i, j;

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("inserisci valore di a in posizione:[%d] [%d] ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n ----------------- \n");

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("inserisci valore di b in posizione:[%d] [%d] ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n ----------------- \n");

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(a[i][j] == b[i][j]){
                printf(" valore corrispondente in [%d][%d] \n", i, j );
            }
        }
    }

    printf("\n ----------------- \n");
}