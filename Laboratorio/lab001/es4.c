/* dato una valore k che indica  la riga azzerare tutti gli elementi della riga k*/

#include <stdio.h>
#define R 10
#define C 3

int main()
{
    int matr[R][C];
    int i, j, k;

    do
    {
        printf("Ciao bello inserisci il valore di K \t");
        scanf("%d", &k);
    } while (k < 0 || k > R);

    for (i = 0; i < k; i++)
        matr[k][i] = 0;
        
    printf("\n");

    return 0;
}