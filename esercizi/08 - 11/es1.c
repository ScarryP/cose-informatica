/*chiedi all'utente i 50 elementi di due matrici 5x5 e salva la somma in un altra matrice e poi la stampa */

#include <stdio.h>

#define DIM 5

int main()
{
    int m1[DIM][DIM], m2[DIM][DIM], somma[DIM][DIM];
    int i, j;

    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
        {
            printf("ciao bello inserisci elemento matrice 1 ( %d, %d):  ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }

    printf("\n---------\n");

    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
        {
            printf("ciao bello inserisci elemento matrice 2 ( %d, %d):  ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }

    printf("\n---------\n");

    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
        {
            somma[i][j] = m1[i][j] + m2[i][j];
            printf("%d \t", somma[i][j]);
        }
        printf("\n");
    }

    return 0;
}