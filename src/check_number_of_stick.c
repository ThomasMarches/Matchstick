/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** firtree.c
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int check_number_of_stick_on_line(char **map, int line)
{
    int stick = 0;

    for (int count = 0; map[line][count] != '\0'; count++) {
        if (map[line][count] == '|')
            stick++;
    }
    return (stick);
}

void print_line(int check, int line_input)
{
    if (check == 0)
        my_printf("%d\n", line_input);
}