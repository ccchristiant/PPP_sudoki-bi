/*
** EPITECH PROJECT, 2023
** solver
** File description:
** solver
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "solver.h"

int main(int ac, char **av)
{
    if (check_error(ac, av) == EXIT_ERROR)
        return (EXIT_ERROR);
    arr_t *arr = malloc(sizeof(arr_t));
    arr->arr = take_file();
    for (int i = 0; arr->arr[i] != NULL; i++) {
        printf("%s", arr->arr[i]);
    }
    take_number(arr, arr->arr);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%d ", arr->grid[i][j]);
        }
        printf("\n");
    }
    return (0);
}
