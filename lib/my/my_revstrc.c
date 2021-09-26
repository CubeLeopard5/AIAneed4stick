/*
** EPITECH PROJECT, 2019
** my revstr
** File description:
** reverse string
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *my_revstr(char *str)
{
    int i;
    int len;
    int nb = 0;
    int a = 0;
    char *re;

    for (i = 0; str[i] != '\0'; i++) {
    }
    len = i;
    i = 0;
    a = len;
    while (i != a / 2) {
        nb = str[i];
        str[i] = str[len - 1];
        str[len -1] = nb;
        i += 1;
        len = len - 1;
    }
    return (str);
}
