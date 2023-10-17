#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>


typedef struct format
{
char *id;
int (*f)();
} match;

int _print_dec(va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
int _print_int(va_list args);
int _print_char(va_list val);
int _print_string(va_list val);
int _strlen(char *C);
int _strlenc(const char *C);
int _print_holder(void);
int _print_bin(va_list val);
#endif

