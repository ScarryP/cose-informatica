#include <stdio.h>

int main()
{
    int numero, pari;
    pari = 1;

    printf("inserisci un numero bello");
    scanf("%d", &numero);

    if (numero < 0)
    {
        printf("il numero inserito deve essere positivo");
    }
    else
    {
        while (numero > 0)
        {
            numero -= 1;
            pari = -pari;
        }
        if (pari > 0)
        {
            printf("il numero inserito era pari");
        }
        else
        {
            printf("il numero inserito era dispari");
        }
    }
}