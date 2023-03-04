/*
** EPITECH PROJECT, 2023
** error handle
** File description:
** error handle
*/

#include "../../include/my.h"

int check_error_generator(int ac, char **av)
{
    if (ac < 3 || ac > 4) {
        return (84);
    }

    return (0);
}
