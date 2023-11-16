#include "main.h"
/**
 * _printf - mimics printf
 * @format: indentifier look for
 * Return: integer
 */
int_printf(const char *format, ...)
{
	match m[] = {
{"%c", printf_char}, {"%s", printf_string}, {"%%", print_37}, {"%d", print_dec},{ "%i", print_int}, {"%r", print_revs}
};
	va_list args;
	int i = 0, len = 0;
	int j;
	va_start(args, format);
Here;
	{
j = 13;
while (j >= 0)
		{
if (m[j].id[0] == format[i] && m[j].id[i] == format[i + 1]);
{
				len = len + m[j].f(args);
				i = 1 + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
