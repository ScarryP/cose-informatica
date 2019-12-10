/* includo librerie per input/output e gestione delle stringhe */
#include <stdio.h>
#include <string.h>

/* dichiaro due costanti per la llunghezza di ciascuna parola e il numero di parole da inserire */
#define LEN 30
#define N_PAROLE 10

/* dichiaro il prototipo delle funzioni */
int parolaToLower(char[], char[]);
int verificaCriterio(char[], int);
int verificaVocali(char[]);
int verificaDoppie(char[]);
int verificaLetteraM(char[]);
int verificaVCAlternate(char[]);
int verificaPalindroma(char[]);
int isVocale(char);

int main()
{
    char parolaInserita[LEN + 1], parolaLower[LEN + 1];
    int numCriterio, i, nCorrette = 0;

    do
    {
        /*chiedo all'utente il numero del criterio da utiizzare e la leggo in numCriterio */
        printf("\nInserisci un numero compreso tra 1 e 5  ");
        scanf("%d", &numCriterio);

        /*verifico il numero inserito sia valido, altrimenti stampo un messaggio di errore*/
        if (numCriterio > 5 || numCriterio < 1)
            printf("il numero inserito non risulta valido ( maggiore di 5 o minore di 1) \n");

        /*se il numero inserito non è valido lo chiedo nuovamente all'utente*/
    } while (numCriterio > 5 || numCriterio < 1);

    /* chiedo all'utente di inserire le N_PAROLE parole da controllare */
    printf("\nInserisci %d parole (max 30 caratteri) separate da uno spazio  \n", N_PAROLE);

    /* ciclo che si ripete N_VOLTE per considerare una parola alla volta */
    for (i = 0; i < N_PAROLE; i++)
    {
        /* leggo una parola inserita alla volta */
        scanf("%s", parolaInserita);

        /* trasformo la parola in lettere minuscole e controllo che sia formata solo da caratteri alfabetici */
        if (parolaToLower(parolaInserita, parolaLower))
        {
            /* controllo che la parolaInserita rispetti il criterio scelto ad inizio programma */
            if (verificaCriterio(parolaLower, numCriterio))
            {
                /* se la parola rispetta il criterio la stampo in output e incremento il contatore nCorrette */
                nCorrette++;
                printf("  %s", parolaInserita);
            }
        }
        else
            /* se la parola inserita non è formata da caratteri alfabetici stampo un messaggio di errore */
            printf("le parole inserite non sono valide");
    }

    /*se il numero di parole che rispettano il criterio è maggiore o uguale a 3 stampo 'VINTO' altrimenti 'PERSO' */
    if (nCorrette >= 3)
        printf("\n  ***  VINTO  *** \n");
    else
        printf("\n  ***  PERSO  *** \n");

    return 0;
}

/* funzione che prende una stringa e la converte in lettere minuscole, restituisce 1 se l'operazione va a buon fine, 0 se la parola è formata da caratteri non alfabetici */
int parolaToLower(char parola[], char parolaLower[])
{
    int i, len;
    /* calcolo il numero di caratteri della stringa */
    len = strlen(parola);
    /* consiero ogni carattere della stringa */
    for (i = 0; i < len; i++)
    {
        /* se il carattere è una lettera maiuscola lo trasformo in minuscolo */
        if (parola[i] >= 'A' && parola[i] <= 'Z')
            parolaLower[i] = parola[i] + ('a' - 'A');
        else
            parolaLower[i] = parola[i];
        /* se il carattere non è compreso tra 'a' e 'z' termino la funzione ritornando 0 */
        if (parolaLower[i] < 'a' || parolaLower[i] > 'z')
            return 0;
    }
    return 1;
}

/* funzione che prende la parola e il numero del criterio e chiama la funzione relativa a ciascun criterio passando la parola, restituisce il risultato delle funzioni chiamate */
int verificaCriterio(char parola[], int criterio)
{
    switch (criterio)
    {
    case 1:
        return verificaVocali(parola);
    case 2:
        return verificaDoppie(parola);
    case 3:
        return verificaLetteraM(parola);
    case 4:
        return verificaVCAlternate(parola);
    case 5:
        return verificaPalindroma(parola);
    default:
        return 0;
    }
}

