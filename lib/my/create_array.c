/*
** EPITECH PROJECT, 2020
** create array
** File description:
** create an array of given size
*/

#include "lib.h"

char **create_array(int x, int y)
{
    char **array = malloc(sizeof(char *) * (y + 1));

    for (int i = 0; i < y; i++) {
        array[i] = malloc(sizeof(char) * (x + 1));
        for (int j = 0; j < x; j++) {
            array[i][j] = 'a';
        }
        array[i][x] = '\0';
    }
    array[y] = NULL;

    return (array);
}