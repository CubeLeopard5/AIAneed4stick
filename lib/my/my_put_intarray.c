/*
** EPITECH PROJECT, 2020
** my put int array
** File description:
** print an int array
*/

int  my_putnbr(int n);

void my_put_intarray(int *array, int size)
{
    for (int i = 0; i < size; i++) {
        my_putnbr(array[i]);
    }
}