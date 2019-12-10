/* funzione che prende due numeri interi e restituisce il massimo e il minimo */

#include <stdio.h>
#include <stdlib.h>

void maxMin(int, int, int *, int *);

int main(){
    int a, b, max, min;
    
    printf("ciao bello inserisci il primo numero ");
    scanf("%d", &a);
    printf("ciao bello inserisci il secondo numero ");
    scanf("%d", &b);

    maxMin(a, b, &max, &min);

    printf("il massimo era: %d \t il minimo %d \n", max, min);

    return 0;
}

void maxMin(int n1, int n2, int *Pmax, int *Pmin)
{
    *Pmax = n1 > n2 ? n1 : n2;
    *Pmin = n1 < n2 ? n1 : n2;
}