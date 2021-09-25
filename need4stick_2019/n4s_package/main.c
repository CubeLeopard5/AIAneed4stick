/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfh
*/

#include <stdio.h>
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i += 1;
    }
}

int main(void)
{
    my_putstr("START_SIMULATION\n");
}
