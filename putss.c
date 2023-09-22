#include "main.h"

/**
 * putss - print string
 *
 * @c: string
 * Return: number of byte
 */

int putss(char *c)
{
	int count = 0;

	if (c)
	{
		for (count = 0; c[count] != '\0'; count++)
		{
			putchr(c[count]);
		}
	}
	return (count);
}
