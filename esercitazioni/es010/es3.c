#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define LEN 30
#define NAME "ingredienti.txt"

float cercaIngrediente(char[], char[]);

int main()
{
    int nPers;
    float quantita;
    char toSearch[LEN + 1];

    printf("inserisci numero di persone bob");
    scanf("%d", &nPers);

    printf("inserisci nome primo ingrediente da cercare  ");
    scanf("%s", toSearch);

    while (strcmp("stop", toSearch))
    {

        quantita = cercaIngrediente(NAME, toSearch);

        if (quantita)
            printf("la quantita per %d persone risulta %f  \n", nPers, quantita * nPers);

        printf("inserisci nome ingrediente da cercare, 'stop' per chiudere  \n");
        scanf("%s", toSearch);
    }
    return 0;
}

float cercaIngrediente(char name[], char toSearch[])
{
    FILE *input;
    char readIng[LEN + 1];
    float readQuan;

    input = fopen(name, "r");

    if (!input)
    {
        printf("errore apertura file \n");
        return 0;
    }
    while (!feof(input))
    {
        fscanf(input, "%s %f", readIng, &readQuan);
        printf("ingrediente letto %s \n", readIng);
        if (!strcmp(readIng, toSearch))
        {
            printf("ingrediente trovato \n");
            return readQuan;
        }
    }
    return 0;
    fclose(input);
}
