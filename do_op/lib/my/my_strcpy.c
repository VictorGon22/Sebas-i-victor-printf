/*
** EPITECH PROJECT, 2021
** my_strcpy.c
** File description:
** Write a function that copies a string into another.
** The destination string will already have enough
** memory to copy the source string.
*/

#include "../../include/my.h"

char *my_strcpy(char *dest , char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i++] = '\0';
    return (dest);
}
