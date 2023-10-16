/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diemorei <diemorei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:27:57 by diegmore          #+#    #+#             */
/*   Updated: 2023/10/16 22:04:26 by diemorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

#include <stdarg.h>

int ft_printf(const char *format, ...)
{
    va_list list;
    int length;
    va_start(list,format);
    int i;
    i = 0;
    length = 0;
    while(format[i])
    {
        if(format[i] == '%' && ft_strrchr("cspdiuxX%",format[i + 1]))
        {
           length = ft_checkandreturn(format, i,length, list);
           i++;
        }else{
            length += ft_putchar_fd(format[i],1);
        }
        i++;
    }
    va_end(list);
    return (length);
}

/*
int main()
{
    ft_printf("ola mundo");

}*/


