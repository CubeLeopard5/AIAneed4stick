/*
** EPITECH PROJECT, 2020
** AIA_n4s_2019
** File description:
** get_wheel_info
*/

#include "my.h"

int parse_wheel_info(char *buffer)
{
    int point_nbr = 0;
    int parser = 0;
    int is_neg = 0;
    char *nbr_str = malloc(sizeof(char) * 5);
    float nbr = 0;
    int i = 0;

    for (; point_nbr < 3; parser++) {
        if (buffer[parser] == ':')
            point_nbr++;
    }
    if (buffer[parser] == '-')
        is_neg = 1;
    for (i = 0; buffer[parser] != ':'; i++, parser++)
        nbr_str[i] = buffer[parser];
    nbr_str[i] = '\0';
    nbr = strtof(nbr_str, NULL);
    free(nbr_str);
    return (nbr);
}

int is_wheel_info(char *buffer)
{
    int point_nbr = 0;

    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == ':')
            point_nbr++;
    }
    if (point_nbr == 4)
        return (1);
    return (0);
}

float get_wheels_info(void)
{
    char *buf = malloc(sizeof(char) * 251);
    size_t size = 250;
    float wheel_orientation = 0;

    my_putstr("GET_CURRENT_WHEELS\n");
    while (1) {
        my_putstr("GET_CURRENT_WHEELS\n");
        getline(&buf, &size, stdin);
        if (is_wheel_info(buf) == 1)
            break;
    }
    wheel_orientation =  parse_wheel_info(buf);
    return (wheel_orientation);
}