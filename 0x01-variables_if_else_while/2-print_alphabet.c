#include <stdio.h>
/**
 * main - Printing the alphabet.
 *
 * Return: 0
 */
int main(void)
{
	char alp[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
