#include <stdio.h>

/**
 * main - prints alphabets in reverse order
 *Return: always (0)
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
