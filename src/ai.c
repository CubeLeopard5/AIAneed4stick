/*
** EPITECH PROJECT, 2020
** ai
** File description:
** ai
*/

#include "my.h"

void ai(void)
{
    int *lidar = NULL;
    int *is_finished = 0;

    my_putstr("GET_INFO_LIDAR\n");
    lidar = store_lidar_info(is_finished);
    if (lidar == NULL)
        return;
    else if (*lidar == 1)
        return;
    else
        turn(lidar);
}
