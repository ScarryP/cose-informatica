#include <stdio.h>
#include <string.h>
#define RIGHE 5
#define COLONNE 6
int controllo(char pz_temp[][COLONNE]);  /*funzione che servir� a cercare le parole inserite all'interno del puzzle*/
void riempi_puzzle(char pzl[][COLONNE]); /*funzione che richiede all'utente 30 kettere che dispone in una matrice 5x6 (il puzzle)*/
int main(void)
{
	int check; /*serve a controllare il risultato della funzione puzzle per decidere se andare avanti e cosa stampare*/
	char puzzle[RIGHE][COLONNE];
	riempi_puzzle(puzzle); /*chiamata alla funzione riempi_puzzle*/
	do
	{
		check = controllo(puzzle); /*chiamata alla funzione controllo*/
		if (check == 1)
			printf("PRESENTE ");
		if (check != 1 && check != 2)
			printf("ASSENTE ");
	} while (check != 2); /*puzzle restituisce 2 se la parola inserita � FINE*/
	printf("\n_____________________________________ FINE _____________________________________\n");
	return 0;
}
void riempi_puzzle(char pzl[][COLONNE])
{
	int cont_colonne; /*contatore per lo scorrimento delle righe*/
	int cont_righe;   /*contatore per lo scorrimento delle colonne*/
	for (cont_righe = 0; cont_righe < RIGHE; cont_righe++)
	{
		for (cont_colonne = 0; cont_colonne < COLONNE; cont_colonne++)
		{
			scanf("%c", &pzl[cont_righe][cont_colonne]);
		}
	}
	return;
}
int controllo(char pz_temp[][COLONNE])
{
	char parola_da_cercare[7];
	int check_word = 0;
	int lenght;
	int num1, num2;
	int row, col;
	int add;
	scanf("%s", parola_da_cercare);
	lenght = strlen(parola_da_cercare);
	if (strcmp(parola_da_cercare, "FINE") == 0) /*controllo se la parola inserita � "FINE"*/
		return 2;
	for (row = 0; row < RIGHE; row++) /*cerco la parola orizzontalmente*/
	{
		for (col = 0, check_word = 0; col < COLONNE; col++) /*riazzero check per evitare che vengano restituite parole presenti anche se divise in due righe o colonne o diagonali*/
		{
			if (pz_temp[row][col] == parola_da_cercare[check_word])
				check_word++;
			else
				check_word = 0;
			if (check_word == lenght)
				return 1;
		}
	}
	for (col = 0; col < COLONNE; col++)
	{ /*cerco la parola verticalmente*/
		for (row = 0, check_word = 0; row < RIGHE; row++)
		{ /*riazzero check*/
			if (pz_temp[row][col] == parola_da_cercare[check_word])
				check_word++;
			else
				check_word = 0;
			if (check_word == lenght)
				return 1;
		}
	}
	for (row = 0; row < RIGHE; row++)
	{ /*cerco la parola in obliquo*/
		for (col = 0; col < COLONNE; col++)
		{
			for (add = 0; row + add < RIGHE && col + add < COLONNE; add++)
				if (pz_temp[row + add][col + add] == parola_da_cercare[add])
				{
					check_word++;
					if (check_word == lenght)
						return 1;
				}
				else
					check_word = 0;
		}
	}
	return 0; /*si arriva al return 0 solo se la parola non era presente e la parola era diversa da "FINE"*/
}