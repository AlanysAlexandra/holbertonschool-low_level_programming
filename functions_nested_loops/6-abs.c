#include "main.h"

/**
 * _abs - computes absolute value of an integer
 *
 *@i: input number as an integer
 *Return: Absolute value of an integer
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
