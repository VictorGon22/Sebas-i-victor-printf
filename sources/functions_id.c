/*
** EPITECH PROJECT, 2021
** Sebas-i-victor-myprintf
** File description:
** function_4.c
*/

#include "./../includes/bsprintf.h"

void function_i_d(va_list list)
{
    my_put_nbr((int)va_arg(list, int));
}

void function_space(va_list list)
{
    
    my_putchar(' ');
}

void function_minous(va_list copy) 
{
    double var = (double)va_arg(copy, double);
    printf("1var:%lf\n", var);

    if (var > 0)
        my_putchar('-');   
}

void function_plus(va_list copy)
{
    double var = (double)va_arg(copy, double);
    printf("2var:%lf\n", var);
    if (var >= 0)
        my_putchar('+');
}

void function_hashtag(va_list list)
{
    my_putchar('#');
}