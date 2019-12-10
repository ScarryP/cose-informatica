/* rappresenta cose come un abaco ricorsivo*/

#include <stdio.h>

void stampaAbaco(int);
void stampaRiga(int);

int main()
{
    int numero;

    printf("inserisci numero");
    scanf("%d", &numero);

    stampaAbaco(numero);

    return 0;
}

void stampaAbaco(int numero)
{
    int i;
    if (numero / 10 > 0)
        stampaAbaco(numero / 10);
    stampaRiga(numero % 10);
    printf("\n");
}

void stampaRiga(int numero)
{
    if (numero)
    {
        printf("O");
        stampaRiga(numero - 1);
    }
}