/*
** EPITECH PROJECT, 2023
** PPP_sudoki-bi
** File description:
** display_grid
*/

#include "solver.h"

void display_grid(int **grid)
{
    printf("|------------------|\n");
    for (int row = 0; row < N; row++) {
        printf("|");
        for (int col = 0; col < N; col++)
            printf(" %d", grid[row][col]);
        printf("|\n");
    }
    printf("|------------------|\n");
}
