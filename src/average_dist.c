/*
** EPITECH PROJECT, 2020
** calcul average distance to wall
** File description:
** Need4stek
*/

#include "my.h"

int average_dist_right(int *lidar)
{
    int sum = 0;

    for (int i = 21; i < 31; i++)
        sum += lidar[i];
    sum /= 10;
    return (sum);
}

int average_dist_left(int *lidar)
{
    int sum = 0;

    for (int i = 0; i < 10; i++)
        sum += lidar[i];
    sum /= 10;
    return (sum);
}

int average_dist_mid(int *lidar)
{
    int sum = 0;

    for (int i = 0; i < 32; i++)
        sum += lidar[i];
    sum /= 32;
    return (sum);
}