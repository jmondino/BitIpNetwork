#ifndef FINDER_H
# define FINDER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void	ft_error(int i);
void	ft_parsing(char *str, int tab[], int j);
int		ft_atoi(const char *str);
void	findnetmask(int tab[], int i);
void	convertindeci(char *str);

#endif
