/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:06:52 by mraspors          #+#    #+#             */
/*   Updated: 2022/01/19 21:06:52 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_print_char(int c)
{
	write(1, &c, 1);
    return (1);
}