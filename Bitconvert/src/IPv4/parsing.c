#include "IPv4.h"

void    ft_error(int i)
{
   	 if (i == 1)
 		printf("Usage: ./ipv4tob [IPv4]\n");
   	if (i == 2)
		printf("IPv4 not correct.\n");
	exit(1);
}

void   	ft_parse(char *str)
{
	int		i = 0;
	int		j = 0;
	int		k = 0;
	int		l = 0;

	if (str[0] < '0' || str[0] > '9')
			ft_error(2);
	l = ft_countword(str);
  	if (l != 4)
		ft_error(2);
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != '.')
			ft_error(2);
		if (str[i] >= '0' && str[i] <= '9')
			j++;
		if (str[i] == '.')
		{
			j = 0;
			k++;
		}
		if (j > 3)
			ft_error(2);
		i++;
	}
	if (k != 3)
		ft_error(2);
}

int		ft_countword(char *str)
{
	int		i;
	int		j;
	int		bool;

	bool = 0;
	i = 0;
	j = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] == '.')
		{
			i++;
			bool = 0;
		}
		else
		{
			if (bool == 0)
				j++;
			bool = 1;
			i++;
		}
	}
	return (j);
}

void	ft_stockeach(char *str, int each[4])
{
	int			i = 0;
	int			j = 0;

	while (str[i])
	{
		if (str[i] != '.')
			i++;
		if (str[i] == '.')
		{
	   		if ((each[j] = atoi(str)) > 255)
				ft_error(2);
			j++;
			i++;
	   		str = str + i;
			i = 0;
		}
	}
	if ((each[3] = atoi(str)) > 255)
		ft_error(2);
}
