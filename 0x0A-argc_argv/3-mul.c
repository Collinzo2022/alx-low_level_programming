#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: number of arguments.
 * @argv: comand line arguments.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int multiply = 1;
	int i, num;

	if (argc < 3)
	{
		printf("Error\n");
	return (1);
	}

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		multiply *= num;
	}

	printf("%d\n", multiply);

	return (0);
}
