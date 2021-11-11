/*
** EPITECH PROJECT, 2021
** B-PSU-100-BAR-1-1-bsmyprintf-sebastia.gomez-dolc
** File description:
** disp_stdarg.c
*/

#include "./../includes/bsprintf.h"

void disp_stdarg(char *s, ...)
{
    int i = 0;

    va_list list;
    va_start(list, s);
    
    while (s[i] != '\0') {
        switch (s[i]) {
            case 'c':
                my_putchar((int)va_arg(list, int));
                break;
            case 's':
                my_putstr((char *)va_arg(list, char *));
                break;
            case 'i':
                my_put_nbr((int)va_arg(list, int));
                break;
            default:
                my_putstr("Invalid input");
                break;
        }
        i++;
    }
    va_end(list);
}