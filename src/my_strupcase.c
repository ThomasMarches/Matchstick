/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_strupcase.c
*/

#include "my_printf.h"

void my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            my_putchar(str[i] - 32);
        else
            my_putchar(str[i]);
    }
}