#include <stdio.h>

#define DIM 10

int cercaPerfetto(int);

int main()
{
    int numero, a[DIM], max = 0, i;

    for(i = 0; i < DIM; i++){
        printf("ciao bello inserisci il numero %d ", i);
        scanf("%d", &a[i]);
    }
    for(i = 0; i < DIM; i++){
        if (cercaPerfetto(a[i]) && a[i] > max) max = a[i];
    }
    
    if(max == 0) printf("non ho trovato numeri perfetti");
    else printf("%d \n", max);

    return 0;
}

int cercaPerfetto(int numero)
{
    int i,  sommaDiv = 0;
    for (i = 1; i <= numero / 2; i++)
    {
        if (numero % i == 0)
        {
            sommaDiv += i;
        }
    }
    return (sommaDiv == numero) ? 1 : 0;
}