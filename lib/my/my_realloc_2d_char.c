/*
** EPITECH PROJECT, 2020
** my re alloc 2d char
** File description:
** re alloc a 2d char array
*/

#include "lib.h"

int get_charray_size(char **array)
{
    int i = 0;

    for (i = 0; array[i] != NULL; i++) {

    }
    return (i);
}

char **my_realloc_2d_char(char **array, int size_to_add)
{
    char **new_array = malloc (sizeof(char *) *
    (get_charray_size(array) + size_to_add + 1));
    int array_size = get_charray_size(array);
    int i = 0;

    for (i = 0; i < array_size; i++) {
        new_array[i] = array[i];
    }
    for (int n = 0; n <= array_size; n++) {
        new_array[i] = NULL;
    }
    return (new_array);
}