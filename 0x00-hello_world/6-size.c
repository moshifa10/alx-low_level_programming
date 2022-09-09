#include <stdio.h>

/**
 * main - print the string in the the put function
 *
 * Description: using the main function
 * this program prints "Programming is like building a multilingual puzzle
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %d bytes(s)\n", sizeof(a));
	printf("Size of an int: %d bytes(s)\n", sizeof(b));
	printf("Size of a long int: %d bytes(s)\n", sizeof(c));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(d));
	printf("Size of a float: %d bytes(s)\n", sizeof(f));
	return (0);
}
