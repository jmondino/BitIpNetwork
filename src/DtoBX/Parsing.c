#include "converter.h"

void	ft_error(int i)
{
	if (i == 1)
		printf("Usage: ./dtobx [Decimal input]\n");
	if (i == 2)
		printf("input is not correct.\n");
	exit(1);
}

int		ft_parse(char *str)
{
	int		i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	i = 0;
	if (str[0] == '0')
	{
		while (str[i])
		{
			if (str[i] != '0')
			{
				str = str + i;
				return (1);
			}
			i++;
		}
		printf("0\n0\n");
		exit(1);
	}
	return (1);
}
