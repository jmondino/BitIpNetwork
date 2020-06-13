#include "IPv4.h"

char	*ft_convertbit(int d)
{
	int		i = 1;
	int		j = 0;
	char   	*str;

	str = (char *)malloc(sizeof(char) * 9999);
   	while (i <= d)
		i = 2 * i;
	while (i != 1)
	{
		i = i / 2;
		if (d - i >= 0)
		{
			d = d - i;
			str[j] = '1';
			j++;
		}
		else
		{
			str[j] = '0';
			j++;
		}
	}
	str[j] = '\0';
	return (str);
}

char	*ft_converthexa(int d)
{
	int			i = 0;
	int			j;
	int		  	k;
	char		*str;
	char		c;

	str = (char *)malloc(sizeof(char) * 9999);
	if (d == 0)
	{
		str[i] = '0';
		i++;
		str[i] = '\0';
		return (str);
	}
	while (d != 0)
	{
		j = 10;
		k = d % 16;
		if (k < 17 && k > 9)
		{
			c = 'a';
			while (j != k)
			{
				j++;
			   	c++;
			}
			str[i] = c;
			i++;
		}
		else
		{
			str[i] = k + 48;
			i++;
		}
		d = d / 16;
	}
  	str[i] = '\0';
	str = ft_strrev(str);
	return (str);
}

char    *ft_strrev(char *str)
{
	int     i;
    int     n;
    char    stock;

    n = 0;
    i = 0;
    while (str[i])
  		i++;
    i--;
    while (n < i)
    {
 	     stock = str[i];
         str[i] = str[n];
	     str[n] = stock;
         i--;
         n++;
	}
   	return (str);
}
