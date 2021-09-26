/*
** EPITECH PROJECT, 2019
** my strlen
** File description:
** Display the number of characters
*/

int my_strlen(char *str)
{
    int i = 1;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
