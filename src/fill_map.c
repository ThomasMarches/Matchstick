/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** firtree.c
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char **fill_map(int temp, char **map)
{
    int count = 0;

    for (; count < temp * 2 + 2; count++)
        map[0][count] = '*';
    map[0][count - 1] = '\n';
    for (count = 0; count < temp * 2 + 2; count++)
        map[temp + 1][count] = '*';
    map[temp + 1][count - 1] = '\n';
    for (count = 1; count != temp + 2; count++)
        map[count][0] = '*';
    for (count = 1; count != temp + 1; count++) {
        map[count][temp * 2] = '*';
        map[count][temp * 2 + 1] = '\n';
    }
    for (int counter = 1, count = 1; map[count + 1] != NULL; count++) {
        counter = 1;
        for (; map[count][counter + 1] != '\n'; counter++)
            map[count][counter] = ' ';
    }
    return (map);
}