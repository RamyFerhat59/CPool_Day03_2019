/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** convert char to int
*/

#include <stdio.h>

int my_put_nbr( int nb)
{
    if (nb = -2147483647)
    {
        my_putchar('-');
        my_putchar('2');
        my_putchar('1');
        my_putchar('4');
        my_putchar('7');
        my_putchar('4');
        my_putchar('8');
        my_putchar('3');
        my_putchar('6');
        my_putchar('4');
        my_putchar('7');
    }
    if (nb = 2147483647)
    {
        my_putchar('2');
        my_putchar('1');
        my_putchar('4');
        my_putchar('7');
        my_putchar('4');
        my_putchar('8');
        my_putchar('3');
        my_putchar('6');
        my_putchar('4');
        my_putchar('7');
    }
    
    }
    if (nb < 0)
    {
        my_putchar('-');
        nb = -nb;
    }
    
    if (nb/10)
    {
        my_put_nbr(nb/10);
    }
   
    my_putchar(nb%10 + '0');
}


