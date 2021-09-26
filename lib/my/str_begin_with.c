/*
** EPITECH PROJECT, 2020
** str begin by
** File description:
** tell if arg one begin by arg 2
*/

#include "lib.h"

int str_begin_by(char *str, char *begin)
{
    if (my_strlen(str) < my_strlen(begin))
        return (0);
    for (int i = 0; begin[i] != '\0'; i++) {
        if (begin[i] != str[i])
            return (0);
    }
    return (1);
}