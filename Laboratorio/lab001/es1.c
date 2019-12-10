#include <stdio.h>

int main()
{
	int a, b, c;
	printf("ciao bello inserisci il primo numero");
	scanf("%d", &a);
	printf("ciao bello inserisci il secondo numero");
	scanf("%d", &b);
	printf("ciao bello inserisci il terzo numero");
	scanf("%d", &c);
	printf("hai inserito questi tre numeri\n %d \t %d \t %d \n", a, b, c);

	if (a > b)
	{
		if (b > c)
		{
			printf("%d \t %d \t %d", a, b, c);
		}
		else
		{
			if (c > a)
			{
				printf("%d \t %d \t %d", c, a, b);
			}
			else
			{
				printf("%d \t %d \t %d", a, c, b);
			}
		}
	}
	else
	{
		if (a > c)
		{
			printf("%d \t %d \t %d", b, a, c);
		}
		else
		{
			if (b > c)
			{
				printf("%d \t %d \t %d", b, c, a);
			}
			else
			{
				printf("%d \t %d \t %d", c, b, a);
			}
		}
	}
	return 0;
}
