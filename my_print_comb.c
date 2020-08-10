/*
** EPITECH PROJECT, 2019
** my_print_comb
** File description:
** combinaison 3 chiffres
*/

#include <stdio.h>

int my_print_comb(void)
{
    char n1;
    char n2;
    char n3;

    void my_combi(void)
    {
        if (n1 < n2 && n2 < n3)
        {
            my_putchar(n1);
            my_putchar(n2);
            my_putchar(n3);
            if (!((n3 == '9') && (n2 == '8') && (n1 == '7')))
            {
                my_putchar(',');
                my_putchar(' ');
            }
        }
    }

    for (n1 = '0'; n1 <= '9'; n1++)
    {
        for (n2 = '0'; n2 <= '9'; n2++)
        {
            for(n3 = '0'; n3 <= '9'; n3++)
            {
                my_combi();
            }
        }
    }
}
