/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** my_put_nbr
*/

#include "my_printf.h"

int my_put_nbr_pos_long_int(long int nbr)
{
    long int div = 1;

    while ((nbr / div) != 0) {
        div = div * 10;
    }
    while (div != 1) {
        my_putchar(((nbr % div) / (div / 10)) + '0');
        div = div / 10;
    }
    return (0);
}

int my_put_nbr_neg_long_int(long int nbr)
{
    long int div = 1;

    my_putchar('-');
    nbr = -nbr;
    while ((nbr / div) != 0) {
        div = div * 10;
    }
    while (div != 1) {
        my_putchar(((nbr % div) / (div / 10)) + '0');
        div = div / 10;
    }
    return (0);
}

int my_put_nbr_long_int(long int nbr)
{
    if (nbr > 0) {
        my_put_nbr_pos_long_int(nbr);
    }
    else if (nbr < 0) {
        my_put_nbr_neg_long_int(nbr);
    }
    else {
        my_putchar('0');
    }
    return (0);
}
