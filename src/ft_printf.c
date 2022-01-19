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

int ft_print_char(int c)
{
	write(1, &c, 1);
    return (1);
}

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

int ft_put_pointer()
int ft_print_pointer(unsigned long ptr)
{
    int length;

    write(1, "0x", 2);
    length = 2;
}

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

int ft_print_hex(unsigned int num, char c)
{
    int length;
    int reminder;
    char    symbol;

    reminder = 0;
    length = 0;
    if(num!=0)
    {
        reminder=n%16;
      
        if(rem<10)
            symbol = reminder + '0';
        else
        {
            if (c == 'x')
                symbol = reminder - 10 + 'a';
            if (c == 'X')
                symbol = reminder - 10 + 'A';
        }
        if (num >= 16)
            length += ft_print_hex(num / 16, c);
        length += ft_print_char(&symbol);
    }
    else
        return (ft_print_char('0'));
    return (length);
}

int ft_type(va_list args, char c)
{
    int length;

    length = 0;
    if (c == 'c')
        length = ft_print_char(va_arg(args, int));
    else if (c == 's')
        length = ft_print_string(va_arg(args, char *));
    else if (c == 'p')
        length = ft_print_pointer(va_arg(args, unsigned long));
    else if (c == 'd' || c == 'i')
        length = ft_print_number(va_arg(args, int));
    else if (c == 'u')
        length = ft_print_uint(va_arg(args, unsigned int));
    else if (c == 'x' || c == 'X')
        length = ft_print_hex(va_arg(args, unsigned int), c);
    else
    {
        ft_print_char('%');
        length = 1;
    }
    return (length);
}

int ft_printf(const char *str, ...)
{
    int i;
    int lenght;
    va_list args;

    i = 0;
    lenght = 0;
    va_start(args, str);
    while (str[i] != '\0')
    {
        if (str[i] == '%')
        {
            lenght += ft_type(args, str[i + 1]);
            i++;
        }
        else
        {
            ft_print_char(str[i]);
            lenght++;
            i++;
        }
    }
    va_end(args);
    return (lenght);
}