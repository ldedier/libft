/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isseparator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldedier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:35:23 by ldedier           #+#    #+#             */
/*   Updated: 2017/11/06 18:35:25 by ldedier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isseparator(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v'
			|| c == '\f' || c == '\r');
}
