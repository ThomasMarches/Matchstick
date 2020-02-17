/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_printf.h
*/

#include <stdarg.h>

#ifndef MY_H_
#define MY_H_

#define BASE_HEXA "0123456789abcdef"
#define BASE_HEXA_UPPER_CASE "0123456789ABCDEF"
#define BASE_OCTAL "01234567"
#define BINARY_BASE "01"

int check_number_of_stick_on_line(char **map, int line);
void formatting_unsigned_int(char, unsigned int);
int my_put_nbr_unsigned_int(unsigned int);
void formatting_decimal(char, int);
int my_put_nbr_long_int(long int);
void formatting_hexadecimal(char, unsigned int);
void formatting_upper_hexadecimal(char, unsigned int);
int my_put_nbr_unsigned_long_int(unsigned long int);
int next_char_check(char *, va_list, char *, int);
int my_printf(char *, ...);
void print_unprintable_char_in_octal(char *, int);
int my_putstr(char const *);
char modifier_check(char *, va_list, char *, int);
int my_charcmp(char, char, char *);
int my_strlen(const char *);
int my_put_nbr(int);
void my_charupcase(char);
void print_hexadecimal(va_list, char);
void print_upper_hexadecimal(va_list, char);
int my_getnbr(const char *);
void my_putchar(char );
int my_strcmp(char *, char *);
void print_decimal(va_list, char);
void print_string(va_list, char);
void my_put_nbr_base(unsigned long long int, char *);
void print_adress(va_list, char);
void print_upper_string(va_list, char);
void print_unsigned_int(va_list, char);
void print_character(va_list, char);
void print_upper_character(va_list, char);
void print_octal(va_list, char);
void print_binary(va_list, char);
void print_unprintable(va_list, char);
#endif /* !MY_H_ */