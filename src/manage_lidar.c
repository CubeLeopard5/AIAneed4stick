/*
** EPITECH PROJECT, 2020
** manage info in tidar
** File description:
** need4stek
*/

#include "my.h"

int add_digit_to_nbr(int nbr, int digit)
{
    nbr *= 10;
    nbr += digit;

    return (nbr);
}

int *get_lidar_nbr(int *lidar, int i, int j, char *buf)
{
    for (int n = 0; n < 32; n++) {
        lidar[j] = 0;
        for (;buf[i] != ':' && buf[i] != '.'; i++)
            lidar[j] = add_digit_to_nbr(lidar[j], buf[i] - 48);
        j++;
        i += 3;
    }
    return (lidar);
}

int point_counter(char *buffer)
{
    int point_nbr = 0;

    for (int i = 0; buffer[i] != '\0'; i++)
        if (buffer[i] == ':')
            point_nbr++;
    return (point_nbr);
}

int free_lidar(char *buf, int *lidar, int i)
{
    if (buf[i] == 'N' || point_counter(buf) != 35) {
        free(buf);
        free(lidar);
        return (-1);
    } else
        return (0);
}

int *store_lidar_info(int *is_finished)
{
    int *lidar = malloc(sizeof(int) * 32);
    char *buf = malloc(sizeof(char) * 251);
    size_t size = 250;
    int i = 0;
    int j = 0;

    getline(&buf, &size, stdin);
    if (is_simu_end(buf) == 1) {
        *is_finished = 1;
        return (is_finished);
    }
    for (int n = 0; n < 3; n++) {
        for (;buf[i] != ':'; i++);
        i++;
    }
    if (free_lidar(buf, lidar, i) == -1)
        return (NULL);
    lidar = get_lidar_nbr(lidar, i, j, buf);
    free(buf);
    return (lidar);
}