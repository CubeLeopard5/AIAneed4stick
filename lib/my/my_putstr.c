/*
** EPITECH PROJECT, 2019
** my put str
** File description:
** putchar with str
*/

void my_putchar(char);

void my_putstr(char *dest)
{
    int i;

    i = 0;
    while (dest[i] != '\0') {
        my_putchar(dest [i]);
        i = i + 1;
    }
}
