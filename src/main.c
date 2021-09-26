/*
** EPITECH PROJECT, 2020
** n4s
** File description:
** main
*/

#include "my.h"
#include <stdio.h>

int main(void)
{
    size_t size = 57;
    char *buffer = malloc(sizeof(char) * 58);

    buffer[58] = '\0';
    my_putstr("START_SIMULATION\n");
    
    getline(&buffer, &size, stdin);
    if (my_strcmp(buffer, "1:OK:No errors so far:No further info\n") != 1) {
        my_wrerror("has not launched\n");
        return (84);
    }
    my_putstr("CAR_FORWARD:0.5\n");
    while (1) {
        ai();
        manage_speed();
    }
    my_putstr("STOP_SIMULATION\n");
}