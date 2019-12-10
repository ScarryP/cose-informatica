#include <stdio.h>
#include <string.h>

#define row 5 /*di solito le costanti si scrivono maiuscole */
#define col 6

int orizzontale(char string[], char mat[][col], int dim1, int dim2);
int verticale(char string[], char mat[][col], int dim1, int dim2);
int diagonale(char string[], char mat[][col], int dim1, int dim2);

int main(void)
{
    int i, j, flag;
    char s[row * col + 1]; /*magari puoi usare un nome più esplicativo di 's' */
    char matrice[row][col];
    char parola[col + 1];

    printf("inserire una stringa, senza spazi e lettere maiuscole\t");
    gets(s); /*visto che è senza spazi puoi prenderla con scanf("%s", s); che almeno non da warning strani */

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            matrice[i][j] = s[(i * 6) + j]; /* 6 è una costante, col */
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%c\t", matrice[i][j]);
        printf("\n");
    }

    do /*non so se è bellissimo usare il do-while qui, quando io inserisco FINE voglio che il programma termini, non me ne frega di controllare se fine è presente nella matrice */
    {
        do
        {
            printf("inserire una parola di massimo 6 caratteri\t");
            gets(parola); /*visto che è senza spazi puoi prenderla con scanf("%s", parola); che almeno non da warning strani */

        } while (strlen(parola) > 6);

        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {

                /* allora: tu stai scorrendo tutti i caratteri della matrice,
                confronti il carattere attuale (matrice[i][j]) con il primo carattere della parola (parola[0]), 
                se i due sono uguali vai a cercare se la parola è presente in orizzontale, se non lo è vai a a cercarla in verticale, altrimenti in diagonale
                cosa non funziona:
                    - se io inserisco "cane" la prima 'c' non è seguita da 'ane' quindi non va bene, la seconda 'c' va bene, la terza e la quarta no, 
                        dovremmo comunque ricordardi che abbiamo trovato la parola
                    - le funzioni non funzionano 
                    */
                if (parola[0] == matrice[i][j])
                {
                    printf("%d", flag);
                    printf("%c", matrice[i][j]);
                    flag = orizzontale(parola, matrice, col + 1, row); //o mettiamo un break per cui esce dalla ricerca quando trova la parola o mettiamo flag += in modo che conti tutte le volte che la troviamo
                    printf("%d \n", flag);
                    if (flag != 1)
                        flag = verticale(parola, matrice, col + 1, row);
                    if (flag != 1)
                        flag = diagonale(parola, matrice, col + 1, row);
                }
            }
        }

        if (flag == 1)
            printf("PRESENTE\n");
        else
            printf("ASSENTE\n");

    } while (parola != "FINE"); /* non puoi confrontare una stringa con un altra stringa in questo modo, usa strstr(parola, "FINE"); */

    return 0;
}

int orizzontale(char string[], char mat[][col], int dim1, int dim2)
{
    int i, j, n, flag;

    for (n = 1; n < dim1; n++)
    {
        for (i = 0; i < dim2; i++)
        {
            for (j = 0; j < col; j++)
            {
                if (string[n] == mat[i][j + 1])
                    flag = 1; /*se il carattere è uguale flag = 1, ma da nessuna parte flag = 0, 
                                        se chiamo la funzione è perchè ho trovato almeno un carattere uguale, quindi ritorna sempre 1
                                        sarebbe più bello contare il numero di caratteri consecutivi che trovo uguali, e vedere che questo è uguale al numero di caratteri nella parola*/
            }
        }
    }
    return flag;
}

int verticale(char string[], char mat[][col], int dim1, int dim2)
{
    int i, j, n, flag;
    for (n = 1; n < dim1; n++)
    {
        for (i = 0; i < dim2; i++)
        {
            for (j = 0; j < col; j++)
            {
                if (string[n] == mat[i + 1][j])
                    flag = 1;
            }
        }
    }
    return flag;
}

int diagonale(char string[], char mat[][col], int dim1, int dim2)
{
    int i, j, n, flag;
    for (n = 1; n < dim1; n++)
    {
        for (i = 0; i < dim2; i++)
        {
            for (j = 0; j < col; j++)
            {
                if (string[n] == mat[i + 1][j + 1])
                    flag = 1;
            }
        }
    }
    return flag;
}
