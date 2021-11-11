/*
** EPITECH PROJECT, 2021
** struct.h
** File description:
** structures to work with
*/

#ifndef STRUCT_H_
#define SRUCT_H_
#include "my.h"
#include <unistd.h>

void none();
void printelements(int num, int x, int y);

typedef struct do_op
{
    char op;
    void (*ptr)(char **, int, int);
} calculator;

void rush1_1(char **buff, int x, int y)
{
    printelements(1, x, y);
    my_putchar('\n');
}

void rush1_2(char **buff, int x, int y)
{
    printelements(2, x, y);
    my_putchar('\n');
}

void rush1_3(char **buff, int x , int y)
{
    char a = buff[0][0];
    char b = buff[0][x - 1];
    char c = buff[y - 1][0];
    char d = buff[y - 1][x - 1];

    if (a == 'A' && b == 'A' && c == 'C' && d == 'C')
        printelements(3, x, y);
    else if ( a == 'A' && b == 'C' && c == 'A' && d == 'C')
        printelements(4, x, y);
    else if ( a == 'A' && b == 'C' && c == 'C' && d == 'A')
        printelements(5, x, y);
    else
        none();
        my_putchar('\n');
}

void rush1_4(char **buffer, int x, int y)
{
   printelements(3, x, y);
   my_putstr(" || ");
   printelements(4, x, y);
   my_putstr(" || ");
   printelements(5, x, y);
   my_putchar('\n');
}

#endif
