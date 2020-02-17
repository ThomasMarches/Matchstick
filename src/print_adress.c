/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** print_adress.c
*/

#include "my_printf.h"
#include <stdio.h>
#include <stdarg.h>

void print_adress(va_list argstr, char modifier)
{
    unsigned long long int flag = 0;

    flag = va_arg(argstr, unsigned long long int);
    my_putstr("0x");
    my_put_nbr_base(flag, BASE_HEXA);
}