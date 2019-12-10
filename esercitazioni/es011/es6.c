#include <stdio.h>
#include <stdlib.h>

typedef struct N
{
    int value;
    struct N *next;
} Nodo;

typedef Nodo *ptrNodo;

int somma(ptrNodo lista, int n, int m)
{
    if (lista == NULL)
        return 0;
    if (lista->value > m || lista->value < n)
        return somma(lista->next, n, m);
    
}