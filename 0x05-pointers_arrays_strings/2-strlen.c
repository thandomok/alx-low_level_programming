#include "main.h"

/**
 *_strlen - the length of a string is returned.
 *@s: The string to get the length of
 *Return: length
 */
int_strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{

	length++;
	s++
	}
	return (length);
}
