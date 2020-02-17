/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** print_hexadecimal.c
*/

#include "my_printf.h"
#include <stdio.h>
#include <stdarg.h>

void formatting_upper_hexadecimal(char modifier, unsigned int flag)
{
    if (modifier == '#') {
        my_putchar('0');
        my_putchar('X');
    }
    if (modifier == ' ')
        my_putchar(' ');
}

void formatting_hexadecimal(char modifier, unsigned int flag)
{
    if (modifier == '#') {
        my_putchar('0');
        my_putchar('x');
        if (modifier == ' ')
            my_putchar(' ');
    }
}