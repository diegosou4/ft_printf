/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diemorei <diemorei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:56:00 by diegmore          #+#    #+#             */
/*   Updated: 2023/10/16 21:37:01 by diemorei         ###   ########.fr       */
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

void	ft_putnbr_fd(int n, int fd)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	n = ft_isnegative(n, fd);
	if (n > 9)
	{
		i = i + (n % 10);
		ft_putnbr_fd(n / 10, fd);
		i = i + '0';
		write(fd, &i, 1);
		return ;
	}
	else
	{
		n += '0';
		write(fd, &n, 1);
	}
}
