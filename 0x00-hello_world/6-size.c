#include <stdio.h>
/**
 * main - print out samples of data types in c
 * code by prevail
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n". (unsigned long)sizeof(a));
	printf("size of an int: %lu byte(s)\n". (unsigned long)sizeof(b));
	printf("size of a long int: %lu byte(s)\n". (unsigned long)sizeof(c));
	print("size of a long long int: %lu byte(s)\n". (unsigned long)sizeof(d));
	printf("size of a float: %lu byte(s)\n". (unsigned long)sizeof(f));
	return (0);
}
