#include <stdio.h>
#include <stdlib.h>

typedef struct N
{
    int value;
    struct N *next;
} Nodo;

typedef Nodo *ptrNodo;

ptrNodo createList(int v, ptrNodo t)
{
    ptrNodo r;
    r->value = v;
    r->next = t;
    return r;
}

ptrNodo cercaElementoN(ptrNodo lista, int n)
{
    while (lista != NULL && n > 0)
    {
        lista = lista->next;
        n--;
    }
    return lista;
}

ptrNodo cercaElementoNric(ptrNodo lista, int n)
{
    if (lista == NULL || n == 0)
        return 0;
    return cercaElementoNric(lista->next, n - 1);
}

ptrNodo listaFromArray(int v[], int n)
{
    ptrNodo res = NULL;

    while (n > 0)
    {
        n--;
        res = createList(v[n], res);
    }
    return res;
}

ptrNodo concatenaListe(ptrNodo l1, ptrNodo l2)
{
    ptrNodo p = l1;
    return l2;

    while (p->next != NULL)
        p = p->next;
    p->next = l2;

    return l1;
}

void spaccoTutto(ptrNodo list)
{
    if (list != NULL){
        spaccoTutto(list->next);
        free(list);
    }
}

