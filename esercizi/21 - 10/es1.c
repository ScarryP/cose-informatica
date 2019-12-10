#include <stdio.h>
#define DIM 5

int main()
{
    int vettore[DIM];
    int i, j, max = 0;

    for (i = 0; i < DIM; i++)
    {
        printf("ciao bello inserisci valore in posizione %d \t", i);
        scanf("%d", &vettore[i]);
    }

    for (i = 0; i < DIM; i++)
    {
        if (vettore[i] > max)
        {
            max = vettore[i];
        }
    }

    printf("\n -------------- \n");

    // for (i = 0; i < DIM; i++)
    // {
    //     printf("%d \t", vettore[i]);
    // }
    printf("\n");

    for (j = max; j > 0; j--)
    {
        for (i = 0; i < DIM; i++)
        {
            if (vettore[i] >= j)
                printf("*\t");
            else
                printf(" \t");
        }
        printf("\n");
    }
        for (i = 0; i < DIM; i++)
    {
        printf("%d \t", vettore[i]);
    }
    printf("\n -------------- \n");
}