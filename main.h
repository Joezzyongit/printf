#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

// _printf
int _printf(const char *format, ...);

// prinf_check
int printf_check(char c, va_list values);

// Print single character
int _putchar(char c);

// Print digits
int printf_int(int num);

// Print string
int printf_string(char *s);

#endif /* MAIN_H */
