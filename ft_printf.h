/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 13:07:34 by mboualam          #+#    #+#             */
/*   Updated: 2021/12/11 13:16:42 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int		g_count;
void	ft_putchar(char c);
int		ft_printf(const char *format, ...);
void	ft_putstr(char *str);
void	ft_putnbr(long long nb);
int		ft_strlen(const char *str);
void	ft_putnbr_base(unsigned long nbr, char *base);

#endif
