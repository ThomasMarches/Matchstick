/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_strupcase.c
*/

#include "my_printf.h"

void my_charupcase(char str)
{
    if (str >= 'a' && str <= 'z')
        my_putchar(str - 32);
    else
        my_putchar(str);
}