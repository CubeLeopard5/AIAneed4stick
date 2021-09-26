/*
** EPITECH PROJECT, 2019
** my put nbr
** File description:
** display number
*/

void my_putchar(char);


int  my_putnbr(int n)
{
    if (n == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        n = 147483648;
    }

    if (n < 10 && n >= 0){
        my_putchar(48+n);
    }
    else if (n < 0){
        my_putchar('-');
        n = n *(-1);
        my_putnbr(n);

    }
    else {
        my_putnbr(n / 10);
        my_putchar(n % 10 + 48);
    }
    return (0);
}
