/*
** EPITECH PROJECT, 2023
** PPP_sudoki-bi
** File description:
** is_safe
*/

#include "solver.h"

int is_safe(int **grid, int row, int col, int num)
{
    int row_start = row - (row % 3);
    int col_start = col - (col % 3);

    for (int i = 0; i <= N - 1; ++i) {
        if (grid[row][i] == num)
            return (0);
        if (grid[i][col] == num)
            return (0);
        if (grid[row_start + (i % 3)][col_start + (i / 3)] == num)
            return (0);
    }
    return (1);
}
