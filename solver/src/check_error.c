/*
** EPITECH PROJECT, 2023
** PPP_sudoki-bi
** File description:
** check_error
*/

#include "solver.h"

int check_error(int ac, char **av)
{
    if (ac != 1)
        return (EXIT_ERROR);
    return (EXIT_SUCCESS);
}