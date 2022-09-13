#include "main.h"
/**
 *print_sign - finds out if the input is >,<,= 0
 * @n: The input number is an integer
 *Return: 0 when is 0, 1 when > 0, -1 when < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
