#include <stdio.h>
/**
 * main  - write e program that prints the lowercase alphabte in reverse, followed by a new line
 * return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
