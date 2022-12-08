#include <stdio.h>

/**
 * main - Entry point 
 *
 * Return: Always 0 (success )
 */
int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(float));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));

	return (0);
}
