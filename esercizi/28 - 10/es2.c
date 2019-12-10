#include <stdio.h>
#include <string.h>

#define LEN 50

int main()
{
    char s1[LEN], s2[LEN];
    int i, inizio, len, found = 0;

    printf("ciao bello, inserisci la prima stringa ");
    gets(s1);
    printf("ciao bello, inserisci la seconda stringa ");
    gets(s2);

    printf("hai inserito queste due stringhe: \n %s \n %s \n", s1, s2);

    for (i = 0; i < strlen(s1); i++)
    {
        if (s1[i] == s2[0])
        {
            inizio = i;
            len = 0;
            while (s1[i] == s2[i - inizio])
            {
                len++;
                i++;
            }
            if (len >= strlen(s2))
            {
                found++;
            }
        }
    }
    printf("ho trovato %d volte la stringa   ", found);
}