/* funzione che prende una parola (lettere minuscole) e restituisce 1 se questa contiene almeno 3 vocali */
int verificaVocali(char parola[])
{
    int i, nVocali = 0;
    /* considero ciascun carattere della parola */
    for (i = 0; i < strlen(parola); i++)
    {
        /* aumento il contatore nVocali con il risultato della funzione isVocale sulla lettera in posizione i*/
        nVocali += isVocale(parola[i]);
        /* se il numero di vocali è maggiore o uguale a tre termino la funzione e restituisco 1 */
        if (nVocali >= 3)
            return 1;
    }
    /* se dopo avere considerato tutti i caratteri della parola non ho trovato almeno 3 vocali restituisco 0 */
    return 0;
}

/* funzione che prende una parola (lettere minuscole) e restituisce 1 se questa contiene almeno 2 coppie di lettere uguali consecutive */
int verificaDoppie(char parola[])
{
    int i, nDoppie = 0;
    /* considero ciascun carattere della parola, escludendo il primo */
    for (i = 1; i < strlen(parola); i++)
    {
        /* se il carattere è uguale al carattere precedente aumento il contatore nDoppie e aumento i per evitare di considerare la stessa coppia due volte */
        if (parola[i - 1] == parola[i])
        {
            nDoppie++;
            i++;
        }

        /* se il numero di coppie di doppie è maggiore o uguale a due termino la funzione e restituisco 1 */
        if (nDoppie >= 2)
            return 1;
    }
    /* se dopo avere considerato tutti i caratteri della parola non ho trovato almeno due coppie di doppie restituisco 0 */
    return 0;
}

/* funzione che prende una parola (lettere minuscole) e restituisce 1 se questa non contiene la lettera 'm' o la contiene seguita da una lettera 'r' */
int verificaLetteraM(char parola[])
{
    int i, found = 0;

    /* considero ciascun carattere della parola */
    for (i = 0; i < strlen(parola); i++)
    {
        /* se il carattere in posizione i è 'm' segnalo la presenza ponendo found = 1 */
        if (parola[i] == 'm')
            found = 1;
        /* se ho trovato una lettera 'm' in precedenza (found == 1) ma la lettera attuale è 'r' pongo found = 0 */
        if (found && parola[i] == 'r')
            found = 0;
    }
    /*restituisco il valore opposto a found */
    return !found;
}

/* funzione che prende una parola (lettere minuscole) e restituisce 1 se questa è formata da vocali alternate a consonanti */
int verificaVCAlternate(char parola[])
{
    int i;
    /* considero ciascun carattere della parola, escludendo il primo */
    for (i = 1; i < strlen(parola); i++)
        /* se il risultato della funzione isVocale() sul carattere i è uguale al risultato sul sul precedente (entrambi vocali o consonanti) termino restituendo 0*/
        if (isVocale(parola[i - 1]) == isVocale(parola[i]))
            return 0;
    return 1;
}

/* funzione che prende una parola (lettere minuscole) e restituisce 1 se questa è palindroma, zero altrimenti */
int verificaPalindroma(char parola[])
{
    int i, len;
    /* calcolo il numero di caratteri della stringa */
    len = strlen(parola);

    /* considero ciascun carattere nella prima metà della stringa */
    for (i = 1; i < (strlen(parola) / 2); i++)
    {
        /* se il carattere è diverso da quello in posizione diametralmente opposta termino la funzione e restituisco zero */
        if (parola[i - 1] != parola[len - i])
            return 0;
    }
    /* se tutti i caratteri sono opposti a quelli in posizione opposta la parola è palindroma e quindi restituisco 1 */
    return 1;
}

/* funzione che prende una lettera minuscola e restituisce uno se questa è una vocale, zero se è una consonante */
int isVocale(char lettera)
{
    return (lettera == 'a' || lettera == 'e' || lettera == 'i' || lettera == 'o' || lettera == 'u');
}