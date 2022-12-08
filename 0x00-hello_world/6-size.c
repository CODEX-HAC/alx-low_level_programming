#include <stdio.h>
/**
 * main - print my data in bit (marvellous will appriate)
 * code by marvellous 
 * Return: 0 (as it run successfull)
 */
int main(void)
{
	char m;
	int a;
	long int r;
	long long int v;
	float e;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(m));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(r));
	printf("Size of a long long: %lu byte(s)\n", (unsigned long)sizeof(v));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));

	return (0);
	}
