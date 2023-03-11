#include <stdio.h>
/**
 * main - print all the argument passed in commandline.
 * @argc: array size
 * @argv: array.
 *
 * Return: 0.
 **/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		puts(argv[i]);
		i++;
	}
	return (0);
}
