/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** print_char
*/

#include "my_printf.h"
#include <stdio.h>
#include <stdarg.h>

void print_character(va_list argstr, char modifier)
{
    int c = 0;

    c = va_arg(argstr, int);
    my_putchar(c);
}

void print_upper_character(va_list argstr, char modifier)
{
    int c = 0;

    c = va_arg(argstr, int);
    my_charupcase(c);
}