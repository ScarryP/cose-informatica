

typedef struct
{
    int h;
    int m;
    int s;
} tempo;

typedef struct
{
    char titolo[30];
    char autore[30];
    int anno;
    int nTracce;
    tempo durata;
    int copie;
    float prezzo;
} CD;

int main()
{
    CD dischi[100];
    int i, n;
    unsigned maxN = 0;

    printf("ciao bello inserisci il numero di dischi");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("ciao bello inserisci il titolo");
        scanf("%s", dischi[i].titolo);
        printf("ciao bello inserisci l'autore");
        scanf("%s", dischi[i].autore);
        printf("ciao bello inserisci l'anno");
        scanf("%d", dischi[i].anno);
        printf("ciao bello inserisci il numero di tracce");
        scanf("%d", dischi[i].nTracce);
        printf("ciao bello inserisci la durata in ore, minuti, secondi");
        scanf("%d %d %d", dischi[i].durata.h, dischi[i].durata.m, dischi[i].durata.s);
        printf("ciao bello inserisci il numero di copie");
        scanf("%d", dischi[i].copie);
        printf("ciao bello inserisci il prezzo");
        scanf("%f", dischi[i].prezzo);
    }

    return 0;
}