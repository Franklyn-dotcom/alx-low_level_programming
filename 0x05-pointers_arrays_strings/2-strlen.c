#include "main.h"
/**
 * _strlen - check the code
 *@s: pointer character
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
