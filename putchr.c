#include "main.h"
/**
 * putchr - print a character
 * @c: char input
 * Return: 1
 */

int putchr(char c)
{
	return (write(1, &c, 1));
}
