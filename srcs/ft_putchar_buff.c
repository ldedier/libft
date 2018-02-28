/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_buff.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldedier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 21:20:43 by ldedier           #+#    #+#             */
/*   Updated: 2018/02/27 21:20:45 by ldedier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_buff(char c)
{
	int		display;
	char	*str;

	display = 0;
	str = &c;
	ft_get_buffer(str, 1, &display);
}
