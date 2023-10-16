/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:27:57 by diegmore          #+#    #+#             */
/*   Updated: 2023/10/16 11:27:59 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/libft.h"
#include <stdarg.h>

int ft_printf(const char *format, ...)
{
    va_list list;

    va_start(list,format);
    int i;
    i = 0;
    while(format[i])
    {
        if(format[i] == '%' && ft_strrchr("cspdiuxX%",format[i + 1]))
        {
           ft_checkandreturn(format, i, list);
           i++;
        }else{
            ft_putchar_fd(format[i],1);
        }
        i++;
    }
    va_end(list);
    return 0;
}

/*
int main()
{
    ft_printf("ola mundo");

}*/


