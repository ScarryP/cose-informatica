#include <stdlib.h>
#include <stdio.h>

#define LEN 30
#define NAME "temperature.csv"

typedef struct
{
    char nomeCitta[LEN + 1];
    float tempMin;
    float tempMax;
} dati;

typedef struct N
{
    dati value;
    struct N *next;
} nodo;

typedef nodo *ptrNodo;

int main()
{
    FILE *fp;
    ptrNodo bob = NULL;
    dati temp;

    int i, n;

    fp = fopen(NAME, "r");

    if (!fp)
    {
        printf("spacco tuytto");
        exit(1);
    }
    while (!feof(fp))
    {
        fscanf(fp, "%s,%f,%f", temp.nomeCitta, &temp.tempMin, &temp.tempMax);
        printf("%s \t %f \t %f \n", temp.nomeCitta, temp.tempMin, temp.tempMax);
    }

    return 0;
}