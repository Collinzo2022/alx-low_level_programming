#include "main.h"
/**
 * main-print out all alpahabet in lowercase
 *
 *
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
