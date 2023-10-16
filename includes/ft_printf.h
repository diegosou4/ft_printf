/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diemorei <diemorei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:22:06 by diegmore          #+#    #+#             */
/*   Updated: 2023/10/16 22:02:09 by diemorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int ft_printf(const char *format,...);
int ft_checkandreturn(const char *format, int i,int length ,va_list list);
char	*ft_strrchr(const char *str, int c);
int	ft_putstr_fd(char *s, int fd);
int	ft_putchar_fd(char c, int fd);
int	ft_atoi(const char *str);
void	ft_putnbr_fd(int n, int fd);
int ft_strlen(char *str);


#endif
