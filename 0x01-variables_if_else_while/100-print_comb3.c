#include <stdio.h>

/**
 * main - printing combination of two numbers 01 to 99.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 89; a++)
	if (a < ((a % 10)  * 10) + (a / 10))
	{
	putchar(a / 10 + '0');
	putchar(a % 10 + '0');
	if (a < 89)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
