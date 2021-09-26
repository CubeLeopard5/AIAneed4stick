/*
** EPITECH PROJECT, 2020
** turn right
** File description:
** need4stek
*/

#include "my.h"

void turn_4(int mid, int diff)
{
    if (mid >= 100)
        WHEEL_7(LEFT_OR_RIGHT(diff));
    else
        WHEEL_8(LEFT_OR_RIGHT(diff));
    return;
}

void turn_3(int mid, int diff)
{
    if (mid >= 500)
        WHEEL_5(LEFT_OR_RIGHT(diff));
    else if (mid >= 300)
        WHEEL_6(LEFT_OR_RIGHT(diff));
    else
        turn_4(mid, diff);
    return;
}

void turn_2(int mid, int diff)
{
    if (mid >= 1000)
        WHEEL_3(LEFT_OR_RIGHT(diff));
    else if (mid >= 700)
        WHEEL_4(LEFT_OR_RIGHT(diff));
    else
        turn_3(mid, diff);
    return;
}

void turn(int *lidar)
{
    int diff = lidar[0] - lidar[31];
    int mid = average_dist_mid(lidar);

    if (mid >= 2000)
        WHEEL_1(LEFT_OR_RIGHT(diff));
    else if (mid >= 1500)
        WHEEL_2(LEFT_OR_RIGHT(diff));
    else
        turn_2(mid, diff);
    return;
}