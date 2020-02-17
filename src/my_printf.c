/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_printf.c
*/

#include "my_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int print_pourcentage(int i, char *str)
{
    int i2 = my_strlen(str);

    if (str[i] == '%' && str[i + 1] == '%') {
        my_putchar('%');
        return (i + 1);
    } else if (i < i2)
        my_putchar(str[i]);
    return (i);
}

int my_printf(char *str, ...)
{
    int count = 0;
    int space = 0;
    char flag[13] = "dsuoicbCSxXp";
    va_list argstr;

    va_start(argstr, str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%' && str[i + 1] == ' ')
            space = 1;
        else if (str[i] == '%' && str[i + 1] != '%' || space == 1) {
            i = next_char_check(str, argstr, flag, i);
            space = 0;
        } else
            i = print_pourcentage(i, str);
    }
    va_end(argstr);
    return (0);
}