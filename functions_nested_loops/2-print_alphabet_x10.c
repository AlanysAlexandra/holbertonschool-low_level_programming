#include "main.h"
/**
  * print_alphabet_x10 - Prints the alphabet 10 times
  *
  * Return: void
  */
void print_alphabetx10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}

		putchar('\n');

		i++;
	}
}
