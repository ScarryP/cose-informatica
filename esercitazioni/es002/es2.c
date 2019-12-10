#include <stdio.h>
#include <string.h>

#define N 3
#define LEN 30

typedef struct
{
    char nome[LEN];
    char cognome[LEN];
    int matricola;
    int voti[2];
} studente;

int main()
{
    FILE *fpm;
    int i, min = 30, max = 0, voto, somma = 0;
    float media;
    studente studenti[N];

    fpm = fopen("orale.txt", "w");

    for (i = 0; i < N; i++)
    {
        printf("inserisci dati studente %d  \n", i);
        printf("inserisci nome  ");
        scanf("%s", studenti[i].nome);
        printf("inserisci cognome  ");
        scanf("%s", studenti[i].cognome);
        printf("inserisci matricola  ");
        scanf("%d", &studenti[i].matricola);
        printf("inserisci voto A  ");
        scanf("\n%d", &studenti[i].voti[0]);
        printf("inserisci voto B  ");
        scanf("\n%d", &studenti[i].voti[1]);
        voto = studenti[i].voti[0] + studenti[i].voti[1];
        somma += voto;
        if (voto < min)
            min = voto;
        if (voto > max)
            max = voto;
        if(voto >= 18 && (studenti[i].voti[0] <= 8 || studenti[i].voti[1] <= 8))
            fprintf(fpm, "%s \n%s \n", studenti[i].nome, studenti[i].cognome);
    }
    media = (float)somma / N;

    fclose(fpm);

    return 0;

}