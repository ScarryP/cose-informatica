/* matrice 5x5 trovo il carattere più ripetuto, stampa la matrice usando '*' al posto del carattere */

#include <stdio.h>

#define DIM 5

int main()
{
    char bob[DIM][DIM];
    char maxC;
    int i, j, h, k, maxN = 0, conto;

    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
        {
            printf("ciao bello inserisci il valore in riga %d \t colonna %d \t", i + 1, j + 1);
            scanf("%c", &bob[i][j]);
        }
    }
    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
        {
            printf("%c \t", bob[i][j]);
        }
        printf("\n");
    }
    maxC = bob[0][0];
    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
        {
            conto = 0;
            for (h = 0; h < DIM; h++)
            {
                for (k = 0; k < DIM; k++)
                {
                    if (bob[h][k] == bob[i][j])
                        conto++;
                }
            }
            if (conto > maxN)
            {
                maxN = conto;
                maxC = bob[i][j];
            }
        }
    }
    printf("\n --- %c --- \n", maxC);
    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
        {
            if (bob[i][j] != maxC)
                printf("%c \t", bob[i][j]);
            else
                printf("* \t");
        }
        printf("\n");
    }
}