include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _abs - Computes the absolute value of integer
 * @i: input number as an integer
 *Return: absolute value
 *
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

