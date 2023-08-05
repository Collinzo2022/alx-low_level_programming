#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * check_int - checks if its a number.
 * @s: string of char passed to it.
 *
 * Return: 0 or 1 error.
 */
int check_int(char *s)
{
	unsigned int count = 0;

	while (count < strlen(s))
	{
		if (!isdigit(s[count]))
			return (0);
		count++;
	}
	return (1);
}

/**
 * main - program that adds positive numbers.
 * @argc: number of arguments in command line.
 * @argv: argument vector.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int count = 1;
	int num;


	for (count = 1; count < argc; count++)
	{
		if (check_int(argv[count]))
		{
			num = atoi(argv[count]);
			sum += num;
		}

		else
		{
		printf("Error\n");
		return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
