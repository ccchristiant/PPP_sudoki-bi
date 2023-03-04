/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/

#ifndef _MY_H_
    #define _MY_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <sys/stat.h>
    #include <sys/wait.h>
    #include <signal.h>
    #include <time.h>
    #include "struct.h"

void my_putchar(char c);
void my_putstr(char const *str);
int my_put_nbr(int nb);
int my_strlen(char *str);
int my_getnbr(char const *str);
int my_strcmp(char const *s1, char const *s2);
char *my_strcat(char *dest, char *src);
void set_value_generator(generator_t *generator, char **av);
void set_value_solver(generator_t *generator);
int check_error_generator(int ac, char **av);
int check_error_solver(int ac, char **av);

#endif
