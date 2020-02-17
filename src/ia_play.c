/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** firtree.c
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my_printf.h"

char **ia_play(char **map, int max_to_remove, int size)
{
    int lne = 0;
    int removed = 0;
    int able_to_remove = 0;

    for (; map[lne + 1] != NULL; lne++);
    for (int pipe = 0; able_to_remove == 0; lne--) {
        pipe = check_number_of_stick_on_line(map, lne);
        if (pipe > 0)
            able_to_remove = pipe;
    }
    for (int counter = size * 2 - 1; map[lne + 1][counter] != '*' &&
    removed == 0; counter--)
        if (map[lne + 1][counter] == '|') {
            map[lne + 1][counter] = ' ';
            removed++;
        }
    my_printf("\nAI's turn...\nAI removed 1 match(es) from line %d\n", lne + 1);
    return (map);
}