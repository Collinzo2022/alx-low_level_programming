#include <stdio.h>
/**
 * main - program prints the number of arguments
 * passed into it.
 *
 * @argc: number of arguments passed.
 * @argv: arguments passed through.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", (argc - 1));

	return (0);
}
