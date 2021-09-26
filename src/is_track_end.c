/*
** EPITECH PROJECT, 2020
** sdfgh
** File description:
** jhgfds
*/

#include "my.h"

int is_track_end(char *buffer)
{
    int i = 0;
    int j = 0;
    char str[15];

    for (i; buffer[i] != 'T' && buffer[i] != '\0'; i++);
    for (i; buffer[i] != ':' && buffer[i] != '\0'; i++, j++)
        str[j] = buffer[i];
    str[j] = '\0';
    if (my_strcmp(str, "Track Cleared") == 1)
        return (1);
    else
        return (-1);
}

int is_lap_end(char *buffer)
{
    int i = 0;
    int j = 0;
    char str[13];

    for (i; buffer[i] != 'L' && buffer[i] != '\0'; i++);
    for (i; buffer[i] != ':' && buffer[i] != '\0'; i++, j++)
        str[j] = buffer[i];
    str[j] = '\0';
    if (my_strcmp(str, "Lap Cleared") == 1)
        return (1);
    else
        return (-1);
}

int is_simu_end(char *buffer)
{
    if (is_track_end(buffer) == 1)
        return (1);
    else
        return (-1);
}