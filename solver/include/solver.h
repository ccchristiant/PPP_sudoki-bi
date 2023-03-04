#ifndef SOLVER_H
#define SOLVER_H

#define EXIT_SUCCESS 0
#define EXIT_ERROR 84
#define BUFFERSIZE 20
#define N 9

int check_error(int ac, char **av);
void fill_grid(int tab[N][N], char buffer[BUFFERSIZE]);

#endif /* SOLVER_H */
