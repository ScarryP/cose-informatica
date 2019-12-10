#include <stdio.h>

#define N 4

int main()
{
	int a[N], b[N];
	int i;

	for (i = 0; i < N; i++)
	{
		printf("ciao bello inserisci numero di A in posizione %d ", i);
		scanf("%d", &a[i]);
	}

	printf("\n --------- \n");

	for (i = 0; i < N; i++)
	{
		printf("ciao bello inserisci numero di B in posizione %d ", i);
		scanf("%d", &b[i]);
	}

	for (i = 1; i <= N; i++)
	{
		printf("%d \n", a[i - 1]);
		printf("%d \n", b[N - i]);
		printf(" --------- \n");
	}
	return 0;
}
