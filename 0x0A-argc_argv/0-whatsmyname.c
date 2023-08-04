#include <stdio.h>
/**
 * main - function prints the name of the program
 * @argc: number of command line arguments.
 * @argv: the name of the command line arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", *argv);

	return (0);
}
