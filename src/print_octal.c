/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** print_octal.c
*/

#include "my_printf.h"
#include <stdio.h>
#include <stdarg.h>

void print_octal_long(va_list argstr, char modifier)
{
    long unsigned int flag = 0;

    flag = va_arg(argstr, long unsigned int);
    my_put_nbr_base(flag, BASE_OCTAL);
}

void formatting_octal(char modifier, unsigned int flag)
{
    if (modifier == '#')
        my_putchar('0');
}

void print_octal(va_list argstr, char modifier)
{
    unsigned int flag = 0;

    if (modifier == 'l') {
        print_octal_long(argstr, modifier);
        return;
    }
    flag = va_arg(argstr, int);
    formatting_octal(modifier, flag);
    my_put_nbr_base(flag, BASE_OCTAL);
}