/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:08:33 by mraspors          #+#    #+#             */
/*   Updated: 2022/02/08 19:04:53 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *str)
{
	int	i;
	int	length;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	length = 0;
	while (str[i] != '\0')
	{
		length += ft_print_char(str[i]);
		i++;
	}
	return (length);
}
