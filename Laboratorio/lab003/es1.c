#include<stdio.h>

#define N 10

int main(){
	int v[N];
	int x, i, somma = 0, prodotto = 1;

	for(i = 0; i < N; i++){
		printf("ciao bello inserisci numero in posizione %d ", i);
		scanf("%d", &v[i]);
	}
	printf("\n ciao bello inserisci n");
	scanf("%d", &x);

	for(i = 0; i < N; i++){
		if(i < x) somma += v[i];
		else prodotto *= v[i];
	}

	printf("\n la somma risulta %d \t", somma);	
	printf("\n il prodotto risulta %d \t", prodotto);

	return 0;
}
