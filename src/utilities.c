/*
** EPITECH PROJECT, 2020
** utilities
** File description:
** need4stek
*/

#include "my.h"

void my_putstr_2(char *str)
{
    int len = my_strlen(str);
    write(1, str, len);
}

char *my_triple_str_concat(char *str1, char *str2, char *str3)
{
    char *rtn;
    int a = my_strlen(str1);
    int b = my_strlen(str2);
    int c = my_strlen(str3);
    int i = 0;

    rtn = malloc(sizeof(char) * (a + b + c + 1));
    for (int j = 0; str1[j] != '\0'; j++, i++)
        rtn[i] = str1[j];
    for (int k = 0; str2[k] != '\0'; k++, i++)
        rtn[i] = str2[k];
    for (int l = 0; str3[l] != '\0'; l++, i++)
        rtn[i] = str3[l];
    rtn[i] = '\0';
    return (rtn);
}

void instruction(char *instruction, char *strength, char *sign)
{
    char *str = my_triple_str_concat(instruction, sign, strength);

    my_putstr_2(str);
}