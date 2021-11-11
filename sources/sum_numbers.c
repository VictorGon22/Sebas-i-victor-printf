/*
** EPITECH PROJECT, 2021
** B-PSU-100-BAR-1-1-bsmyprintf-sebastia.gomez-dolc
** File description:
** sum_numbers.c
*/

#include "./../includes/bsprintf.h"

int sum_numbers(int n, ...)
{
    int i = 0;
    int result;

    va_list list;
    va_start(list, n);
    while (i < n) {
        result += (int)va_arg(list, int);
        i++;
    }
    va_end(list);
    return (result);
}