#include <stdio.h>
#include "main.h"
/**
  * print_alphabet - Print the alphabet in lowercase
  *
  * Return: Always 0
  */
void print_alphabet(void)	
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
}
