/*
** EPITECH PROJECT, 2020
** my str cmp
** File description:
** compare 2 strings
*/

#include "lib.h"

int my_strcmp(char *a, char *b)
{
    if (my_strlen(a) != my_strlen(b))
        return (0);
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] != b[i])
            return (0);
    }
    return (1);
}