/* includo librerie per input/output e gestione delle stringhe */
#include <stdio.h>
#include <string.h>

/* dichiaro due costanti per le due dimensioni della matrice */
#define DIM1 5
#define DIM2 6

/* dichiaro il prototipo delle funzioni */
int cercaOrizzontale(char matr[][DIM2], char parola[]);
int cercaVerticale(char matr[][DIM2], char parola[]);
int cercaDiagonale(char matr[][DIM2], char parola[]);
int puzzleValido(char stringa[], int, char, char);

int main()
{
    char puzzle[DIM1 * DIM2 + 1], parolaInput[DIM2 + 1], matrice[DIM1][DIM2];
    int i, j;

    /*chiedo la stringa all'utente e la leggo nella variabile 'puzzle' */
    printf("Inserisci elementi puzzle in formato lineare \n (stringa di 30 caratteri alfabetici minuscoli) \n\t");
    scanf("%s", puzzle);

    /*verifico che la stringa inserita sia valida, altrimenti stampo un messaggio di errore*/
    if (puzzleValido(puzzle, DIM1 * DIM2, 'a', 'z'))
    {
        /*scorro la stringa 'puzzle', inserisco i caratteri nella vettore bidimensionale 'matrice' */
        for (i = 0; i < DIM1; i++)
            for (j = 0; j < DIM2; j++)
                matrice[i][j] = puzzle[i * DIM2 + j];

        /*chiedo la parola da cercare all'utente e la leggo nella variabile 'parolaInput' */
        printf("\nInserisci una parola da ricercare nel puzzle \n");
        scanf("%s", parolaInput);

        /* se la parola è diversa da "FINE" la ricerco nella matrice, altrimenti termino il programma */
        while (strcmp(parolaInput, "FINE"))
        {
            /* ricerco la parola all'interno della matrice in orizzontale, verticale e diagonale, se è presente almeno in una direzione stampo "PRESENTE" */
            if (cercaOrizzontale(matrice, parolaInput) || cercaVerticale(matrice, parolaInput) || cercaDiagonale(matrice, parolaInput))
                printf("\n *** PRESENTE *** \n");
            else
                printf("\n *** ASSENTE *** \n");

            /*chiedo all'utente una nuova parola da cercare */
            printf("\nInserisci una nuova parola da ricercare nel puzzle \n inserisci FINE per terminare l'esecuzione \n");
            scanf("%s", parolaInput);
        }
    }
    else
        printf("La stringa inserita non rispetta le condizioni richieste ");

    return 0;
}

/* funzione che ricerca la parola all'interno delle righe della matrice, restituisce 1 se la parola è presente, zero altrimenti */
int cercaOrizzontale(char matr[][DIM2], char parola[])
{
    int i;

    /* scorro le righe della matrice considerandone una alla volta */
    for (i = 0; i < DIM1; i++)
        /* controllo se la riga attuale  include la parola */
        if (strstr(matr[i], parola))
            return 1;
    return 0;
}

/* funzione che ricerca la parola all'interno delle colonne della matrice, restituisce 1 se la parola è presente, zero altrimenti */
int cercaVerticale(char matr[][DIM2], char parola[])
{
    int i, j;
    char colonna[DIM1];

    /* scorro le colonne della matrice considerandone una alla volta */
    for (i = 0; i < DIM2; i++)
    {
        /* copio la colonna attuale in una variabile temporanea */
        for (j = 0; j < DIM1; j++)
            colonna[j] = matr[j][i];

        /* controllo se la colonna include la parola, in caso affermativo termina la funzione ritornando 1 */
        if (strstr(colonna, parola))
            return 1;
    }
    return 0;
}

/* funzione che ricerca la parola all'interno delle diagonali della matrice, restituisce 1 se la parola è presente, zero altrimenti */
int cercaDiagonale(char matr[][DIM2], char parola[])
{
    int i, j, k, len;
    len = strlen(parola);

    /* considero tutti i caratteri dellla matrice scorrendo tutte le righe e le cololnne
    (escludendo quelle per cui la diagonale è più breve della parola ricercata) */
    for (i = 0; i <= (DIM2 - len + 1); i++)
        for (j = 0; j <= (DIM1 - len + 1); j++)
            /* se il carattere in posizione considerata è uguale al primo della parola cercata considero le posizione successive sulla diagonale */
            for (k = 0; matr[i][j] == parola[k]; k++, i++, j++)
                /* se il numero di caratteri consecutivi sulla diagonale uguali a quelli della parola è uguale alla llunghezza della parola ritorno 1*/
                if (len == k + 1)
                    return 1;
    return 0;
}

/* funzione che prende una stringa e restituisce 1 se la stringa ha lunghezza 'dim' e i caratteri sono compresi tra 'inizio' e 'fine', zero se non lo è */
int puzzleValido(char stringa[], int dim, char inizio, char fine)
{
    /* controllo che la stringa in input abbia la lunghezza desiderata */
    if (strlen(stringa) == dim)
    {
        dim--;
        /* controllo che tutti i caratteri della stringa (escluso il terminatore) siano compresi tra 'a' e 'z' = tutte lettere minuscole */
        while (stringa[dim] <= fine && stringa[dim] >= inizio && dim > 0)
            dim--;
    }
    /* restituisco 0 se la stringa non è valida (numero di caratteri non validi diverso da zero), 1 se tutti i caratteri sono validi */
    return !dim;
}