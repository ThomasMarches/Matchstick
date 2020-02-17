/*
** EPITECH PROJECT, 2019
** my_strcmp.c
** File description:
** compare str
*/

#include "my_printf.h"

int my_charcmp(char s1, char next, char *flag)
{
    int samechar = 0;
    int count = 0;
    int temp = 0;

    for (count = 0; flag[count] != '\0'; count++) {
        if (flag[count] == s1)
            return (count);
    }
    return (-1);
}