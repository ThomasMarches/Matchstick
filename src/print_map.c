/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** firtree.c
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void print_map(char **map, int temp)
{
    int counter = 0;
    int count = 0;

    for (; map[count] != NULL; count++) {
        counter = 0;
        for (; map[count][counter] != '\0'; counter++)
            write(1, &map[count][counter], 1);
    }
}