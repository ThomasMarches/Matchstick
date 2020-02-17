/*
** EPITECH PROJECT, 2019
** Matchstick
** File description:
** my_strlen.c
*/

int my_strlen(const char *src)
{
    int a = 0;

    while (src[a] != '\0')
        a++;
    return (a);
}