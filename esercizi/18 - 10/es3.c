/* chiedere 10 numeri e metterli in ordine (BUBBLE SORT) */

#include <stdio.h>
#define DIM 10

int main()
{
    int vettore[DIM];
    int i, j, temp;

    for (i = 0; i < DIM; i++)
    {
        printf("ciao bello inserisci il valore %d_esimo \t", i + 1);
        scanf("%d", &vettore[i]);
    }
    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j > DIM - i; i++)
        {
            if (vettore[j] == vettore[j + 1])
            {
                temp = vettore[j];
                vettore[j + 1] = vettore[j];
                vettore[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < DIM; i++)
    {
        printf("ciao bello il valore %d_esimo \t corrisponde a: %d \n", i + 1, vettore[i]);
    }
    return 0;
}