#include "FNL.h"

void	ft_error(int i)
{
	if (i == 1)
		printf("usage: ./fnlip\t[IPv4/Netmask]\n\t\t[IPv4] [NetMask]\n");
	if (i == 2)
		printf("wrong input\n");
	if (i == 3)
		printf("min : 0.0.0.0\nMax : 255.255.255.255\n");		
	exit(1);
}

void	ft_print(int tab[], int j)
{
	int		i = 0;

	if (j == 1)
		printf("Min : ");
	if (j == 2)
		printf("Max : ");
	while (i != 3)
	{
		printf("%d.", tab[i]);
		i++;
	}
	printf("%d\n", tab[i]);
}

void   	ft_parse(char *str)
{
	int		i = 0;
	int		j = 0;
	int		k = 0;
	int		l = 0;

	if (str[0] < '0' || str[0] > '9')
		ft_error(2);
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != '.' && str[i] != '/')
			ft_error(2);
		if (str[i] >= '0' && str[i] <= '9')
			j++;
		if (str[i] == '.')
		{
			j = 0;
			k++;
		}
		if (str[i] == '/')
		{
			if (!(str[i+1]))
				ft_error(2);
			j = 0;
			l++;
		}
		if (j > 3)
			ft_error(2);
		i++;
	}
	if (k != 3 || l != 1)
		ft_error(2);
}

void   	ft_parse2(char *str)
{
    int     i = 0;
    int     j = 0;
    int     k = 0;

    if (str[0] < '0' || str[0] > '9')
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

void	ft_stockeach2(char *str, int tab[], int k)
{
    int     i = 0;
    int     j = 0;

    while (str[i])
    {
        if (str[i] != '.')
            i++;
        if (str[i] == '.')
        {
            if ((tab[j] = atoi(str)) > 255)
				ft_error(2);
            j++;
            i++;
            str = str + i;
            i = 0;
        }
    }
	if ((tab[j] = atoi(str)) > 255)
		ft_error(2);
	if (k == 2)
		ft_checknm(tab);
}

void	ft_checknm(int tab[])
{
	int		i = 0;

	while (i != 3)
	{
		if (tab[i + 1] > tab[i])
			ft_error(2);
		i++;
	}
	i = 0;
	while (i != 4)
	{
		if(tab[i] == 0 || tab[i] == 128 || tab[i] == 192 || tab[i] == 224 || tab[i] == 240 || tab[i] == 248 || tab[i] == 252 || tab[i] == 254 || tab[i] == 255)
	   		i++;
		else
			ft_error(2);
	}
}

int		ft_stockeach(char *str, int tab[])
{
	int		i = 0;
	int		j = 0;
	int		nm = 0;
	char	*cp;

	cp = str;
	while (str[i])
	{
		if (str[i] != '.')
			i++;
		if (str[i] == '.' || str[i] == '/')
		{
	  		if ((tab[j] = atoi(str)) > 255)
				ft_error(2);
			j++;
			i++;
			str = str + i;
			i = 0;
		}
	}
	if ((nm = atoi(str)) > 32)
		ft_error(2);
	i = 0;
	while (cp[i] != '/')
		i++;
	cp[i] = '\0';
	if (nm == 0)
		ft_error(3);
	if (nm == 32)
	{
		printf("Min : %s\nMax : %s\n", cp, cp);
		exit(1);
	}
	return (nm);
}
