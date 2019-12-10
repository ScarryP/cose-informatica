#include <stdio.h>

int piuFrequente(int[], int);

int main()
{
    int bob[10] = {1, 1, 3, 3, 3, 3, 4, 5, 6, 6};
    int len = 10;

    printf("%d \n", piuFrequente(bob, len));
}

int piuFrequente(int numeri[], int len)
{
    int i, piu = 0, cont = 0;

    for (i = 0; i < len; i++)
    {
        if (numeri[i] == numeri[i + 1])
        {
            cont++;
            i++;
        }
        else
            cont = 0;
        if (cont > piu)
            piu = numeri[i];
    }
    return piu;
}

int piuFrequente2(int numeri[], int n)
{
    int i, val_pt = numeri[0], acc_pf = 1, occ_cor = 1;

    for (i = 0; i < n; i++){
        
    }
}