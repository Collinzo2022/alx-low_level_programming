#include <stdio.h>
/**
 * main - a program that prints the number of
 * arguments passed into it.
 *
 * @argc: number of arguments passed.
 * @argv: a pointer to all the arguments passed.
 *
 * Return: 0.
 **/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
