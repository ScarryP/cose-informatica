#include <stdio.h>
#define DIM 8

int potenza(int, int);

int main()
{
    int grado, i, x, ris = 0;
    int coeff[DIM + 1];
    do
    {
        printf("ciao bello inserisci grado polinomio");
        scanf("%d", &grado);
    } while (grado < 0 || grado > 8);

    printf("ciao bello inserisci X");
    scanf("%d", &x);

    for (i = 0; i <= grado; i++)
    {
        printf("ciao bello inserisci coefficiente %d ", i);
        scanf("%d", &coeff[i]);
    }

    for (i = 0; i <= grado; i++)
    {
        ris += coeff[i] * potenza(x, i);
    }

    printf("ciao bello il risultato risulta %d \n", ris);

    return 0;
}

int potenza(int base, int esp)
{
    int i, res = 1;
    for (i = 0; i < esp; i++)
    {
        res *= base;
    }
    return res;
}