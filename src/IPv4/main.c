#include "IPv4.h"

int		main(int ac, char **av)
{
	int		each[4];

	if (ac != 2)
		ft_error(1);
	ft_parse(av[1]);
	ft_stockeach(av[1], each);
   	printbinary(each);
	printhexa(each);
	return (0);
}
