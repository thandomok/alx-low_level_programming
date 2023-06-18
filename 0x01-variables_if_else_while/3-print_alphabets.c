#include <stdio.h>

/**
 * main - Prints the alphabets.
 *
 * Return: 0
 */
int main(void)
{
char alph = "abcdefghijklmnopqqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;

for (i = 0; i < 52; i++)
{
	putchar(alph[i]);
}
putchar('\n');
return (0);
}
