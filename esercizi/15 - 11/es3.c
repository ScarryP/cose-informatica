#include <stdio.h>
#include <string.h>

#define DIM 100
#define N_LETT 26

void TUTTO(char *);
void contaLettere(char *, int *);
int contaVocali(char *);

int main()
{
    char frase[DIM + 1];

    int cont[N_LETT];
    int i, vocali = 0, consonanti = 0;

    printf("ciao bello inserisci frase ");
    gets(frase);

    TUTTO(frase);

    printf("%s", frase);

    contaLettere(frase, cont);

    for (i = 0; i < N_LETT; i++)
    {
        printf("%c _   %d \n", i + 65, cont[i]);
    }

    printf("vocali: %d \n", contaVocali(frase));

    return 0;
}

void TUTTO(char s[])
{
    int i;
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] += 'A' - 'a';
    }
}

void contaLettere(char s[], int cont[])
{
    int i;
    for (i = 0; i < N_LETT; i++)
        cont[i] = 0;
    for (i = 0; i < strlen(s); i++)
    {
        cont[s[i] - 'A']++;
    }
}

int contaVocali(char s[])
{
    char vocali[6] = {'A', 'E', 'I', 'O', 'U', 'Y'};
    int i, j, conta = 0;

    for (i = 0; i < strlen(s); i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (s[i] == vocali[j])
                conta++;
        }
    }
    return 0;
}