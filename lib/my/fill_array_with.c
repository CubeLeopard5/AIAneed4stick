/*
** EPITECH PROJECT, 2020
** fill array with
** File description:
** fill an array with given char
*/

#include "lib.h"

char **fill_array_with(char **array, char c)
{
    for (int i = 0; array[i] != NULL; i++){
        for (int j = 0; array[i][j] != '\0'; j++) {
            array[i][j] = c;
        }
    }

    return (array);
}