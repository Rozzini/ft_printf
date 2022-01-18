/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 00:11:26 by mraspors          #+#    #+#             */
/*   Updated: 2022/01/13 00:11:26 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
//#include <unistd.h>
/*
    c - character               'a'
    s - string                  "example"
    p - pointer adress          b8000000000000
    d or i - dec int            382
    u - unsigned dec int        3456
    x - unsigned hexdec int     7fa
    X - same as x but upcase    7FA
    % - A % followed by another % character will write a single % to the stream.????????
*/
int ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int ft_print_string()
{

}

int ft_print_pointer()
{

}

int ft_print_number()
{

}

int ft_print_uint()
{

}

int ft_print_hex()
{

}

int ft_type(va_list args, char c)
{
    int total_length;

    total_length = 0;
    if (c == 'c')
        total_length += ft_print_char(va_arg(args, int));
    else if (c == 's')
        total_length += ft_print_string();
    else if (c == 'p')
        total_length += ft_print_pointer();
    else if (c == 'd' || c == 'i')
        total_length += ft_print_number();
    else if (c == 'u')
        total_length += ft_print_uint();
    else if (c == 'x' || c == 'X')
        total_length += ft_print_hex();
    else
        total_length += ft_print_char('%');
    return (total_length);
}

int ft_printf(const char *str, ...)
{
    int i;
    int total_lenght;
    va_list args;

    i = 0;
    total_lenght = 0;
    va_start(args, str);
    while (str[i] != '\0')
    {
        if (str[i] == '%')
        {
            total_lenght += ft_type(args, str[i + 1]);
            i++;
        }
        else
            total_lenght += ft_printchar(str[i]);
        i++;
    }
    va_end(args);
    return (total_lenght);
}