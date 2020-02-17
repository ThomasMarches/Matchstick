/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** struct.h
*/

#include <stdarg.h>
#include "my_printf.h"

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct flag_s
{
    void (*PtrFunction)(va_list, char);
} flag_t;

flag_t func_list[] = {
    {&print_decimal},
    {&print_string},
    {&print_unsigned_int},
    {&print_octal},
    {&print_decimal},
    {&print_character},
    {&print_binary},
    {&print_upper_character},
    {&print_unprintable},
    {&print_hexadecimal},
    {&print_upper_hexadecimal},
    {&print_adress},
    {0},
};
#endif /* !STRUCT_H_ */