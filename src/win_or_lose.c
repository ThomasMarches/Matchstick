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

void print_map(char **map, int temp);

int check_pipe(int pipe, char character)
{
    if (character == '|')
        return (pipe + 1);
    return (pipe);
}

int win_or_lose_condition(char **map, int turn, int temp, int win_or_lose)
{
    int count = 0;
    int pipe = 0;
    int counter = 0;

    if (win_or_lose == 10)
        return (10);
    for (; map[count] != NULL; count++) {
        counter = 0;
        for (; map[count][counter] != '\0'; counter++)
            pipe = check_pipe(pipe, map[count][counter]);
    }
    if (pipe == 0 && turn == 0) {
        print_map(map, temp);
        my_printf("You lost, too bad...");
        return (2);
    } else if (pipe == 0) {
        print_map(map, temp);
        my_printf("I lost... snif... but I'll get you next time!!");
        return (1);
    }
    return (0);
}