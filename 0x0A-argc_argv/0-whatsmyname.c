#include <stdio.h>
/**
 * main - program prints its name
 * and new line.
 * @argc: number of arguments.
 * @argv: argument string.
 * Return: 0.
 **/
int main(int argc, char **argv)
{
	(void)argc; /*to avoid compplilation error of unsused variable*/
	printf("%s\n", argv[0]);
	return (0);
}
