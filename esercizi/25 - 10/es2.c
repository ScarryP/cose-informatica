/* funzione sommePrefisse che prende un array a di interi (lunghezza N costante) e altri parametri che mi piacciono
restituisce un altro array b (lunghezza massima definita) che contiene le somme prefisse di a
b[0] = a[0]
b[1] = a[0] + a[1]
b[2] = a[0] + a[1] + a[2]
*/

#include <stdio.h>

#define N 5

void sommePrefisse(int a[], int b[], int);

int main()
{
    int v1[N], v2[N];

    //leggo v1 con della magia

    sommePrefisse(v1, v2, N);

    return 0;
}

void sommePrefisse(int a[], int b[], int dim)
{
    int i;
    


}
