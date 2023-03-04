/*
** EPITECH PROJECT, 2023
** header
** File description:
** header
*/

#ifndef SOLVER_H
    #define SOLVER_H

    #define EXIT_SUCCESS 0
    #define EXIT_ERROR 84
    #define BUFFERSIZE 20
    #define N 9

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

typedef struct arr_s {
    int **grid;
    char **arr;
    int row;
    int column;
} arr_t;

char **take_file(void);
void take_number(arr_t *array, char **arr);

int check_error(int ac, char **av);
int solve(int **grid, int row, int col);
int is_safe(int **grid, int row, int col, int num);
void display_grid(int **grid);

#endif /* SOLVER_H */
