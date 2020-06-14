#include "IPv4.h"

void	printbinary(int each[4])
{
	int		i = 0;
	int		j;

	while (i < 3)
	{
		if ((j = strlen(ft_convertbit(each[i]))) != 8)
			printzero(j, 1);
		printf("%s.", ft_convertbit(each[i]));
		i++;
	}
	if ((j = strlen(ft_convertbit(each[i]))) != 8)
   		printzero(j, 1);
	printf("%s\n", ft_convertbit(each[i]));
}

void	printhexa(int each[4])
{
	int		i = 0;
	int		j;

	while (i < 3)
	{
		if ((j = strlen(ft_converthexa(each[i]))) != 2)
			printzero(j, 2);
	   	printf("%s.", ft_converthexa(each[i]));
		i++;
	}
	if ((j = strlen(ft_converthexa(each[i]))) != 2)
			printzero(j, 2);
	printf("%s\n", ft_converthexa(each[i]));
}

void	printzero(int j, int i)
{
	if (i == 1)
	{
		while (j != 8)
   		{
   			printf("0");
   			j++;
   		}
	}
	if (i == 2)
	{
		while (j != 2)
   		{
   			printf("0");
   			j++;
   		}
	}
}
