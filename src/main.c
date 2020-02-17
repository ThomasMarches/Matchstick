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

int my_strlen(const char *src);

char **fill_map(int temp, char **map);

char **create_map(int temp, char **map);

void print_map(char **map, int temp);

int check_number_of_stick_on_line(char **map, int line);

int error_line(char *buffer, int line_input, int temp);

char **ia_play(char **map, int max_to_remove, int size);

int error_matches(char *buffer, int nbr_to_remove, int temp,
int max_to_remove);

void print_line(int check, int line_input);

int win_or_lose_condition(char **map, int turn, int temp, int);

char **update_map(char **map, int line, int number_to_remove, int size)
{
    int removed = 0;

    if (line == 100)
        return (map);
    for (int counter = size * 2 - 1; map[line][counter] != '*' &&
    removed < number_to_remove; counter--)
        if (map[line][counter] == '|') {
            map[line][counter] = ' ';
            removed++;
        }
    return (map);
}

int get_match(int *line, int *number_to_remove, int max_to_remove, int temp)
{
    char *buffer = malloc(sizeof(char) * 5);
    int characters, nbr_to_remove = 0;
    size_t bufsize = 5;

    my_printf("Matches: ");
    characters = getline(&buffer, &bufsize, stdin);
    if (characters == -1)
        return (10);
    buffer[characters] = '\0';
    nbr_to_remove = my_getnbr(buffer);
    if (error_matches(buffer, nbr_to_remove, line, max_to_remove) == -1)
        return (get_info(line, number_to_remove, max_to_remove, temp));
    my_printf("Player removed %d match(es) from line ", nbr_to_remove);
    *number_to_remove = nbr_to_remove;
    return (0);
}

int get_info(int *line, int *number_to_remove, int max_to_remove, int temp)
{
    char *buffer = malloc(sizeof(char) * 5);
    int characters, line_input, nbr_to_remove, check = 0;
    size_t bufsize = 5;

    my_printf("\nLine: ");
    characters = getline(&buffer, &bufsize, stdin);
    if (characters == -1) {
        *line = 100;
        return (10);
    }
    buffer[characters] = '\0';
    line_input = my_getnbr(buffer);
    if (error_line(buffer, line_input, temp) == -1)
        return (get_info(line, number_to_remove, max_to_remove, temp));
    *line = line_input;
    check = get_match(line, number_to_remove, max_to_remove, temp);
    if (check == 10)
        return (10);
    print_line(check, line_input);
    return (0);
}

int game_loop(char **map, int temp, int max_to_remove)
{
    int number_to_remove = 0;
    int line, win_or_lose = 0;
    int turn = 1;

    while ((win_or_lose =
    win_or_lose_condition(map, turn, temp, win_or_lose)) == 0) {
        print_map(map, temp);
        if (turn == 1 && win_or_lose == 0) {
            my_printf("\nYour turn:");
            win_or_lose =
            get_info(&line, &number_to_remove, max_to_remove, temp);
            map = update_map(map, line, number_to_remove, temp);
            turn = 0;
        } else if (win_or_lose == 0) {
            map = ia_play(map, max_to_remove, temp);
            turn = 1;
        }
    }
    if (win_or_lose == 10)
        return (0);
    return (win_or_lose);
}

int main(int argc, char **argv)
{
    int temp = 0;
    int max_to_remove = 0;
    char **map = NULL;

    temp = my_getnbr(argv[1]);
    max_to_remove = my_getnbr(argv[2]);
    map = malloc(sizeof(char *) * (temp + 3));
    map[temp + 2] = NULL;
    for (int count = 0; count < temp + 2; count++) {
        map[count] = malloc(sizeof(char) * ((temp * 2) + 3));
        map[count][temp * 2 + 2] = '\0';
    }
    map = fill_map(temp, map);
    map = create_map(temp, map);
    return (game_loop(map, temp, max_to_remove));
}