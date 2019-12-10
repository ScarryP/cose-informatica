#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
ptrPos creaNodo(char);
void stampaMatrice(ptrPos);

int main(int argc, char *argv[])
{
    FILE *inputFile;
    ptrPos matrice;

    if (argc < 1)
    {
        printf("ho spaccato tutto gli argv, muori");
        exit(1);
    }

    inputFile = fopen(argv[1], "r");
    if (!inputFile)
    {
        printf("ho spaccato tutto il File, muori");
        exit(1);
    }

    matrice = leggiCitta(inputFile);

printf ("\n \n");

    stampaMatrice(matrice);

    return 0;
}

ptrPos leggiCitta(FILE *inputFile)
{
    char bob;
    ptrPos matrice, inizio;
    fscanf(inputFile, "%c", &bob);
    inizio = creaNodo(bob);
    matrice = inizio;
    while (bob != 'S' && matrice)
    {
        while (bob != '\n')
        {
            matrice->right = creaNodo(bob);
            matrice = matrice->right;
            printf("%c", bob);
            fscanf(inputFile, "%c", &bob);
        }
        printf("\t");
        matrice->down = creaNodo(bob);
        matrice = matrice->down;
        fscanf(inputFile, "%c", &bob);
    }
    return matrice;
}

ptrPos creaNodo(char value)
{
    ptrPos nodo;
    nodo = malloc(sizeof(posizione));
    if (!nodo)
        return NULL;
    nodo->value = value;
    return nodo;
}

void stampaMatrice(ptrPos matrice){
    while(matrice -> right != NULL){
        printf("%c", matrice -> value);
        matrice = matrice -> right;
    }
}