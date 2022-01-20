/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:08:33 by mraspors          #+#    #+#             */
/*   Updated: 2022/01/19 21:08:33 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_print_string(char * str)
{
    int i;
    int length;

    i = 0;
    lenght = 0;
    while (str[i] != '\0')
    {
        length += ft_print_char(&str[i]);
        i++;
    }
    return (length);
}