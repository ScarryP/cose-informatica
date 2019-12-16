#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 31

typedef struct N
{
    char value;
    struct N *up;
    struct N *down;
    struct N *left;
    struct N *right;
} posizione;

typedef posizione *ptrPos;

ptrPos leggiCitta(FILE *);
ptrPos creaRiga(ptrPos, char);
ptrPos creaNodo(ptrPos, char);
void completaRighe(ptrPos);
void completaColonne(ptrPos);

void stampaMatrice(ptrPos);

int controllaItinerario(FILE *, ptrPos);
int controllaPosizione(char, ptrPos);
int controllaCamini(ptrPos);
ptrPos spostaPosizione(ptrPos, char);

int main(int argc, char *argv[])
{
    FILE *inputFile;
    ptrPos matrice;
    char nome[LEN + 1];

    if (argc < 1)
    {
        printf("Gli argomenti specificati non sono sufficienti \n termino l'esecuzione \n");
        exit(1);
    }

    inputFile = fopen(argv[1], "r");
    if (!inputFile)
    {
        printf("Errore nell'apertura del file \n ***%s*** \n Termino l'esecuzione \n", argv[1]);
        exit(1);
    }

    matrice = leggiCitta(inputFile);
    stampaMatrice(matrice);

    while (!feof(inputFile))
    {
        fscanf(inputFile, "%s", nome);
        printf("\n %s \n", nome);

        if (controllaItinerario(inputFile, matrice))
            printf("\n SI \n");
        else
            printf("\n NO  \n");
    }
    fclose(inputFile);

    return 0;
}

ptrPos leggiCitta(FILE *inputFile)
{
    char readChar;
    ptrPos matrice, riga;

    fscanf(inputFile, "%c", &readChar);
    while (readChar && readChar != 'S' && !feof(inputFile))
    {
        matrice = creaRiga(matrice, readChar);
        riga = matrice;
        while (riga->down)
            riga = riga->down;

        while (readChar != '\n' && readChar != 'S')
        {
            fscanf(inputFile, "%c", &readChar);
            riga = creaNodo(riga, readChar);
        }
        fscanf(inputFile, "%c", &readChar);
    }
    fscanf(inputFile, "%*s");
    completaRighe(matrice);
    completaColonne(matrice);

    return matrice;
}

ptrPos creaRiga(ptrPos matrice, char value)
{
    ptrPos nuovaRiga, cur;

    cur = matrice;
    nuovaRiga = creaNodo(NULL, value);

    if (matrice == NULL)
        return nuovaRiga;

    while (cur->down != NULL)
        cur = cur->down;
    cur->down = nuovaRiga;

    return matrice;
}

ptrPos creaNodo(ptrPos matrice, char value)
{
    ptrPos nuovoNodo, cur = matrice;
    nuovoNodo = malloc(sizeof(posizione));

    if (!nuovoNodo)
        return NULL;

    nuovoNodo->up = NULL;
    nuovoNodo->down = NULL;
    nuovoNodo->right = NULL;
    nuovoNodo->left = NULL;
    nuovoNodo->value = value;

    if (matrice == NULL)
        return nuovoNodo;

    while (cur->right)
        cur = cur->right;
    cur->right = nuovoNodo;

    return matrice;
}

void completaRighe(ptrPos matrice)
{
    ptrPos inizio;
    if (!matrice)
        return;
    inizio = matrice;
    while (matrice->right)
    {
        matrice->right->left = matrice;
        matrice = matrice->right;
    }
    completaRighe(inizio->down);
}
void completaColonne(ptrPos matrice)
{
    ptrPos inizio = matrice;
    ptrPos riga, rigaNext;

    while (matrice->down)
    {
        matrice->down->up = matrice;
        matrice = matrice->down;
    }

    matrice = inizio;

    while (matrice->down)
    {
        rigaNext = matrice->down;
        riga = matrice;
        while (matrice && rigaNext)
        {
            matrice->down = rigaNext;
            matrice->down->up = matrice;
            matrice = matrice->right;
            rigaNext = rigaNext->right;
        }
        matrice = riga->down;
    }
}

void stampaMatrice(ptrPos matrice)
{
    ptrPos inizio = matrice;
    if (!matrice)
        return;
    printf("\n");
    while (matrice->right != NULL)
    {
        printf("%c", matrice->value);
        matrice = matrice->right;
    }
    stampaMatrice(inizio->down);
}

int controllaItinerario(FILE *inputFile, ptrPos matrice)
{
    ptrPos inizio = matrice;
    char temp;

    fscanf(inputFile, " %c", &temp);

    while (temp != '\n' && !feof(inputFile))
    {

        printf("\n %c \t %c \t", temp, matrice->value);
        matrice = spostaPosizione(matrice, temp);
        if (!controllaPosizione(temp, matrice))
        {
            fscanf(inputFile, "%*s");
            return 0;
        }

        printf("\t %c", matrice->value);

        fscanf(inputFile, "%c", &temp);
    }
    return controllaCamini(inizio);
}

ptrPos spostaPosizione(ptrPos matrice, char carattereLetto)
{
    switch (carattereLetto)
    {
    case 'N':
        printf("  vado in su  ");
        return matrice->up;
    case 'S':
        printf("  vado in giù  ");
        return matrice->down;
    case 'E':
        printf("  vado a destra  ");
        return matrice->right;
    case 'O':
        printf("  vado a sinistra  ");
        return matrice->left;
    }
    return NULL;
}

int controllaPosizione(char inputChar, ptrPos matrice)
{
    if (matrice == NULL)
    {
        printf("sono uscito dalla matrice");
        return 0;
    }
    if (matrice->value == 'O')
    {
        printf("ho incontrato un ostacolo");
        return 0;
    }
    if (matrice->value == 'X')
    {
        matrice->value = 'Y';
        printf("ho incontrato un camino");
    }
    return 1;
}

int controllaCamini(ptrPos matrice)
{
    ptrPos inizio = matrice;
    if (!matrice)
        return 1;
    while (matrice->right != NULL)
    {
        if (matrice->value == 'X')
            return 0;
        if (matrice->value == 'Y')
            matrice->value = 'X';
        matrice = matrice->right;
    }
    return controllaCamini(inizio->down);
}