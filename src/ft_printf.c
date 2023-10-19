/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diemorei <diemorei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:27:57 by diegmore          #+#    #+#             */
/*   Updated: 2023/10/19 10:45:31 by diemorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdarg.h>

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		length;
	int		i;

	va_start(list, format);
	i = 0;
	length = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && ft_strrchr("cspdiuxX%", format[i + 1]))
		{
			length = ft_printc(format, i, length, list);
			i++;
		}
		else
		{
			length += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(list);
	return (length);
}

