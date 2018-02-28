/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldedier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 21:04:24 by ldedier           #+#    #+#             */
/*   Updated: 2018/02/27 20:54:39 by ldedier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_no_number(t_pf *pf)
{
	pf->parse_padding = 0;
	pf->parse_precision = 0;
}

intmax_t	ft_abs(intmax_t a)
{
	if (a > 0)
		return (a);
	else
		return (-a);
}

int			ft_max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int			ft_min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

double		ft_fabs(double a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}
