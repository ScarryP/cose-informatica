/* prendi 10 numeri interi salvati in un array e ppi copiali in ordine inverso in un secondo array */

#include <stdio.h>
#define DIM 10
int main()
{
    int vettore1[DIM];
    int vettore2[DIM];
    int i;

    for (i = 0; i < DIM; i++)
    {
        printf("ciao bello inserisci valore in posizione %d \t", i);
        scanf("%d", &vettore1[i]);
    }
    printf("\n -------------- \n");
    for (i = 0; i < DIM; i++)
    {
        printf("ciao bello il valore in posizione %d \t corrisponde a: %d \n", i, vettore1[i]);
    }
    printf("\n -------------- \n");
    for (i = 0; i < DIM; i++)
    {
        vettore2[i] = vettore1[DIM - i - 1];
    }
    for (i = 0; i < DIM; i++)
    {
        printf("ciao bello il valore in posizione %d \t corrisponde a: %d \n", i, vettore2[i]);
    }
    printf("\n -------------- \n");
}