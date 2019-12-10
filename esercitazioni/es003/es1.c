#include <stdio.h>
#define ARR_SIZE 6

void printArray(int[], int);
int min(int[], int);

int main()
{
    int minimo;
    int arr[ARR_SIZE];
    int numeriInseriti = 0;

    do
    {
        printf("inserisci numero %d", numeriInseriti++);
        scanf("%d", arr + numeriInseriti);
    } while (numeriInseriti < ARR_SIZE);

    printArray(arr, ARR_SIZE);

    minimo = min(arr, ARR_SIZE);

    printf("%d", minimo);

    return 0;
}

int min(int a[], int n)
{
    int minRim;
    n--;
    if (!n)
    {
        return a[n];
    }
    else
    {
        minRim = min(a, n - 1);
        if (a[n] < minRim)
            return a[n];
        else
            return minRim;
    }
}

void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}