/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** print_binary
*/

#include "my_printf.h"
#include <stdio.h>
#include <stdarg.h>

void print_binary(va_list argstr, char modifier)
{
    int flag = 0;

    flag = va_arg(argstr, int);
    my_put_nbr_base(flag, BINARY_BASE);
}