/*
** EPITECH PROJECT, 2023
** solver
** File description:
** solver
*/

#include "solver.h"

int main(int ac, char **av)
{
    if (check_error(ac, av) == EXIT_ERROR)
        return (EXIT_ERROR);
    arr_t *arr = malloc(sizeof(arr_t));

    arr->arr = take_file();
    take_number(arr, arr->arr);
    if (solve(arr->grid, 0, 0) == 1)
        display_grid(arr->grid);
    else
        printf("sudoki-bi: No solution found.\n");
    return (0);
}
