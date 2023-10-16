/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkandreturn.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:00:42 by diegmore          #+#    #+#             */
/*   Updated: 2023/10/16 13:00:43 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/ft_printf.h"
#include "../includes/libft.h"

void ft_checkandreturn(const char *format, int i, va_list list)
{
   
    if(format[i + 1] == 's')
        ft_putstr_fd((char *)va_arg(list, char *),1);
    if(format[i + 1] == 'c')
      ft_putchar_fd(va_arg(list, int),1);
    if(format[i + 1] == 'i' || format[i + 1] == 'd')
        ft_putnbr_fd(va_arg(list,int),1);

}