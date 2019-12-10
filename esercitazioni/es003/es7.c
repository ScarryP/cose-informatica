#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

void calcolaDiff(char[], char[]);

int main(int argc, char const *argv[])
{
    if (argc < 3)
    {
        printf("Errore");
        return 1;
    }
    else
    {
        calcolaDiff(argv[1], argv[2]);
        return 0;
    }
}

void calcolaDiff(char fileName1[], char fileName2[])
{
    int x, y;
    FILE *sourceFile;
    FILE *resFile;
    sourceFile = fopen(fileName1, "r");
    if (!sourceFile)
    {
        printf("errore apertura %s in lettura %s", fileName1, strerror(errno));
        exit(1);
    }
    resFile = fopen(fileName2, "w");
    if (!resFile)
    {
        printf("errore apertura %s in lettura %s", fileName2, strerror(errno));
        exit(1);
    }
    while(!feof(sourceFile)){
        fscanf(sourceFile, "%d %d", &x, &y);
        fprintf(resFile, "%d \n", x - y);
    }
    fclose(sourceFile);
    fclose(resFile);
}