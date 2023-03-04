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

typedef struct arr_s {
    int **grid;
    char **arr;
    int row;
    int column;
} arr_t;

int check_error(int ac, char **av);
void fill_grid(int tab[N][N], char buffer[BUFFERSIZE]);
void take_number(arr_t *array, char **arr);
char **take_file(void);

#endif /* SOLVER_H */
