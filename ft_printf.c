/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 13:03:29 by mboualam          #+#    #+#             */
/*   Updated: 2021/12/11 13:10:52 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_print(const char format, va_list list)
{
	if (format == 'c')
		ft_putchar(va_arg(list, int));
	else if (format == 's')
		ft_putstr(va_arg(list, char *));
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(list, int));
	else if (format == 'u')
		ft_putnbr(va_arg(list, unsigned int));
	else if (format == 'x')
		ft_putnbr_base(va_arg(list, unsigned int), "0123456789abcdef");
	else if (format == 'X')
		ft_putnbr_base(va_arg(list, unsigned int), "0123456789ABCDEF");
	else if (format == 'p')
	{
		ft_putstr("0x");
		ft_putnbr_base(va_arg(list, unsigned long), "0123456789abcdef");
	}
	else
		ft_putchar('%');
}

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		i;

	g_count = 0;
	i = 0;
	va_start(list, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			ft_print(format[i], list);
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(list);
	return (g_count);
}
