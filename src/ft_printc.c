/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diemorei <diemorei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:00:42 by diegmore          #+#    #+#             */
/*   Updated: 2023/10/18 20:34:23 by diemorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printc(const char *format, int i, int length, va_list list)
{
	unsigned long long int pointer;
	
	if (format[i + 1] == 's')
		return ((length += ft_putstr((char *)va_arg(list, char *))));
	else if (format[i + 1] == 'c')
		return ((length += ft_putchar(va_arg(list, int))));
	else if (format[i + 1] == 'i' || format[i + 1] == 'd')
		return ((length += ft_putnbr(va_arg(list, int))));
	 else if (format[i + 1] == 'p')	
	 {
			pointer = va_arg(list, unsigned long long int);
		if(pointer)
			return(length += ft_hexdec(pointer,"0123456789abcdef"));
		return(ft_putstr("(nil)"));
	}
	else if (format[i + 1] == 'x')
		return ((length += ft_hexdec(va_arg(list, unsigned int), "0123456789abcdef")));
	else if (format[i + 1] == 'X')
		return ((length += ft_hexdec(va_arg(list, unsigned int), "0123456789ABCDEF")));
	else if(format[i + 1] == '%' )
		return((length += ft_putchar('%')));
	return (length);
}