/* leggi una stringa che contiene una frase (max 100 caratteri), individua il vocabolo più lungo in esso contenuto.
vocaboli in lettere minuscole, stringa non vuota e vocaboli separtati da spazi
stampa la lunghezza del vocabolo più lungo */

#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main()
{
    char bob[MAX_LEN];
    int i = 0, lunghezza, max = 0;

    printf("ciao bello inserisci la stringa");
    gets(bob);

    printf("\n -------------- \n");

    while (bob[i] != '\0' && i <= MAX_LEN)
    {
        lunghezza = 0;
        while (bob[i] >= 'a' && bob[i] <= 'z')
        {
            lunghezza++;
            i++;
        }
        if (lunghezza > max)
            max = lunghezza; 
        i++;
    }
    printf("ciao bello %d \n", max);
    return 0;
}