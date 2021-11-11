/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** my putchar
*/

#include "./../includes/bsprintf.h"

void function_s(va_list list)
{
    my_putstr((char *)va_arg(list, char *));
}

void function_c(va_list list)
{
    my_putstr((char *)va_arg(list, char *));
}

void function_i_d(va_list list)
{
    my_putstr((int)va_arg(list, int);
}

void function_e(va_list list)
{
    my_putstr((char *)va_arg(list, char *));
}