#include <stdio.h>
#include <stdlib.h>

#define LEN 30
#define N_PERSONE 30

typedef struct
{
    char cognome[LEN + 1];
    char nome[LEN + 1];
    char sesso;
    int anno;
} persona;

persona getYoung(persona[], int);
persona getPersona(FILE *);

int main()
{
    FILE *file;
    int num, i;
    persona persone[N_PERSONE], giovane;

    file = fopen("bob.txt", "r");

    if (file != NULL)
    {
        fscanf(file, "%d", &num);
        for (i = 0; i < num; i++)
        {
            persone[i] = getPersona(file);
        }
        fclose(file);
        giovane = getYoung(persone, num);
        printf("%s %s %d anni", giovane.nome, giovane.cognome, giovane.anno);
    }
    return 0;
}

persona getPersona(FILE *file)
{
    persona personaCorrente;
    fscanf(file, "%s %s %c %d", personaCorrente.nome, personaCorrente.cognome, &personaCorrente.sesso, &personaCorrente.anno);
    return personaCorrente;
}

persona getYoung(persona persone[], int n)
{
    int i;
    persona giovane = persone[0];
    for (i = 0; i < n; i++)
    {
        if (persone[i].anno > giovane.anno)
        {
            giovane = persone[i];
        }
    }
    return giovane;
}