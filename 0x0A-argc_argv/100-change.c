#include <stdio.h>
#include <stdlib.h>

/**
 * main - pints minimum amount of coins to make
 * change.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0.
 **/
int main(int argc, char **argv)
{
	int count = 0;
	int change = 0;
	int amount;
	int coins_values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/*get the amount from the command line argument*/
	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	while (count < 5 && amount >= 0)
	{
		while (amount >= coins_values[count])
		{
			change++;
			amount -= coins_values[count];
		}
		count++;
	}
	printf("%d\n", change);
	return (0);
}
