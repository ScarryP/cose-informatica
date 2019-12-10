#include <stdio.h>

int mcd(int, int);
int mcm(int, int);

int main()
{
    int n[3], i, rMcd, rMcm;

    do
    {
        printf("ciao bello inserisci tre numeri");
        for (i = 0; i < 3; i++)
            scanf("%d", &n[i]);
    } while (n[0] < 0 || n[1] < 0 || n[2] < 0);

    rMcm = mcm(n[0], mcm(n[1],n[2]));
    rMcd = mcd(n[0], mcd(n[1],n[2]));

    return 0;
}

int mcd(int a, int b)
{
    int ris = (a < b) ? a : b;

    while ((a % ris) != 0 || (a % ris) != 0)
        ris--;

    return ris;
}

int mcm(int a, int b)
{
    return (a * b) / mcd(a, b);
}
