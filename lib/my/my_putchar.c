/*
** EPITECH PROJECT, 2019
** my putchar c
** File description:
** my putchar in c
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
