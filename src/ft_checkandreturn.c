/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkandreturn.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diemorei <diemorei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:00:42 by diegmore          #+#    #+#             */
/*   Updated: 2023/10/16 22:36:51 by diemorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/ft_printf.h"

int ft_checkandreturn(const char *format, int i,int length ,va_list list)
{
    if(format[i + 1] == 's')
        length += ft_putstr_fd((char *)va_arg(list, char *),1);
    if(format[i + 1] == 'c')
      length += ft_putchar_fd(va_arg(list, int),1);
    if(format[i + 1] == 'i' || format[i + 1] == 'd')
       length += ft_putnbr_fd(va_arg(list,int),1);

    return(length);
}