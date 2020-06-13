#include "converter.h"

int		main(int ac, char **av)
{
	long long	d;
	char		*str[2];

	if (ac != 2)
		ft_error(1);
	if (!(ft_parse(av[1])))
		ft_error(2);
	d = atoll(av[1]);
	str[0] = ft_convertbit(d);
	printf("Binary => %s\n", str[0]);
	free(str[0]);
	str[1] = ft_converthexa(d);
	printf("Hexa   => %s\n", str[1]);
	free(str[1]);
	return (0);
}
