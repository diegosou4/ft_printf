
#include "ft_printf.h"

static int	ft_countwordls(unsigned int n)
{
	int	wordls;

	wordls = 0;
	if (n == 0)
		wordls++;
	while (n != 0)
	{
		n = n / 10;
		wordls++;
	}
	return (wordls);
}

int	ft_putunbr(unsigned int n)
{
	int	i;
	int	worlds;

	worlds = 0;
	i = 0;
	worlds = ft_countwordls(n);
	if (n > 9)
	{
		i = i + (n % 10);
		ft_putnbr(n / 10);
		i = i + '0';
		write(1, &i, 1);
		return (worlds);
	}
	else
	{
		n += '0';
		write(1, &n, 1);
	}
	return (worlds);
}