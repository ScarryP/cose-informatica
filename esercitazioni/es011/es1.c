#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define LEN 30
#define FILE_NAME "persona.dat"

typedef struct
{
    char cognome[LEN + 1];
    char nome[LEN + 1];
    char sesso;
    int anno;
} persona;

int main()
{
    persona p;
    FILE *f;
    char cognome[LEN + 1];
    int conto = 0;

    printf("ciao bello inserisci cognome");
    scanf("%s", cognome);

    f = fopen(FILE_NAME, "rb");

    if (!f)
    {
        printf("Errore bello %s", strerror(errno));
        return 1;
    }
    while (fread(&p, sizeof(persona), 1, f))
    {
        if (!strcmp(p.cognome, cognome))
            conto++;
    }
    printf("%d", conto);
    fclose(f);
    return 0;
}