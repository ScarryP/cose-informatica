#include <stdio.h>
#include <string.h>

#define LEN_NOME 30
#define N_ESAMI 30
#define MAX 10

typedef struct
{
    char nome[LEN_NOME + 1];
    int voto;
} Exam;

typedef struct
{
    int codice_persona;
    Exam esami[N_ESAMI];

} Student;

int main()
{
    Student studenti[MAX];
    int i, j;

    for (i = 0; i < MAX; i++)
    {
        printf("ciao bello inserisci dati dello studente %d \n", i);
        printf("codice persona : ");
        scanf("%d", &studenti[i].codice_persona);
        printf("esami : ");
        for (j = 0; j < N_ESAMI; j++)
        {
        }
    }
}