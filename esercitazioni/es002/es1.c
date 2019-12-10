#include <stdio.h>

#define N 5

int sommeP(int *, int *, int);

int main()
{
    int a[N] = {1, 1, 1, 1, 1};
    int b[N];
    int i;

    for (i = 0; i < N; i++)
    {
        printf("%d \t", a[i]);
    }

    printf(" \n");

    sommeP(a, b, N - 1);

    for (i = 0; i < N; i++)
        printf("%d \t", b[i]);

    return 0;
}

int sommeP(int *a, int *b, int n)
{
    if (n > 0)
        b[n] = sommeP(a, b, n - 1) + a[n];
    else
        b[n] = a[n];

    return b[n];
}