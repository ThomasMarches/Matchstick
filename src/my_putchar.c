/*
** EPITECH PROJECT, 2019
** my_putchar.c
** File description:
** put char
*/

#include <unistd.h>

void my_putchar(char c)
{
    if (c > 31 || c == '\n')
        write(1, &c, 1);
}