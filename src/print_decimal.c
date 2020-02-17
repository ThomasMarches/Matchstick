/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** print_decimal.c
*/

#include "my_printf.h"
#include <stdio.h>
#include <stdarg.h>

void print_decimal_long(va_list argstr, char modifier)
{
    long int arg = 0;

    arg = va_arg(argstr, long int);
    my_put_nbr_long_int(arg);
}

void print_unsigned_long_int(va_list argstr, char modifier)
{
    unsigned long int flag = 0;

    flag = va_arg(argstr, unsigned long int);
    my_put_nbr_unsigned_long_int(flag);
}

void print_decimal(va_list argstr, char modifier)
{
    int arg = 0;

    if (modifier == 'l') {
        print_decimal_long(argstr, modifier);
        return;
    }
    arg = va_arg(argstr, int);
    formatting_decimal(modifier, arg);
    my_put_nbr(arg);
}

void print_unsigned_int(va_list argstr, char modifier)
{
    unsigned int flag = 0;

    if (modifier == 'l') {
        print_unsigned_long_int(argstr, modifier);
        return;
    }
    flag = va_arg(argstr, unsigned int);
    formatting_unsigned_int(modifier, flag);
    my_put_nbr_unsigned_int(flag);
}