#include "finder.h"

int		main(int ac, char **av)
{
	int		i = 0;
	int		tab[ac];

	if (ac == 1)
		ft_error(1);
	while (av[++i])
		ft_parsing(av[i], tab, (i - 1));
	tab[i - 1] = '\0';
	i = 0;
   	while (tab[i])
	{
		findnetmask(tab, i);
		i++;
	}
	return (0);
}
