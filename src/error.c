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

int check_number_of_stick_on_line(char **map, int line);

int error_line(char *buffer, int line_input, int temp)
{
    if (line_input < 1 || line_input > temp) {
        my_printf("Error: this line is out of range");
        return (-1);
    }
    for (int count = 0; buffer[count] != '\0'; count++)
        if ((buffer[count] < '0' || buffer[count] > '9')
        && buffer[count] != '\n') {
            my_printf("Error: invalid input (positive number expected)\n");
            return (-1);
        }
    return (0);
}

int error_matches(char *buffer, int number_to_remove_input, int line,
    int max_to_remove)
{
    if (number_to_remove_input > max_to_remove) {
        my_printf("Error: you cannot remove more than %d matches per turn",
        max_to_remove);
        return (-1);
    }
    if (number_to_remove_input <= 0) {
        my_printf("Error: you have to remove at least one match\n");
        return (-1);
    }
    for (int count = 0; buffer[count] != '\0'; count++)
        if ((buffer[count] < '0' || buffer[count] > '9')
        && buffer[count] != '\n') {
            my_printf("Error: invalid input (positive number expected)\n");
            return (-1);
        }
    return (0);
}