#ifndef CONVERTER_H
# define CONVERTER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_error(int i);
int		ft_parse(char *str);
char	*ft_convertbit(long long d);
char	*ft_converthexa(long long d);
char	*ft_strrev(char *str);

#endif
