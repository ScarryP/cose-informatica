#include <stdio.h>

#define SIZE 5
#define TRUE 1
#define FALSE 0

int tuttiMaggiori(int[], int, int);

int main()
{
    int n, risultato;
    int arr[SIZE];
    int numIns;
    do
    {
        printf("inserire %d numero", numIns + 1);
        scanf("%d", arr + numIns);
        numIns++;
    } while (numIns < SIZE);

    printf("inserire m:  ");
    scanf("%d", &n);

    risultato = tuttiMaggiori(arr, SIZE, n);
    printf(risultato ? "ciao" : "bob");
    return 0;
}

int tuttiMaggiori(int a[], int n, int m)
{
    if (n < 1)
    {
        return TRUE;
    }
    else if (a[n - 1] <= m)
    {
        return FALSE;
    }
    else
    {
        return tuttiMaggiori(a, n - 1, m);
    }
}