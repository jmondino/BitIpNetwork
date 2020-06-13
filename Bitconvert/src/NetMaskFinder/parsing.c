#include "finder.h"

void	ft_error(int i)
{
	if (i == 1)
		printf("usage: ./nmfinder [Decimal value]\n");
	if (i == 2)
		printf("Wrong input.\n");
	exit(1);
}

void	ft_parsing(char *str, int tab[], int j)
{
	int		i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			ft_error(2);
		i++;
	}
	if (((tab[j] = ft_atoi(str)) == -1))
		ft_error(2);
}

int		ft_atoi(const char *str)
{
	long	nega;
	long	nb;

	nega = 1;
	nb = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' ||
			*str == '\r' || *str == '\f' || *str == '\v')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			nega = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + *str - '0';
		str++;
		if (nb > 2147483648 || nb == 0)
			return (-1);
	}
	return ((int)(nb * nega));
}
