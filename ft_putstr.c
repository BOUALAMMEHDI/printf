/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 13:18:37 by mboualam          #+#    #+#             */
/*   Updated: 2021/12/11 13:19:44 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putstr(char *str)
{
	int	indice;

	indice = 0;
	if (!str)
	{
		ft_putstr("(null)");
		return ;
	}
	while (str[indice])
	{
		ft_putchar(str[indice]);
		indice++;
	}
}
