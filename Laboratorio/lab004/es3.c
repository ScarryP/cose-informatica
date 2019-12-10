#include <stdio.h>
#include <string.h>

#define DIM 300

void parolaToLower(char[]);

int main()
{
    char str[DIM] = "ciao io sono bob";
    char coloreeeee[DIM];

    printf("inserisci colore:   ");
    scanf("%s", coloreeeee);

    parolaToLower(coloreeeee);

    if (!strcmp(coloreeeee, "red"))
        printf("\e[1;31m");
    if (!strcmp(coloreeeee, "blue"))
        printf("\e[1;34m");
    if (!strcmp(coloreeeee, "green"))
        printf("\e[1;32m");
    if (!strcmp(coloreeeee, "yellow"))
        printf("\e[1;33m");
    if (!strcmp(coloreeeee, "chan"))
        printf("\e[1;36m");
    if (!strcmp(coloreeeee, "white"))
        printf("\e[1;37m");
    if (!strcmp(coloreeeee, "purple"))
        printf("\e[1;35m");
    if (!strcmp(coloreeeee, "bob"))
        printf("\e[5;33m");
    if (!strcmp(coloreeeee, "chan"))
        printf("\e[1;36m");
    if (!strcmp(coloreeeee, "chan"))
        printf("\e[1;36m");
    if (!strcmp(coloreeeee, "chan"))
        printf("\e[1;36m");
    if (!strcmp(coloreeeee, "chan"))
        printf("\e[1;36m");
    if (!strcmp(coloreeeee, "chan"))
        printf("\e[1;36m");
    if (!strcmp(coloreeeee, "chan"))
        printf("\e[1;36m");

    printf("%s \033[0m;", str);
    return 0;
}

void parolaToLower(char parola[])
{
    int i, len;
    /* consiero ogni carattere della stringa */
    for (i = 0; parola[i] != '\0'; i++)
        if (parola[i] >= 'A' && parola[i] <= 'Z')
            parola[i] += +('a' - 'A');
}