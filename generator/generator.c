/*
** EPITECH PROJECT, 2023
** generator
** File description:
** generator
*/

#include "../include/my.h"

static void display_nb(void)
{
    int *arr =  malloc(sizeof(int *) * 9);

    for (int i = 0; i < rand() % 4; i++) {
            arr[i] = rand() % (9 - 1) + 1;
    }


    for (int i = 0; i < 9; i++) {
        printf((arr[i] != 0) ? "%d" : " ", arr[i]);
        printf(" ");
    }
}

static void display_map(void)
{
    printf("|------------------|\n");
    for (int i = 0; i < 9; i++) {
        printf("|");
        display_nb();
        printf("|\n");
    }
    printf("|------------------|\n");
}

int main(int ac, char **av)
{
    srand(time(NULL));
    display_map();
    return (0);
}
