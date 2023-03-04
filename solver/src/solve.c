/*
** EPITECH PROJECT, 2023
** PPP_sudoki-bi
** File description:
** solve
*/

#include "solver.h"

int solve(int **grid, int row, int col)
{
    if (row == N - 1 && col == N)
        return (1);
    if (col == N) {
        row++;
        col = 0;
    }
    if (grid[row][col] > 0)
        return solve(grid, row, col + 1);
    for (int num = 1; num <= N; num++) {
        if (is_safe(grid, row, col, num)) {
            grid[row][col] = num;
            if (solve(grid, row, col + 1))
                return (1);
        }
        grid[row][col] = 0;
    }
    return (0);
}
