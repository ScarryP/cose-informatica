#include <stdio.h>

#define DIM 30

int minimo(int[], int);

int main()
{
    int numeri[DIM];
    int i = 0, x;

    do
    {
        printf("inserire numero %d   ", i + 1);
        scanf("%d", &x);
        if (x > 0)
            numeri[i] = x;
        i++;
    } while (x > 0 && i < DIM);

    if (i > 1)
        printf("\n %d \n", minimo(numeri, i-2));
    else
        printf("inseriti zero elementi validi");
    return 0;
}

int minimo(int a[], int n)
{
    int min_resto;
    if (n == 0)
        return a[0];
    else
    {
        min_resto = minimo(a, n - 1);
        if (min_resto < a[n])
            return min_resto;
        else
            return a[n];
    }
}
