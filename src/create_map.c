/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** firtree.c
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char **create_map(int temp, char **map)
{
    int space = temp;
    int number_to_print = 1;

    for (int counter = 1; map[counter + 1] != NULL; counter++) {
        for (int count = space; count != space + number_to_print; count++)
            map[counter][count] = '|';
        space -= 1;
        number_to_print += 2;
    }
    return (map);
}