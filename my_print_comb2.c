/*
** EPITECH PROJECT, 2019
** my_print_comb2
** File description:
** combinaison 2
*/

#include <stdio.h>

int my_print_comb2(void)
{
    char n1;
    char n2;
    char n3;
    char n4;

    char my_comb2(void)
    {
        for (n3 = '0'; n3 <= '9'; n3++)
        {
            for (n4 = n2+1; n4 <= '9'; n4++)
            {
                my_putchar(n1);
                my_putchar(n2);
                my_putchar(' ');
                my_putchar(n3);
                my_putchar(n4);
                if (!( n1 == '9' && n2 == '8' && n3 == '9' && n4 == '9'))
                {
                    my_putchar(',');
                    my_putchar(' ');
                }
            }
        }
    }

    for (n1 = '0'; n1 <= '9'; n1++)
    {
        for (n2 = '0'; n2 <= '9'; n2++)
        {
            my_comb2();
        }
    }
}
