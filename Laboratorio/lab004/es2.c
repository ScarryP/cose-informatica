#include <stdio.h>
#define DIM 30

int leggiStringa(char [],int);

int main()
{
    char stringa[DIM + 1];

    leggiStringa(stringa, DIM);
    printf("%s \n", stringa);

    return 0;
}

int leggiStringa(char *s, int max)
{
    int i = 0;
    char ch ;

    ch=getchar();

    while (ch != '\n' && i < max)
    {
        s[i++] = ch;
        ch = getchar();
    }
    s[i + 1] = '\0';
    return i;
}
