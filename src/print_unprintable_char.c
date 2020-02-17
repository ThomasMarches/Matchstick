/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** print_unprintable_char
*/

#include "my_printf.h"
#include <stdio.h>
#include <stdarg.h>

void print_unprintable_char_in_octal(char *flag, int count)
{
    if (flag[count] >= 0 && flag[count] < 10) {
        my_putstr("\\00");
        my_put_nbr_base(flag[count], BASE_OCTAL);
        return;
    } else if (flag[count] >= 10 && flag[count] < 32) {
        my_putstr("\\0");
        my_put_nbr_base(flag[count], BASE_OCTAL);
        return;
    }
    if (flag[count] >= 127) {
        my_putchar('\\');
        my_put_nbr_base(flag[count], BASE_OCTAL);
    }
    else
        my_putchar(flag[count]);
}

void print_unprintable(va_list argstr, char modifier)
{
    char *flag = NULL;

    flag = va_arg(argstr, char *);
    for (int count = 0; flag[count] != '\0'; count = count + 1)
        print_unprintable_char_in_octal(flag, count);
}