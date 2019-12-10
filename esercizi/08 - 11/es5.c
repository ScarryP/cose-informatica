/* max 100 studenti, nome (20 caratteri) e voto
stampa max voto */

#include <stdio.h>

typedef struct
{
    char nome[20];
    unsigned voto;
} studente;

int main()
{
    studente studenti[100];
    int i, n;
    unsigned maxN = 0;

    printf("ciao bello inserisci il numero di studenti");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("ciao bello inserisci il nome dello studente %d ", i);
        scanf("%s", studenti[i].nome);
        printf("ciao bello inserisci il voto dello studente %s ", studenti[i].nome);
        scanf("%d", &studenti[i].voto);
    }

    for(i = 0; i < n; i++){
        if(studenti[i].voto > studenti[maxN].voto){
            maxN = i;
        }
    }

    printf("%s", studenti[maxN].nome);
    
    return 0;
}