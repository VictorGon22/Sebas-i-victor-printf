/*
** EPITECH PROJECT, 2021
** B-PSU-100-BAR-1-1-bsmyprintf-sebastia.gomez-dolc
** File description:
** sum_strings_length.c
*/

#include "./../includes/bsprintf.h"

int sum_strings_length(int n, ...)
{
    int i = 0;
    int result = 0;

    va_list list;
    va_start(list, n);
    while (i < n) {
        result += strlen((char *)va_arg(list, char *));
        i++;
    }
    va_end(list);
    return (result);
}