/* sequenza di numeri 0 < x < 9 di lunghezza indefinita terminata da x > 9 o x < 0
 magia che stampa istogramma barre orizzontali delle occorrenze di ciascun numero tra zero e nove usando **/

#include <stdio.h>
#define DIM 10

int main()
{
    int occorrenze[DIM] = {0};
    int i, j, temp;
    do
    {
        printf("Ciao bello inserisci il valore nella posizione %d \t", i);
        scanf("%d", &temp);
        if (temp >= 0 && temp < 10)
            occorrenze[temp]++;
        printf("\n");
    } while (temp >= 0 && temp < 10);

    for (i = 0; i < DIM; i++)
        printf("Ciao il valore nella posizione %d \t corrisponde a %d \n", i, occorrenze[i]);
    printf("\n");

    for (i = 0; i <= DIM; i++)
    {
        printf("occorrenze del numero %d :\t", i);
        for (j = 1; j <= occorrenze[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}