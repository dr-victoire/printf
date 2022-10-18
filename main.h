#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c, int *k);
void _putstring(char *str, int *k);
void _putnum(int n, int *k);
int _printf(const char *format, ...);

#endif /* MAIN_H */
