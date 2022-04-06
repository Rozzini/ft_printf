/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:12:13 by mraspors          #+#    #+#             */
/*   Updated: 2022/02/08 20:54:36 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_print_uint(unsigned int nbr);
int	ft_print_string(char *str);
int	ft_print_pointer(unsigned long ptr);
int	ft_print_number(int nbr);
int	ft_print_hex(unsigned int num, char c);
int	ft_print_char(char c);

#endif