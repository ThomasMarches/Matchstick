/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_printf.c
*/

#include "struct.h"
#include "my_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int space_check(char *str, va_list argstr, char modifier, int i)
{
    int counter = i;
    int check_char = 0;
    int temp = i;
    char flag[14] = "dsuoicbCSxXp";

    for (; str[temp] == ' '; temp++);
    counter = counter + (temp - i);
    check_char = my_charcmp(str[counter], str[counter + 1], flag);
    if (check_char != -1) {
        counter = counter + 1;
        func_list[check_char].PtrFunction(argstr, modifier);
        my_putchar(str[counter]);
    }
    return (counter);
}

char modifier_check(char *str, va_list argstr, char *flag, int i)
{
    char modifier[8] = "01+-# l";
    char a = 'a';
    int number = 0;

    number = my_charcmp(str[i + 1], str[i + 2], modifier);
    if (str[i] == ' ' && str[i + 1] != ' ' && number != 1)
        my_putchar(' ');
        if (number != -1)
            return (modifier[number]);
        else
            return ('a');
}

int next_char_check(char *str, va_list argstr, char *flag, int i)
{
    int same_string = 0;
    int executing = 0;
    char modifier = 'a';

    modifier = modifier_check(str, argstr, flag, i);
    if (modifier != 'a' && str[i - 1] != '%')
        i = i + 1;
    if (str[i] == ' ' && str[i + 1] == ' ') {
        i = space_check(str, argstr, modifier, i);
        executing = 1;
    }
    same_string = my_charcmp(str[i + 1], str[i + 2], flag);
    if (same_string != -1 && executing == 0) {
        i++;
        func_list[same_string].PtrFunction(argstr, modifier);
    }
    return (i);
}