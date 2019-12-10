/* fare su un tipo di dato che rappresenti una località con latitudine (int), longitudine(int), nome(stringa max 30)
acquisire 10 località e trovare la coppia con la distanza massima, visualizzare i nomi; 
se ci sono più punti con la stessa distanza stampo la prima coppia*/

#include <stdio.h>
#include <string.h>

#define DIM_S 30
#define N 3

typedef struct
{
    int latitudine;
    int longitudine;
    char nome[DIM_S + 1];
} localita_t;

int main()
{
    localita_t locations[N]; /* array con 10 strutture di tipo localita_t come elementi */
    int i, j, k;
    float dist, maxDist = 0;
    char maxNomi[2][DIM_S + 1];

    for (i = 0; i < N; i++)
    {
        printf("ciao bello, inserisci latitudine dell'elemento [%d]  ", i);
        scanf("%d", &locations[i].latitudine);
        printf("inserisci longitudine dell'elemento [%d]  ", i);
        scanf("%d", &locations[i].longitudine);
        printf("inserisci nome dell'elemento [%d]  ", i);
        scanf("%s", locations[i].nome);
        /*gets(locations[i].nome); */
        printf("\n ----------------- \n");
    }

    for (i = 0; i < N; i++)
    {
        printf("ciao bello, latitudine dell'elemento [%d]: %d \n", i, locations[i].latitudine);
        printf("longitudine dell'elemento [%d]: %d \n", i, locations[i].longitudine);
        printf("nome dell'elemento [%d] : %s \n", i, locations[i].nome);
        printf("\n ----------------- \n");
    }

    for (i = 0; i < N; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            dist = ((locations[i].latitudine - locations[j].latitudine) * (locations[i].latitudine - locations[j].latitudine)) + ((locations[i].longitudine - locations[j].longitudine) * (locations[i].longitudine - locations[j].longitudine));
            if (dist > maxDist)
            {
                maxDist = dist;
                for (k = 0; k <= DIM_S; k++)
                {
                    maxNomi[0][k] = locations[i].nome[k];
                    maxNomi[1][k] = locations[j].nome[k];
                }
            }
        }
    }

    printf("\n ----------------- \n");

    printf("i due punti con massima distanza sono: [%s] e [%s] \n", maxNomi[0], maxNomi[1]);

    return 0;
}
