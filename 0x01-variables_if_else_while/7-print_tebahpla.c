#include <stdio.h>
/**
 * main - Print numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char k = 'z';

	while (k >= 'a')
	{
		putchar(k);
		k--;
	}
	putchar('\n');
	return (0);
}
