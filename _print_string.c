#include "main.h"
/**
 * _print_string - prints string passed by user
 * @val: string to be printes
 * Return: lenght of the string
 */

int _print_string(va_list val)
{
char *str;
int i;
int len;

str = va_arg(val, char*);

if (str == NULL)
{
str = "NULL";
len = _strlen(str);
for (i = 0; i < len; i++)
_putchar(str[i]);
return (len);
}
else
{
len = _strlen(str);
for (i = 0; i < len; i++)
_putchar(str[i]);
return (len);
}

}
