#ifndef BSPRINTF_H_
#define BSPRINTF_H_

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char *str);
int sum_numbers(int n, ...);
int sum_strings_length(int n, ...); 
void disp_stdarg(char *s, ...);

#endif