/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldedier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:54:29 by ldedier           #+#    #+#             */
/*   Updated: 2018/02/06 21:07:48 by ldedier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n)
{
	unsigned int nb;

	if (n < 0)
	{
		nb = -n;
		ft_putchar_buff('-');
	}
	else
		nb = n;
	if ((nb / 10) == 0)
		ft_putchar_buff(nb % 10 + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar_buff(nb % 10 + '0');
	}
}
