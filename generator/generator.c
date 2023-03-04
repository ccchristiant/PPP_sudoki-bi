/*
** EPITECH PROJECT, 2023
** generator
** File description:
** generator
*/

#include "../include/my.h"

void create_wall(generator_t *generator)
{
    generator->arr[0][0] = '*';
    generator->arr[generator->y - 1][generator->x - 1] = '*';
    for (int i = 0; i < generator->y; i++) {
        for (int j = 0; j < generator->x; j++) {
            generator->arr[i][rand() % generator->x] = '*';
        }
        generator->arr[i][rand() % generator->x] = '*';
    }
    for (int i = 0; i < generator->y; i++) {
        write(1, generator->arr[i], my_strlen(generator->arr[i]));
        write(1, "\n", 1);
    }
}

void create_dot(generator_t *generator)
{
    generator->arr = malloc(sizeof(char *) * generator->y + 1);
    for (int i = 0; i < generator->y; i++) {
        generator->arr[i] = malloc(sizeof(char) * generator->x + 1);
    }
    for (int i = 0; i < generator->y; i++) {
        for (int j = 0; j < generator->x; j++) {
            generator->arr[i][j] = 'X';
        }
        generator->arr[i][generator->x] = '\0';
    }
    generator->arr[generator->y] = NULL;
}

int main(int ac, char **av)
{
    generator_t *generator = malloc(sizeof(generator_t));
    set_value_generator(generator, av);
    if (check_error_generator(ac, av) == 84) {
        return (84);
    }
    srand(time(0));
    create_dot(generator);
    create_wall(generator);
    free(generator);
    return (0);
}
