/* tipo di dato per rappresentare una frazione come numeratore e denominatore
acquisire due frazioni e fare la somma
semplificare numeratore e denominatore e anche i segni*/

#include <stdio.h>
#include <math.h>

typedef struct
{
    int n;
    int d;
} frazione;

int main()
{
    frazione f1, f2, s;
    int i, mcd;

    printf("ciao bello inserisci numeratore frazione 1 ");
    scanf("%d", &f1.n);
    printf("ciao bello inserisci denominatore frazione 1 ");
    scanf("%d", &f1.d);

    printf("ciao bello inserisci denominatore frazione 2 ");
    scanf("%d", &f2.n);
    printf("ciao bello inserisci denominatore frazione 2 ");
    scanf("%d", &f2.d);

    s.n = f1.n * f2.d + f2.n * f1.d;
    s.d = f1.d * f2.d;

    for (i = 0; i < min(s.n, s.d); i++)
    {
        if (s.n % i + s.d % i == 0)
            mcd = i;
    }
    s.n /= mcd;
    s.d /= mcd;
}