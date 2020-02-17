/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** print_decimal.c
*/

#include "my_printf.h"
#include <stdio.h>
#include <stdarg.h>

void formatting_unsigned_int(char modifier, unsigned int flag)
{
    if (modifier == '+') {
        if (flag > 0)
            my_putchar('+');
        else
            my_putchar('-');
    }
    else if (modifier == ' ')
        my_putchar(' ');
}

void formatting_decimal(char modifier, int flag)
{
    if (modifier == '+') {
        if (flag > 0)
            my_putchar('+');
        else
            my_putchar('-');
    }
    else if (modifier == ' ')
        my_putchar(' ');
}
