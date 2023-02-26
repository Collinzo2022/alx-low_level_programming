#include <stdio.h>

/**
 * main - prints all possible different
 * combination of 2 digits.
 *
 * Return: 0.
 **/
int main(void)
{
	int s = 0, e = 1, s1 = 1, e1 = 2;

	while (s <= e)
	{
		s1 = s + 1; 

		while (s1 <= e1)
		{
			putchar(s + '0');
			putchar(s1 + '0');
			s1++;

			if (s != e)
			{
				putchar(',');
				putchar(' ');
			}
			
		}
		s++;
	}


	return (0);
}
