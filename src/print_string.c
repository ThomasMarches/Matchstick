/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** print_string
*/

#include "my_printf.h"
#include <stdio.h>
#include <stdarg.h>

void print_string(va_list argstr, char modifier)
{
    char *arg = 0;

    arg = va_arg(argstr, char *);
    my_putstr(arg);
}