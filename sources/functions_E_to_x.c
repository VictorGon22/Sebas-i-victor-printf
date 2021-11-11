/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** my putchar
*/

#include "./../includes/bsprintf.h"

void function_E(va_list list)
{
    my_putstr((char *)va_arg(list, char *));
}

void function_f(va_list list)
{
    my_putstr((char *)va_arg(list, char *));
}

void function_g(va_list list)
{
    my_putstr((char *)va_arg(list, char *));
}

void function_G(va_list list)
{
    my_putstr((char *)va_arg(list, char *));
}

void function_x(va_list list)
{
    my_putstr((char *)va_arg(list, char *));
}