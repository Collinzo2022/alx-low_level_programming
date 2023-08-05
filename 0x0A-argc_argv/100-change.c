#include <stdio.h>
#include <stdlib.h>
/**
 * main -program printsthe minimum number of coins to make
 * change for an amount.
 *
 * @argc: number of arguments count.
 * @argv: arguments vector.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;
	int coinvalues[] = {25, 10, 5, 2, 1};
	int numcoins;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);


	numcoins = sizeof(coinvalues) / sizeof(coinvalues[0]);

	for (i = 0; i < numcoins; i++)
	{
		while (cents >= coinvalues[i])
		{
			cents -= coinvalues[i];
			coins++;
		}
	}

	printf("%d\n", coins);
	return (0);
}
