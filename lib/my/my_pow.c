/*
** EPITECH PROJECT, 2020
** my pow
** File description:
** nbr ^ n
*/

int my_pow(int nbr, int n)
{
    for (int i  = 0; i < n - 1; i++) {
        nbr = nbr * nbr;
    }
    return (nbr);
}