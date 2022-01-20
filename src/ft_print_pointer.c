/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:08:43 by mraspors          #+#    #+#             */
/*   Updated: 2022/01/19 21:08:43 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_pointer_helper(uintptr_t num)
{
    int length;
    int reminder;
    char    symbol;

    reminder = 0;
    length = 0;
    reminder=n%16;
    if(rem<10)
        symbol = reminder + '0';
    else
        symbol = reminder - 10 + 'a';
    if (num >= 16)
        length += ft_print_hex(num / 16, c);
    length += ft_print_char(&symbol);
    return (length);
}

int ft_print_pointer(unsigned long ptr)
{
    int length;

    write(1, "0x", 2);
    length = 2;
    if (ptr == 0)
        length += ft_print_char('0');
    else
        length += ft_pointer_helper(ptr);
    return (length);
}