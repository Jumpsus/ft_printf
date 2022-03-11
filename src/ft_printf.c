/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pratanac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 01:41:58 by pratanac          #+#    #+#             */
/*   Updated: 2022/03/11 10:32:29 by pratanac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	print(int type, va_list val)
{
	if (type == 'i' || type == 'd')
		return (print_num(va_arg(val, int)));
	if (type == 'p')
		return (print_ptr(va_arg(val, unsigned long long)));
	if (type == 'x' || type == 'X' || type == 'u')
		return (print_unsign(type, va_arg(val, unsigned int)));
	if (type == 's')
		return (print_str(va_arg(val, char *)));
	if (type == 'c')
		return (print_char(va_arg(val, int)));
	if (type == '%')
		return (print_per());
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int			word_len;
	int			index;
	va_list		val;

	index = 0;
	word_len = 0;
	va_start(val, str);
	while (str[index])
	{
		if (str[index] == '%')
		{
			index++;
			word_len += print(str[index++], val);
			continue ;
		}
		write(1, &(str[index++]), 1);
		word_len++;
	}
	va_end(val);
	return (word_len);
}
