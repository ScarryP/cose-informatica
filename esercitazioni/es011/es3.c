#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define LEN 30

char *concatenaCose(char[][LEN], int);

int main()
{
    int i;

    char ciao[5][LEN];

    for (i = 0; i < 5; i++)
        scanf("%s", ciao[i]);

    printf("%s", concatenaCose(ciao, 5));

    return 0;
}

char *concatenaCose(char giorgio[][LEN], int nString)
{
    int i, dim = 1;
    char *bob;

    for (i = 0; i < nString; i++)
        dim += strlen(giorgio[i]) * sizeof(char);

    bob = (char *) malloc(dim);

    for (i = 0; i < nString; i++)
        strcat(bob, giorgio[i]);

    return bob;
}