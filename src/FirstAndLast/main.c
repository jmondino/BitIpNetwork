#include "FNL.h"

int		main(int ac, char **av)
{
	int		ip[4];
	int		netmask[4];
	int		nm = 0;
	int		i = -1;
	char	*str;

	if (ac < 2 || ac > 3)
		ft_error(1);
	if (ac == 2)
	{
		ft_parse(av[1]);
		nm = ft_stockeach(av[1], ip);
		ft_convert(netmask, nm);
   		ft_findip(ip, netmask);
    }
	if (ac == 3)
	{
		ft_parse2(av[1]);
		ft_parse2(av[2]);
		ft_stockeach2(av[1], ip, 0);
		ft_stockeach2(av[2], netmask, 2);
		ft_findip(ip, netmask);
	}
	return (0);
}
