/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegmore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:46:47 by diegmore          #+#    #+#             */
/*   Updated: 2023/10/05 12:47:18 by diegmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>


char	*ft_strrchr(const char *str, int c);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
int	ft_atoi(const char *str);
void	ft_putnbr_fd(int n, int fd);

#endif
