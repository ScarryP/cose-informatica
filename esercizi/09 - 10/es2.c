#include <stdio.h>

int main()
{
    int x;

    printf("inserisci x");
    scanf("%d", &x);

    if (x < 10)
        printf("merda");
    else if (x < 18)
        printf("merdina");
    else if (x < 24)
        printf("sufficiente");
    else
        printf("ottimo");

    return 0;
}