/*
** EPITECH PROJECT, 2019
** task03
** File description:
** print digits
*/

#include <stdio.h>

int my_print_digits(void)
{
    char c;

    for (c = '0'; c <= '9'; c++)
    {
        my_putchar(c);
    }
}

