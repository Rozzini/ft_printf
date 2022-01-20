/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:09:04 by mraspors          #+#    #+#             */
/*   Updated: 2022/01/19 21:09:04 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_print_uint(unsigned int nbr)
{
    char    c;
    int     length;

    length = 0;
    if (n == 4294967295)
	{
		write(1, "4294967295", 10);
		return (10);
	}
    if (n >= 10)
    {
		length += ft_print_uint(n / 10, fd);
	c = n % 10 + '0';
	length += ft_print_char(&c);
    return (length);
}