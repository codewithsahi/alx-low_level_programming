#include <stdio.h>

/**
 * main -prints all possible combinations of single-digit number
 *Return: always (0)
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
	{
		putchar(',');
		putchar(' ');
	}
		n++;
	}
	putchar('\n');

	return (0);
}
