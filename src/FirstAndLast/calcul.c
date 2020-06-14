#include "FNL.h"

void	ft_convert(int tab2[], int nm)
{
	int		i = 0;
	char	*str;

	str = (char *)malloc(sizeof(char) * 36);
	while (nm != 0)
   	{
   		if (i == 8 || i == 17 || i == 26)
   		{
   			str[i] = '.';
   			i++;
   		}
   		str[i] = '1';
   		i++;
   		nm--;
   	}
	while (i != 35)
	{
		
		if (i == 8 || i == 17 || i == 26)
	   	{
	   		str[i] = '.';
	   		i++;
	   	}
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
	ft_bittodeci(str, tab2);
}

void	ft_bittodeci(char *str, int tab2[])
{
	int		i = 0;
   	int		j = 0;
	int		k = 0;
	int		l = 0;
	int		count = 7;
	int		tab[32];

	while (str[i])
	{
		if (str[i] == '.')
			count = 7;
		if (str[i] == '1')
		{
			tab[j] = count;
			j++;
			count--;
		}
		if (str[i] == '0')
			break;
		i++;
	}
	tab[j] = 0;
	i = 0;
	while (i < j)
	{
		while (tab[i])
		{
			tab2[k] = tab2[k] + pow(2, tab[i]);
			i++;
		}
		l = i;
		if (tab2[k] == 254)
		{
			while (str[l] != '.' && str[l])
				l++;
			if (str[l-1] == '1')
				tab2[k]++;
		}
		k++;
		i++;
	}
	free(str);
}

void	ft_findip(int ip[], int netmask[])
{
	int		i = 0;
	int		j = 0;
	int		k = 0;
	int		l = 1;
	int		m = 0;

	while (m != 4)
	{
		if (netmask[m] == 255)
			m++;
		else
			break;
	}
	i = m;
	j = 256 - netmask[i];
   	k = j;
	while ((k = j * l) <= ip[i])
		l++;
	k = k - j;
	ip[i] = k;
	i++;
	while (i != 4)
	{
		ip[i] = 0;
		i++;
	}
	ft_print(ip, 1);
	i = m;
	k += j - 1;
	if (k == 256)
		k--;
	ip[i] = k;
	i++;
	while (i != 4)
	{
		ip[i] = 255;
		i++;
	}
	ft_print(ip, 2);
}
