#include "main.h"
/**
 * _print_int - prints integers passed
 * @args: ints entered by user
 * Return: integr
 */
int _print_int(va_list args)
{
int n = va_arg(args, int);
int num, digit, last = n % 10, x = 1;
int i = 1;
n = n / 10;
num = n;
if (last < 0)
{
_putchar('-');
num = -num;
n = -n;
last = -last;
i++;
}
if (num > 0)
{
while (num / 10 != 0)
{
x = x * 10;
num = num / 10;
}
num = n;
while (x > 0)
{
digit = num / x;
_putchar(digit + '0');
num = num - (digit * (x));
x = x / 10;
i++;
}
}
_putchar(last + '0');
return (i);
}
