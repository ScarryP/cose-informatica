/* porendi una stringa di max 50 caratteri  di lettere minuscole e ne costruisce una nuova copiando le consonanti e sostituendo le vocali con '*' */

#include <stdio.h>
#include <string.h>

#define MAX_LEN 50

int main()
{
    char vocali[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
    char sIn[MAX_LEN + 1];
    char sOut[MAX_LEN + 1];
    int i, j;

    scanf("%s", sIn);

    strcpy(sOut, sIn);
    
    for (i = 0; sIn[i] != '\0' && i <= MAX_LEN; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (sIn[i] == vocali[j])
                sOut[i] = '*';
        }
    }

    printf("%s", sOut);

    return 0;
}