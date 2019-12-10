/* prende 10 elementi di un array e stampa i valori evitando quelli duplicati*/
#include <stdio.h>
#define DIM 10

int main()
{
    int vettore[DIM];
    int i, j, found;

    for (i = 0; i < DIM; i++)
    {
        printf("ciao bello inserisci il valore %d_esimo \t", i + 1);
        scanf("%d", &vettore[i]);
    }
    printf("\n -------------- \n");
    for (i = 0; i < DIM; i++)
    {
        printf("ciao bello il valore %d_esimo \t corrisponde a: %d \n", i + 1, vettore[i]);
    }
    printf("\n -------------- \n");
    for (i = 0; i < DIM; i++)
    {
        found = 0;
        for (j = 0; j < i && found == 0; j++)
        {
            if (vettore[i] == vettore[j])
                found = 1;
        }
        if (found == 0)
            printf("ciao bello il valore %d_esimo \t corrisponde a: %d \n", i + 1, vettore[i]);
        else
            printf("valore %d_esimo duplicato \n", i);
    }
    return 0;
}