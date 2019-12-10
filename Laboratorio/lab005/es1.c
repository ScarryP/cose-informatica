#include <stdlib.h>
#include <stdio.h>

typedef struct N
{
    int value;
    struct N *next;
} nodo;

typedef nodo *ptrNodo;

ptrNodo aggiungiInTesta(ptrNodo, int);

void stampaLista(ptrNodo);

void stampaMaxLista(ptrNodo);

int main()
{
    ptrNodo bob = NULL;
    int i, n;

    for (i = 0; i < 10; i++)
    {
        //printf("ciao bello inserisci numero   ");
        //scanf("%d", &n);
        bob = aggiungiInTesta(bob, i + 1);
    }
    printf("\n ***************** \n");

    stampaLista(bob);
    printf("\n ***************** \n");
    //stampaMaxLista(bob);
    return 0;
}

ptrNodo aggiungiInTesta(ptrNodo lista, int value)
{
    ptrNodo nuovoElemento;

    nuovoElemento = (ptrNodo)malloc(sizeof(nodo));

    if (nuovoElemento != NULL)
    {
        nuovoElemento->value = value;
        nuovoElemento->next = lista;
        lista = nuovoElemento;
    }
    else
        printf("errore creazione nodo");
    return nuovoElemento;
}

void stampaLista(ptrNodo lista)
{
    ptrNodo punt = lista;
    printf("ciao");
    while (punt != NULL)
    {
        printf("%d \n", punt->value);
        punt = punt->next;
    }
}

void stampaMaxLista(ptrNodo lista)
{
    int max;
    if (lista)
    {
        max = lista->value;
        while (lista)
        {
            if (lista->value > max)
                max = lista->value;
            lista = lista->next;
        }
    }
    printf("%d", max);
}