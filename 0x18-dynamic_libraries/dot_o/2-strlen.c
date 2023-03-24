#include "main.h"
/**
 * _strlen - return the length of a string
 * Owned by Prevail Ugah
 * @s: char to check
 * Description: this will return the length of a string
 * Return: 0
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
