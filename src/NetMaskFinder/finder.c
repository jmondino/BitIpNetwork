#include "finder.h"

void	findnetmask(int tab[], int i)
{
	int		p 		= 1;
	int		count 	= 0;
	int		j       = 0;
	int		k		= 0;
	char	str[999];

	while (p < tab[i])
	{
		p = p * 2;
	   	count++;
	}
	if (count == 0)
		count++;
	if ((p - tab[i]) < 10)
		count++;
	count = 32 - count;
   	while (count != 0)
	{
		if (k == 8)
		{
			str[j] = '.';
		   	k = 0;
			count++;
		}
		else
		{
			str[j] = '1';
			k++;
		}
		j++;
		count--;
   	}
	while (j != 35)
	{
		if (k == 8)
		{ 
			str[j] = '.';
			k = 0;
		}
		else
		{
			str[j] = '0';
			k++;
		}
	   	j++;
   	}
	str[j] = '\0';
	convertindeci(str);
}

void	convertindeci(char *str)
{
	int		i = 0;
	int		j = 0;
	int		k = 0;
	int		l = 0;
   	int		count = 7;
	int		tab[32];
	int		d[4];

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
	tab[j] = '\0';
	memset(d, 0, 4*sizeof(4));
	i = 0;
    while (i < j)
	{
		while (tab[i])
		{
			d[k] = d[k] + pow(2,tab[i]);
			i++;
		}
		l = i;
		if (d[k] == 254)
		{
			while (str[l] != '.' && str[l])
				l++;
			if (str[l-1] == '1')
				d[k] = d[k] + 1;;
		}
		k++;
		i++;
   	}
	i = 0;
	while (i != 3)
	{
		if (d[i])
			printf("%d.", d[i]);
		else
			printf("0.");
		i++;
   	}
	j = 0;
	k = 0;
   	while (str[j])
	{
		if (str[j] == '1')
			k++;
		j++;
	}
   	if (d[i])
	   	printf("%d || /%d\n", d[i], k);
   	else
	   	printf("0 || /%d\n", k);
	printf("%s\n", str);
}
