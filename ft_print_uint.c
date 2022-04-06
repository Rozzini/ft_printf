/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:09:04 by mraspors          #+#    #+#             */
/*   Updated: 2022/02/08 19:02:29 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_uint(unsigned int nbr)
{
	char	c;
	int		length;

	length = 0;
	if (nbr == 4294967295)
	{
		write(1, "4294967295", 10);
		return (10);
	}
	if (nbr >= 10)
		length += ft_print_uint(nbr / 10);
	c = (nbr % 10) + '0';
	length += ft_print_char(c);
	return (length);
}
