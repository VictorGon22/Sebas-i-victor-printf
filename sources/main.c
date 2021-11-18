/*
** EPITECH PROJECT, 2021
** Sebas-i-victor-printf
** File description:
** main.c
*/

#include "./../includes/bsprintf.h"

int main()
{
    char str[] = "hola";
    str[1] = 3;
    
    double num2 = -34567.06;
    int num = -34567;
    //long numero = 4294967295 - (num + 1);

    printf("my_trintf:%-E %+e\n",num2, num2);
    my_printf("my_printf:%-E %+e\n",num2, num2);
    printf("\n");
    printf("my_trintf:%-d %+d\n",num, num);
    my_printf("my_printf:%-d %+d\n",num, num);
    return(0);
}
