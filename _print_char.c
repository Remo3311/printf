#include "main.h"
/**
 * _print_char - prints a char
 * @val: char to be printed
 * Return: alyways 1 on success
 */
int _print_char(va_list val)
{
char s;
s = va_arg(val, int);
_putchar(s);
return (1);
}
