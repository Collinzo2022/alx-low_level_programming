#include "main.h"
/**
 * rev_string - prints thr reverse of a string
 * @s: string
 *
 **/
void rev_string(char *s)
{
	char last_char;

	while (*s)
	{
		s++;
		count++;
	}
	for (i = 0; i < count; i++)
		s--;

	for (i = 0; i < (count / 2); i++)

	{
		int last = count - 1;

		last_char = s[last - i];
		s[last - i] = s[i];
		s[i] = last_char;
	}
}
