#include <stdio.h>
#define DIM 8

int main()
{
    int bob[DIM];
    int i;
    int temp;
    for (i = 0; i < DIM; i++)
    {
        printf("Ciao bello inserisci il valore nella posizione %d \t", i);
        scanf("%d", &bob[i]);
        printf("\n");
    }

    for (i = 0; i < DIM; i++)
        printf("Ciao il valore nella posizione %d \t corrisponde a %d \n", i, bob[i]);
    printf("\n");

    for (i = 1; i <= DIM / 2; i++)
    {
        // temp = bob[i - 1];
        // bob[i - 1] = bob[DIM - i];
        // bob[DIM - i] = temp;
        bob[i - 1] += bob[DIM - i];
        bob[DIM - i] = bob[i - 1] - bob[DIM - i];
        bob[i - 1] -= bob[DIM - i];
    }
    printf("\n");

    for (i = 0; i < DIM; i++)
        printf("Ciao il valore nella posizione %d \t corrisponde a %d \n", i, bob[i]);

    return 0;
}