#define MAX 20

void leggiArray(int a[], int *d)
{
    int i;
    do
    {
        printf("Numero di numeri");
        scanf("%d", d);
    } while (*d <= 0 || *d > 20);
    for (i = 0; i < *d; i++)
    {
        printf("inserisci numero in posizione %d ", i + 1);
        scanf("%d", &a[i]);
    }
}

void rmDuplicati(int a[], int *d)
{
    int i, j, k;
    for (i = 0; i < *d; i++)
    {
        for (j = i + 1; j < *d; j++)
        {
            if (a[j] == a[i])
            {
                for (k = j; k < *d - 1; k++)
                    a[k] = a[k + 1];
                (*d)--;
            }
        }
    }
}

void inerseca(int a[], int da, int b[], int db, int c[], int *dc)
{
    int i, j, found = 0;
    *dc = 0;

    for (i = 0; i < da; i++)
    {
        for (j = 0; j < db && !found; j++)
        {
            if (a[i] == b[j])
            {
                found = 1;
                c[*dc] = a[i];
            }
        }
    }
}


int stampa(int a[], int d){
    int i = 0;
    while(i < d){
        printf("&d \t", a[i]);
        i++;
    }
}

int main()
{
    int A[MAX], B[MAX], C[MAX], T[MAX], I[MAX];
    int da, db, dc, dt, di;

    leggiArray(A, &da);
    leggiArray(B, &db);
    leggiArray(C, &dc);

    rmDuplicati(A, &da);
    rmDuplicati(B, &db);
    rmDuplicati(C, &dc);

    inerseca(A, da, B, db, T, &dt);
    inerseca(T, dt, C, dc, I, &di);

    stampa(I, di);

    return 0;
}