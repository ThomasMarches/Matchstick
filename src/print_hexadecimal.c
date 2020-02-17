/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** print_hexadecimal.c
*/

#include "my_printf.h"
#include <stdio.h>
#include <stdarg.h>

void print_hexadecimal_long(va_list argstr, char modifier)
{
    unsigned long int flag = 0;

    flag = va_arg(argstr, unsigned long int);
    my_put_nbr_base(flag, BASE_HEXA);
}

void print_upper_hexadecimal_long(va_list argstr, char modifier)
{
    unsigned long int flag = 0;

    flag = va_arg(argstr, unsigned long int);
    my_put_nbr_base(flag, BASE_HEXA_UPPER_CASE);
}

void print_upper_hexadecimal(va_list argstr, char modifier)
{
    unsigned int flag = 0;

    if (modifier == 'l') {
        print_upper_hexadecimal_long(argstr, modifier);
        return;
    }
    flag = va_arg(argstr, unsigned int);
    formatting_upper_hexadecimal(modifier, flag);
    my_put_nbr_base(flag, BASE_HEXA_UPPER_CASE);
}

void print_hexadecimal(va_list argstr, char modifier)
{
    unsigned int flag = 0;

    if (modifier == 'l') {
        print_upper_hexadecimal_long(argstr, modifier);
        return;
    }
    flag = va_arg(argstr, unsigned int);
    formatting_hexadecimal(modifier, flag);
    my_put_nbr_base(flag, BASE_HEXA);
}