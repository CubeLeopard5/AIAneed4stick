/*
** EPITECH PROJECT, 2019
** my write
** File description:
** optimized put str
*/

int my_strlen(char *str);

void my_write(char *str)
{
    int size = my_strlen(str);

    write(1, str, size);
}

void my_wrerror(char *str)
{
    int size = my_strlen(str);

    write(2, str, size);
}
