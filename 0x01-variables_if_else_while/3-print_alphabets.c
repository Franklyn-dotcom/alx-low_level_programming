#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char j = "a";
	char b = "A";

	while(j <= "z"){
	   putchar(j);
	   j++;
	}
	while(b <= "Z"){
	   putchar(b);
	   b++;
	}
	putchar("\n");
	return (0);
}
