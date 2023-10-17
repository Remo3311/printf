#include "main.h"
/**
 * _strlen - calculate the string lenght
 * @c: string to be measured
 * Return: string lenght
 */
int _strlen(char *c)
{
int i;
for (i = 0; c[i] != '\0'; i++)
;
return (i);
}
/**
 * _strlenc - calculate the string lenght
 * @c: string to be measured
 * Return: string lenght
 */
int _strlenc(const char *c)
{
int i;
for (i = 0; c[i] != '\0'; i++)
;
return (i);
}
