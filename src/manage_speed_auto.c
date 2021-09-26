/*
** EPITECH PROJECT, 2020
** manage the speed
** File description:
** need4stek
*/

#include "my.h"

void go_backwards(int *lidar, int mid)
{
    if (mid < 150 || lidar[0] < 50 || lidar[31] < 50)
        my_putstr_2("CAR_BACKWARDS:0.5");
    return;
}

void set_speed_3(int *lidar, int mid)
{
    if (mid >= 400)
        my_putstr_2("CAR_FORWARD:0.4");
    else if (mid >= 150)
        my_putstr_2("CAR_FORWARD:0.25");
    else
        go_backwards(lidar, mid);
    return;
}

void set_speed_2(int *lidar, int mid)
{
    if (mid >= 1000)
        my_putstr_2("CAR_FORWARD:0.65");
    else if (mid >= 600)
        my_putstr_2("CAR_FORWARD:0.5");
    else
        set_speed_3(lidar, mid);
    return;
}

void set_speed(int *lidar)
{
    int mid = average_dist_mid(lidar);

    if (mid >= 2000)
        my_putstr_2("CAR_FORWARD:1");
    else if (mid >= 1500)
        my_putstr_2("CAR_FORWARD:0.8");
    else
        set_speed_2(lidar, mid);
    return;
}

void manage_speed(void)
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
        set_speed(lidar);
}
