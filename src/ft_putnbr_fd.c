/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diemorei <diemorei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:56:00 by diegmore          #+#    #+#             */
/*   Updated: 2023/10/16 22:27:55 by diemorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"


static int	ft_isnegative(int n, int fd)
{
	if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
	}
	return (n);
}

static int	ft_countwordls(int n)
{
	int	wordls;

	wordls = 0;
	if(n < 0)
	{
		wordls++;
		n *= -1; 
	}
	if (n == 0)
		wordls++;
	while (n != 0)
	{
		n = n / 10;
		wordls++;
	}
	return (wordls);
}

int		ft_putnbr_fd(int n, int fd)
{
	int	i;
	int worlds;
	worlds = 0;
	i = 0;
	worlds = ft_countwordls(n);
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return(11) ;
	}
	n = ft_isnegative(n, fd);
	if (n > 9)
	{
		i = i + (n % 10);
		ft_putnbr_fd(n / 10, fd);
		i = i + '0';
		write(fd, &i, 1);
		return(worlds);
	}
	else
	{
		n += '0';
		write(fd, &n, 1);
	}
	return(worlds);
}
