/*due sequenze di 5 numeri ciascuna,
stampa se la seconda è una permutazione della prima*/

#include <stdio.h>
#define DIM 5

int main()
{
    int seq1[DIM], seq2[DIM];
    int i, j, found = 0;

    for (i = 0; i < DIM; i++)
    {
        printf("ciao bello inserisci il valore %d_esimo \t", i + 1);
        scanf("%d", &seq1[i]);
    }
    for (i = 0; i < DIM; i++)
    {
        printf("ciao bello inserisci il valore %d_esimo \t", i + 1);
        scanf("%d", &seq2[i]);
    }

    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
        {
            if (seq1[i] == seq1[j])
                found++;
        }
        for (j = 0; j < DIM; j++)
        {
            if (seq1[i] == seq2[j])
                found--;
        }
    }
    if (found == 0)
        printf("sono una permutazione");
    else printf("non sono una permutazione");
}