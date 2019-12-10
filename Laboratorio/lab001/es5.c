/* un programma che data una matrice quadrata N x N inserisce i dati
verifica se la matrice è una matrice identità (tutti zero a parte gli uno sulla diagonale) 
(visualizza 1), altrimenti visualizza zero */

#include<stdio.h>

#define N 5

int main(){
    int matrice[N][N];
    int i, j, iden;
    iden = 1;

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("ciao bello inserisci il valore in posizione (%d, %d) \t", i, j);
            scanf("%d", &matrice[i][j]);
        }
    }
    for(i = 0; (i < N && iden); i++){
        for(j = 0; (j < N && iden); j++){
            if((i == j && matrice[i][j] == 1) || (i!= j && matrice[i][j] != 0)) iden = 0;
        }
    }
    printf("%d", iden);
}