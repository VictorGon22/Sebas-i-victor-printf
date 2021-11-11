/*
** EPITECH PROJECT, 2021
** do_op.c
** File description:
** do operations with diff vaues
*/

#include "./../includes/bsprintf.h"
#include "./include/struct.h"
#include <stdlib.h>
#include <stdarg.h>

void fill_operations(calculator *operations)
{
    operations[0].op = 's';
    operations[0].ptr = &function_s;
    operations[1].op = 'c';
    operations[1].ptr = &function_c;
    operations[2].op = 'd';
    operations[2].ptr = &function_d;
    operations[3].op = 'i';
    operations[3].ptr = &function_i;
    operations[4].op = 'e';
    operations[4].ptr = &function_e;
    operations[5].op = 'E';
    operations[5].ptr = &function_E;
    operations[6].op = 'f';
    operations[6].ptr = &function_f;
    operations[7].op = 'g';
    operations[7].ptr = &function_g;
    operations[8].op = 'G';
    operations[8].ptr = &function_G;
    operations[9].op = 'x';
    operations[9].ptr = &function_x;
    operations[10].op = 'X';
    operations[10].ptr = &function_X;
    operations[11].op = 'P';
    operations[11].ptr = &function_P;
    operations[12].op = 'G';
    operations[12].ptr = &function_G;
    operations[13].op = 'u';
    operations[13].ptr = &function_u;
    operations[14].op = 'o';
    operations[14].ptr = &function_o;
}

int do_op(va_list list, char type) 
{
    int i = 0;
    calculator operations[15];

    fill_operations(operations);
    while (i < 15) {
        if (type == operations[i].op)
            (*(operations[i].ptr))(va_list list);
        i++;
    }
    
    return (0);
}
