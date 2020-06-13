#ifndef FNL_H
# define FNL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void	ft_error(int i);
int		ft_stockeach(char *str, int tab[]);
void	ft_stockeach2(char *str, int tab[], int k);
void	ft_convert(int tab2[], int nm);
void	ft_bittodeci(char *str, int tab2[]);
void   	ft_parse(char *str);
void	ft_parse2(char *str);
void	ft_findip(int ip[], int netmask[]);
void	ft_print(int tab[], int j);
void	ft_checknm(int tab[]);

#endif
