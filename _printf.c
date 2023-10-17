#include "main.h"
/**
 * _printf - prints what ever user enters using place
 * holder
 * @format: identif entered char
 * Return: lenght of the string
 */
int _printf(const char *format, ...)
{
match m[] = {
{"%c`", _print_char},
{"%s", _print_string},
{"%%", _print_holder},
{"%d", _print_dec},
{"%i", _print_int}
};
va_list args;
int i = 0, len = 0;
int j;
va_start(args, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);
Here:
while (format[i] != '\0')
{
j = 4;
while (j >= 0)
{
if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
{
len = len + m[j].f(args);
i = i + 2;
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
