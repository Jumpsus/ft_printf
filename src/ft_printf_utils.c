/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pratanac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:33:43 by pratanac          #+#    #+#             */
/*   Updated: 2022/03/10 18:28:18 by pratanac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	print_str(char *str)
{
	int	i;

	if (!str)
		return (print_str("(null)"));
	i = 0;
	while (str[i])
	{
		write(1, &(str[i++]), 1);
	}
	return (i);
}

int	print_per(void)
{
	char	c;

	c = '%';
	write(1, &c, 1);
	return (1);
}

int	print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	print_num(int num)
{
	char	*str;
	int		len;

	str = ft_itoa(num);
	len = print_str(str);
	free(str);
	return (len);
}

int	print_unsign(int type, unsigned int u)
{
	char	*str;
	int		len;

	if (type == 'u')
	{
		str = ft_utoa(u);
	}
	else
	{
		str = ft_htoa(u);
		if (type == 'X')
			ft_striteri(str, ft_to_upper_2);
	}
	len = print_str(str);
	free(str);
	return (len);
}
