/*
** EPITECH PROJECT, 2023
** generator
** File description:
** generator
*/

#include <time.h>
#include <stdio.h>
#include "../solver/include/solver.h"

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

int **display_nb(int **arr, int column, int row)
{
    if (column == 8) {
        column = 0;
        return (display_nb(arr, column, row + 1));
    }
    for (int j = 0; j < 9; j++) {
        if (is_safe(arr, row, column, j) == 1) {
            arr[row][column] = j;
            if (display_nb(arr, column++, row));
            return(1);
        } else {
            arr[column][j] = 0;
        }
    }
    return (0);
}

static void display_map(void)
{
    int **arr = malloc(sizeof(int *) * 9);
    int column = 0, row = 0;
    for (int i = 0; i < 9; i++) {
        arr[i] = malloc(sizeof(int) * 9);
        for (int j = 0; j < 9; j++) {
            arr[i][j] = 0;
        }
    }

    printf("|------------------|\n");
    display_nb(arr, column, row);
    printf("|------------------|\n");
}

int main(int ac, char **av)
{
    srand(time(NULL));
    display_map();
    return (0);
}
