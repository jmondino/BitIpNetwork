#ifndef IPv4_H
# define IPv4_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_error(int i);
void   	ft_parse(char *str);
int   	ft_countword(char *str);
void	ft_stockeach(char *str, int each[4]);
char	*ft_convertbit(int d);
char	*ft_converthexa(int d);
char	*ft_strrev(char *str);
void	printbinary(int each[4]);
void	printhexa(int each[4]);
void	printzero(int j, int i);

#endif
