#include "main.h"

/**
 * _printf - print to stdout formatted text
 *
 * @format: format specifier
 * Return: no of bytes printed
 */

int _printf(const char *format, ...)
{
	unsigned int i, count = 0;

	va_list args;

	int s_count;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchr(format[i]);
			count++;
		}
		else if(format[i + 1] == 'c')
		{
			putchr(va_arg(args, int));
			i++;
			count++;
		}
		else if (format[i +1] == 's')
		{
			char *s = va_arg(args, char *);
			if (s != NULL)
			{
				s_count = putss(va_arg(args, char *));
				i++;
				count += (s_count - 1);
			}
		}
		else if (format[i + 1] == '%')
		{
			putchr('%');
			i++;
			count++;
		}
		else
		{
			putchr('%');
			putchr(format[i + 1]);
			i++;
			count += 2;
		}
	}
	va_end(args);
	return (count);

}
