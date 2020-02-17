/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_put_nbr_base.c
*/

#include "my_printf.h"

void my_put_nbr_base(unsigned long long int nb, char *base)
{
    int size = 0;

    size = my_strlen(base);
    if (nb >= size)
        my_put_nbr_base(nb / size, base);
    my_putchar(base[nb % size]);
}