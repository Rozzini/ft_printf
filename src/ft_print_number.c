/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:08:55 by mraspors          #+#    #+#             */
/*   Updated: 2022/01/19 21:08:55 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_print_number(int nbr)
{
    char    c;
    int     length;

    length = 0;
    if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
    if (n < 0)
    {
        length += ft_print_char('-');
        n *= -1;
    }
    if (n >= 10)
    {
		length += ft_print_number(n / 10, fd);
	c = n % 10 + '0';
	length += ft_print_char(&c);
    return (length);
}