/*
** EPITECH PROJECT, 2023
** PPP_sudoki-bi
** File description:
** fill_grid
*/

#include <stdio.h>
#include <stdlib.h>
#include "solver.h"

static void check(arr_t *arr, int i, int j)
{
    if (arr->arr[i][j] == ' ') {
        if (arr->column == 9) {
                arr->row++;
                arr->column = 0;
            }
        arr->grid[arr->row][arr->column] = 0;
        arr->column++;
    }
    if (arr->arr[i][j] >= '0' && arr->arr[i][j] <= '9') {
            if (arr->column == 9) {
                arr->row++;
                arr->column = 0;
            }
        arr->grid[arr->row][arr->column] = arr->arr[i][j] - 48;
        arr->column++;
    }
}
void **take_number(arr_t *array, char **arr)
{
    array->column = 0, array->row = 0;
    array->grid = malloc(sizeof(int *) * 9);
    for (int i = 0; i < 9; i++) {
        array->grid[i] = malloc(sizeof(int) * 9);
    }
    for (int i = 1; arr[i] != NULL; i++) {
        for (int j = 2; arr[i][j] != '\0'; j += 2) {
            check(array, i, j);
        }
    }
}

char **take_file(void)
{
    int i = 0;
    char **arr = malloc(sizeof(char *) * 13);
    for (i = 0; i < 11; i++) {
        arr[i] = malloc(sizeof(char) * 24);
    }
    arr[i] = NULL;
    i = 0;
    size_t size = 0;
    char *line = NULL;
    while (getline(&line, &size, stdin) != -1) {
        arr[i] = line;
        line = NULL;
        size = 0;
        i++;
    }
    return (arr);
}

void fill_grid(int tab[N][N], char buffer[BUFFERSIZE])
{

}
