/*
** EPITECH PROJECT, 2023
** set value
** File description:
** set value
*/

#include "../../include/my.h"

void set_value_generator(generator_t *generator, char **av)
{
    generator->x = my_getnbr(av[1]);
    generator->y = my_getnbr(av[2]);
}
